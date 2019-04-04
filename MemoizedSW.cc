/*************************************************/
/* START of MemoizedSW */
#include <MemoizedSW.h>

#include <x10/lang/String.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Char.h>
#include <x10/array/Array_2.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Pair.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Math.h>
#include <x10/lang/Double.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Exception.h>
#include <x10/lang/System.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef MEMOIZEDSW__CLOSURE__1_CLOSURE
#define MEMOIZEDSW__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class MemoizedSW__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<MemoizedSW__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 237 "MemoizedSW.x10"
        x10_long i__7252 = maxRow;
        
        //#line 238 "MemoizedSW.x10"
        if (((maxRow) > (line__7265))) {
            
            //#line 239 "MemoizedSW.x10"
            i__7252 = line__7265;
        }
        
        //#line 241 "MemoizedSW.x10"
        i__7252 = ((i__7252) - (k__7259));
        
        //#line 242 "MemoizedSW.x10"
        x10_long j__7253 = ((((startCol__7260) + (k__7259))) + (((x10_long)1ll)));
        
        //#line 246 "MemoizedSW.x10"
        i__7252 = ((((((i__7252) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 247 "MemoizedSW.x10"
        j__7253 = ((((((j__7253) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 249 "MemoizedSW.x10"
        x10_long cellMaxRow__7254 = ((((i__7252) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 250 "MemoizedSW.x10"
        x10_long cellMaxCol__7255 = ((((j__7253) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 253 "MemoizedSW.x10"
        if (((cellMaxRow__7254) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 254 "MemoizedSW.x10"
            cellMaxRow__7254 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 256 "MemoizedSW.x10"
        if (((cellMaxCol__7255) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 257 "MemoizedSW.x10"
            cellMaxCol__7255 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 260 "MemoizedSW.x10"
        x10_long i__7103min__7248 = i__7252;
        x10_long i__7103max__7249 = cellMaxRow__7254;
        {
            x10_long i__7250;
            for (i__7250 = i__7103min__7248; ((i__7250) <= (i__7103max__7249));
                 i__7250 = ((i__7250) + (((x10_long)1ll))))
            {
                x10_long a__7251 = i__7250;
                
                //#line 261 "MemoizedSW.x10"
                x10_long i__7085min__7244 = j__7253;
                x10_long i__7085max__7245 = cellMaxCol__7255;
                {
                    x10_long i__7246;
                    for (i__7246 = i__7085min__7244; ((i__7246) <= (i__7085max__7245));
                         i__7246 = ((i__7246) + (((x10_long)1ll))))
                    {
                        x10_long b__7247 = i__7246;
                        
                        //#line 262 "MemoizedSW.x10"
                        x10_long max__7240 = (x10_long)0x8000000000000000LL;
                        
                        //#line 264 "MemoizedSW.x10"
                        x10_char firstChar__7241 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__7251) - (((x10_long)1ll))))));
                        
                        //#line 265 "MemoizedSW.x10"
                        x10_char secondChar__7242 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__7247) - (((x10_long)1ll))))));
                        
                        //#line 267 "MemoizedSW.x10"
                        x10_long diagScore__7243 = ::MemoizedSW::max(
                                                     bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7251) - (((x10_long)1ll))),
                                                       ((b__7247) - (((x10_long)1ll)))),
                                                     bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7251) - (((x10_long)1ll))),
                                                       ((b__7247) - (((x10_long)1ll)))),
                                                     matrix->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7251) - (((x10_long)1ll))),
                                                       ((b__7247) - (((x10_long)1ll)))));
                        
                        //#line 268 "MemoizedSW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__7251, b__7247, ((diagScore__7243) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                    ((x10_long)(((x10_int) (firstChar__7241).v))),
                                                                    ((x10_long)(((x10_int) (secondChar__7242).v)))))));
                        
                        //#line 269 "MemoizedSW.x10"
                        if (((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__7251, b__7247)) < (((x10_long)0ll))))
                        {
                            matrix->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)0ll));
                        }
                        
                        //#line 271 "MemoizedSW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__7251, b__7247, ::MemoizedSW::max(
                                              ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                 ((a__7251) - (((x10_long)1ll))),
                                                                 b__7247))),
                                              ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                 ((a__7251) - (((x10_long)1ll))),
                                                                 b__7247))),
                                              ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                   ((a__7251) - (((x10_long)1ll))),
                                                                   b__7247)))));
                        
                        //#line 274 "MemoizedSW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__7251, b__7247, ::x10::lang::Math::max(
                                              bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                a__7251, b__7247),
                                              ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                  ((a__7251) - (((x10_long)1ll))),
                                                  b__7247)) + (gapOpening))));
                        
                        //#line 275 "MemoizedSW.x10"
                        if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                a__7251, b__7247)) < (((x10_long)0ll))))
                        {
                            bestUpwards->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)0ll));
                        }
                        
                        //#line 277 "MemoizedSW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__7251, b__7247, ::MemoizedSW::max(
                                              ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                 a__7251,
                                                                 ((b__7247) - (((x10_long)1ll)))))),
                                              ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                   a__7251,
                                                                   ((b__7247) - (((x10_long)1ll)))))),
                                              ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                 a__7251,
                                                                 ((b__7247) - (((x10_long)1ll))))))));
                        
                        //#line 280 "MemoizedSW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__7251, b__7247, ::x10::lang::Math::max(
                                              bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                a__7251, b__7247),
                                              ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                  a__7251,
                                                  ((b__7247) - (((x10_long)1ll))))) + (gapOpening))));
                        
                        //#line 281 "MemoizedSW.x10"
                        if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__7251, b__7247)) < (((x10_long)0ll))))
                        {
                            bestLeftwards->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)0ll));
                        }
                        
                        //#line 284 "MemoizedSW.x10"
                        if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                                 a__7251, b__7247)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                          a__7251,
                                                          b__7247))) &&
                            ((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__7251, b__7247)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__7251,
                                                         b__7247)))))
                        {
                            
                            //#line 285 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)0ll));
                            
                            //#line 286 "MemoizedSW.x10"
                            max__7240 = matrix->x10::array::Array_2<x10_long>::__apply(
                                          a__7251, b__7247);
                        } else 
                        //#line 287 "MemoizedSW.x10"
                        if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                 a__7251, b__7247)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                          a__7251,
                                                          b__7247))) &&
                            ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__7251, b__7247)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__7251,
                                                         b__7247)))))
                        {
                            
                            //#line 288 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)-1ll));
                            
                            //#line 289 "MemoizedSW.x10"
                            max__7240 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                          a__7251, b__7247);
                        } else {
                            
                            //#line 291 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7251, b__7247, ((x10_long)1ll));
                            
                            //#line 292 "MemoizedSW.x10"
                            max__7240 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                          a__7251, b__7247);
                        }
                        
                        //#line 295 "MemoizedSW.x10"
                        if (((max__7240) > (globalMax))) {
                            
                            //#line 296 "MemoizedSW.x10"
                            globalMax = max__7240;
                            
                            //#line 297 "MemoizedSW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__7251,
                                                                                          b__7247);
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__7265;
    x10_long k__7259;
    x10aux::captured_struct_lval<x10_long> startCol__7260;
    x10aux::captured_struct_lval<x10_long> cutoff;
    ::x10::lang::String* string1;
    ::x10::lang::String* string2;
    ::x10::array::Array_2<x10_long>* bestLeftwards;
    ::x10::array::Array_2<x10_long>* bestUpwards;
    ::x10::array::Array_2<x10_long>* matrix;
    ::x10::array::Array_2<x10_long>* blosum;
    x10_long gapOpening;
    x10_long gapExtension;
    ::x10::array::Array_2<x10_long>* directions;
    x10aux::captured_struct_lval<x10_long> globalMax;
    x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->maxRow);
        buf.write(this->line__7265);
        buf.write(this->k__7259);
        buf.write(this->startCol__7260);
        buf.write(this->cutoff);
        buf.write(this->string1);
        buf.write(this->string2);
        buf.write(this->bestLeftwards);
        buf.write(this->bestUpwards);
        buf.write(this->matrix);
        buf.write(this->blosum);
        buf.write(this->gapOpening);
        buf.write(this->gapExtension);
        buf.write(this->directions);
        buf.write(this->globalMax);
        buf.write(this->maxCoordinates);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        MemoizedSW__closure__1* storage = ::x10aux::alloc_z<MemoizedSW__closure__1>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__7265 = buf.read<x10_long>();
        x10_long that_k__7259 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__7260 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_cutoff = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_bestLeftwards = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_bestUpwards = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        MemoizedSW__closure__1* this_ = new (storage) MemoizedSW__closure__1(that_maxRow, that_line__7265, that_k__7259, that_startCol__7260, that_cutoff, that_string1, that_string2, that_bestLeftwards, that_bestUpwards, that_matrix, that_blosum, that_gapOpening, that_gapExtension, that_directions, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    MemoizedSW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__7265, x10_long k__7259, x10aux::captured_struct_lval<x10_long> startCol__7260, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* bestLeftwards, ::x10::array::Array_2<x10_long>* bestUpwards, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening, x10_long gapExtension, ::x10::array::Array_2<x10_long>* directions, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__7265(line__7265), k__7259(k__7259), startCol__7260(startCol__7260), cutoff(cutoff), string1(string1), string2(string2), bestLeftwards(bestLeftwards), bestUpwards(bestUpwards), matrix(matrix), blosum(blosum), gapOpening(gapOpening), gapExtension(gapExtension), directions(directions), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "MemoizedSW.x10:236-301";
    }

};

#endif // MEMOIZEDSW__CLOSURE__1_CLOSURE

//#line 13 "MemoizedSW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* MemoizedSW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 14 "MemoizedSW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 15 "MemoizedSW.x10"
    ::x10::lang::String* currToken = (&::MemoizedSW_Strings::sl__7290);
    
    //#line 16 "MemoizedSW.x10"
    x10_long i__6887min__7192 = ((x10_long)0ll);
    x10_long i__6887max__7193 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__7194;
        for (i__7194 = i__6887min__7192; ((i__7194) <= (i__6887max__7193));
             i__7194 = ((i__7194) + (((x10_long)1ll)))) {
            x10_long i__7195 = i__7194;
            
            //#line 17 "MemoizedSW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__7195))),
                                         ((x10_char)' ')))) {
                
                //#line 18 "MemoizedSW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 19 "MemoizedSW.x10"
                    tokens->add(currToken);
                    
                    //#line 20 "MemoizedSW.x10"
                    currToken = (&::MemoizedSW_Strings::sl__7290);
                }
                
            } else {
                
                //#line 24 "MemoizedSW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__7195))));
            }
            
        }
    }
    
    //#line 27 "MemoizedSW.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 28 "MemoizedSW.x10"
        tokens->add(currToken);
    }
    
    //#line 30 "MemoizedSW.x10"
    return tokens;
    
}

//#line 33 "MemoizedSW.x10"
void MemoizedSW::printMatrix(::x10::array::Array_2<x10_long>* matrix,
                             x10_long nRows, x10_long nCols) {
    
    //#line 34 "MemoizedSW.x10"
    x10_long i__6923min__7200 = ((x10_long)0ll);
    x10_long i__6923max__7201 = ((nRows) - (((x10_long)1ll)));
    {
        x10_long i__7202;
        for (i__7202 = i__6923min__7200; ((i__7202) <= (i__6923max__7201));
             i__7202 = ((i__7202) + (((x10_long)1ll)))) {
            x10_long i__7203 = i__7202;
            
            //#line 35 "MemoizedSW.x10"
            x10_long i__6905min__7196 = ((x10_long)0ll);
            x10_long i__6905max__7197 = ((nCols) - (((x10_long)1ll)));
            {
                x10_long i__7198;
                for (i__7198 = i__6905min__7196; ((i__7198) <= (i__6905max__7197));
                     i__7198 = ((i__7198) + (((x10_long)1ll))))
                {
                    x10_long j__7199 = i__7198;
                    
                    //#line 36 "MemoizedSW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                         i__7203,
                                                                                         j__7199), (&::MemoizedSW_Strings::sl__7291))));
                }
            }
            
            //#line 38 "MemoizedSW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
}

//#line 42 "MemoizedSW.x10"
void MemoizedSW::railBacktrack(::x10::lang::String* string1,
                               ::x10::lang::String* string2,
                               ::x10::array::Array_2<x10_long>* matrix,
                               ::x10::array::Array_2<x10_long>* directions,
                               ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 44 "MemoizedSW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 45 "MemoizedSW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 46 "MemoizedSW.x10"
    ::x10::lang::Rail< x10_char >* result1 = ::x10::lang::Rail< x10_char >::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)100ll))));
    
    //#line 47 "MemoizedSW.x10"
    ::x10::lang::Rail< x10_char >* result2 = ::x10::lang::Rail< x10_char >::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)100ll))));
    
    //#line 48 "MemoizedSW.x10"
    x10_long resultSize = ((x10_long)0ll);
    
    //#line 50 "MemoizedSW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 51 "MemoizedSW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 52 "MemoizedSW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 53 "MemoizedSW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 54 "MemoizedSW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 55 "MemoizedSW.x10"
            result1->x10::lang::Rail< x10_char >::__set(resultSize,
                                                        ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                          ((x10_int) (((i) - (((x10_long)1ll)))))));
            
            //#line 56 "MemoizedSW.x10"
            result2->x10::lang::Rail< x10_char >::__set(resultSize,
                                                        ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                          ((x10_int) (((j) - (((x10_long)1ll)))))));
            
            //#line 57 "MemoizedSW.x10"
            resultSize = ((resultSize) + (((x10_long)1ll)));
            
            //#line 59 "MemoizedSW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 60 "MemoizedSW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 62 "MemoizedSW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 63 "MemoizedSW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 64 "MemoizedSW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 65 "MemoizedSW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 66 "MemoizedSW.x10"
            x10_long i__6941min__7204 = ((x10_long)0ll);
            x10_long i__6941max__7205 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__7206;
                for (i__7206 = i__6941min__7204; ((i__7206) <= (i__6941max__7205));
                     i__7206 = ((i__7206) + (((x10_long)1ll))))
                {
                    x10_long k__7207 = i__7206;
                    
                    //#line 67 "MemoizedSW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                    ((x10_int) (((((i) - (k__7207))) - (((x10_long)1ll)))))));
                    
                    //#line 68 "MemoizedSW.x10"
                    result2->x10::lang::Rail< x10_char >::__set(
                      resultSize, ((x10_char)'-'));
                    
                    //#line 69 "MemoizedSW.x10"
                    resultSize = ((resultSize) + (((x10_long)1ll)));
                    
                    //#line 70 "MemoizedSW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 72 "MemoizedSW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 73 "MemoizedSW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 75 "MemoizedSW.x10"
            x10_long i__6959min__7208 = ((x10_long)0ll);
            x10_long i__6959max__7209 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__7210;
                for (i__7210 = i__6959min__7208; ((i__7210) <= (i__6959max__7209));
                     i__7210 = ((i__7210) + (((x10_long)1ll))))
                {
                    x10_long k__7211 = i__7210;
                    
                    //#line 76 "MemoizedSW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ((x10_char)'-'));
                    
                    //#line 77 "MemoizedSW.x10"
                    result2->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                    ((x10_int) (((((j) - (k__7211))) - (((x10_long)1ll)))))));
                    
                    //#line 78 "MemoizedSW.x10"
                    resultSize = ((resultSize) + (((x10_long)1ll)));
                    
                    //#line 79 "MemoizedSW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 81 "MemoizedSW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 82 "MemoizedSW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 85 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7292), matchCount), (&::MemoizedSW_Strings::sl__7293)), stringLength)));
    
    //#line 86 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7294), gapCount), (&::MemoizedSW_Strings::sl__7293)), stringLength)));
    
    //#line 87 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7295), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                            maxCoordinates->FMGL(first),
                                                                                                            maxCoordinates->FMGL(second)))));
    
    //#line 89 "MemoizedSW.x10"
    x10_long i__6977min__7212 = ((x10_long)0ll);
    x10_long i__6977max__7213 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__7214;
        for (i__7214 = i__6977min__7212; ((i__7214) <= (i__6977max__7213));
             i__7214 = ((i__7214) + (((x10_long)1ll)))) {
            x10_long k__7215 = i__7214;
            
            //#line 90 "MemoizedSW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result1->x10::lang::Rail< x10_char >::__apply(
                                                                   k__7215)));
        }
    }
    
    //#line 92 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
    
    //#line 93 "MemoizedSW.x10"
    x10_long i__6995min__7216 = ((x10_long)0ll);
    x10_long i__6995max__7217 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__7218;
        for (i__7218 = i__6995min__7216; ((i__7218) <= (i__6995max__7217));
             i__7218 = ((i__7218) + (((x10_long)1ll)))) {
            x10_long k__7219 = i__7218;
            
            //#line 94 "MemoizedSW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result2->x10::lang::Rail< x10_char >::__apply(
                                                                   k__7219)));
        }
    }
    
    //#line 96 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
}

//#line 99 "MemoizedSW.x10"
void MemoizedSW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                           ::x10::array::Array_2<x10_long>* matrix,
                           ::x10::array::Array_2<x10_long>* directions,
                           ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 101 "MemoizedSW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 102 "MemoizedSW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 103 "MemoizedSW.x10"
    ::x10::lang::String* result1 = (&::MemoizedSW_Strings::sl__7290);
    
    //#line 104 "MemoizedSW.x10"
    ::x10::lang::String* result2 = (&::MemoizedSW_Strings::sl__7290);
    
    //#line 106 "MemoizedSW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 107 "MemoizedSW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 108 "MemoizedSW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 109 "MemoizedSW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 110 "MemoizedSW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 111 "MemoizedSW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 112 "MemoizedSW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 113 "MemoizedSW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 114 "MemoizedSW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 116 "MemoizedSW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 117 "MemoizedSW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 118 "MemoizedSW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 119 "MemoizedSW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 120 "MemoizedSW.x10"
            x10_long i__7013min__7220 = ((x10_long)0ll);
            x10_long i__7013max__7221 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__7222;
                for (i__7222 = i__7013min__7220; ((i__7222) <= (i__7013max__7221));
                     i__7222 = ((i__7222) + (((x10_long)1ll))))
                {
                    x10_long k__7223 = i__7222;
                    
                    //#line 121 "MemoizedSW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 122 "MemoizedSW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__7223))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 123 "MemoizedSW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 125 "MemoizedSW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 126 "MemoizedSW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 128 "MemoizedSW.x10"
            x10_long i__7031min__7224 = ((x10_long)0ll);
            x10_long i__7031max__7225 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__7226;
                for (i__7226 = i__7031min__7224; ((i__7226) <= (i__7031max__7225));
                     i__7226 = ((i__7226) + (((x10_long)1ll))))
                {
                    x10_long k__7227 = i__7226;
                    
                    //#line 129 "MemoizedSW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 130 "MemoizedSW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__7227))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 131 "MemoizedSW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 133 "MemoizedSW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 134 "MemoizedSW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 137 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7292), matchCount), (&::MemoizedSW_Strings::sl__7293)), stringLength)));
    
    //#line 138 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7294), gapCount), (&::MemoizedSW_Strings::sl__7293)), stringLength)));
    
    //#line 139 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7295), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                            maxCoordinates->FMGL(first),
                                                                                                            maxCoordinates->FMGL(second)))));
    
    //#line 140 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 141 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 144 "MemoizedSW.x10"
void MemoizedSW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 147 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* bestLeftwards = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                            ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                            ((x10_long)0ll));
    
    //#line 148 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* bestUpwards = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                          ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                          ((x10_long)0ll));
    
    //#line 149 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 150 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 151 "MemoizedSW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 152 "MemoizedSW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 154 "MemoizedSW.x10"
    x10_long i__7067min__7236 = ((x10_long)1ll);
    x10_long i__7067max__7237 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__7238;
        for (i__7238 = i__7067min__7236; ((i__7238) <= (i__7067max__7237));
             i__7238 = ((i__7238) + (((x10_long)1ll)))) {
            x10_long i__7239 = i__7238;
            
            //#line 155 "MemoizedSW.x10"
            x10_long i__7049min__7232 = ((x10_long)1ll);
            x10_long i__7049max__7233 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__7234;
                for (i__7234 = i__7049min__7232; ((i__7234) <= (i__7049max__7233));
                     i__7234 = ((i__7234) + (((x10_long)1ll))))
                {
                    x10_long j__7235 = i__7234;
                    
                    //#line 156 "MemoizedSW.x10"
                    x10_long max__7228 = (x10_long)0x8000000000000000LL;
                    
                    //#line 158 "MemoizedSW.x10"
                    x10_char firstChar__7229 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__7239) - (((x10_long)1ll))))));
                    
                    //#line 159 "MemoizedSW.x10"
                    x10_char secondChar__7230 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__7235) - (((x10_long)1ll))))));
                    
                    //#line 161 "MemoizedSW.x10"
                    x10_long diagScore__7231 = ::MemoizedSW::max(
                                                 bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7239) - (((x10_long)1ll))),
                                                   ((j__7235) - (((x10_long)1ll)))),
                                                 bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7239) - (((x10_long)1ll))),
                                                   ((j__7235) - (((x10_long)1ll)))),
                                                 matrix->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7239) - (((x10_long)1ll))),
                                                   ((j__7235) - (((x10_long)1ll)))));
                    
                    //#line 162 "MemoizedSW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__7239, j__7235, ((diagScore__7231) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                ((x10_long)(((x10_int) (firstChar__7229).v))),
                                                                ((x10_long)(((x10_int) (secondChar__7230).v)))))));
                    
                    //#line 163 "MemoizedSW.x10"
                    if (((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__7239, j__7235)) < (((x10_long)0ll))))
                    {
                        matrix->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)0ll));
                    }
                    
                    //#line 165 "MemoizedSW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__7239, j__7235, ::MemoizedSW::max(
                                          ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                             ((i__7239) - (((x10_long)1ll))),
                                                             j__7235))),
                                          ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                             ((i__7239) - (((x10_long)1ll))),
                                                             j__7235))),
                                          ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                               ((i__7239) - (((x10_long)1ll))),
                                                               j__7235)))));
                    
                    //#line 168 "MemoizedSW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__7239, j__7235, ::x10::lang::Math::max(
                                          bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                            i__7239, j__7235),
                                          ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                              ((i__7239) - (((x10_long)1ll))),
                                              j__7235)) + (gapOpening))));
                    
                    //#line 169 "MemoizedSW.x10"
                    if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                            i__7239, j__7235)) < (((x10_long)0ll))))
                    {
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)0ll));
                    }
                    
                    //#line 171 "MemoizedSW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__7239, j__7235, ::MemoizedSW::max(
                                          ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                             i__7239,
                                                             ((j__7235) - (((x10_long)1ll)))))),
                                          ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                               i__7239,
                                                               ((j__7235) - (((x10_long)1ll)))))),
                                          ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                             i__7239,
                                                             ((j__7235) - (((x10_long)1ll))))))));
                    
                    //#line 174 "MemoizedSW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__7239, j__7235, ::x10::lang::Math::max(
                                          bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                            i__7239, j__7235),
                                          ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                              i__7239, ((j__7235) - (((x10_long)1ll))))) + (gapOpening))));
                    
                    //#line 175 "MemoizedSW.x10"
                    if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__7239, j__7235)) < (((x10_long)0ll))))
                    {
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)0ll));
                    }
                    
                    //#line 177 "MemoizedSW.x10"
                    if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                             i__7239, j__7235)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                      i__7239,
                                                      j__7235))) &&
                        ((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__7239, j__7235)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__7239,
                                                     j__7235)))))
                    {
                        
                        //#line 178 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)0ll));
                        
                        //#line 179 "MemoizedSW.x10"
                        max__7228 = matrix->x10::array::Array_2<x10_long>::__apply(
                                      i__7239, j__7235);
                    } else 
                    //#line 180 "MemoizedSW.x10"
                    if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                             i__7239, j__7235)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                      i__7239,
                                                      j__7235))) &&
                        ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__7239, j__7235)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__7239,
                                                     j__7235)))))
                    {
                        
                        //#line 181 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)-1ll));
                        
                        //#line 182 "MemoizedSW.x10"
                        max__7228 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                      i__7239, j__7235);
                    } else {
                        
                        //#line 184 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7239, j__7235, ((x10_long)1ll));
                        
                        //#line 185 "MemoizedSW.x10"
                        max__7228 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                      i__7239, j__7235);
                    }
                    
                    //#line 188 "MemoizedSW.x10"
                    if (((max__7228) > (globalMax))) {
                        
                        //#line 189 "MemoizedSW.x10"
                        globalMax = max__7228;
                        
                        //#line 190 "MemoizedSW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__7239,
                                                                                      j__7235);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 194 "MemoizedSW.x10"
    ::MemoizedSW::backtrack(string1, string2, matrix, directions,
                            maxCoordinates);
}

//#line 197 "MemoizedSW.x10"
x10_long MemoizedSW::max(x10_long first, x10_long second,
                         x10_long third) {
    
    //#line 198 "MemoizedSW.x10"
    if ((((first) >= (second)) && ((first) >= (third)))) {
        
        //#line 199 "MemoizedSW.x10"
        return first;
        
    } else 
    //#line 200 "MemoizedSW.x10"
    if ((((second) >= (third)) && ((second) >= (first))))
    {
        
        //#line 201 "MemoizedSW.x10"
        return second;
        
    } else {
        
        //#line 203 "MemoizedSW.x10"
        return third;
        
    }
    
}

//#line 207 "MemoizedSW.x10"
void MemoizedSW::parallelMatch(::x10::lang::String* string1,
                               ::x10::lang::String* string2,
                               ::x10::array::Array_2<x10_long>* blosum,
                               x10_long gapOpening, x10_long gapExtension) {
    
    //#line 209 "MemoizedSW.x10"
    x10_long cutoff = ((x10_long)15ll);
    
    //#line 210 "MemoizedSW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 211 "MemoizedSW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 213 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* bestLeftwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                            ((maxCol) + (((x10_long)1ll))),
                                                                                            ((x10_long)0ll));
    
    //#line 214 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* bestUpwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                          ((maxCol) + (((x10_long)1ll))),
                                                                                          ((x10_long)0ll));
    
    //#line 215 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 216 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 218 "MemoizedSW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 219 "MemoizedSW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 221 "MemoizedSW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 222 "MemoizedSW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 224 "MemoizedSW.x10"
    x10_long i__7139min__7262 = ((x10_long)1ll);
    x10_long i__7139max__7263 = ((maxRow) + (maxCol));
    {
        x10_long i__7264;
        for (i__7264 = i__7139min__7262; ((i__7264) <= (i__7139max__7263));
             i__7264 = ((i__7264) + (((x10_long)1ll)))) {
            x10_long line__7265 = i__7264;
            
            //#line 226 "MemoizedSW.x10"
            x10_long startCol__7260 = ((x10_long)0ll);
            
            //#line 227 "MemoizedSW.x10"
            if (((((line__7265) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 228 "MemoizedSW.x10"
                startCol__7260 = ((line__7265) - (maxRow));
            }
            
            //#line 231 "MemoizedSW.x10"
            x10_long count__7261 = ((line__7265) < (((maxCol) - (startCol__7260))))
              ? (line__7265) : (((maxCol) - (startCol__7260)));
            
            //#line 232 "MemoizedSW.x10"
            count__7261 = ((count__7261) < (maxRow)) ? (count__7261)
              : (maxRow);
            {
                
                //#line 235 "MemoizedSW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__7277 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__7121min__7256 = ((x10_long)0ll);
                        x10_long i__7121max__7257 = ((count__7261) - (((x10_long)1ll)));
                        {
                            x10_long i__7258;
                            for (i__7258 = i__7121min__7256;
                                 ((i__7258) <= (i__7121max__7257));
                                 i__7258 = ((i__7258) + (((x10_long)1ll))))
                            {
                                x10_long k__7259 = i__7258;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(MemoizedSW__closure__1)))MemoizedSW__closure__1(&(maxRow), line__7265, k__7259, &(startCol__7260), &(cutoff), string1, string2, bestLeftwards, bestUpwards, matrix, blosum, gapOpening, gapExtension, directions, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__7275 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__7275);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__7277);
            }
        }
    }
    
    //#line 303 "MemoizedSW.x10"
    ::MemoizedSW::backtrack(string1, string2, matrix, directions,
                            maxCoordinates);
}

//#line 306 "MemoizedSW.x10"
void MemoizedSW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 307 "MemoizedSW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 308 "MemoizedSW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 309 "MemoizedSW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 310 "MemoizedSW.x10"
    x10_long gapOpening = ((x10_long)((-(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)3ll)))))));
    
    //#line 311 "MemoizedSW.x10"
    x10_long gapExtension = ((x10_long)((-(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                               ((x10_long)4ll)))))));
    
    //#line 313 "MemoizedSW.x10"
    ::x10::lang::String* string1 = (&::MemoizedSW_Strings::sl__7290);
    
    //#line 314 "MemoizedSW.x10"
    ::x10::lang::String* string2 = (&::MemoizedSW_Strings::sl__7290);
    
    //#line 316 "MemoizedSW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 317 "MemoizedSW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 318 "MemoizedSW.x10"
    ::x10::lang::String* line;
    
    //#line 319 "MemoizedSW.x10"
    line = reader1->readLine();
    
    //#line 320 "MemoizedSW.x10"
    while (true) {
        
        //#line 321 "MemoizedSW.x10"
        try {
            
            //#line 322 "MemoizedSW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc9);
                {
                    
                    //#line 325 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 327 "MemoizedSW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 329 "MemoizedSW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 330 "MemoizedSW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 331 "MemoizedSW.x10"
    line = reader2->readLine();
    
    //#line 332 "MemoizedSW.x10"
    while (true) {
        
        //#line 333 "MemoizedSW.x10"
        try {
            
            //#line 334 "MemoizedSW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 337 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 339 "MemoizedSW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 342 "MemoizedSW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 343 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 345 "MemoizedSW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 346 "MemoizedSW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 347 "MemoizedSW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 348 "MemoizedSW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 350 "MemoizedSW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::MemoizedSW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 351 "MemoizedSW.x10"
    x10_long i__7157min__7270 = ((x10_long)0ll);
    x10_long i__7157max__7271 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__7272;
        for (i__7272 = i__7157min__7270; ((i__7272) <= (i__7157max__7271));
             i__7272 = ((i__7272) + (((x10_long)1ll)))) {
            x10_long i__7273 = i__7272;
            
            //#line 352 "MemoizedSW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__7273))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 354 "MemoizedSW.x10"
    while (true) {
        
        //#line 355 "MemoizedSW.x10"
        try {
            
            //#line 356 "MemoizedSW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 359 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 361 "MemoizedSW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::MemoizedSW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 362 "MemoizedSW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 363 "MemoizedSW.x10"
        x10_long i__7175min__7266 = ((x10_long)1ll);
        x10_long i__7175max__7267 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__7268;
            for (i__7268 = i__7175min__7266; ((i__7268) <= (i__7175max__7267));
                 i__7268 = ((i__7268) + (((x10_long)1ll))))
            {
                x10_long i__7269 = i__7268;
                
                //#line 364 "MemoizedSW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__7269) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__7269)))));
            }
        }
        
    }
    
    //#line 368 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::MemoizedSW_Strings::sl__7296)));
    
    //#line 370 "MemoizedSW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 371 "MemoizedSW.x10"
    ::MemoizedSW::parallelMatch(string1, string2, blosum,
                                gapOpening, gapExtension);
    
    //#line 372 "MemoizedSW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 373 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7297), ((((x10_double) (finalTime))) / (1000000.0))), (&::MemoizedSW_Strings::sl__7298))));
    
    //#line 375 "MemoizedSW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 376 "MemoizedSW.x10"
    ::MemoizedSW::match(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 377 "MemoizedSW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 378 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7299), ((((x10_double) (finalTime))) / (1000000.0))), (&::MemoizedSW_Strings::sl__7298))));
}

//#line 11 "MemoizedSW.x10"
::MemoizedSW* MemoizedSW::MemoizedSW____this__MemoizedSW(
  ) {
    return this;
    
}
void MemoizedSW::_constructor() {
    this->MemoizedSW::__fieldInitializers_MemoizedSW();
}
::MemoizedSW* MemoizedSW::_make() {
    ::MemoizedSW* this_ = new (::x10aux::alloc_z< ::MemoizedSW>()) ::MemoizedSW();
    this_->_constructor();
    return this_;
}


void MemoizedSW::__fieldInitializers_MemoizedSW() {
 
}
const ::x10aux::serialization_id_t MemoizedSW::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::MemoizedSW::_deserializer);

void MemoizedSW::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::MemoizedSW::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::MemoizedSW* this_ = new (::x10aux::alloc_z< ::MemoizedSW>()) ::MemoizedSW();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void MemoizedSW::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType MemoizedSW::rtt;
void MemoizedSW::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("MemoizedSW",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String MemoizedSW_Strings::sl__7290("");
::x10::lang::String MemoizedSW_Strings::sl__7291(" ");
::x10::lang::String MemoizedSW_Strings::sl__7294("Gaps: ");
::x10::lang::String MemoizedSW_Strings::sl__7292("Identity: ");
::x10::lang::String MemoizedSW_Strings::sl__7298("ms");
::x10::lang::String MemoizedSW_Strings::sl__7297("Parallel Runtime: ");
::x10::lang::String MemoizedSW_Strings::sl__7295("Score: ");
::x10::lang::String MemoizedSW_Strings::sl__7293("/");
::x10::lang::String MemoizedSW_Strings::sl__7296("==================== Memoized Smith Waterman ==================");
::x10::lang::String MemoizedSW_Strings::sl__7299("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<MemoizedSW__closure__1>MemoizedSW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &MemoizedSW__closure__1::__apply, &MemoizedSW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry MemoizedSW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &MemoizedSW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t MemoizedSW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(MemoizedSW__closure__1::_deserialize);
const ::x10aux::serialization_id_t MemoizedSW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(MemoizedSW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of MemoizedSW */
/*************************************************/
