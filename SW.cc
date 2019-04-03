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
        
        //#line 218 "SW.x10"
        x10_long i__6472 = maxRow;
        
        //#line 219 "SW.x10"
        if (((maxRow) > (line__6487))) {
            
            //#line 220 "SW.x10"
            i__6472 = line__6487;
        }
        
        //#line 222 "SW.x10"
        i__6472 = ((i__6472) - (k__6481));
        
        //#line 223 "SW.x10"
        x10_long j__6473 = ((((startCol__6482) + (k__6481))) + (((x10_long)1ll)));
        
        //#line 225 "SW.x10"
        x10_long max__6474 = (x10_long)0x8000000000000000LL;
        
        //#line 226 "SW.x10"
        x10_long dir__6475 = ((x10_long)0ll);
        
        //#line 229 "SW.x10"
        i__6472 = ((((((i__6472) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 230 "SW.x10"
        j__6473 = ((((((j__6473) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 232 "SW.x10"
        x10_long cellMaxRow__6476 = ((((i__6472) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 233 "SW.x10"
        x10_long cellMaxCol__6477 = ((((j__6473) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 236 "SW.x10"
        if (((cellMaxRow__6476) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 237 "SW.x10"
            cellMaxRow__6476 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 239 "SW.x10"
        if (((cellMaxCol__6477) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 240 "SW.x10"
            cellMaxCol__6477 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 243 "SW.x10"
        x10_long i__6221min__6468 = i__6472;
        x10_long i__6221max__6469 = cellMaxRow__6476;
        {
            x10_long i__6470;
            for (i__6470 = i__6221min__6468; ((i__6470) <= (i__6221max__6469));
                 i__6470 = ((i__6470) + (((x10_long)1ll))))
            {
                x10_long a__6471 = i__6470;
                
                //#line 244 "SW.x10"
                x10_long i__6203min__6464 = j__6473;
                x10_long i__6203max__6465 = cellMaxCol__6477;
                {
                    x10_long i__6466;
                    for (i__6466 = i__6203min__6464; ((i__6466) <= (i__6203max__6465));
                         i__6466 = ((i__6466) + (((x10_long)1ll))))
                    {
                        x10_long b__6467 = i__6466;
                        
                        //#line 245 "SW.x10"
                        max__6474 = (x10_long)0x8000000000000000LL;
                        
                        //#line 246 "SW.x10"
                        dir__6475 = ((x10_long)0ll);
                        
                        //#line 248 "SW.x10"
                        visited = ((visited) + (((x10_long)1ll)));
                        
                        //#line 250 "SW.x10"
                        x10_long diagScore__6457;
                        
                        //#line 251 "SW.x10"
                        x10_char firstChar__6458 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__6471) - (((x10_long)1ll))))));
                        
                        //#line 252 "SW.x10"
                        x10_char secondChar__6459 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__6467) - (((x10_long)1ll))))));
                        
                        //#line 253 "SW.x10"
                        diagScore__6457 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((a__6471) - (((x10_long)1ll))),
                                              ((b__6467) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                     ((x10_long)(((x10_int) (firstChar__6458).v))),
                                                                                     ((x10_long)(((x10_int) (secondChar__6459).v))))));
                        
                        //#line 254 "SW.x10"
                        if (((diagScore__6457) > (max__6474)))
                        {
                            
                            //#line 255 "SW.x10"
                            max__6474 = diagScore__6457;
                            
                            //#line 256 "SW.x10"
                            dir__6475 = ((x10_long)0ll);
                        }
                        
                        //#line 259 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> upResult__6460 =
                          ::SW::checkUpwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             a__6471, b__6467);
                        
                        //#line 260 "SW.x10"
                        x10_long upScore__6461 = upResult__6460->FMGL(first);
                        
                        //#line 261 "SW.x10"
                        if (((upScore__6461) > (max__6474)))
                        {
                            
                            //#line 262 "SW.x10"
                            max__6474 = upScore__6461;
                            
                            //#line 263 "SW.x10"
                            dir__6475 = upResult__6460->FMGL(second);
                        }
                        
                        //#line 266 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> leftResult__6462 =
                          ::SW::checkLeftwards(matrix, directions,
                                               gapOpening,
                                               gapExtension,
                                               a__6471, b__6467);
                        
                        //#line 267 "SW.x10"
                        x10_long leftScore__6463 = leftResult__6462->FMGL(first);
                        
                        //#line 268 "SW.x10"
                        if (((leftScore__6463) > (max__6474)))
                        {
                            
                            //#line 269 "SW.x10"
                            max__6474 = leftScore__6463;
                            
                            //#line 270 "SW.x10"
                            dir__6475 = leftResult__6462->FMGL(second);
                        }
                        
                        //#line 273 "SW.x10"
                        max__6474 = ((max__6474) < (((x10_long)0ll)))
                          ? (((x10_long)0ll)) : (max__6474);
                        
                        //#line 275 "SW.x10"
                        if (((max__6474) > (globalMax))) {
                            
                            //#line 276 "SW.x10"
                            globalMax = max__6474;
                            
                            //#line 277 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__6471,
                                                                                          b__6467);
                        }
                        
                        //#line 279 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__6471, b__6467, max__6474);
                        
                        //#line 280 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          a__6471, b__6467, dir__6475);
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__6487;
    x10_long k__6481;
    x10aux::captured_struct_lval<x10_long> startCol__6482;
    x10aux::captured_struct_lval<x10_long> cutoff;
    ::x10::lang::String* string1;
    ::x10::lang::String* string2;
    x10aux::captured_struct_lval<x10_long> visited;
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
        buf.write(this->maxRow);
        buf.write(this->line__6487);
        buf.write(this->k__6481);
        buf.write(this->startCol__6482);
        buf.write(this->cutoff);
        buf.write(this->string1);
        buf.write(this->string2);
        buf.write(this->visited);
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
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__6487 = buf.read<x10_long>();
        x10_long that_k__6481 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__6482 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval<x10_long> that_cutoff = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        x10aux::captured_struct_lval<x10_long> that_visited = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__1* this_ = new (storage) SW__closure__1(that_maxRow, that_line__6487, that_k__6481, that_startCol__6482, that_cutoff, that_string1, that_string2, that_visited, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__6487, x10_long k__6481, x10aux::captured_struct_lval<x10_long> startCol__6482, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, x10aux::captured_struct_lval<x10_long> visited, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__6487(line__6487), k__6481(k__6481), startCol__6482(startCol__6482), cutoff(cutoff), string1(string1), string2(string2), visited(visited), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:217-283";
    }

};

#endif // SW__CLOSURE__1_CLOSURE
#ifndef SW__CLOSURE__2_CLOSURE
#define SW__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SW__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SW__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 348 "SW.x10"
        x10_long i__6500 = maxRow;
        
        //#line 349 "SW.x10"
        if (((maxRow) > (line__6513))) {
            
            //#line 350 "SW.x10"
            i__6500 = line__6513;
        }
        
        //#line 352 "SW.x10"
        i__6500 = ((i__6500) - (k__6507));
        
        //#line 353 "SW.x10"
        x10_long j__6501 = ((((startCol__6508) + (k__6507))) + (((x10_long)1ll)));
        
        //#line 357 "SW.x10"
        i__6500 = ((((((i__6500) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 358 "SW.x10"
        j__6501 = ((((((j__6501) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 360 "SW.x10"
        x10_long cellMaxRow__6502 = ((((i__6500) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 361 "SW.x10"
        x10_long cellMaxCol__6503 = ((((j__6501) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 364 "SW.x10"
        if (((cellMaxRow__6502) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 365 "SW.x10"
            cellMaxRow__6502 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 367 "SW.x10"
        if (((cellMaxCol__6503) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 368 "SW.x10"
            cellMaxCol__6503 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 371 "SW.x10"
        x10_long i__6293min__6496 = i__6500;
        x10_long i__6293max__6497 = cellMaxRow__6502;
        {
            x10_long i__6498;
            for (i__6498 = i__6293min__6496; ((i__6498) <= (i__6293max__6497));
                 i__6498 = ((i__6498) + (((x10_long)1ll))))
            {
                x10_long a__6499 = i__6498;
                
                //#line 372 "SW.x10"
                x10_long i__6275min__6492 = j__6501;
                x10_long i__6275max__6493 = cellMaxCol__6503;
                {
                    x10_long i__6494;
                    for (i__6494 = i__6275min__6492; ((i__6494) <= (i__6275max__6493));
                         i__6494 = ((i__6494) + (((x10_long)1ll))))
                    {
                        x10_long b__6495 = i__6494;
                        
                        //#line 373 "SW.x10"
                        x10_long max__6488 = (x10_long)0x8000000000000000LL;
                        
                        //#line 375 "SW.x10"
                        x10_char firstChar__6489 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__6499) - (((x10_long)1ll))))));
                        
                        //#line 376 "SW.x10"
                        x10_char secondChar__6490 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__6495) - (((x10_long)1ll))))));
                        
                        //#line 378 "SW.x10"
                        x10_long diagScore__6491 = ::SW::max(
                                                     bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__6499) - (((x10_long)1ll))),
                                                       ((b__6495) - (((x10_long)1ll)))),
                                                     bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__6499) - (((x10_long)1ll))),
                                                       ((b__6495) - (((x10_long)1ll)))),
                                                     matrix->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__6499) - (((x10_long)1ll))),
                                                       ((b__6495) - (((x10_long)1ll)))));
                        
                        //#line 379 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__6499, b__6495, ((diagScore__6491) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                    ((x10_long)(((x10_int) (firstChar__6489).v))),
                                                                    ((x10_long)(((x10_int) (secondChar__6490).v)))))));
                        
                        //#line 380 "SW.x10"
                        if (((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__6499, b__6495)) < (((x10_long)0ll))))
                        {
                            matrix->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)0ll));
                        }
                        
                        //#line 391 "SW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__6499, b__6495, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                         ((a__6499) - (((x10_long)1ll))),
                                                                         b__6495))),
                                                      ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                         ((a__6499) - (((x10_long)1ll))),
                                                                         b__6495))),
                                                      ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                           ((a__6499) - (((x10_long)1ll))),
                                                                           b__6495)))));
                        
                        //#line 394 "SW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__6499, b__6495, ::x10::lang::Math::max(
                                              bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                a__6499, b__6495),
                                              ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                  ((a__6499) - (((x10_long)1ll))),
                                                  b__6495)) + (gapOpening))));
                        
                        //#line 395 "SW.x10"
                        if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                a__6499, b__6495)) < (((x10_long)0ll))))
                        {
                            bestUpwards->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)0ll));
                        }
                        
                        //#line 402 "SW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__6499, b__6495, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                         a__6499,
                                                                         ((b__6495) - (((x10_long)1ll)))))),
                                                      ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                           a__6499,
                                                                           ((b__6495) - (((x10_long)1ll)))))),
                                                      ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                         a__6499,
                                                                         ((b__6495) - (((x10_long)1ll))))))));
                        
                        //#line 405 "SW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__6499, b__6495, ::x10::lang::Math::max(
                                              bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                a__6499, b__6495),
                                              ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                  a__6499,
                                                  ((b__6495) - (((x10_long)1ll))))) + (gapOpening))));
                        
                        //#line 406 "SW.x10"
                        if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__6499, b__6495)) < (((x10_long)0ll))))
                        {
                            bestLeftwards->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)0ll));
                        }
                        
                        //#line 424 "SW.x10"
                        if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                                 a__6499, b__6495)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                          a__6499,
                                                          b__6495))) &&
                            ((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__6499, b__6495)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__6499,
                                                         b__6495)))))
                        {
                            
                            //#line 426 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)0ll));
                            
                            //#line 427 "SW.x10"
                            max__6488 = matrix->x10::array::Array_2<x10_long>::__apply(
                                          a__6499, b__6495);
                        } else 
                        //#line 428 "SW.x10"
                        if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                 a__6499, b__6495)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                          a__6499,
                                                          b__6495))) &&
                            ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__6499, b__6495)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__6499,
                                                         b__6495)))))
                        {
                            
                            //#line 429 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)-1ll));
                            
                            //#line 430 "SW.x10"
                            max__6488 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                          a__6499, b__6495);
                        } else {
                            
                            //#line 432 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__6499, b__6495, ((x10_long)1ll));
                            
                            //#line 433 "SW.x10"
                            max__6488 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                          a__6499, b__6495);
                        }
                        
                        //#line 436 "SW.x10"
                        if (((max__6488) > (globalMax))) {
                            
                            //#line 437 "SW.x10"
                            globalMax = max__6488;
                            
                            //#line 438 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__6499,
                                                                                          b__6495);
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__6513;
    x10_long k__6507;
    x10aux::captured_struct_lval<x10_long> startCol__6508;
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
        buf.write(this->line__6513);
        buf.write(this->k__6507);
        buf.write(this->startCol__6508);
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
        SW__closure__2* storage = ::x10aux::alloc_z<SW__closure__2>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__6513 = buf.read<x10_long>();
        x10_long that_k__6507 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__6508 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__2* this_ = new (storage) SW__closure__2(that_maxRow, that_line__6513, that_k__6507, that_startCol__6508, that_cutoff, that_string1, that_string2, that_bestLeftwards, that_bestUpwards, that_matrix, that_blosum, that_gapOpening, that_gapExtension, that_directions, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__2(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__6513, x10_long k__6507, x10aux::captured_struct_lval<x10_long> startCol__6508, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* bestLeftwards, ::x10::array::Array_2<x10_long>* bestUpwards, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening, x10_long gapExtension, ::x10::array::Array_2<x10_long>* directions, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__6513(line__6513), k__6507(k__6507), startCol__6508(startCol__6508), cutoff(cutoff), string1(string1), string2(string2), bestLeftwards(bestLeftwards), bestUpwards(bestUpwards), matrix(matrix), blosum(blosum), gapOpening(gapOpening), gapExtension(gapExtension), directions(directions), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:347-442";
    }

};

#endif // SW__CLOSURE__2_CLOSURE
#ifndef SW__CLOSURE__3_CLOSURE
#define SW__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SW__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SW__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 490 "SW.x10"
        x10_long i__6514 = maxRow;
        
        //#line 491 "SW.x10"
        if (((maxRow) > (line__6534))) {
            
            //#line 492 "SW.x10"
            i__6514 = line__6534;
        }
        
        //#line 494 "SW.x10"
        i__6514 = ((i__6514) - (k__6528));
        
        //#line 495 "SW.x10"
        x10_long j__6515 = ((((startCol__6529) + (k__6528))) + (((x10_long)1ll)));
        
        //#line 497 "SW.x10"
        x10_long max__6516 = (x10_long)0x8000000000000000LL;
        
        //#line 498 "SW.x10"
        x10_long dir__6517 = ((x10_long)0ll);
        
        //#line 500 "SW.x10"
        x10_long diagScore__6518;
        
        //#line 501 "SW.x10"
        x10_char firstChar__6519 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__6514) - (((x10_long)1ll))))));
        
        //#line 502 "SW.x10"
        x10_char secondChar__6520 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__6515) - (((x10_long)1ll))))));
        
        //#line 503 "SW.x10"
        diagScore__6518 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__6514) - (((x10_long)1ll))),
                              ((j__6515) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__6519).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__6520).v))))));
        
        //#line 504 "SW.x10"
        if (((diagScore__6518) > (max__6516))) {
            
            //#line 505 "SW.x10"
            max__6516 = diagScore__6518;
            
            //#line 506 "SW.x10"
            dir__6517 = ((x10_long)0ll);
        }
        
        //#line 509 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__6521 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__6514, j__6515);
        
        //#line 510 "SW.x10"
        x10_long upScore__6522 = upResult__6521->FMGL(first);
        
        //#line 511 "SW.x10"
        if (((upScore__6522) > (max__6516))) {
            
            //#line 512 "SW.x10"
            max__6516 = upScore__6522;
            
            //#line 513 "SW.x10"
            dir__6517 = upResult__6521->FMGL(second);
        }
        
        //#line 516 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__6523 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__6514, j__6515);
        
        //#line 517 "SW.x10"
        x10_long leftScore__6524 = leftResult__6523->FMGL(first);
        
        //#line 518 "SW.x10"
        if (((leftScore__6524) > (max__6516))) {
            
            //#line 519 "SW.x10"
            max__6516 = leftScore__6524;
            
            //#line 520 "SW.x10"
            dir__6517 = leftResult__6523->FMGL(second);
        }
        
        //#line 523 "SW.x10"
        max__6516 = ((max__6516) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__6516);
        
        //#line 525 "SW.x10"
        if (((max__6516) > (globalMax))) {
            
            //#line 526 "SW.x10"
            globalMax = max__6516;
            
            //#line 527 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__6514,
                                                                          j__6515);
        }
        
        //#line 529 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__6514,
                                                     j__6515,
                                                     max__6516);
        
        //#line 530 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__6514, j__6515, dir__6517);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__6534;
    x10_long k__6528;
    x10aux::captured_struct_lval<x10_long> startCol__6529;
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
        buf.write(this->maxRow);
        buf.write(this->line__6534);
        buf.write(this->k__6528);
        buf.write(this->startCol__6529);
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
        SW__closure__3* storage = ::x10aux::alloc_z<SW__closure__3>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__6534 = buf.read<x10_long>();
        x10_long that_k__6528 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__6529 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__3* this_ = new (storage) SW__closure__3(that_maxRow, that_line__6534, that_k__6528, that_startCol__6529, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__3(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__6534, x10_long k__6528, x10aux::captured_struct_lval<x10_long> startCol__6529, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__6534(line__6534), k__6528(k__6528), startCol__6529(startCol__6529), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:489-531";
    }

};

#endif // SW__CLOSURE__3_CLOSURE

//#line 14 "SW.x10"

//#line 16 "SW.x10"

//#line 17 "SW.x10"

//#line 18 "SW.x10"

//#line 20 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 21 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 22 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__6569);
    
    //#line 23 "SW.x10"
    x10_long i__6077min__6418 = ((x10_long)0ll);
    x10_long i__6077max__6419 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__6420;
        for (i__6420 = i__6077min__6418; ((i__6420) <= (i__6077max__6419));
             i__6420 = ((i__6420) + (((x10_long)1ll)))) {
            x10_long i__6421 = i__6420;
            
            //#line 24 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__6421))),
                                         ((x10_char)' ')))) {
                
                //#line 25 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 26 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 27 "SW.x10"
                    currToken = (&::SW_Strings::sl__6569);
                }
                
            } else {
                
                //#line 31 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__6421))));
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
    x10_long gap = ((x10_long)0ll);
    
    //#line 46 "SW.x10"
    x10_long i__6095min__6423 = ((x10_long)0ll);
    x10_long i__6095max__6424 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__6425;
        for (i__6425 = i__6095min__6423; ((i__6425) <= (i__6095max__6424));
             i__6425 = ((i__6425) + (((x10_long)1ll)))) {
            x10_long i__6426 = i__6425;
            
            //#line 47 "SW.x10"
            x10_long score__6422 = ((x10_long)0ll);
            
            //#line 49 "SW.x10"
            score__6422 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              i__6426, col)) + (((gapExtension) * (((((row) - (i__6426))) - (((x10_long)1ll)))))));
            
            //#line 53 "SW.x10"
            score__6422 = ((score__6422) + (gapOpening));
            
            //#line 56 "SW.x10"
            if (((score__6422) > (max))) {
                
                //#line 57 "SW.x10"
                max = score__6422;
                
                //#line 58 "SW.x10"
                gap = ((row) - (i__6426));
            }
            
        }
    }
    
    //#line 61 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 64 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 67 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 68 "SW.x10"
    x10_long gap = ((x10_long)0ll);
    
    //#line 70 "SW.x10"
    x10_long i__6113min__6428 = ((x10_long)0ll);
    x10_long i__6113max__6429 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__6430;
        for (i__6430 = i__6113min__6428; ((i__6430) <= (i__6113max__6429));
             i__6430 = ((i__6430) + (((x10_long)1ll)))) {
            x10_long j__6431 = i__6430;
            
            //#line 71 "SW.x10"
            x10_long score__6427 = ((x10_long)0ll);
            
            //#line 73 "SW.x10"
            score__6427 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              row, j__6431)) + (((gapExtension) * (((((col) - (j__6431))) - (((x10_long)1ll)))))));
            
            //#line 76 "SW.x10"
            score__6427 = ((score__6427) + (gapOpening));
            
            //#line 79 "SW.x10"
            if (((score__6427) > (max))) {
                
                //#line 80 "SW.x10"
                max = score__6427;
                
                //#line 81 "SW.x10"
                gap = ((j__6431) - (col));
            }
            
        }
    }
    
    //#line 84 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 87 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 89 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 90 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 91 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__6569);
    
    //#line 92 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__6569);
    
    //#line 94 "SW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 95 "SW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 96 "SW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 97 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 98 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 99 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 100 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 101 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 102 "SW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 104 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 105 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 106 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 107 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 108 "SW.x10"
            x10_long i__6131min__6432 = ((x10_long)0ll);
            x10_long i__6131max__6433 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__6434;
                for (i__6434 = i__6131min__6432; ((i__6434) <= (i__6131max__6433));
                     i__6434 = ((i__6434) + (((x10_long)1ll))))
                {
                    x10_long k__6435 = i__6434;
                    
                    //#line 109 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 110 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__6435))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 111 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 113 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 114 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 116 "SW.x10"
            x10_long i__6149min__6436 = ((x10_long)0ll);
            x10_long i__6149max__6437 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__6438;
                for (i__6438 = i__6149min__6436; ((i__6438) <= (i__6149max__6437));
                     i__6438 = ((i__6438) + (((x10_long)1ll))))
                {
                    x10_long k__6439 = i__6438;
                    
                    //#line 117 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 118 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__6439))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 119 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 121 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 122 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 125 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__6570), matchCount), (&::SW_Strings::sl__6571)), stringLength)));
    
    //#line 126 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__6572), gapCount), (&::SW_Strings::sl__6571)), stringLength)));
    
    //#line 127 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__6573), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 128 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 129 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 132 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 135 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 136 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 137 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 138 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 139 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 140 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 142 "SW.x10"
    x10_long i__6185min__6453 = ((x10_long)1ll);
    x10_long i__6185max__6454 = ((x10_long)(S1_SIZE));
    {
        x10_long i__6455;
        for (i__6455 = i__6185min__6453; ((i__6455) <= (i__6185max__6454));
             i__6455 = ((i__6455) + (((x10_long)1ll)))) {
            x10_long i__6456 = i__6455;
            
            //#line 143 "SW.x10"
            x10_long i__6167min__6449 = ((x10_long)1ll);
            x10_long i__6167max__6450 = ((x10_long)(S2_SIZE));
            {
                x10_long i__6451;
                for (i__6451 = i__6167min__6449; ((i__6451) <= (i__6167max__6450));
                     i__6451 = ((i__6451) + (((x10_long)1ll))))
                {
                    x10_long j__6452 = i__6451;
                    
                    //#line 144 "SW.x10"
                    x10_long max__6440 = (x10_long)0x8000000000000000LL;
                    
                    //#line 145 "SW.x10"
                    x10_long dir__6441 = ((x10_long)0ll);
                    
                    //#line 146 "SW.x10"
                    x10_long diagScore__6442;
                    
                    //#line 147 "SW.x10"
                    x10_char firstChar__6443 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__6456) - (((x10_long)1ll))))));
                    
                    //#line 148 "SW.x10"
                    x10_char secondChar__6444 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__6452) - (((x10_long)1ll))))));
                    
                    //#line 149 "SW.x10"
                    diagScore__6442 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__6456) - (((x10_long)1ll))),
                                          ((j__6452) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__6443).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__6444).v))))));
                    
                    //#line 150 "SW.x10"
                    if (((diagScore__6442) > (max__6440)))
                    {
                        
                        //#line 151 "SW.x10"
                        max__6440 = diagScore__6442;
                        
                        //#line 152 "SW.x10"
                        dir__6441 = ((x10_long)0ll);
                    }
                    
                    //#line 155 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__6445 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__6456, j__6452);
                    
                    //#line 156 "SW.x10"
                    x10_long upScore__6446 = upResult__6445->FMGL(first);
                    
                    //#line 157 "SW.x10"
                    if (((upScore__6446) > (max__6440))) {
                        
                        //#line 158 "SW.x10"
                        max__6440 = upScore__6446;
                        
                        //#line 159 "SW.x10"
                        dir__6441 = upResult__6445->FMGL(second);
                    }
                    
                    //#line 161 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__6447 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__6456, j__6452);
                    
                    //#line 162 "SW.x10"
                    x10_long leftScore__6448 = leftResult__6447->FMGL(first);
                    
                    //#line 163 "SW.x10"
                    if (((leftScore__6448) > (max__6440)))
                    {
                        
                        //#line 164 "SW.x10"
                        max__6440 = leftScore__6448;
                        
                        //#line 165 "SW.x10"
                        dir__6441 = leftResult__6447->FMGL(second);
                    }
                    
                    //#line 167 "SW.x10"
                    max__6440 = ((max__6440) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__6440);
                    
                    //#line 169 "SW.x10"
                    if (((max__6440) > (globalMax))) {
                        
                        //#line 170 "SW.x10"
                        globalMax = max__6440;
                        
                        //#line 171 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__6456,
                                                                                      j__6452);
                    }
                    
                    //#line 174 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__6456, j__6452, max__6440);
                    
                    //#line 175 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__6456, j__6452, dir__6441);
                }
            }
            
        }
    }
    
    //#line 186 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 189 "SW.x10"
void SW::parallelMatch2(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 191 "SW.x10"
    x10_long cutoff = ((x10_long)5ll);
    
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
                                                                                         ((x10_long)0ll));
    
    //#line 198 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 199 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 201 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 202 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 204 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 205 "SW.x10"
    x10_long i__6257min__6484 = ((x10_long)1ll);
    x10_long i__6257max__6485 = ((maxRow) + (maxCol));
    {
        x10_long i__6486;
        for (i__6486 = i__6257min__6484; ((i__6486) <= (i__6257max__6485));
             i__6486 = ((i__6486) + (((x10_long)1ll)))) {
            x10_long line__6487 = i__6486;
            
            //#line 207 "SW.x10"
            x10_long startCol__6482 = ((x10_long)0ll);
            
            //#line 208 "SW.x10"
            if (((((line__6487) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 209 "SW.x10"
                startCol__6482 = ((line__6487) - (maxRow));
            }
            
            //#line 212 "SW.x10"
            x10_long count__6483 = ((line__6487) < (((maxCol) - (startCol__6482))))
              ? (line__6487) : (((maxCol) - (startCol__6482)));
            
            //#line 213 "SW.x10"
            count__6483 = ((count__6483) < (maxRow)) ? (count__6483)
              : (maxRow);
            {
                
                //#line 216 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__6546 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__6239min__6478 = ((x10_long)0ll);
                        x10_long i__6239max__6479 = ((count__6483) - (((x10_long)1ll)));
                        {
                            x10_long i__6480;
                            for (i__6480 = i__6239min__6478;
                                 ((i__6480) <= (i__6239max__6479));
                                 i__6480 = ((i__6480) + (((x10_long)1ll))))
                            {
                                x10_long k__6481 = i__6480;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(maxRow), line__6487, k__6481, &(startCol__6482), &(cutoff), string1, string2, &(visited), matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc6) {
                    {
                        ::x10::lang::CheckedThrowable* ct__6544 =
                          __exc6;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__6544);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__6546);
            }
        }
    }
    
    //#line 305 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 308 "SW.x10"
x10_long SW::max(x10_long first, x10_long second, x10_long third) {
    
    //#line 309 "SW.x10"
    if ((((first) >= (second)) && ((first) >= (third)))) {
        
        //#line 310 "SW.x10"
        return first;
        
    } else 
    //#line 311 "SW.x10"
    if ((((second) >= (third)) && ((second) >= (first))))
    {
        
        //#line 312 "SW.x10"
        return second;
        
    } else {
        
        //#line 314 "SW.x10"
        return third;
        
    }
    
}

//#line 318 "SW.x10"
void SW::parallelMatch3(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 320 "SW.x10"
    x10_long cutoff = ((x10_long)5ll);
    
    //#line 321 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 322 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 324 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestLeftwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                            ((maxCol) + (((x10_long)1ll))),
                                                                                            ((x10_long)0ll));
    
    //#line 325 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestUpwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                          ((maxCol) + (((x10_long)1ll))),
                                                                                          ((x10_long)0ll));
    
    //#line 326 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 327 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 329 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 330 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 332 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 333 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 335 "SW.x10"
    x10_long i__6329min__6510 = ((x10_long)1ll);
    x10_long i__6329max__6511 = ((maxRow) + (maxCol));
    {
        x10_long i__6512;
        for (i__6512 = i__6329min__6510; ((i__6512) <= (i__6329max__6511));
             i__6512 = ((i__6512) + (((x10_long)1ll)))) {
            x10_long line__6513 = i__6512;
            
            //#line 337 "SW.x10"
            x10_long startCol__6508 = ((x10_long)0ll);
            
            //#line 338 "SW.x10"
            if (((((line__6513) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 339 "SW.x10"
                startCol__6508 = ((line__6513) - (maxRow));
            }
            
            //#line 342 "SW.x10"
            x10_long count__6509 = ((line__6513) < (((maxCol) - (startCol__6508))))
              ? (line__6513) : (((maxCol) - (startCol__6508)));
            
            //#line 343 "SW.x10"
            count__6509 = ((count__6509) < (maxRow)) ? (count__6509)
              : (maxRow);
            {
                
                //#line 346 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__6551 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__6311min__6504 = ((x10_long)0ll);
                        x10_long i__6311max__6505 = ((count__6509) - (((x10_long)1ll)));
                        {
                            x10_long i__6506;
                            for (i__6506 = i__6311min__6504;
                                 ((i__6506) <= (i__6311max__6505));
                                 i__6506 = ((i__6506) + (((x10_long)1ll))))
                            {
                                x10_long k__6507 = i__6506;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__2)))SW__closure__2(&(maxRow), line__6513, k__6507, &(startCol__6508), &(cutoff), string1, string2, bestLeftwards, bestUpwards, matrix, blosum, gapOpening, gapExtension, directions, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc9) {
                    {
                        ::x10::lang::CheckedThrowable* ct__6549 =
                          __exc9;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__6549);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__6551);
            }
        }
    }
    
    //#line 464 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 467 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 469 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 470 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 472 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 473 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 474 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 475 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 477 "SW.x10"
    x10_long i__6365min__6531 = ((x10_long)1ll);
    x10_long i__6365max__6532 = ((maxRow) + (maxCol));
    {
        x10_long i__6533;
        for (i__6533 = i__6365min__6531; ((i__6533) <= (i__6365max__6532));
             i__6533 = ((i__6533) + (((x10_long)1ll)))) {
            x10_long line__6534 = i__6533;
            
            //#line 479 "SW.x10"
            x10_long startCol__6529 = ((x10_long)0ll);
            
            //#line 480 "SW.x10"
            if (((((line__6534) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 481 "SW.x10"
                startCol__6529 = ((line__6534) - (maxRow));
            }
            
            //#line 484 "SW.x10"
            x10_long count__6530 = ((line__6534) < (((maxCol) - (startCol__6529))))
              ? (line__6534) : (((maxCol) - (startCol__6529)));
            
            //#line 485 "SW.x10"
            count__6530 = ((count__6530) < (maxRow)) ? (count__6530)
              : (maxRow);
            {
                
                //#line 488 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__6556 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__6347min__6525 = ((x10_long)0ll);
                        x10_long i__6347max__6526 = ((count__6530) - (((x10_long)1ll)));
                        {
                            x10_long i__6527;
                            for (i__6527 = i__6347min__6525;
                                 ((i__6527) <= (i__6347max__6526));
                                 i__6527 = ((i__6527) + (((x10_long)1ll))))
                            {
                                x10_long k__6528 = i__6527;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__3)))SW__closure__3(&(maxRow), line__6534, k__6528, &(startCol__6529), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc11) {
                    {
                        ::x10::lang::CheckedThrowable* ct__6554 =
                          __exc11;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__6554);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__6556);
            }
        }
    }
    
    //#line 539 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 543 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 544 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 545 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 546 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 547 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 548 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 550 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__6569);
    
    //#line 551 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__6569);
    
    //#line 553 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 554 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 555 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 556 "SW.x10"
    line = reader1->readLine();
    
    //#line 557 "SW.x10"
    while (true) {
        
        //#line 558 "SW.x10"
        try {
            
            //#line 559 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc13) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc13)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc13);
                {
                    
                    //#line 562 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 564 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 566 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 567 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 568 "SW.x10"
    line = reader2->readLine();
    
    //#line 569 "SW.x10"
    while (true) {
        
        //#line 570 "SW.x10"
        try {
            
            //#line 571 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc14) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc14)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc14);
                {
                    
                    //#line 574 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 576 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 579 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 580 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 582 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 583 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 584 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 585 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 587 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 588 "SW.x10"
    x10_long i__6383min__6539 = ((x10_long)0ll);
    x10_long i__6383max__6540 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__6541;
        for (i__6541 = i__6383min__6539; ((i__6541) <= (i__6383max__6540));
             i__6541 = ((i__6541) + (((x10_long)1ll)))) {
            x10_long i__6542 = i__6541;
            
            //#line 589 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__6542))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 591 "SW.x10"
    while (true) {
        
        //#line 592 "SW.x10"
        try {
            
            //#line 593 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc15) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc15)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc15);
                {
                    
                    //#line 596 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 598 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 599 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 600 "SW.x10"
        x10_long i__6401min__6535 = ((x10_long)1ll);
        x10_long i__6401max__6536 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__6537;
            for (i__6537 = i__6401min__6535; ((i__6537) <= (i__6401max__6536));
                 i__6537 = ((i__6537) + (((x10_long)1ll))))
            {
                x10_long i__6538 = i__6537;
                
                //#line 601 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__6538) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__6538)))));
            }
        }
        
    }
    
    //#line 605 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 606 "SW.x10"
    ::SW::parallelMatch3(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 607 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 608 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__6574), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__6575))));
    
    //#line 610 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 611 "SW.x10"
    ::SW::parallelMatch2(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 612 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 613 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__6576), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__6575))));
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

::x10::lang::String SW_Strings::sl__6569("");
::x10::lang::String SW_Strings::sl__6572("Gaps: ");
::x10::lang::String SW_Strings::sl__6570("Identity: ");
::x10::lang::String SW_Strings::sl__6576("Parallel2 Runtime: ");
::x10::lang::String SW_Strings::sl__6575("ms");
::x10::lang::String SW_Strings::sl__6574("Parallel3 Runtime: ");
::x10::lang::String SW_Strings::sl__6573("Score: ");
::x10::lang::String SW_Strings::sl__6571("/");

::x10::lang::VoidFun_0_0::itable<SW__closure__1>SW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__1::__apply, &SW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<SW__closure__2>SW__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__2::__apply, &SW__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__2::_deserialize);
const ::x10aux::serialization_id_t SW__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<SW__closure__3>SW__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__3::__apply, &SW__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__3::_deserialize);
const ::x10aux::serialization_id_t SW__closure__3::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__3::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW */
/*************************************************/
