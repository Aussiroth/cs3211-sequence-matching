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
    ::x10::lang::String* currToken = (&::SW_Strings::sl__2196);
    
    //#line 25 "SW.x10"
    x10_long i__1944min__2141 = ((x10_long)0ll);
    x10_long i__1944max__2142 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__2143;
        for (i__2143 = i__1944min__2141; ((i__2143) <= (i__1944max__2142));
             i__2143 = ((i__2143) + (((x10_long)1ll)))) {
            x10_long i__2144 = i__2143;
            
            //#line 26 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__2144))),
                                         ((x10_char)' ')))) {
                
                //#line 27 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 28 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 29 "SW.x10"
                    currToken = (&::SW_Strings::sl__2196);
                }
                
            } else {
                
                //#line 33 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__2144))));
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
    x10_long i__1962min__2146 = ((x10_long)0ll);
    x10_long i__1962max__2147 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__2148;
        for (i__2148 = i__1962min__2146; ((i__2148) <= (i__1962max__2147));
             i__2148 = ((i__2148) + (((x10_long)1ll)))) {
            x10_long i__2149 = i__2148;
            
            //#line 49 "SW.x10"
            x10_long score__2145 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__2149, col)) + (((gapExtension) * (((row) - (i__2149))))));
            
            //#line 51 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__2149, col)) <= (((x10_long)0ll))))
            {
                
                //#line 52 "SW.x10"
                score__2145 = ((score__2145) + (gapOpening));
            }
            
            //#line 55 "SW.x10"
            if (((score__2145) > (max))) {
                
                //#line 56 "SW.x10"
                max = score__2145;
                
                //#line 57 "SW.x10"
                gap = ((row) - (i__2149));
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
    x10_long i__1980min__2151 = ((x10_long)0ll);
    x10_long i__1980max__2152 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__2153;
        for (i__2153 = i__1980min__2151; ((i__2153) <= (i__1980max__2152));
             i__2153 = ((i__2153) + (((x10_long)1ll)))) {
            x10_long j__2154 = i__2153;
            
            //#line 71 "SW.x10"
            x10_long score__2150 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__2154)) + (((gapExtension) * (((col) - (j__2154))))));
            
            //#line 72 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__2154)) >= (((x10_long)0ll))))
            {
                
                //#line 73 "SW.x10"
                score__2150 = ((score__2150) + (gapOpening));
            }
            
            //#line 76 "SW.x10"
            if (((score__2150) > (max))) {
                
                //#line 77 "SW.x10"
                max = score__2150;
                
                //#line 78 "SW.x10"
                gap = ((j__2154) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__2196);
    
    //#line 89 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__2196);
    
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
            x10_long i__1998min__2155 = ((x10_long)0ll);
            x10_long i__1998max__2156 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2157;
                for (i__2157 = i__1998min__2155; ((i__2157) <= (i__1998max__2156));
                     i__2157 = ((i__2157) + (((x10_long)1ll))))
                {
                    x10_long k__2158 = i__2157;
                    
                    //#line 98 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 99 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__2158))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 101 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 103 "SW.x10"
            x10_long i__2016min__2159 = ((x10_long)0ll);
            x10_long i__2016max__2160 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2161;
                for (i__2161 = i__2016min__2159; ((i__2161) <= (i__2016max__2160));
                     i__2161 = ((i__2161) + (((x10_long)1ll))))
                {
                    x10_long k__2162 = i__2161;
                    
                    //#line 104 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 105 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__2162))) - (((x10_long)1ll)))))), result2);
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
    x10_long i__2052min__2180 = ((x10_long)1ll);
    x10_long i__2052max__2181 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2182;
        for (i__2182 = i__2052min__2180; ((i__2182) <= (i__2052max__2181));
             i__2182 = ((i__2182) + (((x10_long)1ll)))) {
            x10_long i__2183 = i__2182;
            
            //#line 121 "SW.x10"
            x10_long i__2034min__2172 = ((x10_long)1ll);
            x10_long i__2034max__2173 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2174;
                for (i__2174 = i__2034min__2172; ((i__2174) <= (i__2034max__2173));
                     i__2174 = ((i__2174) + (((x10_long)1ll))))
                {
                    x10_long j__2175 = i__2174;
                    
                    //#line 122 "SW.x10"
                    x10_long max__2163 = (x10_long)0x8000000000000000LL;
                    
                    //#line 123 "SW.x10"
                    x10_long dir__2164 = ((x10_long)0ll);
                    
                    //#line 125 "SW.x10"
                    x10_long diagScore__2165;
                    
                    //#line 126 "SW.x10"
                    x10_char firstChar__2166 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__2183) - (((x10_long)1ll))))));
                    
                    //#line 127 "SW.x10"
                    x10_char secondChar__2167 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__2175) - (((x10_long)1ll))))));
                    
                    //#line 128 "SW.x10"
                    diagScore__2165 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__2183) - (((x10_long)1ll))),
                                          ((j__2175) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__2166).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__2167).v))))));
                    
                    //#line 129 "SW.x10"
                    if (((diagScore__2165) > (max__2163)))
                    {
                        
                        //#line 130 "SW.x10"
                        max__2163 = diagScore__2165;
                        
                        //#line 131 "SW.x10"
                        dir__2164 = ((x10_long)0ll);
                    }
                    
                    //#line 134 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2168 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2183, j__2175);
                    
                    //#line 135 "SW.x10"
                    x10_long upScore__2169 = upResult__2168->FMGL(first);
                    
                    //#line 136 "SW.x10"
                    if (((upScore__2169) > (max__2163))) {
                        
                        //#line 137 "SW.x10"
                        max__2163 = upScore__2169;
                        
                        //#line 138 "SW.x10"
                        dir__2164 = upResult__2168->FMGL(second);
                    }
                    
                    //#line 141 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2170 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2183, j__2175);
                    
                    //#line 142 "SW.x10"
                    x10_long leftScore__2171 = leftResult__2170->FMGL(first);
                    
                    //#line 143 "SW.x10"
                    if (((leftScore__2171) > (max__2163)))
                    {
                        
                        //#line 144 "SW.x10"
                        max__2163 = leftScore__2171;
                        
                        //#line 145 "SW.x10"
                        dir__2164 = leftResult__2170->FMGL(second);
                    }
                    
                    //#line 148 "SW.x10"
                    max__2163 = ((max__2163) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2163);
                    
                    //#line 150 "SW.x10"
                    if (((max__2163) > (globalMax))) {
                        
                        //#line 151 "SW.x10"
                        globalMax = max__2163;
                        
                        //#line 152 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2183,
                                                                                      j__2175);
                    }
                    
                    //#line 155 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2183, j__2175, max__2163);
                    
                    //#line 156 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2183, j__2175, dir__2164);
                }
            }
            
        }
    }
    
    //#line 160 "SW.x10"
    x10_long i__2088min__2184 = ((x10_long)0ll);
    x10_long i__2088max__2185 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2186;
        for (i__2186 = i__2088min__2184; ((i__2186) <= (i__2088max__2185));
             i__2186 = ((i__2186) + (((x10_long)1ll)))) {
            x10_long i__2187 = i__2186;
            
            //#line 161 "SW.x10"
            x10_long i__2070min__2176 = ((x10_long)0ll);
            x10_long i__2070max__2177 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2178;
                for (i__2178 = i__2070min__2176; ((i__2178) <= (i__2070max__2177));
                     i__2178 = ((i__2178) + (((x10_long)1ll))))
                {
                    x10_long j__2179 = i__2178;
                    
                    //#line 162 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__2187,
                                                    j__2179), (&::SW_Strings::sl__2197)));
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
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 173 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 174 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 175 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 176 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 178 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__2196);
    
    //#line 179 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__2196);
    
    //#line 181 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 182 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 183 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 184 "SW.x10"
    line = reader1->readLine();
    
    //#line 185 "SW.x10"
    while (true) {
        
        //#line 186 "SW.x10"
        try {
            
            //#line 187 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc6)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc6);
                {
                    
                    //#line 190 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 192 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 194 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 195 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 196 "SW.x10"
    line = reader2->readLine();
    
    //#line 197 "SW.x10"
    while (true) {
        
        //#line 198 "SW.x10"
        try {
            
            //#line 199 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc7) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc7)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc7);
                {
                    
                    //#line 202 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 204 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 207 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 208 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 210 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 211 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 212 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 213 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 215 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 216 "SW.x10"
    x10_long i__2106min__2192 = ((x10_long)0ll);
    x10_long i__2106max__2193 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__2194;
        for (i__2194 = i__2106min__2192; ((i__2194) <= (i__2106max__2193));
             i__2194 = ((i__2194) + (((x10_long)1ll)))) {
            x10_long i__2195 = i__2194;
            
            //#line 217 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__2195))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 219 "SW.x10"
    while (true) {
        
        //#line 220 "SW.x10"
        try {
            
            //#line 221 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc8) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc8)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc8);
                {
                    
                    //#line 224 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 226 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 227 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 228 "SW.x10"
        x10_long i__2124min__2188 = ((x10_long)1ll);
        x10_long i__2124max__2189 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__2190;
            for (i__2190 = i__2124min__2188; ((i__2190) <= (i__2124max__2189));
                 i__2190 = ((i__2190) + (((x10_long)1ll))))
            {
                x10_long i__2191 = i__2190;
                
                //#line 229 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__2191) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__2191)))));
            }
        }
        
    }
    
    //#line 233 "SW.x10"
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

::x10::lang::String SW_Strings::sl__2196("");
::x10::lang::String SW_Strings::sl__2197(" ");

/* END of SW */
/*************************************************/
