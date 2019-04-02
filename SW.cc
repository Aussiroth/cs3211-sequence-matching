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
        
        //#line 211 "SW.x10"
        x10_long i__4281 = maxRow;
        
        //#line 212 "SW.x10"
        if (((maxRow) > (line__4296))) {
            
            //#line 213 "SW.x10"
            i__4281 = line__4296;
        }
        
        //#line 215 "SW.x10"
        i__4281 = ((i__4281) - (k__4290));
        
        //#line 216 "SW.x10"
        x10_long j__4282 = ((((startCol__4291) + (k__4290))) + (((x10_long)1ll)));
        
        //#line 218 "SW.x10"
        x10_long max__4283 = (x10_long)0x8000000000000000LL;
        
        //#line 219 "SW.x10"
        x10_long dir__4284 = ((x10_long)0ll);
        
        //#line 222 "SW.x10"
        i__4281 = ((((((i__4281) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 223 "SW.x10"
        j__4282 = ((((((j__4282) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 225 "SW.x10"
        x10_long cellMaxRow__4285 = ((((i__4281) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 226 "SW.x10"
        x10_long cellMaxCol__4286 = ((((j__4282) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 229 "SW.x10"
        if (((cellMaxRow__4285) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 230 "SW.x10"
            cellMaxRow__4285 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 232 "SW.x10"
        if (((cellMaxCol__4286) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 233 "SW.x10"
            cellMaxCol__4286 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 236 "SW.x10"
        x10_long i__4102min__4277 = i__4281;
        x10_long i__4102max__4278 = cellMaxRow__4285;
        {
            x10_long i__4279;
            for (i__4279 = i__4102min__4277; ((i__4279) <= (i__4102max__4278));
                 i__4279 = ((i__4279) + (((x10_long)1ll))))
            {
                x10_long a__4280 = i__4279;
                
                //#line 237 "SW.x10"
                x10_long i__4084min__4273 = j__4282;
                x10_long i__4084max__4274 = cellMaxCol__4286;
                {
                    x10_long i__4275;
                    for (i__4275 = i__4084min__4273; ((i__4275) <= (i__4084max__4274));
                         i__4275 = ((i__4275) + (((x10_long)1ll))))
                    {
                        x10_long b__4276 = i__4275;
                        
                        //#line 238 "SW.x10"
                        max__4283 = (x10_long)0x8000000000000000LL;
                        
                        //#line 239 "SW.x10"
                        dir__4284 = ((x10_long)0ll);
                        
                        //#line 241 "SW.x10"
                        visited = ((visited) + (((x10_long)1ll)));
                        
                        //#line 243 "SW.x10"
                        x10_long diagScore__4266;
                        
                        //#line 244 "SW.x10"
                        x10_char firstChar__4267 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__4280) - (((x10_long)1ll))))));
                        
                        //#line 245 "SW.x10"
                        x10_char secondChar__4268 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__4276) - (((x10_long)1ll))))));
                        
                        //#line 246 "SW.x10"
                        diagScore__4266 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((a__4280) - (((x10_long)1ll))),
                                              ((b__4276) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                     ((x10_long)(((x10_int) (firstChar__4267).v))),
                                                                                     ((x10_long)(((x10_int) (secondChar__4268).v))))));
                        
                        //#line 248 "SW.x10"
                        if (((diagScore__4266) > (max__4283)))
                        {
                            
                            //#line 249 "SW.x10"
                            max__4283 = diagScore__4266;
                            
                            //#line 250 "SW.x10"
                            dir__4284 = ((x10_long)0ll);
                        }
                        
                        //#line 253 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> upResult__4269 =
                          ::SW::checkUpwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             a__4280, b__4276);
                        
                        //#line 254 "SW.x10"
                        x10_long upScore__4270 = upResult__4269->FMGL(first);
                        
                        //#line 255 "SW.x10"
                        if (((upScore__4270) > (max__4283)))
                        {
                            
                            //#line 256 "SW.x10"
                            max__4283 = upScore__4270;
                            
                            //#line 257 "SW.x10"
                            dir__4284 = upResult__4269->FMGL(second);
                        }
                        
                        //#line 260 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> leftResult__4271 =
                          ::SW::checkLeftwards(matrix, directions,
                                               gapOpening,
                                               gapExtension,
                                               a__4280, b__4276);
                        
                        //#line 261 "SW.x10"
                        x10_long leftScore__4272 = leftResult__4271->FMGL(first);
                        
                        //#line 262 "SW.x10"
                        if (((leftScore__4272) > (max__4283)))
                        {
                            
                            //#line 263 "SW.x10"
                            max__4283 = leftScore__4272;
                            
                            //#line 264 "SW.x10"
                            dir__4284 = leftResult__4271->FMGL(second);
                        }
                        
                        //#line 267 "SW.x10"
                        max__4283 = ((max__4283) < (((x10_long)0ll)))
                          ? (((x10_long)0ll)) : (max__4283);
                        
                        //#line 269 "SW.x10"
                        if (((max__4283) > (globalMax))) {
                            
                            //#line 270 "SW.x10"
                            globalMax = max__4283;
                            
                            //#line 271 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__4280,
                                                                                          b__4276);
                        }
                        
                        //#line 273 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__4280, b__4276, max__4283);
                        
                        //#line 274 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          a__4280, b__4276, dir__4284);
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__4296;
    x10_long k__4290;
    x10aux::captured_struct_lval<x10_long> startCol__4291;
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
        buf.write(this->line__4296);
        buf.write(this->k__4290);
        buf.write(this->startCol__4291);
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
        x10_long that_line__4296 = buf.read<x10_long>();
        x10_long that_k__4290 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__4291 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__1* this_ = new (storage) SW__closure__1(that_maxRow, that_line__4296, that_k__4290, that_startCol__4291, that_cutoff, that_string1, that_string2, that_visited, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__4296, x10_long k__4290, x10aux::captured_struct_lval<x10_long> startCol__4291, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, x10aux::captured_struct_lval<x10_long> visited, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__4296(line__4296), k__4290(k__4290), startCol__4291(startCol__4291), cutoff(cutoff), string1(string1), string2(string2), visited(visited), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:210-277";
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
        
        //#line 311 "SW.x10"
        x10_long i__4297 = maxRow;
        
        //#line 312 "SW.x10"
        if (((maxRow) > (line__4317))) {
            
            //#line 313 "SW.x10"
            i__4297 = line__4317;
        }
        
        //#line 315 "SW.x10"
        i__4297 = ((i__4297) - (k__4311));
        
        //#line 316 "SW.x10"
        x10_long j__4298 = ((((startCol__4312) + (k__4311))) + (((x10_long)1ll)));
        
        //#line 318 "SW.x10"
        x10_long max__4299 = (x10_long)0x8000000000000000LL;
        
        //#line 319 "SW.x10"
        x10_long dir__4300 = ((x10_long)0ll);
        
        //#line 321 "SW.x10"
        x10_long diagScore__4301;
        
        //#line 322 "SW.x10"
        x10_char firstChar__4302 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__4297) - (((x10_long)1ll))))));
        
        //#line 323 "SW.x10"
        x10_char secondChar__4303 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__4298) - (((x10_long)1ll))))));
        
        //#line 324 "SW.x10"
        diagScore__4301 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__4297) - (((x10_long)1ll))),
                              ((j__4298) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__4302).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__4303).v))))));
        
        //#line 325 "SW.x10"
        if (((diagScore__4301) > (max__4299))) {
            
            //#line 326 "SW.x10"
            max__4299 = diagScore__4301;
            
            //#line 327 "SW.x10"
            dir__4300 = ((x10_long)0ll);
        }
        
        //#line 330 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__4304 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__4297, j__4298);
        
        //#line 331 "SW.x10"
        x10_long upScore__4305 = upResult__4304->FMGL(first);
        
        //#line 332 "SW.x10"
        if (((upScore__4305) > (max__4299))) {
            
            //#line 333 "SW.x10"
            max__4299 = upScore__4305;
            
            //#line 334 "SW.x10"
            dir__4300 = upResult__4304->FMGL(second);
        }
        
        //#line 337 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__4306 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__4297, j__4298);
        
        //#line 338 "SW.x10"
        x10_long leftScore__4307 = leftResult__4306->FMGL(first);
        
        //#line 339 "SW.x10"
        if (((leftScore__4307) > (max__4299))) {
            
            //#line 340 "SW.x10"
            max__4299 = leftScore__4307;
            
            //#line 341 "SW.x10"
            dir__4300 = leftResult__4306->FMGL(second);
        }
        
        //#line 344 "SW.x10"
        max__4299 = ((max__4299) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__4299);
        
        //#line 346 "SW.x10"
        if (((max__4299) > (globalMax))) {
            
            //#line 347 "SW.x10"
            globalMax = max__4299;
            
            //#line 348 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4297,
                                                                          j__4298);
        }
        
        //#line 350 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__4297,
                                                     j__4298,
                                                     max__4299);
        
        //#line 351 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__4297, j__4298, dir__4300);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__4317;
    x10_long k__4311;
    x10aux::captured_struct_lval<x10_long> startCol__4312;
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
        buf.write(this->line__4317);
        buf.write(this->k__4311);
        buf.write(this->startCol__4312);
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
        SW__closure__2* storage = ::x10aux::alloc_z<SW__closure__2>();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<x10_long> that_maxRow = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10_long that_line__4317 = buf.read<x10_long>();
        x10_long that_k__4311 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__4312 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__2* this_ = new (storage) SW__closure__2(that_maxRow, that_line__4317, that_k__4311, that_startCol__4312, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__2(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__4317, x10_long k__4311, x10aux::captured_struct_lval<x10_long> startCol__4312, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__4317(line__4317), k__4311(k__4311), startCol__4312(startCol__4312), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:310-352";
    }

};

#endif // SW__CLOSURE__2_CLOSURE

//#line 14 "SW.x10"

//#line 16 "SW.x10"

//#line 17 "SW.x10"

//#line 18 "SW.x10"

//#line 20 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 21 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 22 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__4347);
    
    //#line 23 "SW.x10"
    x10_long i__3958min__4227 = ((x10_long)0ll);
    x10_long i__3958max__4228 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__4229;
        for (i__4229 = i__3958min__4227; ((i__4229) <= (i__3958max__4228));
             i__4229 = ((i__4229) + (((x10_long)1ll)))) {
            x10_long i__4230 = i__4229;
            
            //#line 24 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__4230))),
                                         ((x10_char)' ')))) {
                
                //#line 25 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 26 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 27 "SW.x10"
                    currToken = (&::SW_Strings::sl__4347);
                }
                
            } else {
                
                //#line 31 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__4230))));
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
    x10_long i__3976min__4232 = ((x10_long)0ll);
    x10_long i__3976max__4233 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__4234;
        for (i__4234 = i__3976min__4232; ((i__4234) <= (i__3976max__4233));
             i__4234 = ((i__4234) + (((x10_long)1ll)))) {
            x10_long i__4235 = i__4234;
            
            //#line 47 "SW.x10"
            x10_long score__4231 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__4235, col)) + (((gapExtension) * (((row) - (i__4235))))));
            
            //#line 49 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__4235, col)) <= (((x10_long)0ll))))
            {
                
                //#line 50 "SW.x10"
                score__4231 = ((score__4231) + (gapOpening));
            }
            
            //#line 53 "SW.x10"
            if (((score__4231) > (max))) {
                
                //#line 54 "SW.x10"
                max = score__4231;
                
                //#line 55 "SW.x10"
                gap = ((row) - (i__4235));
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
    x10_long i__3994min__4237 = ((x10_long)0ll);
    x10_long i__3994max__4238 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__4239;
        for (i__4239 = i__3994min__4237; ((i__4239) <= (i__3994max__4238));
             i__4239 = ((i__4239) + (((x10_long)1ll)))) {
            x10_long j__4240 = i__4239;
            
            //#line 69 "SW.x10"
            x10_long score__4236 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__4240)) + (((gapExtension) * (((j__4240) - (col))))));
            
            //#line 70 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__4240)) >= (((x10_long)0ll))))
            {
                
                //#line 71 "SW.x10"
                score__4236 = ((score__4236) + (gapOpening));
            }
            
            //#line 74 "SW.x10"
            if (((score__4236) > (max))) {
                
                //#line 75 "SW.x10"
                max = score__4236;
                
                //#line 76 "SW.x10"
                gap = ((j__4240) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__4347);
    
    //#line 87 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__4347);
    
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
            x10_long i__4012min__4241 = ((x10_long)0ll);
            x10_long i__4012max__4242 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4243;
                for (i__4243 = i__4012min__4241; ((i__4243) <= (i__4012max__4242));
                     i__4243 = ((i__4243) + (((x10_long)1ll))))
                {
                    x10_long k__4244 = i__4243;
                    
                    //#line 102 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 103 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__4244))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 104 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 106 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 107 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 109 "SW.x10"
            x10_long i__4030min__4245 = ((x10_long)0ll);
            x10_long i__4030max__4246 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4247;
                for (i__4247 = i__4030min__4245; ((i__4247) <= (i__4030max__4246));
                     i__4247 = ((i__4247) + (((x10_long)1ll))))
                {
                    x10_long k__4248 = i__4247;
                    
                    //#line 110 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 111 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__4248))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 112 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 114 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 115 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 118 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4348), matchCount), (&::SW_Strings::sl__4349)), stringLength)));
    
    //#line 119 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4350), gapCount), (&::SW_Strings::sl__4349)), stringLength)));
    
    //#line 120 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__4351), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
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
    x10_long i__4066min__4262 = ((x10_long)1ll);
    x10_long i__4066max__4263 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4264;
        for (i__4264 = i__4066min__4262; ((i__4264) <= (i__4066max__4263));
             i__4264 = ((i__4264) + (((x10_long)1ll)))) {
            x10_long i__4265 = i__4264;
            
            //#line 136 "SW.x10"
            x10_long i__4048min__4258 = ((x10_long)1ll);
            x10_long i__4048max__4259 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4260;
                for (i__4260 = i__4048min__4258; ((i__4260) <= (i__4048max__4259));
                     i__4260 = ((i__4260) + (((x10_long)1ll))))
                {
                    x10_long j__4261 = i__4260;
                    
                    //#line 137 "SW.x10"
                    x10_long max__4249 = (x10_long)0x8000000000000000LL;
                    
                    //#line 138 "SW.x10"
                    x10_long dir__4250 = ((x10_long)0ll);
                    
                    //#line 139 "SW.x10"
                    x10_long diagScore__4251;
                    
                    //#line 140 "SW.x10"
                    x10_char firstChar__4252 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__4265) - (((x10_long)1ll))))));
                    
                    //#line 141 "SW.x10"
                    x10_char secondChar__4253 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__4261) - (((x10_long)1ll))))));
                    
                    //#line 142 "SW.x10"
                    diagScore__4251 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__4265) - (((x10_long)1ll))),
                                          ((j__4261) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__4252).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__4253).v))))));
                    
                    //#line 143 "SW.x10"
                    if (((diagScore__4251) > (max__4249)))
                    {
                        
                        //#line 144 "SW.x10"
                        max__4249 = diagScore__4251;
                        
                        //#line 145 "SW.x10"
                        dir__4250 = ((x10_long)0ll);
                    }
                    
                    //#line 148 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__4254 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__4265, j__4261);
                    
                    //#line 149 "SW.x10"
                    x10_long upScore__4255 = upResult__4254->FMGL(first);
                    
                    //#line 150 "SW.x10"
                    if (((upScore__4255) > (max__4249))) {
                        
                        //#line 151 "SW.x10"
                        max__4249 = upScore__4255;
                        
                        //#line 152 "SW.x10"
                        dir__4250 = upResult__4254->FMGL(second);
                    }
                    
                    //#line 154 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__4256 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__4265, j__4261);
                    
                    //#line 155 "SW.x10"
                    x10_long leftScore__4257 = leftResult__4256->FMGL(first);
                    
                    //#line 156 "SW.x10"
                    if (((leftScore__4257) > (max__4249)))
                    {
                        
                        //#line 157 "SW.x10"
                        max__4249 = leftScore__4257;
                        
                        //#line 158 "SW.x10"
                        dir__4250 = leftResult__4256->FMGL(second);
                    }
                    
                    //#line 160 "SW.x10"
                    max__4249 = ((max__4249) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__4249);
                    
                    //#line 162 "SW.x10"
                    if (((max__4249) > (globalMax))) {
                        
                        //#line 163 "SW.x10"
                        globalMax = max__4249;
                        
                        //#line 164 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4265,
                                                                                      j__4261);
                    }
                    
                    //#line 167 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__4265, j__4261, max__4249);
                    
                    //#line 168 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__4265, j__4261, dir__4250);
                }
            }
            
        }
    }
    
    //#line 179 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 182 "SW.x10"
void SW::parallelMatch2(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 184 "SW.x10"
    x10_long cutoff = ((x10_long)10ll);
    
    //#line 185 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 186 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 188 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 189 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 191 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 192 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 194 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 195 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 197 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 198 "SW.x10"
    x10_long i__4138min__4293 = ((x10_long)1ll);
    x10_long i__4138max__4294 = ((maxRow) + (maxCol));
    {
        x10_long i__4295;
        for (i__4295 = i__4138min__4293; ((i__4295) <= (i__4138max__4294));
             i__4295 = ((i__4295) + (((x10_long)1ll)))) {
            x10_long line__4296 = i__4295;
            
            //#line 200 "SW.x10"
            x10_long startCol__4291 = ((x10_long)0ll);
            
            //#line 201 "SW.x10"
            if (((((line__4296) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 202 "SW.x10"
                startCol__4291 = ((line__4296) - (maxRow));
            }
            
            //#line 205 "SW.x10"
            x10_long count__4292 = ((line__4296) < (((maxCol) - (startCol__4291))))
              ? (line__4296) : (((maxCol) - (startCol__4291)));
            
            //#line 206 "SW.x10"
            count__4292 = ((count__4292) < (maxRow)) ? (count__4292)
              : (maxRow);
            {
                
                //#line 209 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4329 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4120min__4287 = ((x10_long)0ll);
                        x10_long i__4120max__4288 = ((count__4292) - (((x10_long)1ll)));
                        {
                            x10_long i__4289;
                            for (i__4289 = i__4120min__4287;
                                 ((i__4289) <= (i__4120max__4288));
                                 i__4289 = ((i__4289) + (((x10_long)1ll))))
                            {
                                x10_long k__4290 = i__4289;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(maxRow), line__4296, k__4290, &(startCol__4291), &(cutoff), string1, string2, &(visited), matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc6) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4327 =
                          __exc6;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4327);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4329);
            }
        }
    }
    
    //#line 285 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 288 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 290 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 291 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 293 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 294 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 295 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 296 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 298 "SW.x10"
    x10_long i__4174min__4314 = ((x10_long)1ll);
    x10_long i__4174max__4315 = ((maxRow) + (maxCol));
    {
        x10_long i__4316;
        for (i__4316 = i__4174min__4314; ((i__4316) <= (i__4174max__4315));
             i__4316 = ((i__4316) + (((x10_long)1ll)))) {
            x10_long line__4317 = i__4316;
            
            //#line 300 "SW.x10"
            x10_long startCol__4312 = ((x10_long)0ll);
            
            //#line 301 "SW.x10"
            if (((((line__4317) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 302 "SW.x10"
                startCol__4312 = ((line__4317) - (maxRow));
            }
            
            //#line 305 "SW.x10"
            x10_long count__4313 = ((line__4317) < (((maxCol) - (startCol__4312))))
              ? (line__4317) : (((maxCol) - (startCol__4312)));
            
            //#line 306 "SW.x10"
            count__4313 = ((count__4313) < (maxRow)) ? (count__4313)
              : (maxRow);
            {
                
                //#line 309 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4334 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4156min__4308 = ((x10_long)0ll);
                        x10_long i__4156max__4309 = ((count__4313) - (((x10_long)1ll)));
                        {
                            x10_long i__4310;
                            for (i__4310 = i__4156min__4308;
                                 ((i__4310) <= (i__4156max__4309));
                                 i__4310 = ((i__4310) + (((x10_long)1ll))))
                            {
                                x10_long k__4311 = i__4310;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__2)))SW__closure__2(&(maxRow), line__4317, k__4311, &(startCol__4312), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc8) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4332 =
                          __exc8;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4332);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4334);
            }
        }
    }
    
    //#line 360 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 364 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 365 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 366 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 367 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 368 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 369 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 371 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__4347);
    
    //#line 372 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__4347);
    
    //#line 374 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 375 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 376 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 377 "SW.x10"
    line = reader1->readLine();
    
    //#line 378 "SW.x10"
    while (true) {
        
        //#line 379 "SW.x10"
        try {
            
            //#line 380 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 383 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 385 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 387 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 388 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 389 "SW.x10"
    line = reader2->readLine();
    
    //#line 390 "SW.x10"
    while (true) {
        
        //#line 391 "SW.x10"
        try {
            
            //#line 392 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 395 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 397 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 400 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 401 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 403 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 404 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 405 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 406 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 408 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 409 "SW.x10"
    x10_long i__4192min__4322 = ((x10_long)0ll);
    x10_long i__4192max__4323 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__4324;
        for (i__4324 = i__4192min__4322; ((i__4324) <= (i__4192max__4323));
             i__4324 = ((i__4324) + (((x10_long)1ll)))) {
            x10_long i__4325 = i__4324;
            
            //#line 410 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__4325))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 412 "SW.x10"
    while (true) {
        
        //#line 413 "SW.x10"
        try {
            
            //#line 414 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc12)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc12);
                {
                    
                    //#line 417 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 419 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 420 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 421 "SW.x10"
        x10_long i__4210min__4318 = ((x10_long)1ll);
        x10_long i__4210max__4319 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__4320;
            for (i__4320 = i__4210min__4318; ((i__4320) <= (i__4210max__4319));
                 i__4320 = ((i__4320) + (((x10_long)1ll))))
            {
                x10_long i__4321 = i__4320;
                
                //#line 422 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__4321) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__4321)))));
            }
        }
        
    }
    
    //#line 426 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 427 "SW.x10"
    ::SW::parallelMatch(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 428 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 429 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4352), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4353))));
    
    //#line 431 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 432 "SW.x10"
    ::SW::parallelMatch2(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 433 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 434 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4354), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4353))));
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

::x10::lang::String SW_Strings::sl__4347("");
::x10::lang::String SW_Strings::sl__4350("Gaps: ");
::x10::lang::String SW_Strings::sl__4354("New Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4348("Identity: ");
::x10::lang::String SW_Strings::sl__4353("ms");
::x10::lang::String SW_Strings::sl__4352("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4351("Score: ");
::x10::lang::String SW_Strings::sl__4349("/");

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

/* END of SW */
/*************************************************/
