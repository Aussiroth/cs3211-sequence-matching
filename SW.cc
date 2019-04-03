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
        
        //#line 276 "SW.x10"
        x10_long i__8191 = maxRow;
        
        //#line 277 "SW.x10"
        if (((maxRow) > (line__8206))) {
            
            //#line 278 "SW.x10"
            i__8191 = line__8206;
        }
        
        //#line 280 "SW.x10"
        i__8191 = ((i__8191) - (k__8200));
        
        //#line 281 "SW.x10"
        x10_long j__8192 = ((((startCol__8201) + (k__8200))) + (((x10_long)1ll)));
        
        //#line 283 "SW.x10"
        x10_long max__8193 = (x10_long)0x8000000000000000LL;
        
        //#line 284 "SW.x10"
        x10_long dir__8194 = ((x10_long)0ll);
        
        //#line 287 "SW.x10"
        i__8191 = ((((((i__8191) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 288 "SW.x10"
        j__8192 = ((((((j__8192) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 290 "SW.x10"
        x10_long cellMaxRow__8195 = ((((i__8191) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 291 "SW.x10"
        x10_long cellMaxCol__8196 = ((((j__8192) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 294 "SW.x10"
        if (((cellMaxRow__8195) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 295 "SW.x10"
            cellMaxRow__8195 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 297 "SW.x10"
        if (((cellMaxCol__8196) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 298 "SW.x10"
            cellMaxCol__8196 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 301 "SW.x10"
        x10_long i__7928min__8187 = i__8191;
        x10_long i__7928max__8188 = cellMaxRow__8195;
        {
            x10_long i__8189;
            for (i__8189 = i__7928min__8187; ((i__8189) <= (i__7928max__8188));
                 i__8189 = ((i__8189) + (((x10_long)1ll))))
            {
                x10_long a__8190 = i__8189;
                
                //#line 302 "SW.x10"
                x10_long i__7910min__8183 = j__8192;
                x10_long i__7910max__8184 = cellMaxCol__8196;
                {
                    x10_long i__8185;
                    for (i__8185 = i__7910min__8183; ((i__8185) <= (i__7910max__8184));
                         i__8185 = ((i__8185) + (((x10_long)1ll))))
                    {
                        x10_long b__8186 = i__8185;
                        
                        //#line 303 "SW.x10"
                        max__8193 = (x10_long)0x8000000000000000LL;
                        
                        //#line 304 "SW.x10"
                        dir__8194 = ((x10_long)0ll);
                        
                        //#line 306 "SW.x10"
                        visited = ((visited) + (((x10_long)1ll)));
                        
                        //#line 308 "SW.x10"
                        x10_long diagScore__8176;
                        
                        //#line 309 "SW.x10"
                        x10_char firstChar__8177 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__8190) - (((x10_long)1ll))))));
                        
                        //#line 310 "SW.x10"
                        x10_char secondChar__8178 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__8186) - (((x10_long)1ll))))));
                        
                        //#line 311 "SW.x10"
                        diagScore__8176 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((a__8190) - (((x10_long)1ll))),
                                              ((b__8186) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                     ((x10_long)(((x10_int) (firstChar__8177).v))),
                                                                                     ((x10_long)(((x10_int) (secondChar__8178).v))))));
                        
                        //#line 312 "SW.x10"
                        if (((diagScore__8176) > (max__8193)))
                        {
                            
                            //#line 313 "SW.x10"
                            max__8193 = diagScore__8176;
                            
                            //#line 314 "SW.x10"
                            dir__8194 = ((x10_long)0ll);
                        }
                        
                        //#line 317 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> upResult__8179 =
                          ::SW::checkUpwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             a__8190, b__8186);
                        
                        //#line 318 "SW.x10"
                        x10_long upScore__8180 = upResult__8179->FMGL(first);
                        
                        //#line 319 "SW.x10"
                        if (((upScore__8180) > (max__8193)))
                        {
                            
                            //#line 320 "SW.x10"
                            max__8193 = upScore__8180;
                            
                            //#line 321 "SW.x10"
                            dir__8194 = upResult__8179->FMGL(second);
                        }
                        
                        //#line 324 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> leftResult__8181 =
                          ::SW::checkLeftwards(matrix, directions,
                                               gapOpening,
                                               gapExtension,
                                               a__8190, b__8186);
                        
                        //#line 325 "SW.x10"
                        x10_long leftScore__8182 = leftResult__8181->FMGL(first);
                        
                        //#line 326 "SW.x10"
                        if (((leftScore__8182) > (max__8193)))
                        {
                            
                            //#line 327 "SW.x10"
                            max__8193 = leftScore__8182;
                            
                            //#line 328 "SW.x10"
                            dir__8194 = leftResult__8181->FMGL(second);
                        }
                        
                        //#line 331 "SW.x10"
                        max__8193 = ((max__8193) < (((x10_long)0ll)))
                          ? (((x10_long)0ll)) : (max__8193);
                        
                        //#line 333 "SW.x10"
                        if (((max__8193) > (globalMax))) {
                            
                            //#line 334 "SW.x10"
                            globalMax = max__8193;
                            
                            //#line 335 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__8190,
                                                                                          b__8186);
                        }
                        
                        //#line 337 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__8190, b__8186, max__8193);
                        
                        //#line 338 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          a__8190, b__8186, dir__8194);
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__8206;
    x10_long k__8200;
    x10aux::captured_struct_lval<x10_long> startCol__8201;
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
        buf.write(this->line__8206);
        buf.write(this->k__8200);
        buf.write(this->startCol__8201);
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
        x10_long that_line__8206 = buf.read<x10_long>();
        x10_long that_k__8200 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__8201 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__1* this_ = new (storage) SW__closure__1(that_maxRow, that_line__8206, that_k__8200, that_startCol__8201, that_cutoff, that_string1, that_string2, that_visited, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__8206, x10_long k__8200, x10aux::captured_struct_lval<x10_long> startCol__8201, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, x10aux::captured_struct_lval<x10_long> visited, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__8206(line__8206), k__8200(k__8200), startCol__8201(startCol__8201), cutoff(cutoff), string1(string1), string2(string2), visited(visited), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:275-341";
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
        
        //#line 406 "SW.x10"
        x10_long i__8219 = maxRow;
        
        //#line 407 "SW.x10"
        if (((maxRow) > (line__8232))) {
            
            //#line 408 "SW.x10"
            i__8219 = line__8232;
        }
        
        //#line 410 "SW.x10"
        i__8219 = ((i__8219) - (k__8226));
        
        //#line 411 "SW.x10"
        x10_long j__8220 = ((((startCol__8227) + (k__8226))) + (((x10_long)1ll)));
        
        //#line 415 "SW.x10"
        i__8219 = ((((((i__8219) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 416 "SW.x10"
        j__8220 = ((((((j__8220) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 418 "SW.x10"
        x10_long cellMaxRow__8221 = ((((i__8219) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 419 "SW.x10"
        x10_long cellMaxCol__8222 = ((((j__8220) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 422 "SW.x10"
        if (((cellMaxRow__8221) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 423 "SW.x10"
            cellMaxRow__8221 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 425 "SW.x10"
        if (((cellMaxCol__8222) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 426 "SW.x10"
            cellMaxCol__8222 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 429 "SW.x10"
        x10_long i__8000min__8215 = i__8219;
        x10_long i__8000max__8216 = cellMaxRow__8221;
        {
            x10_long i__8217;
            for (i__8217 = i__8000min__8215; ((i__8217) <= (i__8000max__8216));
                 i__8217 = ((i__8217) + (((x10_long)1ll))))
            {
                x10_long a__8218 = i__8217;
                
                //#line 430 "SW.x10"
                x10_long i__7982min__8211 = j__8220;
                x10_long i__7982max__8212 = cellMaxCol__8222;
                {
                    x10_long i__8213;
                    for (i__8213 = i__7982min__8211; ((i__8213) <= (i__7982max__8212));
                         i__8213 = ((i__8213) + (((x10_long)1ll))))
                    {
                        x10_long b__8214 = i__8213;
                        
                        //#line 431 "SW.x10"
                        x10_long max__8207 = (x10_long)0x8000000000000000LL;
                        
                        //#line 433 "SW.x10"
                        x10_char firstChar__8208 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__8218) - (((x10_long)1ll))))));
                        
                        //#line 434 "SW.x10"
                        x10_char secondChar__8209 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__8214) - (((x10_long)1ll))))));
                        
                        //#line 436 "SW.x10"
                        x10_long diagScore__8210 = ::SW::max(
                                                     bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__8218) - (((x10_long)1ll))),
                                                       ((b__8214) - (((x10_long)1ll)))),
                                                     bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__8218) - (((x10_long)1ll))),
                                                       ((b__8214) - (((x10_long)1ll)))),
                                                     matrix->x10::array::Array_2<x10_long>::__apply(
                                                       ((a__8218) - (((x10_long)1ll))),
                                                       ((b__8214) - (((x10_long)1ll)))));
                        
                        //#line 437 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__8218, b__8214, ((diagScore__8210) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                    ((x10_long)(((x10_int) (firstChar__8208).v))),
                                                                    ((x10_long)(((x10_int) (secondChar__8209).v)))))));
                        
                        //#line 438 "SW.x10"
                        if (((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__8218, b__8214)) < (((x10_long)0ll))))
                        {
                            matrix->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)0ll));
                        }
                        
                        //#line 440 "SW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__8218, b__8214, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                         ((a__8218) - (((x10_long)1ll))),
                                                                         b__8214))),
                                                      ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                         ((a__8218) - (((x10_long)1ll))),
                                                                         b__8214))),
                                                      ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                           ((a__8218) - (((x10_long)1ll))),
                                                                           b__8214)))));
                        
                        //#line 443 "SW.x10"
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          a__8218, b__8214, ::x10::lang::Math::max(
                                              bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                a__8218, b__8214),
                                              ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                  ((a__8218) - (((x10_long)1ll))),
                                                  b__8214)) + (gapOpening))));
                        
                        //#line 444 "SW.x10"
                        if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                a__8218, b__8214)) < (((x10_long)0ll))))
                        {
                            bestUpwards->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)0ll));
                        }
                        
                        //#line 446 "SW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__8218, b__8214, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                         a__8218,
                                                                         ((b__8214) - (((x10_long)1ll)))))),
                                                      ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                           a__8218,
                                                                           ((b__8214) - (((x10_long)1ll)))))),
                                                      ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                         a__8218,
                                                                         ((b__8214) - (((x10_long)1ll))))))));
                        
                        //#line 449 "SW.x10"
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          a__8218, b__8214, ::x10::lang::Math::max(
                                              bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                a__8218, b__8214),
                                              ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                  a__8218,
                                                  ((b__8214) - (((x10_long)1ll))))) + (gapOpening))));
                        
                        //#line 450 "SW.x10"
                        if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__8218, b__8214)) < (((x10_long)0ll))))
                        {
                            bestLeftwards->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)0ll));
                        }
                        
                        //#line 460 "SW.x10"
                        if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                                 a__8218, b__8214)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                          a__8218,
                                                          b__8214))) &&
                            ((matrix->x10::array::Array_2<x10_long>::__apply(
                                a__8218, b__8214)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__8218,
                                                         b__8214)))))
                        {
                            
                            //#line 461 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)0ll));
                            
                            //#line 462 "SW.x10"
                            max__8207 = matrix->x10::array::Array_2<x10_long>::__apply(
                                          a__8218, b__8214);
                        } else 
                        //#line 463 "SW.x10"
                        if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                 a__8218, b__8214)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                          a__8218,
                                                          b__8214))) &&
                            ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                a__8218, b__8214)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                         a__8218,
                                                         b__8214)))))
                        {
                            
                            //#line 464 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)-1ll));
                            
                            //#line 465 "SW.x10"
                            max__8207 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                          a__8218, b__8214);
                        } else {
                            
                            //#line 467 "SW.x10"
                            directions->x10::array::Array_2<x10_long>::__set(
                              a__8218, b__8214, ((x10_long)1ll));
                            
                            //#line 468 "SW.x10"
                            max__8207 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                          a__8218, b__8214);
                        }
                        
                        //#line 471 "SW.x10"
                        if (((max__8207) > (globalMax))) {
                            
                            //#line 472 "SW.x10"
                            globalMax = max__8207;
                            
                            //#line 473 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__8218,
                                                                                          b__8214);
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__8232;
    x10_long k__8226;
    x10aux::captured_struct_lval<x10_long> startCol__8227;
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
        buf.write(this->line__8232);
        buf.write(this->k__8226);
        buf.write(this->startCol__8227);
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
        x10_long that_line__8232 = buf.read<x10_long>();
        x10_long that_k__8226 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__8227 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__2* this_ = new (storage) SW__closure__2(that_maxRow, that_line__8232, that_k__8226, that_startCol__8227, that_cutoff, that_string1, that_string2, that_bestLeftwards, that_bestUpwards, that_matrix, that_blosum, that_gapOpening, that_gapExtension, that_directions, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__2(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__8232, x10_long k__8226, x10aux::captured_struct_lval<x10_long> startCol__8227, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* bestLeftwards, ::x10::array::Array_2<x10_long>* bestUpwards, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening, x10_long gapExtension, ::x10::array::Array_2<x10_long>* directions, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__8232(line__8232), k__8226(k__8226), startCol__8227(startCol__8227), cutoff(cutoff), string1(string1), string2(string2), bestLeftwards(bestLeftwards), bestUpwards(bestUpwards), matrix(matrix), blosum(blosum), gapOpening(gapOpening), gapExtension(gapExtension), directions(directions), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:405-477";
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
        
        //#line 525 "SW.x10"
        x10_long i__8233 = maxRow;
        
        //#line 526 "SW.x10"
        if (((maxRow) > (line__8253))) {
            
            //#line 527 "SW.x10"
            i__8233 = line__8253;
        }
        
        //#line 529 "SW.x10"
        i__8233 = ((i__8233) - (k__8247));
        
        //#line 530 "SW.x10"
        x10_long j__8234 = ((((startCol__8248) + (k__8247))) + (((x10_long)1ll)));
        
        //#line 532 "SW.x10"
        x10_long max__8235 = (x10_long)0x8000000000000000LL;
        
        //#line 533 "SW.x10"
        x10_long dir__8236 = ((x10_long)0ll);
        
        //#line 535 "SW.x10"
        x10_long diagScore__8237;
        
        //#line 536 "SW.x10"
        x10_char firstChar__8238 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__8233) - (((x10_long)1ll))))));
        
        //#line 537 "SW.x10"
        x10_char secondChar__8239 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__8234) - (((x10_long)1ll))))));
        
        //#line 538 "SW.x10"
        diagScore__8237 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__8233) - (((x10_long)1ll))),
                              ((j__8234) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__8238).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__8239).v))))));
        
        //#line 539 "SW.x10"
        if (((diagScore__8237) > (max__8235))) {
            
            //#line 540 "SW.x10"
            max__8235 = diagScore__8237;
            
            //#line 541 "SW.x10"
            dir__8236 = ((x10_long)0ll);
        }
        
        //#line 544 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__8240 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__8233, j__8234);
        
        //#line 545 "SW.x10"
        x10_long upScore__8241 = upResult__8240->FMGL(first);
        
        //#line 546 "SW.x10"
        if (((upScore__8241) > (max__8235))) {
            
            //#line 547 "SW.x10"
            max__8235 = upScore__8241;
            
            //#line 548 "SW.x10"
            dir__8236 = upResult__8240->FMGL(second);
        }
        
        //#line 551 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__8242 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__8233, j__8234);
        
        //#line 552 "SW.x10"
        x10_long leftScore__8243 = leftResult__8242->FMGL(first);
        
        //#line 553 "SW.x10"
        if (((leftScore__8243) > (max__8235))) {
            
            //#line 554 "SW.x10"
            max__8235 = leftScore__8243;
            
            //#line 555 "SW.x10"
            dir__8236 = leftResult__8242->FMGL(second);
        }
        
        //#line 558 "SW.x10"
        max__8235 = ((max__8235) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__8235);
        
        //#line 560 "SW.x10"
        if (((max__8235) > (globalMax))) {
            
            //#line 561 "SW.x10"
            globalMax = max__8235;
            
            //#line 562 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__8233,
                                                                          j__8234);
        }
        
        //#line 564 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__8233,
                                                     j__8234,
                                                     max__8235);
        
        //#line 565 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__8233, j__8234, dir__8236);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__8253;
    x10_long k__8247;
    x10aux::captured_struct_lval<x10_long> startCol__8248;
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
        buf.write(this->line__8253);
        buf.write(this->k__8247);
        buf.write(this->startCol__8248);
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
        x10_long that_line__8253 = buf.read<x10_long>();
        x10_long that_k__8247 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__8248 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__3* this_ = new (storage) SW__closure__3(that_maxRow, that_line__8253, that_k__8247, that_startCol__8248, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__3(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__8253, x10_long k__8247, x10aux::captured_struct_lval<x10_long> startCol__8248, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__8253(line__8253), k__8247(k__8247), startCol__8248(startCol__8248), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:524-566";
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
    ::x10::lang::String* currToken = (&::SW_Strings::sl__8288);
    
    //#line 23 "SW.x10"
    x10_long i__7748min__8125 = ((x10_long)0ll);
    x10_long i__7748max__8126 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__8127;
        for (i__8127 = i__7748min__8125; ((i__8127) <= (i__7748max__8126));
             i__8127 = ((i__8127) + (((x10_long)1ll)))) {
            x10_long i__8128 = i__8127;
            
            //#line 24 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__8128))),
                                         ((x10_char)' ')))) {
                
                //#line 25 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 26 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 27 "SW.x10"
                    currToken = (&::SW_Strings::sl__8288);
                }
                
            } else {
                
                //#line 31 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__8128))));
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
    x10_long i__7766min__8130 = ((x10_long)0ll);
    x10_long i__7766max__8131 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__8132;
        for (i__8132 = i__7766min__8130; ((i__8132) <= (i__7766max__8131));
             i__8132 = ((i__8132) + (((x10_long)1ll)))) {
            x10_long i__8133 = i__8132;
            
            //#line 47 "SW.x10"
            x10_long score__8129 = ((x10_long)0ll);
            
            //#line 48 "SW.x10"
            score__8129 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              i__8133, col)) + (((gapExtension) * (((((row) - (i__8133))) - (((x10_long)1ll)))))));
            
            //#line 51 "SW.x10"
            score__8129 = ((score__8129) + (gapOpening));
            
            //#line 54 "SW.x10"
            if (((score__8129) > (max))) {
                
                //#line 55 "SW.x10"
                max = score__8129;
                
                //#line 56 "SW.x10"
                gap = ((row) - (i__8133));
            }
            
        }
    }
    
    //#line 59 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 62 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 65 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 66 "SW.x10"
    x10_long gap = ((x10_long)0ll);
    
    //#line 68 "SW.x10"
    x10_long i__7784min__8135 = ((x10_long)0ll);
    x10_long i__7784max__8136 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__8137;
        for (i__8137 = i__7784min__8135; ((i__8137) <= (i__7784max__8136));
             i__8137 = ((i__8137) + (((x10_long)1ll)))) {
            x10_long j__8138 = i__8137;
            
            //#line 69 "SW.x10"
            x10_long score__8134 = ((x10_long)0ll);
            
            //#line 70 "SW.x10"
            score__8134 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              row, j__8138)) + (((gapExtension) * (((((col) - (j__8138))) - (((x10_long)1ll)))))));
            
            //#line 73 "SW.x10"
            score__8134 = ((score__8134) + (gapOpening));
            
            //#line 76 "SW.x10"
            if (((score__8134) > (max))) {
                
                //#line 77 "SW.x10"
                max = score__8134;
                
                //#line 78 "SW.x10"
                gap = ((j__8138) - (col));
            }
            
        }
    }
    
    //#line 81 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 84 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 86 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 87 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 88 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__8288);
    
    //#line 89 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__8288);
    
    //#line 91 "SW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 92 "SW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 93 "SW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 94 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 95 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 96 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 97 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 98 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 99 "SW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 101 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 102 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 103 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 104 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 105 "SW.x10"
            x10_long i__7802min__8139 = ((x10_long)0ll);
            x10_long i__7802max__8140 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__8141;
                for (i__8141 = i__7802min__8139; ((i__8141) <= (i__7802max__8140));
                     i__8141 = ((i__8141) + (((x10_long)1ll))))
                {
                    x10_long k__8142 = i__8141;
                    
                    //#line 106 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 107 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__8142))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 108 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 110 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 111 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 113 "SW.x10"
            x10_long i__7820min__8143 = ((x10_long)0ll);
            x10_long i__7820max__8144 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__8145;
                for (i__8145 = i__7820min__8143; ((i__8145) <= (i__7820max__8144));
                     i__8145 = ((i__8145) + (((x10_long)1ll))))
                {
                    x10_long k__8146 = i__8145;
                    
                    //#line 114 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 115 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__8146))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 116 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 118 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 119 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 122 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__8289), matchCount), (&::SW_Strings::sl__8290)), stringLength)));
    
    //#line 123 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__8291), gapCount), (&::SW_Strings::sl__8290)), stringLength)));
    
    //#line 124 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__8292), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 125 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 126 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 129 "SW.x10"
void SW::match2(::x10::lang::String* string1, ::x10::lang::String* string2,
                ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
                x10_long gapExtension) {
    
    //#line 132 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestLeftwards = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                            ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                            ((x10_long)0ll));
    
    //#line 133 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestUpwards = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                          ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                          ((x10_long)0ll));
    
    //#line 134 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 135 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 136 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 137 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 139 "SW.x10"
    x10_long i__7856min__8155 = ((x10_long)1ll);
    x10_long i__7856max__8156 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__8157;
        for (i__8157 = i__7856min__8155; ((i__8157) <= (i__7856max__8156));
             i__8157 = ((i__8157) + (((x10_long)1ll)))) {
            x10_long i__8158 = i__8157;
            
            //#line 140 "SW.x10"
            x10_long i__7838min__8151 = ((x10_long)1ll);
            x10_long i__7838max__8152 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__8153;
                for (i__8153 = i__7838min__8151; ((i__8153) <= (i__7838max__8152));
                     i__8153 = ((i__8153) + (((x10_long)1ll))))
                {
                    x10_long j__8154 = i__8153;
                    
                    //#line 141 "SW.x10"
                    x10_long max__8147 = (x10_long)0x8000000000000000LL;
                    
                    //#line 143 "SW.x10"
                    x10_char firstChar__8148 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__8158) - (((x10_long)1ll))))));
                    
                    //#line 144 "SW.x10"
                    x10_char secondChar__8149 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__8154) - (((x10_long)1ll))))));
                    
                    //#line 146 "SW.x10"
                    x10_long diagScore__8150 = ::SW::max(
                                                 bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__8158) - (((x10_long)1ll))),
                                                   ((j__8154) - (((x10_long)1ll)))),
                                                 bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__8158) - (((x10_long)1ll))),
                                                   ((j__8154) - (((x10_long)1ll)))),
                                                 matrix->x10::array::Array_2<x10_long>::__apply(
                                                   ((i__8158) - (((x10_long)1ll))),
                                                   ((j__8154) - (((x10_long)1ll)))));
                    
                    //#line 147 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__8158, j__8154, ((diagScore__8150) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                ((x10_long)(((x10_int) (firstChar__8148).v))),
                                                                ((x10_long)(((x10_int) (secondChar__8149).v)))))));
                    
                    //#line 148 "SW.x10"
                    if (((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__8158, j__8154)) < (((x10_long)0ll))))
                    {
                        matrix->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)0ll));
                    }
                    
                    //#line 150 "SW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__8158, j__8154, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                     ((i__8158) - (((x10_long)1ll))),
                                                                     j__8154))),
                                                  ((gapOpening) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                     ((i__8158) - (((x10_long)1ll))),
                                                                     j__8154))),
                                                  ((gapExtension) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                       ((i__8158) - (((x10_long)1ll))),
                                                                       j__8154)))));
                    
                    //#line 153 "SW.x10"
                    bestUpwards->x10::array::Array_2<x10_long>::__set(
                      i__8158, j__8154, ::x10::lang::Math::max(
                                          bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                            i__8158, j__8154),
                                          ((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                              ((i__8158) - (((x10_long)1ll))),
                                              j__8154)) + (gapOpening))));
                    
                    //#line 154 "SW.x10"
                    if (((bestUpwards->x10::array::Array_2<x10_long>::__apply(
                            i__8158, j__8154)) < (((x10_long)0ll))))
                    {
                        bestUpwards->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)0ll));
                    }
                    
                    //#line 156 "SW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__8158, j__8154, ::SW::max(((gapOpening) + (matrix->x10::array::Array_2<x10_long>::__apply(
                                                                     i__8158,
                                                                     ((j__8154) - (((x10_long)1ll)))))),
                                                  ((gapExtension) + (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                                       i__8158,
                                                                       ((j__8154) - (((x10_long)1ll)))))),
                                                  ((gapOpening) + (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                                     i__8158,
                                                                     ((j__8154) - (((x10_long)1ll))))))));
                    
                    //#line 159 "SW.x10"
                    bestLeftwards->x10::array::Array_2<x10_long>::__set(
                      i__8158, j__8154, ::x10::lang::Math::max(
                                          bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                            i__8158, j__8154),
                                          ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                              i__8158, ((j__8154) - (((x10_long)1ll))))) + (gapOpening))));
                    
                    //#line 160 "SW.x10"
                    if (((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__8158, j__8154)) < (((x10_long)0ll))))
                    {
                        bestLeftwards->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)0ll));
                    }
                    
                    //#line 162 "SW.x10"
                    if ((((matrix->x10::array::Array_2<x10_long>::__apply(
                             i__8158, j__8154)) >= (bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                                      i__8158,
                                                      j__8154))) &&
                        ((matrix->x10::array::Array_2<x10_long>::__apply(
                            i__8158, j__8154)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__8158,
                                                     j__8154)))))
                    {
                        
                        //#line 163 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)0ll));
                        
                        //#line 164 "SW.x10"
                        max__8147 = matrix->x10::array::Array_2<x10_long>::__apply(
                                      i__8158, j__8154);
                    } else 
                    //#line 165 "SW.x10"
                    if ((((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                             i__8158, j__8154)) >= (matrix->x10::array::Array_2<x10_long>::__apply(
                                                      i__8158,
                                                      j__8154))) &&
                        ((bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                            i__8158, j__8154)) >= (bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                                     i__8158,
                                                     j__8154)))))
                    {
                        
                        //#line 166 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)-1ll));
                        
                        //#line 167 "SW.x10"
                        max__8147 = bestLeftwards->x10::array::Array_2<x10_long>::__apply(
                                      i__8158, j__8154);
                    } else {
                        
                        //#line 169 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          i__8158, j__8154, ((x10_long)1ll));
                        
                        //#line 170 "SW.x10"
                        max__8147 = bestUpwards->x10::array::Array_2<x10_long>::__apply(
                                      i__8158, j__8154);
                    }
                    
                    //#line 173 "SW.x10"
                    if (((max__8147) > (globalMax))) {
                        
                        //#line 174 "SW.x10"
                        globalMax = max__8147;
                        
                        //#line 175 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__8158,
                                                                                      j__8154);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 187 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 190 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 193 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 194 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 195 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 196 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 197 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 198 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 200 "SW.x10"
    x10_long i__7892min__8172 = ((x10_long)1ll);
    x10_long i__7892max__8173 = ((x10_long)(S1_SIZE));
    {
        x10_long i__8174;
        for (i__8174 = i__7892min__8172; ((i__8174) <= (i__7892max__8173));
             i__8174 = ((i__8174) + (((x10_long)1ll)))) {
            x10_long i__8175 = i__8174;
            
            //#line 201 "SW.x10"
            x10_long i__7874min__8168 = ((x10_long)1ll);
            x10_long i__7874max__8169 = ((x10_long)(S2_SIZE));
            {
                x10_long i__8170;
                for (i__8170 = i__7874min__8168; ((i__8170) <= (i__7874max__8169));
                     i__8170 = ((i__8170) + (((x10_long)1ll))))
                {
                    x10_long j__8171 = i__8170;
                    
                    //#line 202 "SW.x10"
                    x10_long max__8159 = (x10_long)0x8000000000000000LL;
                    
                    //#line 203 "SW.x10"
                    x10_long dir__8160 = ((x10_long)0ll);
                    
                    //#line 204 "SW.x10"
                    x10_long diagScore__8161;
                    
                    //#line 205 "SW.x10"
                    x10_char firstChar__8162 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__8175) - (((x10_long)1ll))))));
                    
                    //#line 206 "SW.x10"
                    x10_char secondChar__8163 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__8171) - (((x10_long)1ll))))));
                    
                    //#line 207 "SW.x10"
                    diagScore__8161 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__8175) - (((x10_long)1ll))),
                                          ((j__8171) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__8162).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__8163).v))))));
                    
                    //#line 208 "SW.x10"
                    if (((diagScore__8161) > (max__8159)))
                    {
                        
                        //#line 209 "SW.x10"
                        max__8159 = diagScore__8161;
                        
                        //#line 210 "SW.x10"
                        dir__8160 = ((x10_long)0ll);
                    }
                    
                    //#line 213 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__8164 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__8175, j__8171);
                    
                    //#line 214 "SW.x10"
                    x10_long upScore__8165 = upResult__8164->FMGL(first);
                    
                    //#line 215 "SW.x10"
                    if (((upScore__8165) > (max__8159))) {
                        
                        //#line 216 "SW.x10"
                        max__8159 = upScore__8165;
                        
                        //#line 217 "SW.x10"
                        dir__8160 = upResult__8164->FMGL(second);
                    }
                    
                    //#line 219 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__8166 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__8175, j__8171);
                    
                    //#line 220 "SW.x10"
                    x10_long leftScore__8167 = leftResult__8166->FMGL(first);
                    
                    //#line 221 "SW.x10"
                    if (((leftScore__8167) > (max__8159)))
                    {
                        
                        //#line 222 "SW.x10"
                        max__8159 = leftScore__8167;
                        
                        //#line 223 "SW.x10"
                        dir__8160 = leftResult__8166->FMGL(second);
                    }
                    
                    //#line 225 "SW.x10"
                    max__8159 = ((max__8159) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__8159);
                    
                    //#line 227 "SW.x10"
                    if (((max__8159) > (globalMax))) {
                        
                        //#line 228 "SW.x10"
                        globalMax = max__8159;
                        
                        //#line 229 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__8175,
                                                                                      j__8171);
                    }
                    
                    //#line 232 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__8175, j__8171, max__8159);
                    
                    //#line 233 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__8175, j__8171, dir__8160);
                }
            }
            
        }
    }
    
    //#line 244 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 247 "SW.x10"
void SW::parallelMatch2(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 249 "SW.x10"
    x10_long cutoff = ((x10_long)5ll);
    
    //#line 250 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 251 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 253 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 254 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 256 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 257 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 259 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 260 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 262 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 263 "SW.x10"
    x10_long i__7964min__8203 = ((x10_long)1ll);
    x10_long i__7964max__8204 = ((maxRow) + (maxCol));
    {
        x10_long i__8205;
        for (i__8205 = i__7964min__8203; ((i__8205) <= (i__7964max__8204));
             i__8205 = ((i__8205) + (((x10_long)1ll)))) {
            x10_long line__8206 = i__8205;
            
            //#line 265 "SW.x10"
            x10_long startCol__8201 = ((x10_long)0ll);
            
            //#line 266 "SW.x10"
            if (((((line__8206) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 267 "SW.x10"
                startCol__8201 = ((line__8206) - (maxRow));
            }
            
            //#line 270 "SW.x10"
            x10_long count__8202 = ((line__8206) < (((maxCol) - (startCol__8201))))
              ? (line__8206) : (((maxCol) - (startCol__8201)));
            
            //#line 271 "SW.x10"
            count__8202 = ((count__8202) < (maxRow)) ? (count__8202)
              : (maxRow);
            {
                
                //#line 274 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__8265 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__7946min__8197 = ((x10_long)0ll);
                        x10_long i__7946max__8198 = ((count__8202) - (((x10_long)1ll)));
                        {
                            x10_long i__8199;
                            for (i__8199 = i__7946min__8197;
                                 ((i__8199) <= (i__7946max__8198));
                                 i__8199 = ((i__8199) + (((x10_long)1ll))))
                            {
                                x10_long k__8200 = i__8199;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(maxRow), line__8206, k__8200, &(startCol__8201), &(cutoff), string1, string2, &(visited), matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* ct__8263 =
                          __exc7;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__8263);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__8265);
            }
        }
    }
    
    //#line 363 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 366 "SW.x10"
x10_long SW::max(x10_long first, x10_long second, x10_long third) {
    
    //#line 367 "SW.x10"
    if ((((first) >= (second)) && ((first) >= (third)))) {
        
        //#line 368 "SW.x10"
        return first;
        
    } else 
    //#line 369 "SW.x10"
    if ((((second) >= (third)) && ((second) >= (first))))
    {
        
        //#line 370 "SW.x10"
        return second;
        
    } else {
        
        //#line 372 "SW.x10"
        return third;
        
    }
    
}

//#line 376 "SW.x10"
void SW::parallelMatch3(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 378 "SW.x10"
    x10_long cutoff = ((x10_long)15ll);
    
    //#line 379 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 380 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 382 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestLeftwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                            ((maxCol) + (((x10_long)1ll))),
                                                                                            ((x10_long)0ll));
    
    //#line 383 "SW.x10"
    ::x10::array::Array_2<x10_long>* bestUpwards = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                          ((maxCol) + (((x10_long)1ll))),
                                                                                          ((x10_long)0ll));
    
    //#line 384 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 385 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 387 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 388 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 390 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 391 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 393 "SW.x10"
    x10_long i__8036min__8229 = ((x10_long)1ll);
    x10_long i__8036max__8230 = ((maxRow) + (maxCol));
    {
        x10_long i__8231;
        for (i__8231 = i__8036min__8229; ((i__8231) <= (i__8036max__8230));
             i__8231 = ((i__8231) + (((x10_long)1ll)))) {
            x10_long line__8232 = i__8231;
            
            //#line 395 "SW.x10"
            x10_long startCol__8227 = ((x10_long)0ll);
            
            //#line 396 "SW.x10"
            if (((((line__8232) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 397 "SW.x10"
                startCol__8227 = ((line__8232) - (maxRow));
            }
            
            //#line 400 "SW.x10"
            x10_long count__8228 = ((line__8232) < (((maxCol) - (startCol__8227))))
              ? (line__8232) : (((maxCol) - (startCol__8227)));
            
            //#line 401 "SW.x10"
            count__8228 = ((count__8228) < (maxRow)) ? (count__8228)
              : (maxRow);
            {
                
                //#line 404 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__8270 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__8018min__8223 = ((x10_long)0ll);
                        x10_long i__8018max__8224 = ((count__8228) - (((x10_long)1ll)));
                        {
                            x10_long i__8225;
                            for (i__8225 = i__8018min__8223;
                                 ((i__8225) <= (i__8018max__8224));
                                 i__8225 = ((i__8225) + (((x10_long)1ll))))
                            {
                                x10_long k__8226 = i__8225;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__2)))SW__closure__2(&(maxRow), line__8232, k__8226, &(startCol__8227), &(cutoff), string1, string2, bestLeftwards, bestUpwards, matrix, blosum, gapOpening, gapExtension, directions, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc10) {
                    {
                        ::x10::lang::CheckedThrowable* ct__8268 =
                          __exc10;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__8268);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__8270);
            }
        }
    }
    
    //#line 499 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 502 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 504 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 505 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 507 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 508 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 509 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 510 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 512 "SW.x10"
    x10_long i__8072min__8250 = ((x10_long)1ll);
    x10_long i__8072max__8251 = ((maxRow) + (maxCol));
    {
        x10_long i__8252;
        for (i__8252 = i__8072min__8250; ((i__8252) <= (i__8072max__8251));
             i__8252 = ((i__8252) + (((x10_long)1ll)))) {
            x10_long line__8253 = i__8252;
            
            //#line 514 "SW.x10"
            x10_long startCol__8248 = ((x10_long)0ll);
            
            //#line 515 "SW.x10"
            if (((((line__8253) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 516 "SW.x10"
                startCol__8248 = ((line__8253) - (maxRow));
            }
            
            //#line 519 "SW.x10"
            x10_long count__8249 = ((line__8253) < (((maxCol) - (startCol__8248))))
              ? (line__8253) : (((maxCol) - (startCol__8248)));
            
            //#line 520 "SW.x10"
            count__8249 = ((count__8249) < (maxRow)) ? (count__8249)
              : (maxRow);
            {
                
                //#line 523 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__8275 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__8054min__8244 = ((x10_long)0ll);
                        x10_long i__8054max__8245 = ((count__8249) - (((x10_long)1ll)));
                        {
                            x10_long i__8246;
                            for (i__8246 = i__8054min__8244;
                                 ((i__8246) <= (i__8054max__8245));
                                 i__8246 = ((i__8246) + (((x10_long)1ll))))
                            {
                                x10_long k__8247 = i__8246;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__3)))SW__closure__3(&(maxRow), line__8253, k__8247, &(startCol__8248), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc12) {
                    {
                        ::x10::lang::CheckedThrowable* ct__8273 =
                          __exc12;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__8273);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__8275);
            }
        }
    }
    
    //#line 574 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 578 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 579 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 580 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 581 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 582 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 583 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 585 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__8288);
    
    //#line 586 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__8288);
    
    //#line 588 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 589 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 590 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 591 "SW.x10"
    line = reader1->readLine();
    
    //#line 592 "SW.x10"
    while (true) {
        
        //#line 593 "SW.x10"
        try {
            
            //#line 594 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc14) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc14)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc14);
                {
                    
                    //#line 597 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 599 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 601 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 602 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 603 "SW.x10"
    line = reader2->readLine();
    
    //#line 604 "SW.x10"
    while (true) {
        
        //#line 605 "SW.x10"
        try {
            
            //#line 606 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc15) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc15)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc15);
                {
                    
                    //#line 609 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 611 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 614 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 615 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 617 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 618 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 619 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 620 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 622 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 623 "SW.x10"
    x10_long i__8090min__8258 = ((x10_long)0ll);
    x10_long i__8090max__8259 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__8260;
        for (i__8260 = i__8090min__8258; ((i__8260) <= (i__8090max__8259));
             i__8260 = ((i__8260) + (((x10_long)1ll)))) {
            x10_long i__8261 = i__8260;
            
            //#line 624 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__8261))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 626 "SW.x10"
    while (true) {
        
        //#line 627 "SW.x10"
        try {
            
            //#line 628 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc16) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc16)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc16);
                {
                    
                    //#line 631 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 633 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 634 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 635 "SW.x10"
        x10_long i__8108min__8254 = ((x10_long)1ll);
        x10_long i__8108max__8255 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__8256;
            for (i__8256 = i__8108min__8254; ((i__8256) <= (i__8108max__8255));
                 i__8256 = ((i__8256) + (((x10_long)1ll))))
            {
                x10_long i__8257 = i__8256;
                
                //#line 636 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__8257) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__8257)))));
            }
        }
        
    }
    
    //#line 640 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 641 "SW.x10"
    ::SW::parallelMatch3(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 642 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 643 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__8293), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__8294))));
    
    //#line 645 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 646 "SW.x10"
    ::SW::match2(string1, string2, blosum, gapOpening, gapExtension);
    
    //#line 647 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 648 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__8295), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__8294))));
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

::x10::lang::String SW_Strings::sl__8288("");
::x10::lang::String SW_Strings::sl__8291("Gaps: ");
::x10::lang::String SW_Strings::sl__8289("Identity: ");
::x10::lang::String SW_Strings::sl__8294("ms");
::x10::lang::String SW_Strings::sl__8295("Match2 Runtime: ");
::x10::lang::String SW_Strings::sl__8293("Parallel3 Runtime: ");
::x10::lang::String SW_Strings::sl__8292("Score: ");
::x10::lang::String SW_Strings::sl__8290("/");

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
