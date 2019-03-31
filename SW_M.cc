/*************************************************/
/* START of SW_M */
#include <SW_M.h>

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
#ifndef SW_M__CLOSURE__1_CLOSURE
#define SW_M__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SW_M__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SW_M__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 262 "SW_M.x10"
        tempCount__4198 = ((tempCount__4198) + (((x10_long)1ll)));
        
        //#line 265 "SW_M.x10"
        x10_long i__4003min__4190 = ((x10_long)0ll);
        x10_long i__4003max__4191 = ((cutoff) - (((x10_long)1ll)));
        {
            x10_long i__4192;
            for (i__4192 = i__4003min__4190; ((i__4192) <= (i__4003max__4191));
                 i__4192 = ((i__4192) + (((x10_long)1ll)))) {
                x10_long cutoffRow__4193 = i__4192;
                
                //#line 267 "SW_M.x10"
                x10_long i__3985min__4186 = ((x10_long)0ll);
                x10_long i__3985max__4187 = ((cutoff) - (((x10_long)1ll)));
                {
                    x10_long i__4188;
                    for (i__4188 = i__3985min__4186; ((i__4188) <= (i__3985max__4187));
                         i__4188 = ((i__4188) + (((x10_long)1ll))))
                    {
                        x10_long cutoffCol__4189 = i__4188;
                        
                        //#line 269 "SW_M.x10"
                        x10_long i__4175 = ((((currentStartBlockRow) + (((k__4197) * (cutoff))))) + (cutoffRow__4193));
                        
                        //#line 270 "SW_M.x10"
                        x10_long j__4176 = ((((currentStartBlockCol) - (((k__4197) * (cutoff))))) + (cutoffCol__4189));
                        
                        //#line 271 "SW_M.x10"
                        if ((((((i__4175) <= (maxRow)) && ((j__4176) <= (maxCol))) &&
                            ((i__4175) > (((x10_long)0ll)))) &&
                            ((j__4176) > (((x10_long)0ll)))))
                        {
                            
                            //#line 274 "SW_M.x10"
                            x10_long max__4177 = (x10_long)0x8000000000000000LL;
                            
                            //#line 275 "SW_M.x10"
                            x10_long dir__4178 = ((x10_long)0ll);
                            
                            //#line 277 "SW_M.x10"
                            x10_long diagScore__4179;
                            
                            //#line 278 "SW_M.x10"
                            x10_char firstChar__4180 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                         ((x10_int) (((i__4175) - (((x10_long)1ll))))));
                            
                            //#line 279 "SW_M.x10"
                            x10_char secondChar__4181 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                          ((x10_int) (((j__4176) - (((x10_long)1ll))))));
                            
                            //#line 280 "SW_M.x10"
                            diagScore__4179 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                                  i__4175,
                                                  j__4176)) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                 ((x10_long)(((x10_int) (firstChar__4180).v))),
                                                                 ((x10_long)(((x10_int) (secondChar__4181).v))))));
                            
                            //#line 281 "SW_M.x10"
                            if (((diagScore__4179) > (max__4177)))
                            {
                                
                                //#line 282 "SW_M.x10"
                                max__4177 = diagScore__4179;
                                
                                //#line 283 "SW_M.x10"
                                dir__4178 = ((x10_long)0ll);
                            }
                            
                            //#line 286 "SW_M.x10"
                            ::x10::util::Pair<x10_long, x10_long> upResult__4182 =
                              ::SW_M::checkUpwards(matrix,
                                                   directions,
                                                   gapOpening,
                                                   gapExtension,
                                                   i__4175,
                                                   j__4176);
                            
                            //#line 287 "SW_M.x10"
                            x10_long upScore__4183 = upResult__4182->FMGL(first);
                            
                            //#line 288 "SW_M.x10"
                            if (((upScore__4183) > (max__4177)))
                            {
                                
                                //#line 289 "SW_M.x10"
                                max__4177 = upScore__4183;
                                
                                //#line 290 "SW_M.x10"
                                dir__4178 = upResult__4182->FMGL(second);
                            }
                            
                            //#line 293 "SW_M.x10"
                            ::x10::util::Pair<x10_long, x10_long> leftResult__4184 =
                              ::SW_M::checkLeftwards(matrix,
                                                     directions,
                                                     gapOpening,
                                                     gapExtension,
                                                     i__4175,
                                                     j__4176);
                            
                            //#line 294 "SW_M.x10"
                            x10_long leftScore__4185 = leftResult__4184->FMGL(first);
                            
                            //#line 295 "SW_M.x10"
                            if (((leftScore__4185) > (max__4177)))
                            {
                                
                                //#line 296 "SW_M.x10"
                                max__4177 = leftScore__4185;
                                
                                //#line 297 "SW_M.x10"
                                dir__4178 = leftResult__4184->FMGL(second);
                            }
                            
                            //#line 300 "SW_M.x10"
                            max__4177 = ((max__4177) < (((x10_long)0ll)))
                              ? (((x10_long)0ll)) : (max__4177);
                            
                            //#line 302 "SW_M.x10"
                            if (((max__4177) > (globalMax)))
                            {
                                
                                //#line 303 "SW_M.x10"
                                globalMax = max__4177;
                                
                                //#line 304 "SW_M.x10"
                                maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4175,
                                                                                              j__4176);
                            }
                            
                            //#line 306 "SW_M.x10"
                            matrix->x10::array::Array_2<x10_long>::__set(
                              i__4175, j__4176, max__4177);
                            
                            //#line 307 "SW_M.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              i__4175, j__4176, dir__4178);
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> tempCount__4198;
    x10aux::captured_struct_lval<x10_long> cutoff;
    x10aux::captured_struct_lval<x10_long> currentStartBlockRow;
    x10_long k__4197;
    x10aux::captured_struct_lval<x10_long> currentStartBlockCol;
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10aux::captured_struct_lval<x10_long> maxCol;
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
        buf.write(this->tempCount__4198);
        buf.write(this->cutoff);
        buf.write(this->currentStartBlockRow);
        buf.write(this->k__4197);
        buf.write(this->currentStartBlockCol);
        buf.write(this->maxRow);
        buf.write(this->maxCol);
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
        SW_M__closure__1* storage = ::x10aux::alloc_z<SW_M__closure__1>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_tempCount__4198 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_cutoff = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_currentStartBlockRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_k__4197 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_currentStartBlockCol = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_maxCol = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW_M__closure__1* this_ = new (storage) SW_M__closure__1(that_tempCount__4198, that_cutoff, that_currentStartBlockRow, that_k__4197, that_currentStartBlockCol, that_maxRow, that_maxCol, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW_M__closure__1(x10aux::captured_struct_lval<x10_long> tempCount__4198, x10aux::captured_struct_lval<x10_long> cutoff, x10aux::captured_struct_lval<x10_long> currentStartBlockRow, x10_long k__4197, x10aux::captured_struct_lval<x10_long> currentStartBlockCol, x10aux::captured_struct_lval<x10_long> maxRow, x10aux::captured_struct_lval<x10_long> maxCol, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : tempCount__4198(tempCount__4198), cutoff(cutoff), currentStartBlockRow(currentStartBlockRow), k__4197(k__4197), currentStartBlockCol(currentStartBlockCol), maxRow(maxRow), maxCol(maxCol), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW_M.x10:261-313";
    }

};

#endif // SW_M__CLOSURE__1_CLOSURE

//#line 13 "SW_M.x10"

//#line 15 "SW_M.x10"

//#line 16 "SW_M.x10"

//#line 17 "SW_M.x10"

//#line 19 "SW_M.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW_M::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 20 "SW_M.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 21 "SW_M.x10"
    ::x10::lang::String* currToken = (&::SW_M_Strings::sl__4235);
    
    //#line 22 "SW_M.x10"
    x10_long i__3823min__4128 = ((x10_long)0ll);
    x10_long i__3823max__4129 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__4130;
        for (i__4130 = i__3823min__4128; ((i__4130) <= (i__3823max__4129));
             i__4130 = ((i__4130) + (((x10_long)1ll)))) {
            x10_long i__4131 = i__4130;
            
            //#line 23 "SW_M.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__4131))),
                                         ((x10_char)' ')))) {
                
                //#line 24 "SW_M.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 25 "SW_M.x10"
                    tokens->add(currToken);
                    
                    //#line 26 "SW_M.x10"
                    currToken = (&::SW_M_Strings::sl__4235);
                }
                
            } else {
                
                //#line 30 "SW_M.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__4131))));
            }
            
        }
    }
    
    //#line 33 "SW_M.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 34 "SW_M.x10"
        tokens->add(currToken);
    }
    
    //#line 36 "SW_M.x10"
    return tokens;
    
}

//#line 39 "SW_M.x10"
::x10::util::Pair<x10_long, x10_long> SW_M::checkUpwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 42 "SW_M.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 43 "SW_M.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 45 "SW_M.x10"
    x10_long i__3841min__4133 = ((x10_long)0ll);
    x10_long i__3841max__4134 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__4135;
        for (i__4135 = i__3841min__4133; ((i__4135) <= (i__3841max__4134));
             i__4135 = ((i__4135) + (((x10_long)1ll)))) {
            x10_long i__4136 = i__4135;
            
            //#line 46 "SW_M.x10"
            x10_long score__4132 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__4136, col)) + (((gapExtension) * (((row) - (i__4136))))));
            
            //#line 48 "SW_M.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__4136, col)) <= (((x10_long)0ll))))
            {
                
                //#line 49 "SW_M.x10"
                score__4132 = ((score__4132) + (gapOpening));
            }
            
            //#line 52 "SW_M.x10"
            if (((score__4132) > (max))) {
                
                //#line 53 "SW_M.x10"
                max = score__4132;
                
                //#line 54 "SW_M.x10"
                gap = ((row) - (i__4136));
            }
            
        }
    }
    
    //#line 57 "SW_M.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 60 "SW_M.x10"
::x10::util::Pair<x10_long, x10_long> SW_M::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 63 "SW_M.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 64 "SW_M.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 66 "SW_M.x10"
    x10_long i__3859min__4138 = ((x10_long)0ll);
    x10_long i__3859max__4139 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__4140;
        for (i__4140 = i__3859min__4138; ((i__4140) <= (i__3859max__4139));
             i__4140 = ((i__4140) + (((x10_long)1ll)))) {
            x10_long j__4141 = i__4140;
            
            //#line 68 "SW_M.x10"
            x10_long score__4137 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__4141)) + (((gapExtension) * (((col) - (j__4141))))));
            
            //#line 69 "SW_M.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__4141)) >= (((x10_long)0ll))))
            {
                
                //#line 70 "SW_M.x10"
                score__4137 = ((score__4137) + (gapOpening));
            }
            
            //#line 73 "SW_M.x10"
            if (((score__4137) > (max))) {
                
                //#line 74 "SW_M.x10"
                max = score__4137;
                
                //#line 75 "SW_M.x10"
                gap = ((j__4141) - (col));
            }
            
        }
    }
    
    //#line 78 "SW_M.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 81 "SW_M.x10"
void SW_M::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                     ::x10::array::Array_2<x10_long>* matrix,
                     ::x10::array::Array_2<x10_long>* directions,
                     ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 83 "SW_M.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 84 "SW_M.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 85 "SW_M.x10"
    ::x10::lang::String* result1 = (&::SW_M_Strings::sl__4235);
    
    //#line 86 "SW_M.x10"
    ::x10::lang::String* result2 = (&::SW_M_Strings::sl__4235);
    
    //#line 88 "SW_M.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 89 "SW_M.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 90 "SW_M.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 91 "SW_M.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 92 "SW_M.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 93 "SW_M.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 94 "SW_M.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 95 "SW_M.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 96 "SW_M.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 97 "SW_M.x10"
            matchCount = ((matchCount) + (((x10_long)1ll)));
            
            //#line 98 "SW_M.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 99 "SW_M.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 100 "SW_M.x10"
            x10_long i__3877min__4142 = ((x10_long)0ll);
            x10_long i__3877max__4143 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4144;
                for (i__4144 = i__3877min__4142; ((i__4144) <= (i__3877max__4143));
                     i__4144 = ((i__4144) + (((x10_long)1ll))))
                {
                    x10_long k__4145 = i__4144;
                    
                    //#line 101 "SW_M.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 102 "SW_M.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__4145))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 103 "SW_M.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 105 "SW_M.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 106 "SW_M.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        } else {
            
            //#line 108 "SW_M.x10"
            x10_long i__3895min__4146 = ((x10_long)0ll);
            x10_long i__3895max__4147 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4148;
                for (i__4148 = i__3895min__4146; ((i__4148) <= (i__3895max__4147));
                     i__4148 = ((i__4148) + (((x10_long)1ll))))
                {
                    x10_long k__4149 = i__4148;
                    
                    //#line 109 "SW_M.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 110 "SW_M.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__4149))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 111 "SW_M.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 113 "SW_M.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
            
            //#line 114 "SW_M.x10"
            gapCount = ((gapCount) + (((x10_long)1ll)));
        }
        
    }
    
    //#line 117 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_M_Strings::sl__4236), matchCount), (&::SW_M_Strings::sl__4237)), stringLength)));
    
    //#line 118 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_M_Strings::sl__4238), gapCount), (&::SW_M_Strings::sl__4237)), stringLength)));
    
    //#line 119 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_M_Strings::sl__4239), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                      maxCoordinates->FMGL(first),
                                                                                                      maxCoordinates->FMGL(second)))));
    
    //#line 120 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 121 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 124 "SW_M.x10"
void SW_M::match(::x10::lang::String* string1, ::x10::lang::String* string2,
                 ::x10::array::Array_2<x10_long>* blosum,
                 x10_long gapOpening, x10_long gapExtension) {
    
    //#line 127 "SW_M.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 128 "SW_M.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 129 "SW_M.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 130 "SW_M.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 131 "SW_M.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 132 "SW_M.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 134 "SW_M.x10"
    x10_long i__3931min__4167 = ((x10_long)1ll);
    x10_long i__3931max__4168 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4169;
        for (i__4169 = i__3931min__4167; ((i__4169) <= (i__3931max__4168));
             i__4169 = ((i__4169) + (((x10_long)1ll)))) {
            x10_long i__4170 = i__4169;
            
            //#line 135 "SW_M.x10"
            x10_long i__3913min__4159 = ((x10_long)1ll);
            x10_long i__3913max__4160 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4161;
                for (i__4161 = i__3913min__4159; ((i__4161) <= (i__3913max__4160));
                     i__4161 = ((i__4161) + (((x10_long)1ll))))
                {
                    x10_long j__4162 = i__4161;
                    
                    //#line 136 "SW_M.x10"
                    x10_long max__4150 = (x10_long)0x8000000000000000LL;
                    
                    //#line 137 "SW_M.x10"
                    x10_long dir__4151 = ((x10_long)0ll);
                    
                    //#line 138 "SW_M.x10"
                    x10_long diagScore__4152;
                    
                    //#line 139 "SW_M.x10"
                    x10_char firstChar__4153 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__4170) - (((x10_long)1ll))))));
                    
                    //#line 140 "SW_M.x10"
                    x10_char secondChar__4154 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__4162) - (((x10_long)1ll))))));
                    
                    //#line 141 "SW_M.x10"
                    diagScore__4152 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__4170) - (((x10_long)1ll))),
                                          ((j__4162) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__4153).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__4154).v))))));
                    
                    //#line 142 "SW_M.x10"
                    if (((diagScore__4152) > (max__4150)))
                    {
                        
                        //#line 143 "SW_M.x10"
                        max__4150 = diagScore__4152;
                        
                        //#line 144 "SW_M.x10"
                        dir__4151 = ((x10_long)0ll);
                    }
                    
                    //#line 147 "SW_M.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__4155 =
                      ::SW_M::checkUpwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__4170, j__4162);
                    
                    //#line 148 "SW_M.x10"
                    x10_long upScore__4156 = upResult__4155->FMGL(first);
                    
                    //#line 149 "SW_M.x10"
                    if (((upScore__4156) > (max__4150))) {
                        
                        //#line 150 "SW_M.x10"
                        max__4150 = upScore__4156;
                        
                        //#line 151 "SW_M.x10"
                        dir__4151 = upResult__4155->FMGL(second);
                    }
                    
                    //#line 153 "SW_M.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__4157 =
                      ::SW_M::checkLeftwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             i__4170, j__4162);
                    
                    //#line 154 "SW_M.x10"
                    x10_long leftScore__4158 = leftResult__4157->FMGL(first);
                    
                    //#line 155 "SW_M.x10"
                    if (((leftScore__4158) > (max__4150)))
                    {
                        
                        //#line 156 "SW_M.x10"
                        max__4150 = leftScore__4158;
                        
                        //#line 157 "SW_M.x10"
                        dir__4151 = leftResult__4157->FMGL(second);
                    }
                    
                    //#line 159 "SW_M.x10"
                    max__4150 = ((max__4150) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__4150);
                    
                    //#line 161 "SW_M.x10"
                    if (((max__4150) > (globalMax))) {
                        
                        //#line 162 "SW_M.x10"
                        globalMax = max__4150;
                        
                        //#line 163 "SW_M.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4170,
                                                                                      j__4162);
                    }
                    
                    //#line 166 "SW_M.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__4170, j__4162, max__4150);
                    
                    //#line 167 "SW_M.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__4170, j__4162, dir__4151);
                }
            }
            
        }
    }
    
    //#line 171 "SW_M.x10"
    x10_long i__3967min__4171 = ((x10_long)0ll);
    x10_long i__3967max__4172 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4173;
        for (i__4173 = i__3967min__4171; ((i__4173) <= (i__3967max__4172));
             i__4173 = ((i__4173) + (((x10_long)1ll)))) {
            x10_long i__4174 = i__4173;
            
            //#line 172 "SW_M.x10"
            x10_long i__3949min__4163 = ((x10_long)0ll);
            x10_long i__3949max__4164 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4165;
                for (i__4165 = i__3949min__4163; ((i__4165) <= (i__3949max__4164));
                     i__4165 = ((i__4165) + (((x10_long)1ll))))
                {
                    x10_long j__4166 = i__4165;
                    
                    //#line 173 "SW_M.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__4174,
                                                    j__4166), (&::SW_M_Strings::sl__4240)));
                }
            }
            
            //#line 175 "SW_M.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 178 "SW_M.x10"
    ::SW_M::backtrack(string1, string2, matrix, directions,
                      maxCoordinates);
}

//#line 181 "SW_M.x10"
void SW_M::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                         ::x10::array::Array_2<x10_long>* blosum,
                         x10_long gapOpening, x10_long gapExtension) {
    
    //#line 183 "SW_M.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 184 "SW_M.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 186 "SW_M.x10"
    x10_long cutoff = ((x10_long)2ll);
    
    //#line 188 "SW_M.x10"
    x10_long currentDiagBlocks = ((x10_long)0ll);
    
    //#line 189 "SW_M.x10"
    x10_long currentStartBlockRow = ((x10_long)1ll);
    
    //#line 190 "SW_M.x10"
    x10_long currentStartBlockCol = ((x10_long)1ll);
    
    //#line 191 "SW_M.x10"
    x10_long diagonalCount;
    
    //#line 192 "SW_M.x10"
    x10_long diagonalMax;
    
    //#line 195 "SW_M.x10"
    if ((::x10aux::struct_equals(((maxRow) % ::x10aux::zeroCheck(cutoff)),
                                 ((x10_long)0ll)))) {
        
        //#line 197 "SW_M.x10"
        if ((::x10aux::struct_equals(((maxCol) % ::x10aux::zeroCheck(cutoff)),
                                     ((x10_long)0ll)))) {
            
            //#line 199 "SW_M.x10"
            diagonalCount = ((((((maxRow) / ::x10aux::zeroCheck(cutoff))) + (((maxCol) / ::x10aux::zeroCheck(cutoff))))) - (((x10_long)1ll)));
            
            //#line 200 "SW_M.x10"
            diagonalMax = ((maxCol) / ::x10aux::zeroCheck(cutoff));
        } else {
            
            //#line 204 "SW_M.x10"
            diagonalCount = ((((maxRow) / ::x10aux::zeroCheck(cutoff))) + (((maxCol) / ::x10aux::zeroCheck(cutoff))));
            
            //#line 205 "SW_M.x10"
            diagonalMax = ((((maxCol) / ::x10aux::zeroCheck(cutoff))) + (((x10_long)1ll)));
        }
        
    } else 
    //#line 210 "SW_M.x10"
    if ((::x10aux::struct_equals(((maxCol) % ::x10aux::zeroCheck(cutoff)),
                                 ((x10_long)0ll)))) {
        
        //#line 212 "SW_M.x10"
        diagonalCount = ((((maxRow) / ::x10aux::zeroCheck(cutoff))) + (((maxCol) / ::x10aux::zeroCheck(cutoff))));
        
        //#line 213 "SW_M.x10"
        diagonalMax = ((maxCol) / ::x10aux::zeroCheck(cutoff));
    } else {
        
        //#line 217 "SW_M.x10"
        diagonalCount = ((((((maxRow) / ::x10aux::zeroCheck(cutoff))) + (((maxCol) / ::x10aux::zeroCheck(cutoff))))) + (((x10_long)1ll)));
        
        //#line 218 "SW_M.x10"
        diagonalMax = ((((maxCol) / ::x10aux::zeroCheck(cutoff))) + (((x10_long)1ll)));
    }
    
    //#line 222 "SW_M.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 223 "SW_M.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 224 "SW_M.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 225 "SW_M.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 226 "SW_M.x10"
    x10_long maxColTemp = ((x10_long)0ll);
    
    //#line 227 "SW_M.x10"
    x10_long maxRowTemp = ((x10_long)1ll);
    
    //#line 230 "SW_M.x10"
    x10_long i__4039min__4203 = ((x10_long)1ll);
    x10_long i__4039max__4204 = diagonalCount;
    {
        x10_long i__4205;
        for (i__4205 = i__4039min__4203; ((i__4205) <= (i__4039max__4204));
             i__4205 = ((i__4205) + (((x10_long)1ll)))) {
            x10_long line__4206 = i__4205;
            
            //#line 234 "SW_M.x10"
            x10_long tempCount__4198 = ((x10_long)0ll);
            
            //#line 236 "SW_M.x10"
            if (((line__4206) > (diagonalMax))) {
                
                //#line 238 "SW_M.x10"
                currentDiagBlocks = ((diagonalMax) - (((line__4206) - (diagonalMax))));
                
                //#line 239 "SW_M.x10"
                currentStartBlockRow = ((((((maxRowTemp) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
                
                //#line 240 "SW_M.x10"
                currentStartBlockCol = ((maxColTemp) + (((x10_long)1ll)));
                
                //#line 241 "SW_M.x10"
                maxRowTemp = ((maxRowTemp) + (((x10_long)1ll)));
            } else 
            //#line 244 "SW_M.x10"
            if ((::x10aux::struct_equals(line__4206, diagonalMax)))
            {
                
                //#line 246 "SW_M.x10"
                currentDiagBlocks = diagonalMax;
                
                //#line 247 "SW_M.x10"
                currentStartBlockRow = ((x10_long)1ll);
                
                //#line 248 "SW_M.x10"
                currentStartBlockCol = ((((((line__4206) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
                
                //#line 249 "SW_M.x10"
                maxColTemp = ((((((line__4206) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
            } else 
            //#line 251 "SW_M.x10"
            if (((line__4206) < (diagonalMax))) {
                
                //#line 253 "SW_M.x10"
                currentDiagBlocks = line__4206;
                
                //#line 254 "SW_M.x10"
                currentStartBlockRow = ((x10_long)1ll);
                
                //#line 255 "SW_M.x10"
                currentStartBlockCol = ((((((line__4206) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
                
                //#line 256 "SW_M.x10"
                maxColTemp = ((((((line__4206) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
            }
            {
                
                //#line 260 "SW_M.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4222 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4021min__4194 = ((x10_long)0ll);
                        x10_long i__4021max__4195 = ((currentDiagBlocks) - (((x10_long)1ll)));
                        {
                            x10_long i__4196;
                            for (i__4196 = i__4021min__4194;
                                 ((i__4196) <= (i__4021max__4195));
                                 i__4196 = ((i__4196) + (((x10_long)1ll))))
                            {
                                x10_long k__4197 = i__4196;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW_M__closure__1)))SW_M__closure__1(&(tempCount__4198), &(cutoff), &(currentStartBlockRow), k__4197, &(currentStartBlockCol), &(maxRow), &(maxCol), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc6) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4220 =
                          __exc6;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4220);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4222);
            }
        }
    }
    
    //#line 316 "SW_M.x10"
    x10_long i__4075min__4207 = ((x10_long)0ll);
    x10_long i__4075max__4208 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__4209;
        for (i__4209 = i__4075min__4207; ((i__4209) <= (i__4075max__4208));
             i__4209 = ((i__4209) + (((x10_long)1ll)))) {
            x10_long i__4210 = i__4209;
            
            //#line 317 "SW_M.x10"
            x10_long i__4057min__4199 = ((x10_long)0ll);
            x10_long i__4057max__4200 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__4201;
                for (i__4201 = i__4057min__4199; ((i__4201) <= (i__4057max__4200));
                     i__4201 = ((i__4201) + (((x10_long)1ll))))
                {
                    x10_long j__4202 = i__4201;
                    
                    //#line 318 "SW_M.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__4210,
                                                    j__4202), (&::SW_M_Strings::sl__4240)));
                }
            }
            
            //#line 320 "SW_M.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 322 "SW_M.x10"
    ::SW_M::backtrack(string1, string2, matrix, directions,
                      maxCoordinates);
}

//#line 325 "SW_M.x10"
void SW_M::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 326 "SW_M.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 327 "SW_M.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 328 "SW_M.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 329 "SW_M.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 330 "SW_M.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 332 "SW_M.x10"
    ::x10::lang::String* string1 = (&::SW_M_Strings::sl__4235);
    
    //#line 333 "SW_M.x10"
    ::x10::lang::String* string2 = (&::SW_M_Strings::sl__4235);
    
    //#line 335 "SW_M.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 336 "SW_M.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 337 "SW_M.x10"
    ::x10::lang::String* line;
    
    //#line 338 "SW_M.x10"
    line = reader1->readLine();
    
    //#line 339 "SW_M.x10"
    while (true) {
        
        //#line 340 "SW_M.x10"
        try {
            
            //#line 341 "SW_M.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc8) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc8)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc8);
                {
                    
                    //#line 344 "SW_M.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 346 "SW_M.x10"
        string1 = ::x10::lang::String::__plus(string1, line);
    }
    
    //#line 348 "SW_M.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 349 "SW_M.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 350 "SW_M.x10"
    line = reader2->readLine();
    
    //#line 351 "SW_M.x10"
    while (true) {
        
        //#line 352 "SW_M.x10"
        try {
            
            //#line 353 "SW_M.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc9);
                {
                    
                    //#line 356 "SW_M.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 358 "SW_M.x10"
        string2 = ::x10::lang::String::__plus(string2, line);
    }
    
    //#line 361 "SW_M.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 362 "SW_M.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 364 "SW_M.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 365 "SW_M.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 366 "SW_M.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 367 "SW_M.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 369 "SW_M.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW_M::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 370 "SW_M.x10"
    x10_long i__4093min__4215 = ((x10_long)0ll);
    x10_long i__4093max__4216 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__4217;
        for (i__4217 = i__4093min__4215; ((i__4217) <= (i__4093max__4216));
             i__4217 = ((i__4217) + (((x10_long)1ll)))) {
            x10_long i__4218 = i__4217;
            
            //#line 371 "SW_M.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__4218))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 373 "SW_M.x10"
    while (true) {
        
        //#line 374 "SW_M.x10"
        try {
            
            //#line 375 "SW_M.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 378 "SW_M.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 380 "SW_M.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW_M::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 381 "SW_M.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 382 "SW_M.x10"
        x10_long i__4111min__4211 = ((x10_long)1ll);
        x10_long i__4111max__4212 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__4213;
            for (i__4213 = i__4111min__4211; ((i__4213) <= (i__4111max__4212));
                 i__4213 = ((i__4213) + (((x10_long)1ll))))
            {
                x10_long i__4214 = i__4213;
                
                //#line 383 "SW_M.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__4214) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__4214)))));
            }
        }
        
    }
    
    //#line 387 "SW_M.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 388 "SW_M.x10"
    ::SW_M::parallelMatch(string1, string2, blosum, gapOpening,
                          gapExtension);
    
    //#line 389 "SW_M.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 390 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_M_Strings::sl__4241), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_M_Strings::sl__4242))));
    
    //#line 393 "SW_M.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 394 "SW_M.x10"
    ::SW_M::match(string1, string2, blosum, gapOpening, gapExtension);
    
    //#line 395 "SW_M.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 396 "SW_M.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_M_Strings::sl__4243), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_M_Strings::sl__4242))));
    ::SW_M::match(string1, string2, blosum, gapOpening, gapExtension);
}

//#line 10 "SW_M.x10"
::SW_M* SW_M::SW_M____this__SW_M() {
    return this;
    
}
void SW_M::_constructor() {
    this->SW_M::__fieldInitializers_SW_M();
}
::SW_M* SW_M::_make() {
    ::SW_M* this_ = new (::x10aux::alloc_z< ::SW_M>()) ::SW_M();
    this_->_constructor();
    return this_;
}


void SW_M::__fieldInitializers_SW_M() {
 
}
const ::x10aux::serialization_id_t SW_M::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::SW_M::_deserializer);

void SW_M::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::SW_M::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::SW_M* this_ = new (::x10aux::alloc_z< ::SW_M>()) ::SW_M();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void SW_M::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType SW_M::rtt;
void SW_M::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("SW_M",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String SW_M_Strings::sl__4235("");
::x10::lang::String SW_M_Strings::sl__4238("Gaps: ");
::x10::lang::String SW_M_Strings::sl__4240(" ");
::x10::lang::String SW_M_Strings::sl__4236("Identity: ");
::x10::lang::String SW_M_Strings::sl__4242("ms");
::x10::lang::String SW_M_Strings::sl__4241("Parallel Runtime: ");
::x10::lang::String SW_M_Strings::sl__4239("Score: ");
::x10::lang::String SW_M_Strings::sl__4237("/");
::x10::lang::String SW_M_Strings::sl__4243("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<SW_M__closure__1>SW_M__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW_M__closure__1::__apply, &SW_M__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW_M__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW_M__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW_M__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW_M__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW_M__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW_M__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW_M */
/*************************************************/
