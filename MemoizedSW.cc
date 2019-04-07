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
        x10_long i__7372 = maxRow;
        
        //#line 238 "MemoizedSW.x10"
        if (((maxRow) > (line__7385))) {
            
            //#line 239 "MemoizedSW.x10"
            i__7372 = line__7385;
        }
        
        //#line 241 "MemoizedSW.x10"
        i__7372 = ((i__7372) - (k__7379));
        
        //#line 242 "MemoizedSW.x10"
        x10_long j__7373 = ((((startCol__7380) + (k__7379))) + (((x10_long)1ll)));
        
        //#line 246 "MemoizedSW.x10"
        i__7372 = ((((((i__7372) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 247 "MemoizedSW.x10"
        j__7373 = ((((((j__7373) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 249 "MemoizedSW.x10"
        x10_long cellMaxRow__7374 = ((((i__7372) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 250 "MemoizedSW.x10"
        x10_long cellMaxCol__7375 = ((((j__7373) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 253 "MemoizedSW.x10"
        if (((cellMaxRow__7374) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 254 "MemoizedSW.x10"
            cellMaxRow__7374 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 256 "MemoizedSW.x10"
        if (((cellMaxCol__7375) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 257 "MemoizedSW.x10"
            cellMaxCol__7375 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 260 "MemoizedSW.x10"
        x10_long i__7223min__7368 = i__7372;
        x10_long i__7223max__7369 = cellMaxRow__7374;
        {
            x10_long i__7370;
            for (i__7370 = i__7223min__7368; ((i__7370) <= (i__7223max__7369));
                 i__7370 = ((i__7370) + (((x10_long)1ll))))
            {
                x10_long a__7371 = i__7370;
                
                //#line 261 "MemoizedSW.x10"
                x10_long i__7205min__7364 = j__7373;
                x10_long i__7205max__7365 = cellMaxCol__7375;
                {
                    x10_long i__7366;
                    for (i__7366 = i__7205min__7364; ((i__7366) <= (i__7205max__7365));
                         i__7366 = ((i__7366) + (((x10_long)1ll))))
                    {
                        x10_long b__7367 = i__7366;
                        
                        //#line 262 "MemoizedSW.x10"
                        x10_long max__7360 = (x10_long)0x8000000000000000LL;
                        
                        //#line 264 "MemoizedSW.x10"
                        x10_char firstChar__7361 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__7371) - (((x10_long)1ll))))));
                        
                        //#line 265 "MemoizedSW.x10"
                        x10_char secondChar__7362 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__7367) - (((x10_long)1ll))))));
                        
                        //#line 267 "MemoizedSW.x10"
                        x10_long diagScore__7363 = ::MemoizedSW::max(
                                                     bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7371) - (((x10_long)1ll))),
                                                       ((b__7367) - (((x10_long)1ll)))),
                                                     bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7371) - (((x10_long)1ll))),
                                                       ((b__7367) - (((x10_long)1ll)))),
                                                     matrix->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__7371) - (((x10_long)1ll))),
                                                       ((b__7367) - (((x10_long)1ll)))));
                        
                        //#line 268 "MemoizedSW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__7371, b__7367, ((diagScore__7363) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                    ((x10_long)(((x10_int) (firstChar__7361).v))),
                                                                    ((x10_long)(((x10_int) (secondChar__7362).v)))))));
                        
                        //#line 269 "MemoizedSW.x10"
                        if (((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__7371, b__7367)) < (((x10_long)0ll))))
                        {
                            matrix->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)0ll));
                        }
                        
                        //#line 271 "MemoizedSW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__7371, b__7367, ::MemoizedSW::max(
                                              ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                 ((a__7371) - (((x10_long)1ll))),
                                                                 b__7367))),
                                              ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                 ((a__7371) - (((x10_long)1ll))),
                                                                 b__7367))),
                                              ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                   ((a__7371) - (((x10_long)1ll))),
                                                                   b__7367)))));
                        
                        //#line 274 "MemoizedSW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__7371, b__7367, ::x10::lang::Math::max(
                                              bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                a__7371, b__7367),
                                              ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                  ((a__7371) - (((x10_long)1ll))),
                                                  b__7367)) + (gapOpening))));
                        
                        //#line 275 "MemoizedSW.x10"
                        if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                a__7371, b__7367)) < (((x10_long)0ll))))
                        {
                            bestUpwards->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)0ll));
                        }
                        
                        //#line 277 "MemoizedSW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__7371, b__7367, ::MemoizedSW::max(
                                              ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                 a__7371,
                                                                 ((b__7367) - (((x10_long)1ll)))))),
                                              ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                   a__7371,
                                                                   ((b__7367) - (((x10_long)1ll)))))),
                                              ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                 a__7371,
                                                                 ((b__7367) - (((x10_long)1ll))))))));
                        
                        //#line 280 "MemoizedSW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__7371, b__7367, ::x10::lang::Math::max(
                                              bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                a__7371, b__7367),
                                              ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                  a__7371,
                                                  ((b__7367) - (((x10_long)1ll))))) + (gapOpening))));
                        
                        //#line 281 "MemoizedSW.x10"
                        if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__7371, b__7367)) < (((x10_long)0ll))))
                        {
                            bestLeftwards->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)0ll));
                        }
                        
                        //#line 284 "MemoizedSW.x10"
                        if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                                 a__7371, b__7367)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                          a__7371,
                                                          b__7367))) &&
                            ((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__7371, b__7367)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__7371,
                                                         b__7367)))))
                        {
                            
                            //#line 285 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)0ll));
                            
                            //#line 286 "MemoizedSW.x10"
                            max__7360 = matrix->x10::array::Array_2<x10_long>::__apply(
                                          a__7371, b__7367);
                        } else 
                        //#line 287 "MemoizedSW.x10"
                        if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                 a__7371, b__7367)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                          a__7371,
                                                          b__7367))) &&
                            ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__7371, b__7367)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__7371,
                                                         b__7367)))))
                        {
                            
                            //#line 288 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)-1ll));
                            
                            //#line 289 "MemoizedSW.x10"
                            max__7360 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                          a__7371, b__7367);
                        } else {
                            
                            //#line 291 "MemoizedSW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__7371, b__7367, ((x10_long)1ll));
                            
                            //#line 292 "MemoizedSW.x10"
                            max__7360 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                          a__7371, b__7367);
                        }
                        
                        //#line 295 "MemoizedSW.x10"
                        if (((max__7360) > (globalMax))) {
                            
                            //#line 296 "MemoizedSW.x10"
                            globalMax = max__7360;
                            
                            //#line 297 "MemoizedSW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__7371,
                                                                                          b__7367);
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__7385;
    x10_long k__7379;
    x10aux::captured_struct_lval<x10_long> startCol__7380;
    x10_long cutoff;
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
        buf.write(this->line__7385);
        buf.write(this->k__7379);
        buf.write(this->startCol__7380);
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
        x10_long that_line__7385 = buf.read<x10_long>();
        x10_long that_k__7379 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__7380 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_cutoff = buf.read<x10_long>();
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
        MemoizedSW__closure__1* this_ = new (storage) MemoizedSW__closure__1(that_maxRow, that_line__7385, that_k__7379, that_startCol__7380, that_cutoff, that_string1, that_string2, that_bestLeftwards, that_bestUpwards, that_matrix, that_blosum, that_gapOpening, that_gapExtension, that_directions, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    MemoizedSW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__7385, x10_long k__7379, x10aux::captured_struct_lval<x10_long> startCol__7380, x10_long cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* bestLeftwards, ::x10::array::Array_2<x10_long>* bestUpwards, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening, x10_long gapExtension, ::x10::array::Array_2<x10_long>* directions, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__7385(line__7385), k__7379(k__7379), startCol__7380(startCol__7380), cutoff(cutoff), string1(string1), string2(string2), bestLeftwards(bestLeftwards), bestUpwards(bestUpwards), matrix(matrix), blosum(blosum), gapOpening(gapOpening), gapExtension(gapExtension), directions(directions), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
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
    ::x10::lang::String* currToken = (&::MemoizedSW_Strings::sl__7410);
    
    //#line 16 "MemoizedSW.x10"
    x10_long i__7007min__7312 = ((x10_long)0ll);
    x10_long i__7007max__7313 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__7314;
        for (i__7314 = i__7007min__7312; ((i__7314) <= (i__7007max__7313));
             i__7314 = ((i__7314) + (((x10_long)1ll)))) {
            x10_long i__7315 = i__7314;
            
            //#line 17 "MemoizedSW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__7315))),
                                         ((x10_char)' ')))) {
                
                //#line 18 "MemoizedSW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 19 "MemoizedSW.x10"
                    tokens->add(currToken);
                    
                    //#line 20 "MemoizedSW.x10"
                    currToken = (&::MemoizedSW_Strings::sl__7410);
                }
                
            } else {
                
                //#line 24 "MemoizedSW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__7315))));
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
    x10_long i__7043min__7320 = ((x10_long)0ll);
    x10_long i__7043max__7321 = ((nRows) - (((x10_long)1ll)));
    {
        x10_long i__7322;
        for (i__7322 = i__7043min__7320; ((i__7322) <= (i__7043max__7321));
             i__7322 = ((i__7322) + (((x10_long)1ll)))) {
            x10_long i__7323 = i__7322;
            
            //#line 35 "MemoizedSW.x10"
            x10_long i__7025min__7316 = ((x10_long)0ll);
            x10_long i__7025max__7317 = ((nCols) - (((x10_long)1ll)));
            {
                x10_long i__7318;
                for (i__7318 = i__7025min__7316; ((i__7318) <= (i__7025max__7317));
                     i__7318 = ((i__7318) + (((x10_long)1ll))))
                {
                    x10_long j__7319 = i__7318;
                    
                    //#line 36 "MemoizedSW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                         i__7323,
                                                                                         j__7319), (&::MemoizedSW_Strings::sl__7411))));
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
            x10_long i__7061min__7324 = ((x10_long)0ll);
            x10_long i__7061max__7325 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__7326;
                for (i__7326 = i__7061min__7324; ((i__7326) <= (i__7061max__7325));
                     i__7326 = ((i__7326) + (((x10_long)1ll))))
                {
                    x10_long k__7327 = i__7326;
                    
                    //#line 67 "MemoizedSW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                    ((x10_int) (((((i) - (k__7327))) - (((x10_long)1ll)))))));
                    
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
            x10_long i__7079min__7328 = ((x10_long)0ll);
            x10_long i__7079max__7329 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__7330;
                for (i__7330 = i__7079min__7328; ((i__7330) <= (i__7079max__7329));
                     i__7330 = ((i__7330) + (((x10_long)1ll))))
                {
                    x10_long k__7331 = i__7330;
                    
                    //#line 76 "MemoizedSW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ((x10_char)'-'));
                    
                    //#line 77 "MemoizedSW.x10"
                    result2->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                    ((x10_int) (((((j) - (k__7331))) - (((x10_long)1ll)))))));
                    
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
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7412), matchCount), (&::MemoizedSW_Strings::sl__7413)), stringLength)));
    
    //#line 86 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7414), gapCount), (&::MemoizedSW_Strings::sl__7413)), stringLength)));
    
    //#line 87 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7415), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                            maxCoordinates->FMGL(first),
                                                                                                            maxCoordinates->FMGL(second)))));
    
    //#line 89 "MemoizedSW.x10"
    x10_long i__7097min__7332 = ((x10_long)0ll);
    x10_long i__7097max__7333 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__7334;
        for (i__7334 = i__7097min__7332; ((i__7334) <= (i__7097max__7333));
             i__7334 = ((i__7334) + (((x10_long)1ll)))) {
            x10_long k__7335 = i__7334;
            
            //#line 90 "MemoizedSW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result1->x10::lang::Rail< x10_char >::__apply(
                                                                   k__7335)));
        }
    }
    
    //#line 92 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
    
    //#line 93 "MemoizedSW.x10"
    x10_long i__7115min__7336 = ((x10_long)0ll);
    x10_long i__7115max__7337 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__7338;
        for (i__7338 = i__7115min__7336; ((i__7338) <= (i__7115max__7337));
             i__7338 = ((i__7338) + (((x10_long)1ll)))) {
            x10_long k__7339 = i__7338;
            
            //#line 94 "MemoizedSW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result2->x10::lang::Rail< x10_char >::__apply(
                                                                   k__7339)));
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
    ::x10::lang::String* result1 = (&::MemoizedSW_Strings::sl__7410);
    
    //#line 104 "MemoizedSW.x10"
    ::x10::lang::String* result2 = (&::MemoizedSW_Strings::sl__7410);
    
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
            x10_long i__7133min__7340 = ((x10_long)0ll);
            x10_long i__7133max__7341 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__7342;
                for (i__7342 = i__7133min__7340; ((i__7342) <= (i__7133max__7341));
                     i__7342 = ((i__7342) + (((x10_long)1ll))))
                {
                    x10_long k__7343 = i__7342;
                    
                    //#line 121 "MemoizedSW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 122 "MemoizedSW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__7343))) - (((x10_long)1ll)))))), result1);
                    
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
            x10_long i__7151min__7344 = ((x10_long)0ll);
            x10_long i__7151max__7345 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__7346;
                for (i__7346 = i__7151min__7344; ((i__7346) <= (i__7151max__7345));
                     i__7346 = ((i__7346) + (((x10_long)1ll))))
                {
                    x10_long k__7347 = i__7346;
                    
                    //#line 129 "MemoizedSW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 130 "MemoizedSW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__7347))) - (((x10_long)1ll)))))), result2);
                    
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
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7412), matchCount), (&::MemoizedSW_Strings::sl__7413)), stringLength)));
    
    //#line 138 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7414), gapCount), (&::MemoizedSW_Strings::sl__7413)), stringLength)));
    
    //#line 139 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7415), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
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
    x10_long i__7187min__7356 = ((x10_long)1ll);
    x10_long i__7187max__7357 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__7358;
        for (i__7358 = i__7187min__7356; ((i__7358) <= (i__7187max__7357));
             i__7358 = ((i__7358) + (((x10_long)1ll)))) {
            x10_long i__7359 = i__7358;
            
            //#line 155 "MemoizedSW.x10"
            x10_long i__7169min__7352 = ((x10_long)1ll);
            x10_long i__7169max__7353 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__7354;
                for (i__7354 = i__7169min__7352; ((i__7354) <= (i__7169max__7353));
                     i__7354 = ((i__7354) + (((x10_long)1ll))))
                {
                    x10_long j__7355 = i__7354;
                    
                    //#line 156 "MemoizedSW.x10"
                    x10_long max__7348 = (x10_long)0x8000000000000000LL;
                    
                    //#line 158 "MemoizedSW.x10"
                    x10_char firstChar__7349 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__7359) - (((x10_long)1ll))))));
                    
                    //#line 159 "MemoizedSW.x10"
                    x10_char secondChar__7350 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__7355) - (((x10_long)1ll))))));
                    
                    //#line 161 "MemoizedSW.x10"
                    x10_long diagScore__7351 = ::MemoizedSW::max(
                                                 bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7359) - (((x10_long)1ll))),
                                                   ((j__7355) - (((x10_long)1ll)))),
                                                 bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7359) - (((x10_long)1ll))),
                                                   ((j__7355) - (((x10_long)1ll)))),
                                                 matrix->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__7359) - (((x10_long)1ll))),
                                                   ((j__7355) - (((x10_long)1ll)))));
                    
                    //#line 162 "MemoizedSW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__7359, j__7355, ((diagScore__7351) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                ((x10_long)(((x10_int) (firstChar__7349).v))),
                                                                ((x10_long)(((x10_int) (secondChar__7350).v)))))));
                    
                    //#line 163 "MemoizedSW.x10"
                    if (((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__7359, j__7355)) < (((x10_long)0ll))))
                    {
                        matrix->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)0ll));
                    }
                    
                    //#line 165 "MemoizedSW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__7359, j__7355, ::MemoizedSW::max(
                                          ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                             ((i__7359) - (((x10_long)1ll))),
                                                             j__7355))),
                                          ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                             ((i__7359) - (((x10_long)1ll))),
                                                             j__7355))),
                                          ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                               ((i__7359) - (((x10_long)1ll))),
                                                               j__7355)))));
                    
                    //#line 168 "MemoizedSW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__7359, j__7355, ::x10::lang::Math::max(
                                          bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                            i__7359, j__7355),
                                          ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                              ((i__7359) - (((x10_long)1ll))),
                                              j__7355)) + (gapOpening))));
                    
                    //#line 169 "MemoizedSW.x10"
                    if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                            i__7359, j__7355)) < (((x10_long)0ll))))
                    {
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)0ll));
                    }
                    
                    //#line 171 "MemoizedSW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__7359, j__7355, ::MemoizedSW::max(
                                          ((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                             i__7359,
                                                             ((j__7355) - (((x10_long)1ll)))))),
                                          ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                               i__7359,
                                                               ((j__7355) - (((x10_long)1ll)))))),
                                          ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                             i__7359,
                                                             ((j__7355) - (((x10_long)1ll))))))));
                    
                    //#line 174 "MemoizedSW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__7359, j__7355, ::x10::lang::Math::max(
                                          bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                            i__7359, j__7355),
                                          ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                              i__7359, ((j__7355) - (((x10_long)1ll))))) + (gapOpening))));
                    
                    //#line 175 "MemoizedSW.x10"
                    if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__7359, j__7355)) < (((x10_long)0ll))))
                    {
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)0ll));
                    }
                    
                    //#line 177 "MemoizedSW.x10"
                    if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                             i__7359, j__7355)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                      i__7359,
                                                      j__7355))) &&
                        ((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__7359, j__7355)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__7359,
                                                     j__7355)))))
                    {
                        
                        //#line 178 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)0ll));
                        
                        //#line 179 "MemoizedSW.x10"
                        max__7348 = matrix->x10::array::Array_2<x10_long>::__apply(
                                      i__7359, j__7355);
                    } else 
                    //#line 180 "MemoizedSW.x10"
                    if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                             i__7359, j__7355)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                      i__7359,
                                                      j__7355))) &&
                        ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__7359, j__7355)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__7359,
                                                     j__7355)))))
                    {
                        
                        //#line 181 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)-1ll));
                        
                        //#line 182 "MemoizedSW.x10"
                        max__7348 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                      i__7359, j__7355);
                    } else {
                        
                        //#line 184 "MemoizedSW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__7359, j__7355, ((x10_long)1ll));
                        
                        //#line 185 "MemoizedSW.x10"
                        max__7348 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                      i__7359, j__7355);
                    }
                    
                    //#line 188 "MemoizedSW.x10"
                    if (((max__7348) > (globalMax))) {
                        
                        //#line 189 "MemoizedSW.x10"
                        globalMax = max__7348;
                        
                        //#line 190 "MemoizedSW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__7359,
                                                                                      j__7355);
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
                               x10_long gapOpening, x10_long gapExtension,
                               x10_long cutoff) {
    
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
    x10_long i__7259min__7382 = ((x10_long)1ll);
    x10_long i__7259max__7383 = ((maxRow) + (maxCol));
    {
        x10_long i__7384;
        for (i__7384 = i__7259min__7382; ((i__7384) <= (i__7259max__7383));
             i__7384 = ((i__7384) + (((x10_long)1ll)))) {
            x10_long line__7385 = i__7384;
            
            //#line 226 "MemoizedSW.x10"
            x10_long startCol__7380 = ((x10_long)0ll);
            
            //#line 227 "MemoizedSW.x10"
            if (((((line__7385) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 228 "MemoizedSW.x10"
                startCol__7380 = ((line__7385) - (maxRow));
            }
            
            //#line 231 "MemoizedSW.x10"
            x10_long count__7381 = ((line__7385) < (((maxCol) - (startCol__7380))))
              ? (line__7385) : (((maxCol) - (startCol__7380)));
            
            //#line 232 "MemoizedSW.x10"
            count__7381 = ((count__7381) < (maxRow)) ? (count__7381)
              : (maxRow);
            {
                
                //#line 235 "MemoizedSW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__7397 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__7241min__7376 = ((x10_long)0ll);
                        x10_long i__7241max__7377 = ((count__7381) - (((x10_long)1ll)));
                        {
                            x10_long i__7378;
                            for (i__7378 = i__7241min__7376;
                                 ((i__7378) <= (i__7241max__7377));
                                 i__7378 = ((i__7378) + (((x10_long)1ll))))
                            {
                                x10_long k__7379 = i__7378;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(MemoizedSW__closure__1)))MemoizedSW__closure__1(&(maxRow), line__7385, k__7379, &(startCol__7380), cutoff, string1, string2, bestLeftwards, bestUpwards, matrix, blosum, gapOpening, gapExtension, directions, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__7395 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__7395);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__7397);
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
    
    //#line 312 "MemoizedSW.x10"
    x10_long cutoff = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                      ((x10_long)5ll)))));
    
    //#line 314 "MemoizedSW.x10"
    ::x10::lang::String* string1 = (&::MemoizedSW_Strings::sl__7410);
    
    //#line 315 "MemoizedSW.x10"
    ::x10::lang::String* string2 = (&::MemoizedSW_Strings::sl__7410);
    
    //#line 317 "MemoizedSW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 318 "MemoizedSW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 319 "MemoizedSW.x10"
    ::x10::lang::String* line;
    
    //#line 320 "MemoizedSW.x10"
    line = reader1->readLine();
    
    //#line 321 "MemoizedSW.x10"
    while (true) {
        
        //#line 322 "MemoizedSW.x10"
        try {
            
            //#line 323 "MemoizedSW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc9);
                {
                    
                    //#line 326 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 328 "MemoizedSW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 330 "MemoizedSW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 331 "MemoizedSW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 332 "MemoizedSW.x10"
    line = reader2->readLine();
    
    //#line 333 "MemoizedSW.x10"
    while (true) {
        
        //#line 334 "MemoizedSW.x10"
        try {
            
            //#line 335 "MemoizedSW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 338 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 340 "MemoizedSW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 343 "MemoizedSW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 344 "MemoizedSW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 346 "MemoizedSW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 347 "MemoizedSW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 348 "MemoizedSW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 349 "MemoizedSW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 351 "MemoizedSW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::MemoizedSW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 352 "MemoizedSW.x10"
    x10_long i__7277min__7390 = ((x10_long)0ll);
    x10_long i__7277max__7391 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__7392;
        for (i__7392 = i__7277min__7390; ((i__7392) <= (i__7277max__7391));
             i__7392 = ((i__7392) + (((x10_long)1ll)))) {
            x10_long i__7393 = i__7392;
            
            //#line 353 "MemoizedSW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__7393))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 355 "MemoizedSW.x10"
    while (true) {
        
        //#line 356 "MemoizedSW.x10"
        try {
            
            //#line 357 "MemoizedSW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 360 "MemoizedSW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 362 "MemoizedSW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::MemoizedSW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 363 "MemoizedSW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 364 "MemoizedSW.x10"
        x10_long i__7295min__7386 = ((x10_long)1ll);
        x10_long i__7295max__7387 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__7388;
            for (i__7388 = i__7295min__7386; ((i__7388) <= (i__7295max__7387));
                 i__7388 = ((i__7388) + (((x10_long)1ll))))
            {
                x10_long i__7389 = i__7388;
                
                //#line 365 "MemoizedSW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__7389) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__7389)))));
            }
        }
        
    }
    
    //#line 369 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::MemoizedSW_Strings::sl__7416)));
    
    //#line 370 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7417), cutoff), (&::MemoizedSW_Strings::sl__7418)), ::x10aux::nullCheck(string1)->x10::lang::String::length())));
    
    //#line 371 "MemoizedSW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 372 "MemoizedSW.x10"
    ::MemoizedSW::parallelMatch(string1, string2, blosum,
                                gapOpening, gapExtension,
                                cutoff);
    
    //#line 373 "MemoizedSW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 374 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7419), ((((x10_double) (finalTime))) / (1000000.0))), (&::MemoizedSW_Strings::sl__7420))));
    
    //#line 376 "MemoizedSW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 377 "MemoizedSW.x10"
    ::MemoizedSW::match(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 378 "MemoizedSW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 379 "MemoizedSW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::MemoizedSW_Strings::sl__7421), ((((x10_double) (finalTime))) / (1000000.0))), (&::MemoizedSW_Strings::sl__7420))));
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

::x10::lang::String MemoizedSW_Strings::sl__7410("");
::x10::lang::String MemoizedSW_Strings::sl__7411(" ");
::x10::lang::String MemoizedSW_Strings::sl__7414("Gaps: ");
::x10::lang::String MemoizedSW_Strings::sl__7418(" ----- Size = ");
::x10::lang::String MemoizedSW_Strings::sl__7412("Identity: ");
::x10::lang::String MemoizedSW_Strings::sl__7420("ms");
::x10::lang::String MemoizedSW_Strings::sl__7419("Parallel Runtime: ");
::x10::lang::String MemoizedSW_Strings::sl__7417("Cutoff = ");
::x10::lang::String MemoizedSW_Strings::sl__7415("Score: ");
::x10::lang::String MemoizedSW_Strings::sl__7413("/");
::x10::lang::String MemoizedSW_Strings::sl__7416("==================== Memoized Smith Waterman ==================");
::x10::lang::String MemoizedSW_Strings::sl__7421("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<MemoizedSW__closure__1>MemoizedSW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &MemoizedSW__closure__1::__apply, &MemoizedSW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry MemoizedSW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &MemoizedSW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t MemoizedSW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(MemoizedSW__closure__1::_deserialize);
const ::x10aux::serialization_id_t MemoizedSW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(MemoizedSW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of MemoizedSW */
/*************************************************/
