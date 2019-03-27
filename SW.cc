/*************************************************/
/* START of SW */
#include <SW.h>

#include <x10/lang/Long.h>
#include <x10/array/Array_2.h>
#include <x10/util/Pair.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/lang/Char.h>
#include <x10/lang/Int.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 11 "SW.x10"

//#line 12 "SW.x10"

//#line 14 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 17 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 18 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 20 "SW.x10"
    x10_long i__2096min__2312 = ((x10_long)0ll);
    x10_long i__2096max__2313 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__2314;
        for (i__2314 = i__2096min__2312; ((i__2314) <= (i__2096max__2313));
             i__2314 = ((i__2314) + (((x10_long)1ll)))) {
            x10_long i__2315 = i__2314;
            
            //#line 21 "SW.x10"
            x10_long score__2311 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__2315, col)) + (((gapExtension) * (((row) - (i__2315))))));
            
            //#line 23 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__2315, col)) <= (((x10_long)0ll))))
            {
                
                //#line 24 "SW.x10"
                score__2311 = ((score__2311) + (gapOpening));
            }
            
            //#line 27 "SW.x10"
            if (((score__2311) > (max))) {
                
                //#line 28 "SW.x10"
                max = score__2311;
                
                //#line 29 "SW.x10"
                gap = ((row) - (i__2315));
            }
            
        }
    }
    
    //#line 32 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 35 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 38 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 39 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 41 "SW.x10"
    x10_long i__2114min__2317 = ((x10_long)0ll);
    x10_long i__2114max__2318 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__2319;
        for (i__2319 = i__2114min__2317; ((i__2319) <= (i__2114max__2318));
             i__2319 = ((i__2319) + (((x10_long)1ll)))) {
            x10_long j__2320 = i__2319;
            
            //#line 43 "SW.x10"
            x10_long score__2316 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__2320)) + (((gapExtension) * (((col) - (j__2320))))));
            
            //#line 44 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__2320)) >= (((x10_long)0ll))))
            {
                
                //#line 45 "SW.x10"
                score__2316 = ((score__2316) + (gapOpening));
            }
            
            //#line 48 "SW.x10"
            if (((score__2316) > (max))) {
                
                //#line 49 "SW.x10"
                max = score__2316;
                
                //#line 50 "SW.x10"
                gap = ((j__2320) - (col));
            }
            
        }
    }
    
    //#line 53 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 56 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 58 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 59 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 60 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__2379);
    
    //#line 61 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__2379);
    
    //#line 62 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 63 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 64 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 65 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 66 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 67 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
        } else 
        //#line 68 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 69 "SW.x10"
            x10_long i__2132min__2321 = ((x10_long)0ll);
            x10_long i__2132max__2322 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2323;
                for (i__2323 = i__2132min__2321; ((i__2323) <= (i__2132max__2322));
                     i__2323 = ((i__2323) + (((x10_long)1ll))))
                {
                    x10_long k__2324 = i__2323;
                    
                    //#line 70 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 71 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__2324))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 73 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 75 "SW.x10"
            x10_long i__2150min__2325 = ((x10_long)0ll);
            x10_long i__2150max__2326 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__2327;
                for (i__2327 = i__2150min__2325; ((i__2327) <= (i__2150max__2326));
                     i__2327 = ((i__2327) + (((x10_long)1ll))))
                {
                    x10_long k__2328 = i__2327;
                    
                    //#line 76 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 77 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__2328))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 79 "SW.x10"
            j = ((j) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 82 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 83 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 86 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               x10_long simScore, x10_long gapOpening, x10_long gapExtension) {
    
    //#line 87 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 88 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 89 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 90 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 92 "SW.x10"
    x10_long i__2186min__2344 = ((x10_long)1ll);
    x10_long i__2186max__2345 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2346;
        for (i__2346 = i__2186min__2344; ((i__2346) <= (i__2186max__2345));
             i__2346 = ((i__2346) + (((x10_long)1ll)))) {
            x10_long i__2347 = i__2346;
            
            //#line 93 "SW.x10"
            x10_long i__2168min__2336 = ((x10_long)1ll);
            x10_long i__2168max__2337 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2338;
                for (i__2338 = i__2168min__2336; ((i__2338) <= (i__2168max__2337));
                     i__2338 = ((i__2338) + (((x10_long)1ll))))
                {
                    x10_long j__2339 = i__2338;
                    
                    //#line 94 "SW.x10"
                    x10_long max__2329 = (x10_long)0x8000000000000000LL;
                    
                    //#line 95 "SW.x10"
                    x10_long dir__2330 = ((x10_long)0ll);
                    
                    //#line 97 "SW.x10"
                    x10_long diagScore__2331;
                    
                    //#line 98 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__2347) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__2339) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 99 "SW.x10"
                        diagScore__2331 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__2347) - (((x10_long)1ll))),
                                              ((j__2339) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 101 "SW.x10"
                        diagScore__2331 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__2347) - (((x10_long)1ll))),
                                              ((j__2339) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 103 "SW.x10"
                    if (((diagScore__2331) > (max__2329)))
                    {
                        
                        //#line 104 "SW.x10"
                        max__2329 = diagScore__2331;
                        
                        //#line 105 "SW.x10"
                        dir__2330 = ((x10_long)0ll);
                    }
                    
                    //#line 108 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2332 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2347, j__2339);
                    
                    //#line 109 "SW.x10"
                    x10_long upScore__2333 = upResult__2332->FMGL(first);
                    
                    //#line 110 "SW.x10"
                    if (((upScore__2333) > (max__2329))) {
                        
                        //#line 111 "SW.x10"
                        max__2329 = upScore__2333;
                        
                        //#line 112 "SW.x10"
                        dir__2330 = upResult__2332->FMGL(second);
                    }
                    
                    //#line 115 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2334 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2347, j__2339);
                    
                    //#line 116 "SW.x10"
                    x10_long leftScore__2335 = leftResult__2334->FMGL(first);
                    
                    //#line 117 "SW.x10"
                    if (((leftScore__2335) > (max__2329)))
                    {
                        
                        //#line 118 "SW.x10"
                        max__2329 = leftScore__2335;
                        
                        //#line 119 "SW.x10"
                        dir__2330 = leftResult__2334->FMGL(second);
                    }
                    
                    //#line 122 "SW.x10"
                    max__2329 = ((max__2329) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2329);
                    
                    //#line 124 "SW.x10"
                    if (((max__2329) > (globalMax))) {
                        
                        //#line 125 "SW.x10"
                        globalMax = max__2329;
                        
                        //#line 126 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2347,
                                                                                      j__2339);
                    }
                    
                    //#line 129 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2347, j__2339, max__2329);
                    
                    //#line 130 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2347, j__2339, dir__2330);
                }
            }
            
        }
    }
    
    //#line 134 "SW.x10"
    x10_long i__2222min__2348 = ((x10_long)0ll);
    x10_long i__2222max__2349 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2350;
        for (i__2350 = i__2222min__2348; ((i__2350) <= (i__2222max__2349));
             i__2350 = ((i__2350) + (((x10_long)1ll)))) {
            x10_long i__2351 = i__2350;
            
            //#line 135 "SW.x10"
            x10_long i__2204min__2340 = ((x10_long)0ll);
            x10_long i__2204max__2341 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2342;
                for (i__2342 = i__2204min__2340; ((i__2342) <= (i__2204max__2341));
                     i__2342 = ((i__2342) + (((x10_long)1ll))))
                {
                    x10_long j__2343 = i__2342;
                    
                    //#line 136 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__2351,
                                                    j__2343), (&::SW_Strings::sl__2380)));
                }
            }
            
            //#line 138 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 141 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 144 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       x10_long simScore, x10_long gapOpening,
                       x10_long gapExtension) {
    
    //#line 146 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 147 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 149 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 150 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 151 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 152 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 154 "SW.x10"
    x10_long i__2258min__2371 = ((x10_long)1ll);
    x10_long i__2258max__2372 = ((maxRow) + (maxCol));
    {
        x10_long i__2373;
        for (i__2373 = i__2258min__2371; ((i__2373) <= (i__2258max__2372));
             i__2373 = ((i__2373) + (((x10_long)1ll)))) {
            x10_long line__2374 = i__2373;
            
            //#line 156 "SW.x10"
            x10_long startCol__2365 = ((((x10_long)0ll)) > (((line__2374) - (maxRow))))
              ? (((x10_long)0ll)) : (((line__2374) - (maxRow)));
            
            //#line 159 "SW.x10"
            x10_long count__2366 = ((line__2374) < (((maxCol) - (startCol__2365))))
              ? (line__2374) : (((maxCol) - (startCol__2365)));
            
            //#line 160 "SW.x10"
            count__2366 = ((count__2366) < (maxRow)) ? (count__2366)
              : (maxRow);
            
            //#line 163 "SW.x10"
            x10_long i__2240min__2361 = ((x10_long)0ll);
            x10_long i__2240max__2362 = ((count__2366) - (((x10_long)1ll)));
            {
                x10_long i__2363;
                for (i__2363 = i__2240min__2361; ((i__2363) <= (i__2240max__2362));
                     i__2363 = ((i__2363) + (((x10_long)1ll))))
                {
                    x10_long k__2364 = i__2363;
                    
                    //#line 165 "SW.x10"
                    x10_long i__2352 = ((maxRow) > (line__2374))
                      ? (line__2374) : (maxRow);
                    
                    //#line 166 "SW.x10"
                    i__2352 = ((i__2352) - (k__2364));
                    
                    //#line 167 "SW.x10"
                    x10_long j__2353 = ((((startCol__2365) + (k__2364))) + (((x10_long)1ll)));
                    
                    //#line 170 "SW.x10"
                    x10_long max__2354 = (x10_long)0x8000000000000000LL;
                    
                    //#line 171 "SW.x10"
                    x10_long dir__2355 = ((x10_long)0ll);
                    
                    //#line 173 "SW.x10"
                    x10_long diagScore__2356;
                    
                    //#line 174 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__2352) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__2353) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 175 "SW.x10"
                        diagScore__2356 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__2352) - (((x10_long)1ll))),
                                              ((j__2353) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 177 "SW.x10"
                        diagScore__2356 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__2352) - (((x10_long)1ll))),
                                              ((j__2353) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 179 "SW.x10"
                    if (((diagScore__2356) > (max__2354)))
                    {
                        
                        //#line 180 "SW.x10"
                        max__2354 = diagScore__2356;
                        
                        //#line 181 "SW.x10"
                        dir__2355 = ((x10_long)0ll);
                    }
                    
                    //#line 184 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__2357 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__2352, j__2353);
                    
                    //#line 185 "SW.x10"
                    x10_long upScore__2358 = upResult__2357->FMGL(first);
                    
                    //#line 186 "SW.x10"
                    if (((upScore__2358) > (max__2354))) {
                        
                        //#line 187 "SW.x10"
                        max__2354 = upScore__2358;
                        
                        //#line 188 "SW.x10"
                        dir__2355 = upResult__2357->FMGL(second);
                    }
                    
                    //#line 191 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__2359 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__2352, j__2353);
                    
                    //#line 192 "SW.x10"
                    x10_long leftScore__2360 = leftResult__2359->FMGL(first);
                    
                    //#line 193 "SW.x10"
                    if (((leftScore__2360) > (max__2354)))
                    {
                        
                        //#line 194 "SW.x10"
                        max__2354 = leftScore__2360;
                        
                        //#line 195 "SW.x10"
                        dir__2355 = leftResult__2359->FMGL(second);
                    }
                    
                    //#line 198 "SW.x10"
                    max__2354 = ((max__2354) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__2354);
                    
                    //#line 200 "SW.x10"
                    if (((max__2354) > (globalMax))) {
                        
                        //#line 201 "SW.x10"
                        globalMax = max__2354;
                        
                        //#line 202 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__2352,
                                                                                      j__2353);
                    }
                    
                    //#line 204 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__2352, j__2353, max__2354);
                    
                    //#line 205 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__2352, j__2353, dir__2355);
                }
            }
            
        }
    }
    
    //#line 212 "SW.x10"
    x10_long i__2294min__2375 = ((x10_long)0ll);
    x10_long i__2294max__2376 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__2377;
        for (i__2377 = i__2294min__2375; ((i__2377) <= (i__2294max__2376));
             i__2377 = ((i__2377) + (((x10_long)1ll)))) {
            x10_long i__2378 = i__2377;
            
            //#line 213 "SW.x10"
            x10_long i__2276min__2367 = ((x10_long)0ll);
            x10_long i__2276max__2368 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__2369;
                for (i__2369 = i__2276min__2367; ((i__2369) <= (i__2276max__2368));
                     i__2369 = ((i__2369) + (((x10_long)1ll))))
                {
                    x10_long j__2370 = i__2369;
                    
                    //#line 214 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__2378,
                                                    j__2370), (&::SW_Strings::sl__2380)));
                }
            }
            
            //#line 216 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 218 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 222 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 223 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 224 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 226 "SW.x10"
    x10_long gapOpening = ((x10_long)0ll);
    
    //#line 227 "SW.x10"
    x10_long gapExtension = ((x10_long)-2ll);
    
    //#line 228 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__2381);
    
    //#line 229 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__2382);
    
    //#line 230 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 231 "SW.x10"
    ::SW::parallelMatch(string1, string2, simScore, gapOpening,
                        gapExtension);
}

//#line 9 "SW.x10"
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

::x10::lang::String SW_Strings::sl__2379("");
::x10::lang::String SW_Strings::sl__2380(" ");
::x10::lang::String SW_Strings::sl__2381("GGTTGACTA");
::x10::lang::String SW_Strings::sl__2382("TGTTACGG");

/* END of SW */
/*************************************************/
