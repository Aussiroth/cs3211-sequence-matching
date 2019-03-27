/*************************************************/
/* START of SW */
#include <SW.h>

#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/array/Array_2.h>
#include <x10/util/Pair.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 13 "SW.x10"

//#line 15 "SW.x10"

//#line 16 "SW.x10"

//#line 18 "SW.x10"

//#line 19 "SW.x10"

//#line 20 "SW.x10"

//#line 22 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 23 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 24 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__2188);
    
    //#line 25 "SW.x10"
    x10_long i__1936min__2133 = ((x10_long)0ll);
    x10_long i__1936max__2134 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__2135;
        for (i__2135 = i__1936min__2133; ((i__2135) <= (i__1936max__2134));
             i__2135 = ((i__2135) + (((x10_long)1ll)))) {
            x10_long i__2136 = i__2135;
            
            //#line 26 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__2136))),
                                         ((x10_char)' ')))) {
                
                //#line 27 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 28 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 29 "SW.x10"
                    currToken = (&::SW_Strings::sl__2188);
                }
                
            } else {
                
                //#line 33 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__2136))));
            }
            
        }
    }
    
    //#line 36 "SW.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 37 "SW.x10"
        tokens->add(currToken);
    }
    
    //#line 39 "SW.x10"
    return tokens;
    
}

//#line 42 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 45 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 46 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 48 "SW.x10"
    x10_long i__1954min__2138 = ((x10_long)0ll);
    x10_long i__1954max__2139 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__2140;
        for (i__2140 = i__1954min__2138; ((i__2140) <= (i__1954max__2139));
             i__2140 = ((i__2140) + (((x10_long)1ll)))) {
            x10_long i__2141 = i__2140;
            
            //#line 49 "SW.x10"
            x10_long score__2137 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__2141, col)) + (((gapExtension) * (((row) - (i__2141))))));
            
            //#line 51 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__2141, col)) <= (((x10_long)0ll))))
            {
                
                //#line 52 "SW.x10"
                score__2137 = ((score__2137) + (gapOpening));
            }
            
            //#line 55 "SW.x10"
            if (((score__2137) > (max))) {
                
                //#line 56 "SW.x10"
                max = score__2137;
                
                //#line 57 "SW.x10"
                gap = ((row) - (i__2141));
            }
            
        }
    }
    
    //#line 60 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 63 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 66 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 67 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 69 "SW.x10"
    x10_long i__1972min__2143 = ((x10_long)0ll);
    x10_long i__1972max__2144 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__2145;
        for (i__2145 = i__1972min__2143; ((i__2145) <= (i__1972max__2144));
             i__2145 = ((i__2145) + (((x10_long)1ll)))) {
            x10_long j__2146 = i__2145;
            
            //#line 71 "SW.x10"
            x10_long score__2142 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__2146)) + (((gapExtension) * (((col) - (j__2146))))));
            
            //#line 72 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__2146)) >= (((x10_long)0ll))))
            {
                
                //#line 73 "SW.x10"
                score__2142 = ((score__2142) + (gapOpening));
            }
            
            //#line 76 "SW.x10"
            if (((score__2142) > (max))) {
                
                //#line 77 "SW.x10"
                max = score__2142;
                
                //#line 78 "SW.x10"
                gap = ((j__2146) - (col));
            }
            
        }
    }
    
    //#line 81 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 84 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 86 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 87 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 88 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__2188);
    
    //#line 89 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__2188);
    
    //#line 90 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 91 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 92 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 93 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 94 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 95 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
        } else 
        //#line 96 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 97 "SW.x10"
            x10_long i__1990min__2147 = ((x10_long)0ll);
            x10_long i__1990max__2148 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2149;
                for (i__2149 = i__1990min__2147; ((i__2149) <= (i__1990max__2148));
                     i__2149 = ((i__2149) + (((x10_long)1ll))))
                {
                    x10_long k__2150 = i__2149;
                    
                    //#line 98 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 99 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__2150))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 101 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 103 "SW.x10"
            x10_long i__2008min__2151 = ((x10_long)0ll);
            x10_long i__2008max__2152 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2153;
                for (i__2153 = i__2008min__2151; ((i__2153) <= (i__2008max__2152));
                     i__2153 = ((i__2153) + (((x10_long)1ll))))
                {
                    x10_long k__2154 = i__2153;
                    
                    //#line 104 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 105 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__2154))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 107 "SW.x10"
            j = ((j) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 110 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 111 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 114 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 115 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 116 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 117 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 118 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 120 "SW.x10"
    x10_long i__2044min__2172 = ((x10_long)1ll);
    x10_long i__2044max__2173 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2174;
        for (i__2174 = i__2044min__2172; ((i__2174) <= (i__2044max__2173));
             i__2174 = ((i__2174) + (((x10_long)1ll)))) {
            x10_long i__2175 = i__2174;
            
            //#line 121 "SW.x10"
            x10_long i__2026min__2164 = ((x10_long)1ll);
            x10_long i__2026max__2165 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2166;
                for (i__2166 = i__2026min__2164; ((i__2166) <= (i__2026max__2165));
                     i__2166 = ((i__2166) + (((x10_long)1ll))))
                {
                    x10_long j__2167 = i__2166;
                    
                    //#line 122 "SW.x10"
                    x10_long max__2155 = (x10_long)0x8000000000000000LL;
                    
                    //#line 123 "SW.x10"
                    x10_long dir__2156 = ((x10_long)0ll);
                    
                    //#line 125 "SW.x10"
                    x10_long diagScore__2157;
                    
                    //#line 126 "SW.x10"
                    x10_char firstChar__2158 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__2175) - (((x10_long)1ll))))));
                    
                    //#line 127 "SW.x10"
                    x10_char secondChar__2159 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__2167) - (((x10_long)1ll))))));
                    
                    //#line 128 "SW.x10"
                    diagScore__2157 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__2175) - (((x10_long)1ll))),
                                          ((j__2167) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__2158).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__2159).v))))));
                    
                    //#line 129 "SW.x10"
                    if (((diagScore__2157) > (max__2155)))
                    {
                        
                        //#line 130 "SW.x10"
                        max__2155 = diagScore__2157;
                        
                        //#line 131 "SW.x10"
                        dir__2156 = ((x10_long)0ll);
                    }
                    
                    //#line 134 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2160 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2175, j__2167);
                    
                    //#line 135 "SW.x10"
                    x10_long upScore__2161 = upResult__2160->FMGL(first);
                    
                    //#line 136 "SW.x10"
                    if (((upScore__2161) > (max__2155))) {
                        
                        //#line 137 "SW.x10"
                        max__2155 = upScore__2161;
                        
                        //#line 138 "SW.x10"
                        dir__2156 = upResult__2160->FMGL(second);
                    }
                    
                    //#line 141 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2162 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2175, j__2167);
                    
                    //#line 142 "SW.x10"
                    x10_long leftScore__2163 = leftResult__2162->FMGL(first);
                    
                    //#line 143 "SW.x10"
                    if (((leftScore__2163) > (max__2155)))
                    {
                        
                        //#line 144 "SW.x10"
                        max__2155 = leftScore__2163;
                        
                        //#line 145 "SW.x10"
                        dir__2156 = leftResult__2162->FMGL(second);
                    }
                    
                    //#line 148 "SW.x10"
                    max__2155 = ((max__2155) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2155);
                    
                    //#line 150 "SW.x10"
                    if (((max__2155) > (globalMax))) {
                        
                        //#line 151 "SW.x10"
                        globalMax = max__2155;
                        
                        //#line 152 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2175,
                                                                                      j__2167);
                    }
                    
                    //#line 155 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2175, j__2167, max__2155);
                    
                    //#line 156 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2175, j__2167, dir__2156);
                }
            }
            
        }
    }
    
    //#line 160 "SW.x10"
    x10_long i__2080min__2176 = ((x10_long)0ll);
    x10_long i__2080max__2177 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2178;
        for (i__2178 = i__2080min__2176; ((i__2178) <= (i__2080max__2177));
             i__2178 = ((i__2178) + (((x10_long)1ll)))) {
            x10_long i__2179 = i__2178;
            
            //#line 161 "SW.x10"
            x10_long i__2062min__2168 = ((x10_long)0ll);
            x10_long i__2062max__2169 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2170;
                for (i__2170 = i__2062min__2168; ((i__2170) <= (i__2062max__2169));
                     i__2170 = ((i__2170) + (((x10_long)1ll))))
                {
                    x10_long j__2171 = i__2170;
                    
                    //#line 162 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__2179,
                                                    j__2171), (&::SW_Strings::sl__2189)));
                }
            }
            
            //#line 164 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 167 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 171 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 172 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 173 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 176 "SW.x10"
    ::x10::io::File* FILE = ::x10::io::File::_make((&::SW_Strings::sl__2190));
    
    //#line 177 "SW.x10"
    ::x10::io::FileReader* reader = ::x10::io::FileReader::_make(FILE);
    
    //#line 179 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 181 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 182 "SW.x10"
    while (((!::x10aux::struct_equals((line = reader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 184 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 185 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(headerLine));
    
    //#line 186 "SW.x10"
    x10_long i__2098min__2184 = ((x10_long)0ll);
    x10_long i__2098max__2185 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__2186;
        for (i__2186 = i__2098min__2184; ((i__2186) <= (i__2098max__2185));
             i__2186 = ((i__2186) + (((x10_long)1ll)))) {
            x10_long i__2187 = i__2186;
            
            //#line 187 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__2187))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 189 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(headerOrder));
    
    //#line 190 "SW.x10"
    while (true) {
        
        //#line 191 "SW.x10"
        try {
            
            //#line 192 "SW.x10"
            line = reader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc6)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc6);
                {
                    
                    //#line 195 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 197 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 198 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 199 "SW.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(currLine, (&::SW_Strings::sl__2191)), currChar)));
        
        //#line 200 "SW.x10"
        x10_long i__2116min__2180 = ((x10_long)1ll);
        x10_long i__2116max__2181 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__2182;
            for (i__2182 = i__2116min__2180; ((i__2182) <= (i__2116max__2181));
                 i__2182 = ((i__2182) + (((x10_long)1ll))))
            {
                x10_long i__2183 = i__2182;
                
                //#line 201 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__2183) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__2183)))));
                
                //#line 202 "SW.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(((x10_int) (currChar).v), (&::SW_Strings::sl__2189)), ((x10_int) (headerOrder->get(
                                                                                                                                                                                                                                           ((i__2183) - (((x10_long)1ll))))).v)), (&::SW_Strings::sl__2189)), currLine->get(
                                                                                                                                                                                                                                                                                                                i__2183))));
            }
        }
        
    }
    
    //#line 206 "SW.x10"
    x10_long gapOpening = ((x10_long)0ll);
    
    //#line 207 "SW.x10"
    x10_long gapExtension = ((x10_long)-2ll);
    
    //#line 208 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__2192);
    
    //#line 209 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__2193);
    
    //#line 210 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 211 "SW.x10"
    ::SW::match(string1, string2, blosum, gapOpening, gapExtension);
}

//#line 10 "SW.x10"
::SW* SW::SW____this__SW() {
    return this;
    
}
void SW::_constructor() {
    this->SW::__fieldInitializers_SW();
}
::SW* SW::_make() {
    ::SW* this_ = new (::x10aux::alloc_z< ::SW>()) ::SW();
    this_->_constructor();
    return this_;
}


void SW::__fieldInitializers_SW() {
 
}
const ::x10aux::serialization_id_t SW::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::SW::_deserializer);

void SW::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::SW::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::SW* this_ = new (::x10aux::alloc_z< ::SW>()) ::SW();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void SW::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType SW::rtt;
void SW::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("SW",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String SW_Strings::sl__2188("");
::x10::lang::String SW_Strings::sl__2189(" ");
::x10::lang::String SW_Strings::sl__2192("GGTTGACTA");
::x10::lang::String SW_Strings::sl__2191("****");
::x10::lang::String SW_Strings::sl__2193("TGTTACGG");
::x10::lang::String SW_Strings::sl__2190("BLOSUMDNA");

/* END of SW */
/*************************************************/
