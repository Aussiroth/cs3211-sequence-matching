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

//#line 17 "SW.x10"

//#line 19 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 20 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 21 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__2513);
    
    //#line 22 "SW.x10"
    x10_long i__2261min__2458 = ((x10_long)0ll);
    x10_long i__2261max__2459 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__2460;
        for (i__2460 = i__2261min__2458; ((i__2460) <= (i__2261max__2459));
             i__2460 = ((i__2460) + (((x10_long)1ll)))) {
            x10_long i__2461 = i__2460;
            
            //#line 23 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__2461))),
                                         ((x10_char)' ')))) {
                
                //#line 24 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 25 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 26 "SW.x10"
                    currToken = (&::SW_Strings::sl__2513);
                }
                
            } else {
                
                //#line 30 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__2461))));
            }
            
        }
    }
    
    //#line 33 "SW.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 34 "SW.x10"
        tokens->add(currToken);
    }
    
    //#line 36 "SW.x10"
    return tokens;
    
}

//#line 39 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 42 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 43 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 45 "SW.x10"
    x10_long i__2279min__2463 = ((x10_long)0ll);
    x10_long i__2279max__2464 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__2465;
        for (i__2465 = i__2279min__2463; ((i__2465) <= (i__2279max__2464));
             i__2465 = ((i__2465) + (((x10_long)1ll)))) {
            x10_long i__2466 = i__2465;
            
            //#line 46 "SW.x10"
            x10_long score__2462 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__2466, col)) + (((gapExtension) * (((row) - (i__2466))))));
            
            //#line 48 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__2466, col)) <= (((x10_long)0ll))))
            {
                
                //#line 49 "SW.x10"
                score__2462 = ((score__2462) + (gapOpening));
            }
            
            //#line 52 "SW.x10"
            if (((score__2462) > (max))) {
                
                //#line 53 "SW.x10"
                max = score__2462;
                
                //#line 54 "SW.x10"
                gap = ((row) - (i__2466));
            }
            
        }
    }
    
    //#line 57 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 60 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 63 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 64 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 66 "SW.x10"
    x10_long i__2297min__2468 = ((x10_long)0ll);
    x10_long i__2297max__2469 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__2470;
        for (i__2470 = i__2297min__2468; ((i__2470) <= (i__2297max__2469));
             i__2470 = ((i__2470) + (((x10_long)1ll)))) {
            x10_long j__2471 = i__2470;
            
            //#line 68 "SW.x10"
            x10_long score__2467 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__2471)) + (((gapExtension) * (((col) - (j__2471))))));
            
            //#line 69 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__2471)) >= (((x10_long)0ll))))
            {
                
                //#line 70 "SW.x10"
                score__2467 = ((score__2467) + (gapOpening));
            }
            
            //#line 73 "SW.x10"
            if (((score__2467) > (max))) {
                
                //#line 74 "SW.x10"
                max = score__2467;
                
                //#line 75 "SW.x10"
                gap = ((j__2471) - (col));
            }
            
        }
    }
    
    //#line 78 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 81 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 83 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 84 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 85 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__2513);
    
    //#line 86 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__2513);
    
    //#line 88 "SW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 89 "SW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 90 "SW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 91 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 92 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 93 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 94 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 95 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 96 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 97 "SW.x10"
            matchCount = ((matchCount) + (((x10_long)1ll)));
        } else 
        //#line 98 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 99 "SW.x10"
            x10_long i__2315min__2472 = ((x10_long)0ll);
            x10_long i__2315max__2473 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2474;
                for (i__2474 = i__2315min__2472; ((i__2474) <= (i__2315max__2473));
                     i__2474 = ((i__2474) + (((x10_long)1ll))))
                {
                    x10_long k__2475 = i__2474;
                    
                    //#line 100 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 101 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__2475))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 103 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 104 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        } else {
            
            //#line 106 "SW.x10"
            x10_long i__2333min__2476 = ((x10_long)0ll);
            x10_long i__2333max__2477 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__2478;
                for (i__2478 = i__2333min__2476; ((i__2478) <= (i__2333max__2477));
                     i__2478 = ((i__2478) + (((x10_long)1ll))))
                {
                    x10_long k__2479 = i__2478;
                    
                    //#line 107 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 108 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__2479))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 110 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 111 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        }
        
        //#line 113 "SW.x10"
        stringLength = ((stringLength) + (((x10_long)1ll)));
    }
    
    //#line 115 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__2514), matchCount), (&::SW_Strings::sl__2515)), stringLength)));
    
    //#line 116 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__2516), gapCount), (&::SW_Strings::sl__2515)), stringLength)));
    
    //#line 117 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__2517), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 118 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 119 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 122 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 123 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 124 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 125 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 126 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 127 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 128 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 130 "SW.x10"
    x10_long i__2369min__2497 = ((x10_long)1ll);
    x10_long i__2369max__2498 = ((x10_long)(S1_SIZE));
    {
        x10_long i__2499;
        for (i__2499 = i__2369min__2497; ((i__2499) <= (i__2369max__2498));
             i__2499 = ((i__2499) + (((x10_long)1ll)))) {
            x10_long i__2500 = i__2499;
            
            //#line 131 "SW.x10"
            x10_long i__2351min__2489 = ((x10_long)1ll);
            x10_long i__2351max__2490 = ((x10_long)(S2_SIZE));
            {
                x10_long i__2491;
                for (i__2491 = i__2351min__2489; ((i__2491) <= (i__2351max__2490));
                     i__2491 = ((i__2491) + (((x10_long)1ll))))
                {
                    x10_long j__2492 = i__2491;
                    
                    //#line 132 "SW.x10"
                    x10_long max__2480 = (x10_long)0x8000000000000000LL;
                    
                    //#line 133 "SW.x10"
                    x10_long dir__2481 = ((x10_long)0ll);
                    
                    //#line 134 "SW.x10"
                    x10_long diagScore__2482;
                    
                    //#line 135 "SW.x10"
                    x10_char firstChar__2483 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__2500) - (((x10_long)1ll))))));
                    
                    //#line 136 "SW.x10"
                    x10_char secondChar__2484 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__2492) - (((x10_long)1ll))))));
                    
                    //#line 137 "SW.x10"
                    diagScore__2482 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__2500) - (((x10_long)1ll))),
                                          ((j__2492) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__2483).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__2484).v))))));
                    
                    //#line 138 "SW.x10"
                    if (((diagScore__2482) > (max__2480)))
                    {
                        
                        //#line 139 "SW.x10"
                        max__2480 = diagScore__2482;
                        
                        //#line 140 "SW.x10"
                        dir__2481 = ((x10_long)0ll);
                    }
                    
                    //#line 143 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2485 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2500, j__2492);
                    
                    //#line 144 "SW.x10"
                    x10_long upScore__2486 = upResult__2485->FMGL(first);
                    
                    //#line 145 "SW.x10"
                    if (((upScore__2486) > (max__2480))) {
                        
                        //#line 146 "SW.x10"
                        max__2480 = upScore__2486;
                        
                        //#line 147 "SW.x10"
                        dir__2481 = upResult__2485->FMGL(second);
                    }
                    
                    //#line 149 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2487 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2500, j__2492);
                    
                    //#line 150 "SW.x10"
                    x10_long leftScore__2488 = leftResult__2487->FMGL(first);
                    
                    //#line 151 "SW.x10"
                    if (((leftScore__2488) > (max__2480)))
                    {
                        
                        //#line 152 "SW.x10"
                        max__2480 = leftScore__2488;
                        
                        //#line 153 "SW.x10"
                        dir__2481 = leftResult__2487->FMGL(second);
                    }
                    
                    //#line 155 "SW.x10"
                    max__2480 = ((max__2480) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2480);
                    
                    //#line 157 "SW.x10"
                    if (((max__2480) > (globalMax))) {
                        
                        //#line 158 "SW.x10"
                        globalMax = max__2480;
                        
                        //#line 159 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2500,
                                                                                      j__2492);
                    }
                    
                    //#line 162 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2500, j__2492, max__2480);
                    
                    //#line 163 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2500, j__2492, dir__2481);
                }
            }
            
        }
    }
    
    //#line 167 "SW.x10"
    x10_long i__2405min__2501 = ((x10_long)0ll);
    x10_long i__2405max__2502 = ((x10_long)(S1_SIZE));
    {
        x10_long i__2503;
        for (i__2503 = i__2405min__2501; ((i__2503) <= (i__2405max__2502));
             i__2503 = ((i__2503) + (((x10_long)1ll)))) {
            x10_long i__2504 = i__2503;
            
            //#line 168 "SW.x10"
            x10_long i__2387min__2493 = ((x10_long)0ll);
            x10_long i__2387max__2494 = ((x10_long)(S2_SIZE));
            {
                x10_long i__2495;
                for (i__2495 = i__2387min__2493; ((i__2495) <= (i__2387max__2494));
                     i__2495 = ((i__2495) + (((x10_long)1ll))))
                {
                    x10_long j__2496 = i__2495;
                    
                }
            }
            
        }
    }
    
    //#line 174 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 178 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 179 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 180 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 181 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 182 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 183 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 185 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__2513);
    
    //#line 186 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__2513);
    
    //#line 188 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 189 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 190 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 191 "SW.x10"
    line = reader1->readLine();
    
    //#line 192 "SW.x10"
    while (true) {
        
        //#line 193 "SW.x10"
        try {
            
            //#line 194 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc6)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc6);
                {
                    
                    //#line 197 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 199 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 201 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 202 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 203 "SW.x10"
    line = reader2->readLine();
    
    //#line 204 "SW.x10"
    while (true) {
        
        //#line 205 "SW.x10"
        try {
            
            //#line 206 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc7) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc7)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc7);
                {
                    
                    //#line 209 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 211 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 214 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 215 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 217 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 218 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 219 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 220 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 222 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 223 "SW.x10"
    x10_long i__2423min__2509 = ((x10_long)0ll);
    x10_long i__2423max__2510 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__2511;
        for (i__2511 = i__2423min__2509; ((i__2511) <= (i__2423max__2510));
             i__2511 = ((i__2511) + (((x10_long)1ll)))) {
            x10_long i__2512 = i__2511;
            
            //#line 224 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__2512))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 226 "SW.x10"
    while (true) {
        
        //#line 227 "SW.x10"
        try {
            
            //#line 228 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc8) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc8)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc8);
                {
                    
                    //#line 231 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 233 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 234 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 235 "SW.x10"
        x10_long i__2441min__2505 = ((x10_long)1ll);
        x10_long i__2441max__2506 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__2507;
            for (i__2507 = i__2441min__2505; ((i__2507) <= (i__2441max__2506));
                 i__2507 = ((i__2507) + (((x10_long)1ll))))
            {
                x10_long i__2508 = i__2507;
                
                //#line 236 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__2508) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__2508)))));
            }
        }
        
    }
    
    //#line 240 "SW.x10"
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

::x10::lang::String SW_Strings::sl__2513("");
::x10::lang::String SW_Strings::sl__2516("Gaps: ");
::x10::lang::String SW_Strings::sl__2514("Identity: ");
::x10::lang::String SW_Strings::sl__2517("Score: ");
::x10::lang::String SW_Strings::sl__2515("/");

/* END of SW */
/*************************************************/
