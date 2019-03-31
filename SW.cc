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
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Rail.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Exception.h>
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
        
        //#line 205 "SW.x10"
        tempCount__3614 = ((tempCount__3614) + (((x10_long)1ll)));
        
        //#line 207 "SW.x10"
        x10_long i__3597 = maxRow;
        
        //#line 208 "SW.x10"
        if (((maxRow) > (line__3618))) {
            
            //#line 209 "SW.x10"
            i__3597 = line__3618;
        }
        
        //#line 212 "SW.x10"
        i__3597 = ((i__3597) - (k__3611));
        
        //#line 213 "SW.x10"
        x10_long j__3598 = ((((startCol__3612) + (k__3611))) + (((x10_long)1ll)));
        
        //#line 216 "SW.x10"
        x10_long max__3599 = (x10_long)0x8000000000000000LL;
        
        //#line 217 "SW.x10"
        x10_long dir__3600 = ((x10_long)0ll);
        
        //#line 219 "SW.x10"
        x10_long diagScore__3601;
        
        //#line 220 "SW.x10"
        x10_char firstChar__3602 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__3597) - (((x10_long)1ll))))));
        
        //#line 221 "SW.x10"
        x10_char secondChar__3603 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__3598) - (((x10_long)1ll))))));
        
        //#line 222 "SW.x10"
        diagScore__3601 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__3597) - (((x10_long)1ll))),
                              ((j__3598) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__3602).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__3603).v))))));
        
        //#line 223 "SW.x10"
        if (((diagScore__3601) > (max__3599))) {
            
            //#line 224 "SW.x10"
            max__3599 = diagScore__3601;
            
            //#line 225 "SW.x10"
            dir__3600 = ((x10_long)0ll);
        }
        
        //#line 228 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__3604 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__3597, j__3598);
        
        //#line 229 "SW.x10"
        x10_long upScore__3605 = upResult__3604->FMGL(first);
        
        //#line 230 "SW.x10"
        if (((upScore__3605) > (max__3599))) {
            
            //#line 231 "SW.x10"
            max__3599 = upScore__3605;
            
            //#line 232 "SW.x10"
            dir__3600 = upResult__3604->FMGL(second);
        }
        
        //#line 235 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__3606 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__3597, j__3598);
        
        //#line 236 "SW.x10"
        x10_long leftScore__3607 = leftResult__3606->FMGL(first);
        
        //#line 237 "SW.x10"
        if (((leftScore__3607) > (max__3599))) {
            
            //#line 238 "SW.x10"
            max__3599 = leftScore__3607;
            
            //#line 239 "SW.x10"
            dir__3600 = leftResult__3606->FMGL(second);
        }
        
        //#line 242 "SW.x10"
        max__3599 = ((max__3599) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__3599);
        
        //#line 244 "SW.x10"
        if (((max__3599) > (globalMax))) {
            
            //#line 245 "SW.x10"
            globalMax = max__3599;
            
            //#line 246 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__3597,
                                                                          j__3598);
        }
        
        //#line 248 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__3597,
                                                     j__3598,
                                                     max__3599);
        
        //#line 249 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__3597, j__3598, dir__3600);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> tempCount__3614;
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__3618;
    x10_long k__3611;
    x10aux::captured_struct_lval<x10_long> startCol__3612;
    ::x10::lang::String* string1;
    ::x10::lang::String* string2;
    ::x10::array::Array_2<x10_long>* matrix;
    ::x10::array::Array_2<x10_long>* blosum;
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
        buf.write(this->tempCount__3614);
        buf.write(this->maxRow);
        buf.write(this->line__3618);
        buf.write(this->k__3611);
        buf.write(this->startCol__3612);
        buf.write(this->string1);
        buf.write(this->string2);
        buf.write(this->matrix);
        buf.write(this->blosum);
        buf.write(this->directions);
        buf.write(this->gapOpening);
        buf.write(this->gapExtension);
        buf.write(this->globalMax);
        buf.write(this->maxCoordinates);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        SW__closure__1* storage = ::x10aux::alloc_z<SW__closure__1>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_tempCount__3614 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__3618 = buf.read<x10_long>();
        x10_long that_k__3611 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__3612 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__1* this_ = new (storage) SW__closure__1(that_tempCount__3614, that_maxRow, that_line__3618, that_k__3611, that_startCol__3612, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> tempCount__3614, x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__3618, x10_long k__3611, x10aux::captured_struct_lval<x10_long> startCol__3612, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : tempCount__3614(tempCount__3614), maxRow(maxRow), line__3618(line__3618), k__3611(k__3611), startCol__3612(startCol__3612), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:204-254";
    }

};

#endif // SW__CLOSURE__1_CLOSURE

//#line 13 "SW.x10"

//#line 15 "SW.x10"

//#line 16 "SW.x10"

//#line 17 "SW.x10"

//#line 19 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 20 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 21 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__3643);
    
    //#line 22 "SW.x10"
    x10_long i__3317min__3550 = ((x10_long)0ll);
    x10_long i__3317max__3551 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__3552;
        for (i__3552 = i__3317min__3550; ((i__3552) <= (i__3317max__3551));
             i__3552 = ((i__3552) + (((x10_long)1ll)))) {
            x10_long i__3553 = i__3552;
            
            //#line 23 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__3553))),
                                         ((x10_char)' ')))) {
                
                //#line 24 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 25 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 26 "SW.x10"
                    currToken = (&::SW_Strings::sl__3643);
                }
                
            } else {
                
                //#line 30 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__3553))));
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
    x10_long i__3335min__3555 = ((x10_long)0ll);
    x10_long i__3335max__3556 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__3557;
        for (i__3557 = i__3335min__3555; ((i__3557) <= (i__3335max__3556));
             i__3557 = ((i__3557) + (((x10_long)1ll)))) {
            x10_long i__3558 = i__3557;
            
            //#line 46 "SW.x10"
            x10_long score__3554 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__3558, col)) + (((gapExtension) * (((row) - (i__3558))))));
            
            //#line 48 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__3558, col)) <= (((x10_long)0ll))))
            {
                
                //#line 49 "SW.x10"
                score__3554 = ((score__3554) + (gapOpening));
            }
            
            //#line 52 "SW.x10"
            if (((score__3554) > (max))) {
                
                //#line 53 "SW.x10"
                max = score__3554;
                
                //#line 54 "SW.x10"
                gap = ((row) - (i__3558));
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
    x10_long i__3353min__3560 = ((x10_long)0ll);
    x10_long i__3353max__3561 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__3562;
        for (i__3562 = i__3353min__3560; ((i__3562) <= (i__3353max__3561));
             i__3562 = ((i__3562) + (((x10_long)1ll)))) {
            x10_long j__3563 = i__3562;
            
            //#line 68 "SW.x10"
            x10_long score__3559 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__3563)) + (((gapExtension) * (((col) - (j__3563))))));
            
            //#line 69 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__3563)) >= (((x10_long)0ll))))
            {
                
                //#line 70 "SW.x10"
                score__3559 = ((score__3559) + (gapOpening));
            }
            
            //#line 73 "SW.x10"
            if (((score__3559) > (max))) {
                
                //#line 74 "SW.x10"
                max = score__3559;
                
                //#line 75 "SW.x10"
                gap = ((j__3563) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__3643);
    
    //#line 86 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__3643);
    
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
            x10_long i__3371min__3564 = ((x10_long)0ll);
            x10_long i__3371max__3565 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__3566;
                for (i__3566 = i__3371min__3564; ((i__3566) <= (i__3371max__3565));
                     i__3566 = ((i__3566) + (((x10_long)1ll))))
                {
                    x10_long k__3567 = i__3566;
                    
                    //#line 101 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 102 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__3567))) - (((x10_long)1ll)))))), result1);
                    
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
            x10_long i__3389min__3568 = ((x10_long)0ll);
            x10_long i__3389max__3569 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__3570;
                for (i__3570 = i__3389min__3568; ((i__3570) <= (i__3389max__3569));
                     i__3570 = ((i__3570) + (((x10_long)1ll))))
                {
                    x10_long k__3571 = i__3570;
                    
                    //#line 109 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 110 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__3571))) - (((x10_long)1ll)))))), result2);
                    
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
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3644), matchCount), (&::SW_Strings::sl__3645)), stringLength)));
    
    //#line 118 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3646), gapCount), (&::SW_Strings::sl__3645)), stringLength)));
    
    //#line 119 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__3647), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
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
    
    //#line 127 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 128 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 129 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 130 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 131 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 132 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 134 "SW.x10"
    x10_long i__3425min__3589 = ((x10_long)1ll);
    x10_long i__3425max__3590 = ((x10_long)(S1_SIZE));
    {
        x10_long i__3591;
        for (i__3591 = i__3425min__3589; ((i__3591) <= (i__3425max__3590));
             i__3591 = ((i__3591) + (((x10_long)1ll)))) {
            x10_long i__3592 = i__3591;
            
            //#line 135 "SW.x10"
            x10_long i__3407min__3581 = ((x10_long)1ll);
            x10_long i__3407max__3582 = ((x10_long)(S2_SIZE));
            {
                x10_long i__3583;
                for (i__3583 = i__3407min__3581; ((i__3583) <= (i__3407max__3582));
                     i__3583 = ((i__3583) + (((x10_long)1ll))))
                {
                    x10_long j__3584 = i__3583;
                    
                    //#line 136 "SW.x10"
                    x10_long max__3572 = (x10_long)0x8000000000000000LL;
                    
                    //#line 137 "SW.x10"
                    x10_long dir__3573 = ((x10_long)0ll);
                    
                    //#line 138 "SW.x10"
                    x10_long diagScore__3574;
                    
                    //#line 139 "SW.x10"
                    x10_char firstChar__3575 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__3592) - (((x10_long)1ll))))));
                    
                    //#line 140 "SW.x10"
                    x10_char secondChar__3576 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__3584) - (((x10_long)1ll))))));
                    
                    //#line 141 "SW.x10"
                    diagScore__3574 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__3592) - (((x10_long)1ll))),
                                          ((j__3584) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__3575).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__3576).v))))));
                    
                    //#line 142 "SW.x10"
                    if (((diagScore__3574) > (max__3572)))
                    {
                        
                        //#line 143 "SW.x10"
                        max__3572 = diagScore__3574;
                        
                        //#line 144 "SW.x10"
                        dir__3573 = ((x10_long)0ll);
                    }
                    
                    //#line 147 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__3577 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__3592, j__3584);
                    
                    //#line 148 "SW.x10"
                    x10_long upScore__3578 = upResult__3577->FMGL(first);
                    
                    //#line 149 "SW.x10"
                    if (((upScore__3578) > (max__3572))) {
                        
                        //#line 150 "SW.x10"
                        max__3572 = upScore__3578;
                        
                        //#line 151 "SW.x10"
                        dir__3573 = upResult__3577->FMGL(second);
                    }
                    
                    //#line 153 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__3579 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__3592, j__3584);
                    
                    //#line 154 "SW.x10"
                    x10_long leftScore__3580 = leftResult__3579->FMGL(first);
                    
                    //#line 155 "SW.x10"
                    if (((leftScore__3580) > (max__3572)))
                    {
                        
                        //#line 156 "SW.x10"
                        max__3572 = leftScore__3580;
                        
                        //#line 157 "SW.x10"
                        dir__3573 = leftResult__3579->FMGL(second);
                    }
                    
                    //#line 159 "SW.x10"
                    max__3572 = ((max__3572) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__3572);
                    
                    //#line 161 "SW.x10"
                    if (((max__3572) > (globalMax))) {
                        
                        //#line 162 "SW.x10"
                        globalMax = max__3572;
                        
                        //#line 163 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__3592,
                                                                                      j__3584);
                    }
                    
                    //#line 166 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__3592, j__3584, max__3572);
                    
                    //#line 167 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__3592, j__3584, dir__3573);
                }
            }
            
        }
    }
    
    //#line 171 "SW.x10"
    x10_long i__3461min__3593 = ((x10_long)0ll);
    x10_long i__3461max__3594 = ((x10_long)(S1_SIZE));
    {
        x10_long i__3595;
        for (i__3595 = i__3461min__3593; ((i__3595) <= (i__3461max__3594));
             i__3595 = ((i__3595) + (((x10_long)1ll)))) {
            x10_long i__3596 = i__3595;
            
            //#line 172 "SW.x10"
            x10_long i__3443min__3585 = ((x10_long)0ll);
            x10_long i__3443max__3586 = ((x10_long)(S2_SIZE));
            {
                x10_long i__3587;
                for (i__3587 = i__3443min__3585; ((i__3587) <= (i__3443max__3586));
                     i__3587 = ((i__3587) + (((x10_long)1ll))))
                {
                    x10_long j__3588 = i__3587;
                    
                }
            }
            
        }
    }
    
    //#line 178 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 181 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 183 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 184 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 186 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 187 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 188 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 189 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 192 "SW.x10"
    x10_long i__3497min__3615 = ((x10_long)1ll);
    x10_long i__3497max__3616 = ((maxRow) + (maxCol));
    {
        x10_long i__3617;
        for (i__3617 = i__3497min__3615; ((i__3617) <= (i__3497max__3616));
             i__3617 = ((i__3617) + (((x10_long)1ll)))) {
            x10_long line__3618 = i__3617;
            
            //#line 194 "SW.x10"
            x10_long startCol__3612 = ((x10_long)0ll);
            
            //#line 195 "SW.x10"
            if (((((line__3618) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 196 "SW.x10"
                startCol__3612 = ((line__3618) - (maxRow));
            }
            
            //#line 200 "SW.x10"
            x10_long count__3613 = ((line__3618) < (((maxCol) - (startCol__3612))))
              ? (line__3618) : (((maxCol) - (startCol__3612)));
            
            //#line 201 "SW.x10"
            count__3613 = ((count__3613) < (maxRow)) ? (count__3613)
              : (maxRow);
            
            //#line 202 "SW.x10"
            x10_long tempCount__3614 = ((x10_long)0ll);
            {
                
                //#line 203 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__3630 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__3479min__3608 = ((x10_long)0ll);
                        x10_long i__3479max__3609 = ((count__3613) - (((x10_long)1ll)));
                        {
                            x10_long i__3610;
                            for (i__3610 = i__3479min__3608;
                                 ((i__3610) <= (i__3479max__3609));
                                 i__3610 = ((i__3610) + (((x10_long)1ll))))
                            {
                                x10_long k__3611 = i__3610;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(tempCount__3614), &(maxRow), line__3618, k__3611, &(startCol__3612), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc6) {
                    {
                        ::x10::lang::CheckedThrowable* ct__3628 =
                          __exc6;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__3628);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__3630);
            }
            
            //#line 255 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3648), line__3618), (&::SW_Strings::sl__3649)), tempCount__3614), (&::SW_Strings::sl__3650)));
        }
    }
    
    //#line 263 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 267 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 268 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 269 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 270 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 271 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 272 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 274 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__3643);
    
    //#line 275 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__3643);
    
    //#line 277 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 278 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 279 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 280 "SW.x10"
    line = reader1->readLine();
    
    //#line 281 "SW.x10"
    while (true) {
        
        //#line 282 "SW.x10"
        try {
            
            //#line 283 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc8) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc8)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc8);
                {
                    
                    //#line 286 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 288 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 290 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 291 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 292 "SW.x10"
    line = reader2->readLine();
    
    //#line 293 "SW.x10"
    while (true) {
        
        //#line 294 "SW.x10"
        try {
            
            //#line 295 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc9);
                {
                    
                    //#line 298 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 300 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 303 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 304 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 306 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 307 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 308 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 309 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 311 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 312 "SW.x10"
    x10_long i__3515min__3623 = ((x10_long)0ll);
    x10_long i__3515max__3624 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__3625;
        for (i__3625 = i__3515min__3623; ((i__3625) <= (i__3515max__3624));
             i__3625 = ((i__3625) + (((x10_long)1ll)))) {
            x10_long i__3626 = i__3625;
            
            //#line 313 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__3626))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 315 "SW.x10"
    while (true) {
        
        //#line 316 "SW.x10"
        try {
            
            //#line 317 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 320 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 322 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 323 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 324 "SW.x10"
        x10_long i__3533min__3619 = ((x10_long)1ll);
        x10_long i__3533max__3620 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__3621;
            for (i__3621 = i__3533min__3619; ((i__3621) <= (i__3533max__3620));
                 i__3621 = ((i__3621) + (((x10_long)1ll))))
            {
                x10_long i__3622 = i__3621;
                
                //#line 325 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__3622) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__3622)))));
            }
        }
        
    }
    
    //#line 329 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 330 "SW.x10"
    ::SW::parallelMatch(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 331 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 332 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3651), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__3652))));
    
    //#line 335 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 336 "SW.x10"
    ::SW::match(string1, string2, blosum, gapOpening, gapExtension);
    
    //#line 337 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 338 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__3653), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__3652))));
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

::x10::lang::String SW_Strings::sl__3643("");
::x10::lang::String SW_Strings::sl__3646("Gaps: ");
::x10::lang::String SW_Strings::sl__3648("PARALLEL: the loop: ");
::x10::lang::String SW_Strings::sl__3644("Identity: ");
::x10::lang::String SW_Strings::sl__3652("ms");
::x10::lang::String SW_Strings::sl__3649(" had :");
::x10::lang::String SW_Strings::sl__3650(" threads visit it\n");
::x10::lang::String SW_Strings::sl__3651("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__3647("Score: ");
::x10::lang::String SW_Strings::sl__3645("/");
::x10::lang::String SW_Strings::sl__3653("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<SW__closure__1>SW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__1::__apply, &SW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW */
/*************************************************/
