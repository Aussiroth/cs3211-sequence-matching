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
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Rail.h>
#include <x10/lang/System.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef SW__CLOSURE__1_CLOSURE
#define SW__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SW__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SW__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 168 "SW.x10"
        tempCount__3447 = ((tempCount__3447) + (((x10_long)1ll)));
        
        //#line 170 "SW.x10"
        x10_long i__3432 = maxRow;
        
        //#line 171 "SW.x10"
        if (((maxRow) > (line__3451))) {
            
            //#line 172 "SW.x10"
            i__3432 = line__3451;
        }
        
        //#line 175 "SW.x10"
        i__3432 = ((i__3432) - (k__3444));
        
        //#line 176 "SW.x10"
        x10_long j__3433 = ((((startCol__3445) + (k__3444))) + (((x10_long)1ll)));
        
        //#line 179 "SW.x10"
        x10_long max__3434 = (x10_long)0x8000000000000000LL;
        
        //#line 180 "SW.x10"
        x10_long dir__3435 = ((x10_long)0ll);
        
        //#line 182 "SW.x10"
        x10_long diagScore__3436;
        
        //#line 183 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                       ((x10_int) (((i__3432) - (((x10_long)1ll)))))),
                                     ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                       ((x10_int) (((j__3433) - (((x10_long)1ll)))))))))
        {
            
            //#line 184 "SW.x10"
            diagScore__3436 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                  ((i__3432) - (((x10_long)1ll))),
                                  ((j__3433) - (((x10_long)1ll))))) + (simScore));
        } else {
            
            //#line 186 "SW.x10"
            diagScore__3436 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                  ((i__3432) - (((x10_long)1ll))),
                                  ((j__3433) - (((x10_long)1ll))))) - (simScore));
        }
        
        //#line 188 "SW.x10"
        if (((diagScore__3436) > (max__3434))) {
            
            //#line 189 "SW.x10"
            max__3434 = diagScore__3436;
            
            //#line 190 "SW.x10"
            dir__3435 = ((x10_long)0ll);
        }
        
        //#line 193 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__3437 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__3432, j__3433);
        
        //#line 194 "SW.x10"
        x10_long upScore__3438 = upResult__3437->FMGL(first);
        
        //#line 195 "SW.x10"
        if (((upScore__3438) > (max__3434))) {
            
            //#line 196 "SW.x10"
            max__3434 = upScore__3438;
            
            //#line 197 "SW.x10"
            dir__3435 = upResult__3437->FMGL(second);
        }
        
        //#line 200 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__3439 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__3432, j__3433);
        
        //#line 201 "SW.x10"
        x10_long leftScore__3440 = leftResult__3439->FMGL(first);
        
        //#line 202 "SW.x10"
        if (((leftScore__3440) > (max__3434))) {
            
            //#line 203 "SW.x10"
            max__3434 = leftScore__3440;
            
            //#line 204 "SW.x10"
            dir__3435 = leftResult__3439->FMGL(second);
        }
        
        //#line 207 "SW.x10"
        max__3434 = ((max__3434) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__3434);
        
        //#line 209 "SW.x10"
        if (((max__3434) > (globalMax))) {
            
            //#line 210 "SW.x10"
            globalMax = max__3434;
            
            //#line 211 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__3432,
                                                                          j__3433);
        }
        
        //#line 213 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__3432,
                                                     j__3433,
                                                     max__3434);
        
        //#line 214 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__3432, j__3433, dir__3435);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> tempCount__3447;
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__3451;
    x10_long k__3444;
    x10aux::captured_struct_lval<x10_long> startCol__3445;
    ::x10::lang::String* string1;
    ::x10::lang::String* string2;
    ::x10::array::Array_2<x10_long>* matrix;
    x10_long simScore;
    ::x10::array::Array_2<x10_long>* directions;
    x10_long gapOpening;
    x10_long gapExtension;
    x10aux::captured_struct_lval<x10_long> globalMax;
    x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->tempCount__3447);
        buf.write(this->maxRow);
        buf.write(this->line__3451);
        buf.write(this->k__3444);
        buf.write(this->startCol__3445);
        buf.write(this->string1);
        buf.write(this->string2);
        buf.write(this->matrix);
        buf.write(this->simScore);
        buf.write(this->directions);
        buf.write(this->gapOpening);
        buf.write(this->gapExtension);
        buf.write(this->globalMax);
        buf.write(this->maxCoordinates);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        SW__closure__1* storage = ::x10aux::alloc_z<SW__closure__1>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_tempCount__3447 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__3451 = buf.read<x10_long>();
        x10_long that_k__3444 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__3445 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_simScore = buf.read<x10_long>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__1* this_ = new (storage) SW__closure__1(that_tempCount__3447, that_maxRow, that_line__3451, that_k__3444, that_startCol__3445, that_string1, that_string2, that_matrix, that_simScore, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> tempCount__3447, x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__3451, x10_long k__3444, x10aux::captured_struct_lval<x10_long> startCol__3445, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, x10_long simScore, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : tempCount__3447(tempCount__3447), maxRow(maxRow), line__3451(line__3451), k__3444(k__3444), startCol__3445(startCol__3445), string1(string1), string2(string2), matrix(matrix), simScore(simScore), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:167-219";
    }

};

#endif // SW__CLOSURE__1_CLOSURE

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
    x10_long i__3220min__3400 = ((x10_long)0ll);
    x10_long i__3220max__3401 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__3402;
        for (i__3402 = i__3220min__3400; ((i__3402) <= (i__3220max__3401));
             i__3402 = ((i__3402) + (((x10_long)1ll)))) {
            x10_long i__3403 = i__3402;
            
            //#line 21 "SW.x10"
            x10_long score__3399 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__3403, col)) + (((gapExtension) * (((row) - (i__3403))))));
            
            //#line 23 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__3403, col)) <= (((x10_long)0ll))))
            {
                
                //#line 24 "SW.x10"
                score__3399 = ((score__3399) + (gapOpening));
            }
            
            //#line 27 "SW.x10"
            if (((score__3399) > (max))) {
                
                //#line 28 "SW.x10"
                max = score__3399;
                
                //#line 29 "SW.x10"
                gap = ((row) - (i__3403));
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
    x10_long i__3238min__3405 = ((x10_long)0ll);
    x10_long i__3238max__3406 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__3407;
        for (i__3407 = i__3238min__3405; ((i__3407) <= (i__3238max__3406));
             i__3407 = ((i__3407) + (((x10_long)1ll)))) {
            x10_long j__3408 = i__3407;
            
            //#line 43 "SW.x10"
            x10_long score__3404 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__3408)) + (((gapExtension) * (((col) - (j__3408))))));
            
            //#line 44 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__3408)) >= (((x10_long)0ll))))
            {
                
                //#line 45 "SW.x10"
                score__3404 = ((score__3404) + (gapOpening));
            }
            
            //#line 48 "SW.x10"
            if (((score__3404) > (max))) {
                
                //#line 49 "SW.x10"
                max = score__3404;
                
                //#line 50 "SW.x10"
                gap = ((j__3408) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__3487);
    
    //#line 61 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__3487);
    
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
            x10_long i__3256min__3409 = ((x10_long)0ll);
            x10_long i__3256max__3410 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__3411;
                for (i__3411 = i__3256min__3409; ((i__3411) <= (i__3256max__3410));
                     i__3411 = ((i__3411) + (((x10_long)1ll))))
                {
                    x10_long k__3412 = i__3411;
                    
                    //#line 70 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 71 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__3412))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 73 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 75 "SW.x10"
            x10_long i__3274min__3413 = ((x10_long)0ll);
            x10_long i__3274max__3414 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__3415;
                for (i__3415 = i__3274min__3413; ((i__3415) <= (i__3274max__3414));
                     i__3415 = ((i__3415) + (((x10_long)1ll))))
                {
                    x10_long k__3416 = i__3415;
                    
                    //#line 76 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 77 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__3416))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 79 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
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
    x10_long i__3310min__3428 = ((x10_long)1ll);
    x10_long i__3310max__3429 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__3430;
        for (i__3430 = i__3310min__3428; ((i__3430) <= (i__3310max__3429));
             i__3430 = ((i__3430) + (((x10_long)1ll)))) {
            x10_long i__3431 = i__3430;
            
            //#line 93 "SW.x10"
            x10_long i__3292min__3424 = ((x10_long)1ll);
            x10_long i__3292max__3425 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__3426;
                for (i__3426 = i__3292min__3424; ((i__3426) <= (i__3292max__3425));
                     i__3426 = ((i__3426) + (((x10_long)1ll))))
                {
                    x10_long j__3427 = i__3426;
                    
                    //#line 94 "SW.x10"
                    x10_long max__3417 = (x10_long)0x8000000000000000LL;
                    
                    //#line 95 "SW.x10"
                    x10_long dir__3418 = ((x10_long)0ll);
                    
                    //#line 97 "SW.x10"
                    x10_long diagScore__3419;
                    
                    //#line 98 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__3431) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__3427) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 99 "SW.x10"
                        diagScore__3419 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__3431) - (((x10_long)1ll))),
                                              ((j__3427) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 101 "SW.x10"
                        diagScore__3419 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__3431) - (((x10_long)1ll))),
                                              ((j__3427) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 103 "SW.x10"
                    if (((diagScore__3419) > (max__3417)))
                    {
                        
                        //#line 104 "SW.x10"
                        max__3417 = diagScore__3419;
                        
                        //#line 105 "SW.x10"
                        dir__3418 = ((x10_long)0ll);
                    }
                    
                    //#line 108 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__3420 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__3431, j__3427);
                    
                    //#line 109 "SW.x10"
                    x10_long upScore__3421 = upResult__3420->FMGL(first);
                    
                    //#line 110 "SW.x10"
                    if (((upScore__3421) > (max__3417))) {
                        
                        //#line 111 "SW.x10"
                        max__3417 = upScore__3421;
                        
                        //#line 112 "SW.x10"
                        dir__3418 = upResult__3420->FMGL(second);
                    }
                    
                    //#line 115 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__3422 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__3431, j__3427);
                    
                    //#line 116 "SW.x10"
                    x10_long leftScore__3423 = leftResult__3422->FMGL(first);
                    
                    //#line 117 "SW.x10"
                    if (((leftScore__3423) > (max__3417)))
                    {
                        
                        //#line 118 "SW.x10"
                        max__3417 = leftScore__3423;
                        
                        //#line 119 "SW.x10"
                        dir__3418 = leftResult__3422->FMGL(second);
                    }
                    
                    //#line 122 "SW.x10"
                    max__3417 = ((max__3417) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__3417);
                    
                    //#line 124 "SW.x10"
                    if (((max__3417) > (globalMax))) {
                        
                        //#line 125 "SW.x10"
                        globalMax = max__3417;
                        
                        //#line 126 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__3431,
                                                                                      j__3427);
                    }
                    
                    //#line 129 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__3431, j__3427, max__3417);
                    
                    //#line 130 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__3431, j__3427, dir__3418);
                }
            }
            
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
    
    //#line 155 "SW.x10"
    x10_long i__3346min__3448 = ((x10_long)1ll);
    x10_long i__3346max__3449 = ((maxRow) + (maxCol));
    {
        x10_long i__3450;
        for (i__3450 = i__3346min__3448; ((i__3450) <= (i__3346max__3449));
             i__3450 = ((i__3450) + (((x10_long)1ll)))) {
            x10_long line__3451 = i__3450;
            
            //#line 157 "SW.x10"
            x10_long startCol__3445 = ((x10_long)0ll);
            
            //#line 158 "SW.x10"
            if (((((line__3451) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 159 "SW.x10"
                startCol__3445 = ((line__3451) - (maxRow));
            }
            
            //#line 163 "SW.x10"
            x10_long count__3446 = ((line__3451) < (((maxCol) - (startCol__3445))))
              ? (line__3451) : (((maxCol) - (startCol__3445)));
            
            //#line 164 "SW.x10"
            count__3446 = ((count__3446) < (maxRow)) ? (count__3446)
              : (maxRow);
            
            //#line 165 "SW.x10"
            x10_long tempCount__3447 = ((x10_long)0ll);
            {
                
                //#line 166 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__3474 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__3328min__3441 = ((x10_long)0ll);
                        x10_long i__3328max__3442 = ((count__3446) - (((x10_long)1ll)));
                        {
                            x10_long i__3443;
                            for (i__3443 = i__3328min__3441;
                                 ((i__3443) <= (i__3328max__3442));
                                 i__3443 = ((i__3443) + (((x10_long)1ll))))
                            {
                                x10_long k__3444 = i__3443;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(tempCount__3447), &(maxRow), line__3451, k__3444, &(startCol__3445), string1, string2, matrix, simScore, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc5) {
                    {
                        ::x10::lang::CheckedThrowable* ct__3472 =
                          __exc5;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__3472);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__3474);
            }
            
            //#line 220 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3488), line__3451), (&::SW_Strings::sl__3489)), tempCount__3447), (&::SW_Strings::sl__3490)));
        }
    }
    
    //#line 228 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 232 "SW.x10"
void SW::sequentialMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                         x10_long simScore, x10_long gapOpening,
                         x10_long gapExtension) {
    
    //#line 234 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 235 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 237 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 238 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 239 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 240 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 242 "SW.x10"
    x10_long tempCount = ((x10_long)0ll);
    
    //#line 244 "SW.x10"
    x10_long i__3382min__3467 = ((x10_long)1ll);
    x10_long i__3382max__3468 = ((maxRow) + (maxCol));
    {
        x10_long i__3469;
        for (i__3469 = i__3382min__3467; ((i__3469) <= (i__3382max__3468));
             i__3469 = ((i__3469) + (((x10_long)1ll)))) {
            x10_long line__3470 = i__3469;
            
            //#line 246 "SW.x10"
            tempCount = ((tempCount) + (((x10_long)1ll)));
            
            //#line 248 "SW.x10"
            x10_long startCol__3465 = ((x10_long)0ll);
            
            //#line 249 "SW.x10"
            if (((((line__3470) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 250 "SW.x10"
                startCol__3465 = ((line__3470) - (maxRow));
            }
            
            //#line 254 "SW.x10"
            x10_long count__3466 = ((line__3470) < (((maxCol) - (startCol__3465))))
              ? (line__3470) : (((maxCol) - (startCol__3465)));
            
            //#line 255 "SW.x10"
            count__3466 = ((count__3466) < (maxRow)) ? (count__3466)
              : (maxRow);
            
            //#line 257 "SW.x10"
            x10_long i__3364min__3461 = ((x10_long)0ll);
            x10_long i__3364max__3462 = ((count__3466) - (((x10_long)1ll)));
            {
                x10_long i__3463;
                for (i__3463 = i__3364min__3461; ((i__3463) <= (i__3364max__3462));
                     i__3463 = ((i__3463) + (((x10_long)1ll))))
                {
                    x10_long k__3464 = i__3463;
                    
                    //#line 259 "SW.x10"
                    x10_long i__3452 = maxRow;
                    
                    //#line 260 "SW.x10"
                    if (((maxRow) > (line__3470))) {
                        
                        //#line 261 "SW.x10"
                        i__3452 = line__3470;
                    }
                    
                    //#line 264 "SW.x10"
                    i__3452 = ((i__3452) - (k__3464));
                    
                    //#line 265 "SW.x10"
                    x10_long j__3453 = ((((startCol__3465) + (k__3464))) + (((x10_long)1ll)));
                    
                    //#line 268 "SW.x10"
                    x10_long max__3454 = (x10_long)0x8000000000000000LL;
                    
                    //#line 269 "SW.x10"
                    x10_long dir__3455 = ((x10_long)0ll);
                    
                    //#line 271 "SW.x10"
                    x10_long diagScore__3456;
                    
                    //#line 272 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__3452) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__3453) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 273 "SW.x10"
                        diagScore__3456 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__3452) - (((x10_long)1ll))),
                                              ((j__3453) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 275 "SW.x10"
                        diagScore__3456 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__3452) - (((x10_long)1ll))),
                                              ((j__3453) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 277 "SW.x10"
                    if (((diagScore__3456) > (max__3454)))
                    {
                        
                        //#line 278 "SW.x10"
                        max__3454 = diagScore__3456;
                        
                        //#line 279 "SW.x10"
                        dir__3455 = ((x10_long)0ll);
                    }
                    
                    //#line 282 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__3457 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__3452, j__3453);
                    
                    //#line 283 "SW.x10"
                    x10_long upScore__3458 = upResult__3457->FMGL(first);
                    
                    //#line 284 "SW.x10"
                    if (((upScore__3458) > (max__3454))) {
                        
                        //#line 285 "SW.x10"
                        max__3454 = upScore__3458;
                        
                        //#line 286 "SW.x10"
                        dir__3455 = upResult__3457->FMGL(second);
                    }
                    
                    //#line 289 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__3459 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__3452, j__3453);
                    
                    //#line 290 "SW.x10"
                    x10_long leftScore__3460 = leftResult__3459->FMGL(first);
                    
                    //#line 291 "SW.x10"
                    if (((leftScore__3460) > (max__3454)))
                    {
                        
                        //#line 292 "SW.x10"
                        max__3454 = leftScore__3460;
                        
                        //#line 293 "SW.x10"
                        dir__3455 = leftResult__3459->FMGL(second);
                    }
                    
                    //#line 296 "SW.x10"
                    max__3454 = ((max__3454) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__3454);
                    
                    //#line 298 "SW.x10"
                    if (((max__3454) > (globalMax))) {
                        
                        //#line 299 "SW.x10"
                        globalMax = max__3454;
                        
                        //#line 300 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__3452,
                                                                                      j__3453);
                    }
                    
                    //#line 302 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__3452, j__3453, max__3454);
                    
                    //#line 303 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__3452, j__3453, dir__3455);
                }
            }
            
            //#line 310 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3491), line__3470), (&::SW_Strings::sl__3489)), tempCount), (&::SW_Strings::sl__3490)));
        }
    }
    
    //#line 318 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 322 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 323 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 324 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 326 "SW.x10"
    x10_long gapOpening = ((x10_long)0ll);
    
    //#line 327 "SW.x10"
    x10_long gapExtension = ((x10_long)-2ll);
    
    //#line 330 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 332 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__3492);
    
    //#line 333 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__3493);
    
    //#line 335 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 336 "SW.x10"
    ::SW::parallelMatch(string1, string2, simScore, gapOpening,
                        gapExtension);
    
    //#line 337 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 338 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3494), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__3495))));
    
    //#line 340 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 341 "SW.x10"
    ::SW::sequentialMatch(string1, string2, simScore, gapOpening,
                          gapExtension);
    
    //#line 342 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 343 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3496), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__3495))));
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

::x10::lang::String SW_Strings::sl__3487("");
::x10::lang::String SW_Strings::sl__3488("PARALLEL: the loop: ");
::x10::lang::String SW_Strings::sl__3491("SEQUENTIAL: the loop: ");
::x10::lang::String SW_Strings::sl__3493("BBCCCBCADADCBAACBDDDBCBAABBBCBCBBCADAACCCCBCCCCACBABCCBAACBBCCCBCCADACCDADACABCBABDDCADDABDCCBADBCC");
::x10::lang::String SW_Strings::sl__3495("ms");
::x10::lang::String SW_Strings::sl__3489(" had :");
::x10::lang::String SW_Strings::sl__3490(" threads visit it\n");
::x10::lang::String SW_Strings::sl__3494("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__3492("ADDBADCBCADCADDBBDCADCABACCADBBDBADBCABBBAAABDBDABCDADDABABABDBAADCCDDBBAABBACACBDBCBBDCCDABCADDCBD");
::x10::lang::String SW_Strings::sl__3496("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<SW__closure__1>SW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__1::__apply, &SW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW */
/*************************************************/
