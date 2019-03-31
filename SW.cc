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
#include <x10/lang/Math.h>
#include <x10/lang/Double.h>
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
        
        //#line 324 "SW.x10"
        tempCount__4746 = ((tempCount__4746) + (((x10_long)1ll)));
        
        //#line 326 "SW.x10"
        x10_long i__4729 = maxRow;
        
        //#line 327 "SW.x10"
        if (((maxRow) > (line__4750))) {
            
            //#line 328 "SW.x10"
            i__4729 = line__4750;
        }
        
        //#line 330 "SW.x10"
        i__4729 = ((i__4729) - (k__4743));
        
        //#line 331 "SW.x10"
        x10_long j__4730 = ((((startCol__4744) + (k__4743))) + (((x10_long)1ll)));
        
        //#line 333 "SW.x10"
        x10_long max__4731 = (x10_long)0x8000000000000000LL;
        
        //#line 334 "SW.x10"
        x10_long dir__4732 = ((x10_long)0ll);
        
        //#line 336 "SW.x10"
        x10_long diagScore__4733;
        
        //#line 337 "SW.x10"
        x10_char firstChar__4734 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__4729) - (((x10_long)1ll))))));
        
        //#line 338 "SW.x10"
        x10_char secondChar__4735 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__4730) - (((x10_long)1ll))))));
        
        //#line 339 "SW.x10"
        diagScore__4733 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__4729) - (((x10_long)1ll))),
                              ((j__4730) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__4734).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__4735).v))))));
        
        //#line 340 "SW.x10"
        if (((diagScore__4733) > (max__4731))) {
            
            //#line 341 "SW.x10"
            max__4731 = diagScore__4733;
            
            //#line 342 "SW.x10"
            dir__4732 = ((x10_long)0ll);
        }
        
        //#line 345 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__4736 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__4729, j__4730);
        
        //#line 346 "SW.x10"
        x10_long upScore__4737 = upResult__4736->FMGL(first);
        
        //#line 347 "SW.x10"
        if (((upScore__4737) > (max__4731))) {
            
            //#line 348 "SW.x10"
            max__4731 = upScore__4737;
            
            //#line 349 "SW.x10"
            dir__4732 = upResult__4736->FMGL(second);
        }
        
        //#line 352 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__4738 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__4729, j__4730);
        
        //#line 353 "SW.x10"
        x10_long leftScore__4739 = leftResult__4738->FMGL(first);
        
        //#line 354 "SW.x10"
        if (((leftScore__4739) > (max__4731))) {
            
            //#line 355 "SW.x10"
            max__4731 = leftScore__4739;
            
            //#line 356 "SW.x10"
            dir__4732 = leftResult__4738->FMGL(second);
        }
        
        //#line 359 "SW.x10"
        max__4731 = ((max__4731) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__4731);
        
        //#line 361 "SW.x10"
        if (((max__4731) > (globalMax))) {
            
            //#line 362 "SW.x10"
            globalMax = max__4731;
            
            //#line 363 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4729,
                                                                          j__4730);
        }
        
        //#line 365 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__4729,
                                                     j__4730,
                                                     max__4731);
        
        //#line 366 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__4729, j__4730, dir__4732);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> tempCount__4746;
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__4750;
    x10_long k__4743;
    x10aux::captured_struct_lval<x10_long> startCol__4744;
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
        buf.write(this->tempCount__4746);
        buf.write(this->maxRow);
        buf.write(this->line__4750);
        buf.write(this->k__4743);
        buf.write(this->startCol__4744);
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
        x10aux::captured_struct_lval<x10_long> that_tempCount__4746 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__4750 = buf.read<x10_long>();
        x10_long that_k__4743 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__4744 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__1* this_ = new (storage) SW__closure__1(that_tempCount__4746, that_maxRow, that_line__4750, that_k__4743, that_startCol__4744, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> tempCount__4746, x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__4750, x10_long k__4743, x10aux::captured_struct_lval<x10_long> startCol__4744, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : tempCount__4746(tempCount__4746), maxRow(maxRow), line__4750(line__4750), k__4743(k__4743), startCol__4744(startCol__4744), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:323-371";
    }

};

#endif // SW__CLOSURE__1_CLOSURE

//#line 14 "SW.x10"

//#line 16 "SW.x10"

//#line 17 "SW.x10"

//#line 18 "SW.x10"

//#line 20 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 21 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 22 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__4775);
    
    //#line 23 "SW.x10"
    x10_long i__4302min__4643 = ((x10_long)0ll);
    x10_long i__4302max__4644 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__4645;
        for (i__4645 = i__4302min__4643; ((i__4645) <= (i__4302max__4644));
             i__4645 = ((i__4645) + (((x10_long)1ll)))) {
            x10_long i__4646 = i__4645;
            
            //#line 24 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__4646))),
                                         ((x10_char)' ')))) {
                
                //#line 25 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 26 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 27 "SW.x10"
                    currToken = (&::SW_Strings::sl__4775);
                }
                
            } else {
                
                //#line 31 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__4646))));
            }
            
        }
    }
    
    //#line 34 "SW.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 35 "SW.x10"
        tokens->add(currToken);
    }
    
    //#line 37 "SW.x10"
    return tokens;
    
}

//#line 40 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 43 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 44 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 46 "SW.x10"
    x10_long i__4320min__4648 = ((x10_long)0ll);
    x10_long i__4320max__4649 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__4650;
        for (i__4650 = i__4320min__4648; ((i__4650) <= (i__4320max__4649));
             i__4650 = ((i__4650) + (((x10_long)1ll)))) {
            x10_long i__4651 = i__4650;
            
            //#line 47 "SW.x10"
            x10_long score__4647 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__4651, col)) + (((gapExtension) * (((row) - (i__4651))))));
            
            //#line 49 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__4651, col)) <= (((x10_long)0ll))))
            {
                
                //#line 50 "SW.x10"
                score__4647 = ((score__4647) + (gapOpening));
            }
            
            //#line 53 "SW.x10"
            if (((score__4647) > (max))) {
                
                //#line 54 "SW.x10"
                max = score__4647;
                
                //#line 55 "SW.x10"
                gap = ((row) - (i__4651));
            }
            
        }
    }
    
    //#line 58 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 61 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 64 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 65 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 67 "SW.x10"
    x10_long i__4338min__4653 = ((x10_long)0ll);
    x10_long i__4338max__4654 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__4655;
        for (i__4655 = i__4338min__4653; ((i__4655) <= (i__4338max__4654));
             i__4655 = ((i__4655) + (((x10_long)1ll)))) {
            x10_long j__4656 = i__4655;
            
            //#line 69 "SW.x10"
            x10_long score__4652 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__4656)) + (((gapExtension) * (((col) - (j__4656))))));
            
            //#line 70 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__4656)) >= (((x10_long)0ll))))
            {
                
                //#line 71 "SW.x10"
                score__4652 = ((score__4652) + (gapOpening));
            }
            
            //#line 74 "SW.x10"
            if (((score__4652) > (max))) {
                
                //#line 75 "SW.x10"
                max = score__4652;
                
                //#line 76 "SW.x10"
                gap = ((j__4656) - (col));
            }
            
        }
    }
    
    //#line 79 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 82 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 84 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 85 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 86 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__4775);
    
    //#line 87 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__4775);
    
    //#line 89 "SW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 90 "SW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 91 "SW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 92 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 93 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 94 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 95 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 96 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 97 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 98 "SW.x10"
            matchCount = ((matchCount) + (((x10_long)1ll)));
            
            //#line 99 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 100 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 101 "SW.x10"
            x10_long i__4356min__4657 = ((x10_long)0ll);
            x10_long i__4356max__4658 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4659;
                for (i__4659 = i__4356min__4657; ((i__4659) <= (i__4356max__4658));
                     i__4659 = ((i__4659) + (((x10_long)1ll))))
                {
                    x10_long k__4660 = i__4659;
                    
                    //#line 102 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 103 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__4660))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 104 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 106 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 107 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        } else {
            
            //#line 109 "SW.x10"
            x10_long i__4374min__4661 = ((x10_long)0ll);
            x10_long i__4374max__4662 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4663;
                for (i__4663 = i__4374min__4661; ((i__4663) <= (i__4374max__4662));
                     i__4663 = ((i__4663) + (((x10_long)1ll))))
                {
                    x10_long k__4664 = i__4663;
                    
                    //#line 110 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 111 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__4664))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 112 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 114 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 115 "SW.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        }
        
    }
    
    //#line 118 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4776), matchCount), (&::SW_Strings::sl__4777)), stringLength)));
    
    //#line 119 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4778), gapCount), (&::SW_Strings::sl__4777)), stringLength)));
    
    //#line 120 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__4779), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 121 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 122 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 125 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 128 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 129 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 130 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 131 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 132 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 133 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 135 "SW.x10"
    x10_long i__4410min__4686 = ((x10_long)1ll);
    x10_long i__4410max__4687 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4688;
        for (i__4688 = i__4410min__4686; ((i__4688) <= (i__4410max__4687));
             i__4688 = ((i__4688) + (((x10_long)1ll)))) {
            x10_long i__4689 = i__4688;
            
            //#line 136 "SW.x10"
            x10_long i__4392min__4674 = ((x10_long)1ll);
            x10_long i__4392max__4675 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4676;
                for (i__4676 = i__4392min__4674; ((i__4676) <= (i__4392max__4675));
                     i__4676 = ((i__4676) + (((x10_long)1ll))))
                {
                    x10_long j__4677 = i__4676;
                    
                    //#line 137 "SW.x10"
                    x10_long max__4665 = (x10_long)0x8000000000000000LL;
                    
                    //#line 138 "SW.x10"
                    x10_long dir__4666 = ((x10_long)0ll);
                    
                    //#line 139 "SW.x10"
                    x10_long diagScore__4667;
                    
                    //#line 140 "SW.x10"
                    x10_char firstChar__4668 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__4689) - (((x10_long)1ll))))));
                    
                    //#line 141 "SW.x10"
                    x10_char secondChar__4669 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__4677) - (((x10_long)1ll))))));
                    
                    //#line 142 "SW.x10"
                    diagScore__4667 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__4689) - (((x10_long)1ll))),
                                          ((j__4677) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__4668).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__4669).v))))));
                    
                    //#line 143 "SW.x10"
                    if (((diagScore__4667) > (max__4665)))
                    {
                        
                        //#line 144 "SW.x10"
                        max__4665 = diagScore__4667;
                        
                        //#line 145 "SW.x10"
                        dir__4666 = ((x10_long)0ll);
                    }
                    
                    //#line 148 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__4670 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__4689, j__4677);
                    
                    //#line 149 "SW.x10"
                    x10_long upScore__4671 = upResult__4670->FMGL(first);
                    
                    //#line 150 "SW.x10"
                    if (((upScore__4671) > (max__4665))) {
                        
                        //#line 151 "SW.x10"
                        max__4665 = upScore__4671;
                        
                        //#line 152 "SW.x10"
                        dir__4666 = upResult__4670->FMGL(second);
                    }
                    
                    //#line 154 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__4672 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__4689, j__4677);
                    
                    //#line 155 "SW.x10"
                    x10_long leftScore__4673 = leftResult__4672->FMGL(first);
                    
                    //#line 156 "SW.x10"
                    if (((leftScore__4673) > (max__4665)))
                    {
                        
                        //#line 157 "SW.x10"
                        max__4665 = leftScore__4673;
                        
                        //#line 158 "SW.x10"
                        dir__4666 = leftResult__4672->FMGL(second);
                    }
                    
                    //#line 160 "SW.x10"
                    max__4665 = ((max__4665) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__4665);
                    
                    //#line 162 "SW.x10"
                    if (((max__4665) > (globalMax))) {
                        
                        //#line 163 "SW.x10"
                        globalMax = max__4665;
                        
                        //#line 164 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4689,
                                                                                      j__4677);
                    }
                    
                    //#line 167 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__4689, j__4677, max__4665);
                    
                    //#line 168 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__4689, j__4677, dir__4666);
                }
            }
            
        }
    }
    
    //#line 172 "SW.x10"
    x10_long i__4446min__4690 = ((x10_long)0ll);
    x10_long i__4446max__4691 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4692;
        for (i__4692 = i__4446min__4690; ((i__4692) <= (i__4446max__4691));
             i__4692 = ((i__4692) + (((x10_long)1ll)))) {
            x10_long i__4693 = i__4692;
            
            //#line 173 "SW.x10"
            x10_long i__4428min__4678 = ((x10_long)0ll);
            x10_long i__4428max__4679 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4680;
                for (i__4680 = i__4428min__4678; ((i__4680) <= (i__4428max__4679));
                     i__4680 = ((i__4680) + (((x10_long)1ll))))
                {
                    x10_long j__4681 = i__4680;
                    
                    //#line 174 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__4693,
                                                    j__4681), (&::SW_Strings::sl__4780)));
                }
            }
            
            //#line 176 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 178 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
    
    //#line 179 "SW.x10"
    x10_long i__4482min__4694 = ((x10_long)0ll);
    x10_long i__4482max__4695 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__4696;
        for (i__4696 = i__4482min__4694; ((i__4696) <= (i__4482max__4695));
             i__4696 = ((i__4696) + (((x10_long)1ll)))) {
            x10_long i__4697 = i__4696;
            
            //#line 180 "SW.x10"
            x10_long i__4464min__4682 = ((x10_long)0ll);
            x10_long i__4464max__4683 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__4684;
                for (i__4684 = i__4464min__4682; ((i__4684) <= (i__4464max__4683));
                     i__4684 = ((i__4684) + (((x10_long)1ll))))
                {
                    x10_long j__4685 = i__4684;
                    
                    //#line 181 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(directions->x10::array::Array_2<x10_long>::__apply(
                                                    i__4697,
                                                    j__4685), (&::SW_Strings::sl__4780)));
                }
            }
            
            //#line 183 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 186 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 189 "SW.x10"
void SW::parallelMatch3(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 191 "SW.x10"
    x10_long cutoff = ((x10_long)2ll);
    
    //#line 192 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 193 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 195 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 196 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 198 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 199 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 200 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4775), maxRow), (&::SW_Strings::sl__4781)), maxCol)));
    
    //#line 202 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 203 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 205 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 206 "SW.x10"
    x10_long i__4554min__4725 = ((x10_long)1ll);
    x10_long i__4554max__4726 = ((maxRow) + (maxCol));
    {
        x10_long i__4727;
        for (i__4727 = i__4554min__4725; ((i__4727) <= (i__4554max__4726));
             i__4727 = ((i__4727) + (((x10_long)1ll)))) {
            x10_long line__4728 = i__4727;
            
            //#line 208 "SW.x10"
            x10_long startCol__4723 = ((x10_long)0ll);
            
            //#line 209 "SW.x10"
            if (((((line__4728) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 210 "SW.x10"
                startCol__4723 = ((line__4728) - (maxRow));
            }
            
            //#line 213 "SW.x10"
            x10_long count__4724 = ((line__4728) < (((maxCol) - (startCol__4723))))
              ? (line__4728) : (((maxCol) - (startCol__4723)));
            
            //#line 214 "SW.x10"
            count__4724 = ((count__4724) < (maxRow)) ? (count__4724)
              : (maxRow);
            
            //#line 217 "SW.x10"
            x10_long i__4536min__4719 = ((x10_long)0ll);
            x10_long i__4536max__4720 = ((count__4724) - (((x10_long)1ll)));
            {
                x10_long i__4721;
                for (i__4721 = i__4536min__4719; ((i__4721) <= (i__4536max__4720));
                     i__4721 = ((i__4721) + (((x10_long)1ll))))
                {
                    x10_long k__4722 = i__4721;
                    
                    //#line 219 "SW.x10"
                    x10_long i__4713 = maxRow;
                    
                    //#line 220 "SW.x10"
                    if (((maxRow) > (line__4728))) {
                        
                        //#line 221 "SW.x10"
                        i__4713 = line__4728;
                    }
                    
                    //#line 223 "SW.x10"
                    i__4713 = ((i__4713) - (k__4722));
                    
                    //#line 224 "SW.x10"
                    x10_long j__4714 = ((((startCol__4723) + (k__4722))) + (((x10_long)1ll)));
                    
                    //#line 226 "SW.x10"
                    x10_long max__4715 = (x10_long)0x8000000000000000LL;
                    
                    //#line 227 "SW.x10"
                    x10_long dir__4716 = ((x10_long)0ll);
                    
                    //#line 230 "SW.x10"
                    i__4713 = ((((((i__4713) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
                    
                    //#line 231 "SW.x10"
                    j__4714 = ((((((j__4714) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
                    
                    //#line 233 "SW.x10"
                    x10_long cellMaxRow__4717 = ((((i__4713) + (cutoff))) - (((x10_long)1ll)));
                    
                    //#line 234 "SW.x10"
                    x10_long cellMaxCol__4718 = ((((j__4714) + (cutoff))) - (((x10_long)1ll)));
                    
                    //#line 235 "SW.x10"
                    if (((cellMaxRow__4717) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
                    {
                        
                        //#line 236 "SW.x10"
                        cellMaxRow__4717 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
                    }
                    
                    //#line 238 "SW.x10"
                    if (((cellMaxCol__4718) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
                    {
                        
                        //#line 239 "SW.x10"
                        cellMaxCol__4718 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
                    }
                    
                    //#line 242 "SW.x10"
                    x10_long i__4518min__4709 = i__4713;
                    x10_long i__4518max__4710 = cellMaxRow__4717;
                    {
                        x10_long i__4711;
                        for (i__4711 = i__4518min__4709; ((i__4711) <= (i__4518max__4710));
                             i__4711 = ((i__4711) + (((x10_long)1ll))))
                        {
                            x10_long a__4712 = i__4711;
                            
                            //#line 243 "SW.x10"
                            x10_long i__4500min__4705 = j__4714;
                            x10_long i__4500max__4706 = cellMaxCol__4718;
                            {
                                x10_long i__4707;
                                for (i__4707 = i__4500min__4705;
                                     ((i__4707) <= (i__4500max__4706));
                                     i__4707 = ((i__4707) + (((x10_long)1ll))))
                                {
                                    x10_long b__4708 = i__4707;
                                    
                                    //#line 244 "SW.x10"
                                    max__4715 = (x10_long)0x8000000000000000LL;
                                    
                                    //#line 245 "SW.x10"
                                    dir__4716 = ((x10_long)0ll);
                                    
                                    //#line 247 "SW.x10"
                                    visited = ((visited) + (((x10_long)1ll)));
                                    
                                    //#line 249 "SW.x10"
                                    x10_long diagScore__4698;
                                    
                                    //#line 250 "SW.x10"
                                    x10_char firstChar__4699 =
                                      ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                        ((x10_int) (((a__4712) - (((x10_long)1ll))))));
                                    
                                    //#line 251 "SW.x10"
                                    x10_char secondChar__4700 =
                                      ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                        ((x10_int) (((b__4708) - (((x10_long)1ll))))));
                                    
                                    //#line 252 "SW.x10"
                                    diagScore__4698 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                                          ((a__4712) - (((x10_long)1ll))),
                                                          ((b__4708) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                                 ((x10_long)(((x10_int) (firstChar__4699).v))),
                                                                                                 ((x10_long)(((x10_int) (secondChar__4700).v))))));
                                    
                                    //#line 254 "SW.x10"
                                    if (((diagScore__4698) > (max__4715)))
                                    {
                                        
                                        //#line 255 "SW.x10"
                                        max__4715 = diagScore__4698;
                                        
                                        //#line 256 "SW.x10"
                                        dir__4716 = ((x10_long)0ll);
                                    }
                                    
                                    //#line 259 "SW.x10"
                                    ::x10::util::Pair<x10_long, x10_long> upResult__4701 =
                                      ::SW::checkUpwards(
                                        matrix, directions,
                                        gapOpening, gapExtension,
                                        a__4712, b__4708);
                                    
                                    //#line 260 "SW.x10"
                                    x10_long upScore__4702 =
                                      upResult__4701->FMGL(first);
                                    
                                    //#line 262 "SW.x10"
                                    if (((upScore__4702) > (max__4715)))
                                    {
                                        
                                        //#line 263 "SW.x10"
                                        max__4715 = upScore__4702;
                                        
                                        //#line 264 "SW.x10"
                                        dir__4716 = upResult__4701->FMGL(second);
                                    }
                                    
                                    //#line 267 "SW.x10"
                                    ::x10::util::Pair<x10_long, x10_long> leftResult__4703 =
                                      ::SW::checkLeftwards(
                                        matrix, directions,
                                        gapOpening, gapExtension,
                                        a__4712, b__4708);
                                    
                                    //#line 268 "SW.x10"
                                    x10_long leftScore__4704 =
                                      leftResult__4703->FMGL(first);
                                    
                                    //#line 270 "SW.x10"
                                    if (((leftScore__4704) > (max__4715)))
                                    {
                                        
                                        //#line 271 "SW.x10"
                                        max__4715 = leftScore__4704;
                                        
                                        //#line 272 "SW.x10"
                                        dir__4716 = leftResult__4703->FMGL(second);
                                    }
                                    
                                    //#line 275 "SW.x10"
                                    max__4715 = ((max__4715) < (((x10_long)0ll)))
                                      ? (((x10_long)0ll))
                                      : (max__4715);
                                    
                                    //#line 277 "SW.x10"
                                    if (((max__4715) > (globalMax)))
                                    {
                                        
                                        //#line 278 "SW.x10"
                                        globalMax = max__4715;
                                        
                                        //#line 279 "SW.x10"
                                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__4712,
                                                                                                      b__4708);
                                    }
                                    
                                    //#line 281 "SW.x10"
                                    matrix->x10::array::Array_2<x10_long>::__set(
                                      a__4712, b__4708, max__4715);
                                    
                                    //#line 282 "SW.x10"
                                    directions->x10::array::Array_2<x10_long>::__set(
                                      a__4712, b__4708, dir__4716);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 297 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 300 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 302 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 303 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 305 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 306 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 307 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 308 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 310 "SW.x10"
    x10_long i__4590min__4747 = ((x10_long)1ll);
    x10_long i__4590max__4748 = ((maxRow) + (maxCol));
    {
        x10_long i__4749;
        for (i__4749 = i__4590min__4747; ((i__4749) <= (i__4590max__4748));
             i__4749 = ((i__4749) + (((x10_long)1ll)))) {
            x10_long line__4750 = i__4749;
            
            //#line 312 "SW.x10"
            x10_long startCol__4744 = ((x10_long)0ll);
            
            //#line 313 "SW.x10"
            if (((((line__4750) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 314 "SW.x10"
                startCol__4744 = ((line__4750) - (maxRow));
            }
            
            //#line 317 "SW.x10"
            x10_long count__4745 = ((line__4750) < (((maxCol) - (startCol__4744))))
              ? (line__4750) : (((maxCol) - (startCol__4744)));
            
            //#line 318 "SW.x10"
            count__4745 = ((count__4745) < (maxRow)) ? (count__4745)
              : (maxRow);
            
            //#line 319 "SW.x10"
            x10_long tempCount__4746 = ((x10_long)0ll);
            {
                
                //#line 322 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4762 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4572min__4740 = ((x10_long)0ll);
                        x10_long i__4572max__4741 = ((count__4745) - (((x10_long)1ll)));
                        {
                            x10_long i__4742;
                            for (i__4742 = i__4572min__4740;
                                 ((i__4742) <= (i__4572max__4741));
                                 i__4742 = ((i__4742) + (((x10_long)1ll))))
                            {
                                x10_long k__4743 = i__4742;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(tempCount__4746), &(maxRow), line__4750, k__4743, &(startCol__4744), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4760 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4760);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4762);
            }
        }
    }
    
    //#line 380 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 384 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 385 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 386 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 387 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 388 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 389 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 391 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__4775);
    
    //#line 392 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__4775);
    
    //#line 394 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 395 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 396 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 397 "SW.x10"
    line = reader1->readLine();
    
    //#line 398 "SW.x10"
    while (true) {
        
        //#line 399 "SW.x10"
        try {
            
            //#line 400 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc9);
                {
                    
                    //#line 403 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 405 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 407 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 408 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 409 "SW.x10"
    line = reader2->readLine();
    
    //#line 410 "SW.x10"
    while (true) {
        
        //#line 411 "SW.x10"
        try {
            
            //#line 412 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 415 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 417 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 420 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 421 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 423 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 424 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 425 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 426 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 428 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 429 "SW.x10"
    x10_long i__4608min__4755 = ((x10_long)0ll);
    x10_long i__4608max__4756 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__4757;
        for (i__4757 = i__4608min__4755; ((i__4757) <= (i__4608max__4756));
             i__4757 = ((i__4757) + (((x10_long)1ll)))) {
            x10_long i__4758 = i__4757;
            
            //#line 430 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__4758))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 432 "SW.x10"
    while (true) {
        
        //#line 433 "SW.x10"
        try {
            
            //#line 434 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 437 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 439 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 440 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 441 "SW.x10"
        x10_long i__4626min__4751 = ((x10_long)1ll);
        x10_long i__4626max__4752 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__4753;
            for (i__4753 = i__4626min__4751; ((i__4753) <= (i__4626max__4752));
                 i__4753 = ((i__4753) + (((x10_long)1ll))))
            {
                x10_long i__4754 = i__4753;
                
                //#line 442 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__4754) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__4754)))));
            }
        }
        
    }
    
    //#line 448 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 449 "SW.x10"
    ::SW::parallelMatch(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 450 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 451 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4782), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4783))));
    
    //#line 453 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 454 "SW.x10"
    ::SW::parallelMatch3(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 455 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 456 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4784), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4783))));
    
    //#line 458 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 459 "SW.x10"
    ::SW::match(string1, string2, blosum, gapOpening, gapExtension);
    
    //#line 460 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 461 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4785), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4783))));
}

//#line 11 "SW.x10"
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

::x10::lang::String SW_Strings::sl__4775("");
::x10::lang::String SW_Strings::sl__4778("Gaps: ");
::x10::lang::String SW_Strings::sl__4780(" ");
::x10::lang::String SW_Strings::sl__4781(", ");
::x10::lang::String SW_Strings::sl__4784("New Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4776("Identity: ");
::x10::lang::String SW_Strings::sl__4783("ms");
::x10::lang::String SW_Strings::sl__4782("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4779("Score: ");
::x10::lang::String SW_Strings::sl__4777("/");
::x10::lang::String SW_Strings::sl__4785("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<SW__closure__1>SW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__1::__apply, &SW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW */
/*************************************************/
