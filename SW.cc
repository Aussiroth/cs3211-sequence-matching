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
    ::x10::lang::String* currToken = (&::SW_Strings::sl__2541);
    
    //#line 22 "SW.x10"
    x10_long i__2289min__2486 = ((x10_long)0ll);
    x10_long i__2289max__2487 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__2488;
        for (i__2488 = i__2289min__2486; ((i__2488) <= (i__2289max__2487));
             i__2488 = ((i__2488) + (((x10_long)1ll)))) {
            x10_long i__2489 = i__2488;
            
            //#line 23 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__2489))),
                                         ((x10_char)' ')))) {
                
                //#line 24 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 25 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 26 "SW.x10"
                    currToken = (&::SW_Strings::sl__2541);
                }
                
            } else {
                
                //#line 30 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__2489))));
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
    x10_long i__2307min__2491 = ((x10_long)0ll);
    x10_long i__2307max__2492 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__2493;
        for (i__2493 = i__2307min__2491; ((i__2493) <= (i__2307max__2492));
             i__2493 = ((i__2493) + (((x10_long)1ll)))) {
            x10_long i__2494 = i__2493;
            
            //#line 46 "SW.x10"
            x10_long score__2490 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__2494, col)) + (((gapExtension) * (((row) - (i__2494))))));
            
            //#line 48 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__2494, col)) <= (((x10_long)0ll))))
            {
                
                //#line 49 "SW.x10"
                score__2490 = ((score__2490) + (gapOpening));
            }
            
            //#line 52 "SW.x10"
            if (((score__2490) > (max))) {
                
                //#line 53 "SW.x10"
                max = score__2490;
                
                //#line 54 "SW.x10"
                gap = ((row) - (i__2494));
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
    x10_long i__2325min__2496 = ((x10_long)0ll);
    x10_long i__2325max__2497 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__2498;
        for (i__2498 = i__2325min__2496; ((i__2498) <= (i__2325max__2497));
             i__2498 = ((i__2498) + (((x10_long)1ll)))) {
            x10_long j__2499 = i__2498;
            
            //#line 68 "SW.x10"
            x10_long score__2495 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__2499)) + (((gapExtension) * (((col) - (j__2499))))));
            
            //#line 69 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__2499)) >= (((x10_long)0ll))))
            {
                
                //#line 70 "SW.x10"
                score__2495 = ((score__2495) + (gapOpening));
            }
            
            //#line 73 "SW.x10"
            if (((score__2495) > (max))) {
                
                //#line 74 "SW.x10"
                max = score__2495;
                
                //#line 75 "SW.x10"
                gap = ((j__2499) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__2541);
    
    //#line 86 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__2541);
    
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
            
            //#line 98 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 99 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 100 "SW.x10"
            x10_long i__2343min__2500 = ((x10_long)0ll);
            x10_long i__2343max__2501 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2502;
                for (i__2502 = i__2343min__2500; ((i__2502) <= (i__2343max__2501));
                     i__2502 = ((i__2502) + (((x10_long)1ll))))
                {
                    x10_long k__2503 = i__2502;
                    
                    //#line 101 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 102 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__2503))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 103 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 105 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 106 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        } else {
            
            //#line 108 "SW.x10"
            x10_long i__2361min__2504 = ((x10_long)0ll);
            x10_long i__2361max__2505 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__2506;
                for (i__2506 = i__2361min__2504; ((i__2506) <= (i__2361max__2505));
                     i__2506 = ((i__2506) + (((x10_long)1ll))))
                {
                    x10_long k__2507 = i__2506;
                    
                    //#line 109 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 110 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__2507))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 111 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 113 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 114 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        }
        
    }
    
    //#line 117 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__2542), matchCount), (&::SW_Strings::sl__2543)), stringLength)));
    
    //#line 118 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__2544), gapCount), (&::SW_Strings::sl__2543)), stringLength)));
    
    //#line 119 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__2545), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 120 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 121 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 124 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 125 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 126 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 127 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 128 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 129 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 130 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 132 "SW.x10"
    x10_long i__2397min__2525 = ((x10_long)1ll);
    x10_long i__2397max__2526 = ((x10_long)(S1_SIZE));
    {
        x10_long i__2527;
        for (i__2527 = i__2397min__2525; ((i__2527) <= (i__2397max__2526));
             i__2527 = ((i__2527) + (((x10_long)1ll)))) {
            x10_long i__2528 = i__2527;
            
            //#line 133 "SW.x10"
            x10_long i__2379min__2517 = ((x10_long)1ll);
            x10_long i__2379max__2518 = ((x10_long)(S2_SIZE));
            {
                x10_long i__2519;
                for (i__2519 = i__2379min__2517; ((i__2519) <= (i__2379max__2518));
                     i__2519 = ((i__2519) + (((x10_long)1ll))))
                {
                    x10_long j__2520 = i__2519;
                    
                    //#line 134 "SW.x10"
                    x10_long max__2508 = (x10_long)0x8000000000000000LL;
                    
                    //#line 135 "SW.x10"
                    x10_long dir__2509 = ((x10_long)0ll);
                    
                    //#line 136 "SW.x10"
                    x10_long diagScore__2510;
                    
                    //#line 137 "SW.x10"
                    x10_char firstChar__2511 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__2528) - (((x10_long)1ll))))));
                    
                    //#line 138 "SW.x10"
                    x10_char secondChar__2512 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__2520) - (((x10_long)1ll))))));
                    
                    //#line 139 "SW.x10"
                    diagScore__2510 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__2528) - (((x10_long)1ll))),
                                          ((j__2520) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__2511).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__2512).v))))));
                    
                    //#line 140 "SW.x10"
                    if (((diagScore__2510) > (max__2508)))
                    {
                        
                        //#line 141 "SW.x10"
                        max__2508 = diagScore__2510;
                        
                        //#line 142 "SW.x10"
                        dir__2509 = ((x10_long)0ll);
                    }
                    
                    //#line 145 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2513 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2528, j__2520);
                    
                    //#line 146 "SW.x10"
                    x10_long upScore__2514 = upResult__2513->FMGL(first);
                    
                    //#line 147 "SW.x10"
                    if (((upScore__2514) > (max__2508))) {
                        
                        //#line 148 "SW.x10"
                        max__2508 = upScore__2514;
                        
                        //#line 149 "SW.x10"
                        dir__2509 = upResult__2513->FMGL(second);
                    }
                    
                    //#line 151 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2515 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2528, j__2520);
                    
                    //#line 152 "SW.x10"
                    x10_long leftScore__2516 = leftResult__2515->FMGL(first);
                    
                    //#line 153 "SW.x10"
                    if (((leftScore__2516) > (max__2508)))
                    {
                        
                        //#line 154 "SW.x10"
                        max__2508 = leftScore__2516;
                        
                        //#line 155 "SW.x10"
                        dir__2509 = leftResult__2515->FMGL(second);
                    }
                    
                    //#line 157 "SW.x10"
                    max__2508 = ((max__2508) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2508);
                    
                    //#line 159 "SW.x10"
                    if (((max__2508) > (globalMax))) {
                        
                        //#line 160 "SW.x10"
                        globalMax = max__2508;
                        
                        //#line 161 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2528,
                                                                                      j__2520);
                    }
                    
                    //#line 164 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2528, j__2520, max__2508);
                    
                    //#line 165 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2528, j__2520, dir__2509);
                }
            }
            
        }
    }
    
    //#line 169 "SW.x10"
    x10_long i__2433min__2529 = ((x10_long)0ll);
    x10_long i__2433max__2530 = ((x10_long)(S1_SIZE));
    {
        x10_long i__2531;
        for (i__2531 = i__2433min__2529; ((i__2531) <= (i__2433max__2530));
             i__2531 = ((i__2531) + (((x10_long)1ll)))) {
            x10_long i__2532 = i__2531;
            
            //#line 170 "SW.x10"
            x10_long i__2415min__2521 = ((x10_long)0ll);
            x10_long i__2415max__2522 = ((x10_long)(S2_SIZE));
            {
                x10_long i__2523;
                for (i__2523 = i__2415min__2521; ((i__2523) <= (i__2415max__2522));
                     i__2523 = ((i__2523) + (((x10_long)1ll))))
                {
                    x10_long j__2524 = i__2523;
                    
                }
            }
            
        }
    }
    
    //#line 176 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 180 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 181 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 182 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 183 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 184 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 185 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 187 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__2541);
    
    //#line 188 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__2541);
    
    //#line 190 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 191 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 192 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 193 "SW.x10"
    line = reader1->readLine();
    
    //#line 194 "SW.x10"
    while (true) {
        
        //#line 195 "SW.x10"
        try {
            
            //#line 196 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc6)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc6);
                {
                    
                    //#line 199 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 201 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 203 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 204 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 205 "SW.x10"
    line = reader2->readLine();
    
    //#line 206 "SW.x10"
    while (true) {
        
        //#line 207 "SW.x10"
        try {
            
            //#line 208 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc7) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc7)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc7);
                {
                    
                    //#line 211 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 213 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 216 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 217 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 219 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 220 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 221 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 222 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 224 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 225 "SW.x10"
    x10_long i__2451min__2537 = ((x10_long)0ll);
    x10_long i__2451max__2538 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__2539;
        for (i__2539 = i__2451min__2537; ((i__2539) <= (i__2451max__2538));
             i__2539 = ((i__2539) + (((x10_long)1ll)))) {
            x10_long i__2540 = i__2539;
            
            //#line 226 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__2540))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 228 "SW.x10"
    while (true) {
        
        //#line 229 "SW.x10"
        try {
            
            //#line 230 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc8) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc8)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc8);
                {
                    
                    //#line 233 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 235 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 236 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 237 "SW.x10"
        x10_long i__2469min__2533 = ((x10_long)1ll);
        x10_long i__2469max__2534 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__2535;
            for (i__2535 = i__2469min__2533; ((i__2535) <= (i__2469max__2534));
                 i__2535 = ((i__2535) + (((x10_long)1ll))))
            {
                x10_long i__2536 = i__2535;
                
                //#line 238 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__2536) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__2536)))));
            }
        }
        
    }
    
    //#line 242 "SW.x10"
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

::x10::lang::String SW_Strings::sl__2541("");
::x10::lang::String SW_Strings::sl__2544("Gaps: ");
::x10::lang::String SW_Strings::sl__2542("Identity: ");
::x10::lang::String SW_Strings::sl__2545("Score: ");
::x10::lang::String SW_Strings::sl__2543("/");

/* END of SW */
/*************************************************/
