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
        
        //#line 213 "SW.x10"
        x10_long i__4325 = maxRow;
        
        //#line 214 "SW.x10"
        if (((maxRow) > (line__4340))) {
            
            //#line 215 "SW.x10"
            i__4325 = line__4340;
        }
        
        //#line 217 "SW.x10"
        i__4325 = ((i__4325) - (k__4334));
        
        //#line 218 "SW.x10"
        x10_long j__4326 = ((((startCol__4335) + (k__4334))) + (((x10_long)1ll)));
        
        //#line 220 "SW.x10"
        x10_long max__4327 = (x10_long)0x8000000000000000LL;
        
        //#line 221 "SW.x10"
        x10_long dir__4328 = ((x10_long)0ll);
        
        //#line 224 "SW.x10"
        i__4325 = ((((((i__4325) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 225 "SW.x10"
        j__4326 = ((((((j__4326) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 227 "SW.x10"
        x10_long cellMaxRow__4329 = ((((i__4325) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 228 "SW.x10"
        x10_long cellMaxCol__4330 = ((((j__4326) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 231 "SW.x10"
        if (((cellMaxRow__4329) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 232 "SW.x10"
            cellMaxRow__4329 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 234 "SW.x10"
        if (((cellMaxCol__4330) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 235 "SW.x10"
            cellMaxCol__4330 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 238 "SW.x10"
        x10_long i__4146min__4321 = i__4325;
        x10_long i__4146max__4322 = cellMaxRow__4329;
        {
            x10_long i__4323;
            for (i__4323 = i__4146min__4321; ((i__4323) <= (i__4146max__4322));
                 i__4323 = ((i__4323) + (((x10_long)1ll))))
            {
                x10_long a__4324 = i__4323;
                
                //#line 239 "SW.x10"
                x10_long i__4128min__4317 = j__4326;
                x10_long i__4128max__4318 = cellMaxCol__4330;
                {
                    x10_long i__4319;
                    for (i__4319 = i__4128min__4317; ((i__4319) <= (i__4128max__4318));
                         i__4319 = ((i__4319) + (((x10_long)1ll))))
                    {
                        x10_long b__4320 = i__4319;
                        
                        //#line 240 "SW.x10"
                        max__4327 = (x10_long)0x8000000000000000LL;
                        
                        //#line 241 "SW.x10"
                        dir__4328 = ((x10_long)0ll);
                        
                        //#line 243 "SW.x10"
                        visited = ((visited) + (((x10_long)1ll)));
                        
                        //#line 245 "SW.x10"
                        x10_long diagScore__4310;
                        
                        //#line 246 "SW.x10"
                        x10_char firstChar__4311 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__4324) - (((x10_long)1ll))))));
                        
                        //#line 247 "SW.x10"
                        x10_char secondChar__4312 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__4320) - (((x10_long)1ll))))));
                        
                        //#line 248 "SW.x10"
                        diagScore__4310 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((a__4324) - (((x10_long)1ll))),
                                              ((b__4320) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                     ((x10_long)(((x10_int) (firstChar__4311).v))),
                                                                                     ((x10_long)(((x10_int) (secondChar__4312).v))))));
                        
                        //#line 250 "SW.x10"
                        if (((diagScore__4310) > (max__4327)))
                        {
                            
                            //#line 251 "SW.x10"
                            max__4327 = diagScore__4310;
                            
                            //#line 252 "SW.x10"
                            dir__4328 = ((x10_long)0ll);
                        }
                        
                        //#line 255 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> upResult__4313 =
                          ::SW::checkUpwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             a__4324, b__4320);
                        
                        //#line 256 "SW.x10"
                        x10_long upScore__4314 = upResult__4313->FMGL(first);
                        
                        //#line 257 "SW.x10"
                        if (((upScore__4314) > (max__4327)))
                        {
                            
                            //#line 258 "SW.x10"
                            max__4327 = upScore__4314;
                            
                            //#line 259 "SW.x10"
                            dir__4328 = upResult__4313->FMGL(second);
                        }
                        
                        //#line 262 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> leftResult__4315 =
                          ::SW::checkLeftwards(matrix, directions,
                                               gapOpening,
                                               gapExtension,
                                               a__4324, b__4320);
                        
                        //#line 263 "SW.x10"
                        x10_long leftScore__4316 = leftResult__4315->FMGL(first);
                        
                        //#line 264 "SW.x10"
                        if (((leftScore__4316) > (max__4327)))
                        {
                            
                            //#line 265 "SW.x10"
                            max__4327 = leftScore__4316;
                            
                            //#line 266 "SW.x10"
                            dir__4328 = leftResult__4315->FMGL(second);
                        }
                        
                        //#line 269 "SW.x10"
                        max__4327 = ((max__4327) < (((x10_long)0ll)))
                          ? (((x10_long)0ll)) : (max__4327);
                        
                        //#line 271 "SW.x10"
                        if (((max__4327) > (globalMax))) {
                            
                            //#line 272 "SW.x10"
                            globalMax = max__4327;
                            
                            //#line 273 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__4324,
                                                                                          b__4320);
                        }
                        
                        //#line 275 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__4324, b__4320, max__4327);
                        
                        //#line 276 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          a__4324, b__4320, dir__4328);
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__4340;
    x10_long k__4334;
    x10aux::captured_struct_lval<x10_long> startCol__4335;
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
        buf.write(this->line__4340);
        buf.write(this->k__4334);
        buf.write(this->startCol__4335);
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
        x10_long that_line__4340 = buf.read<x10_long>();
        x10_long that_k__4334 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__4335 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__1* this_ = new (storage) SW__closure__1(that_maxRow, that_line__4340, that_k__4334, that_startCol__4335, that_cutoff, that_string1, that_string2, that_visited, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__4340, x10_long k__4334, x10aux::captured_struct_lval<x10_long> startCol__4335, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, x10aux::captured_struct_lval<x10_long> visited, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__4340(line__4340), k__4334(k__4334), startCol__4335(startCol__4335), cutoff(cutoff), string1(string1), string2(string2), visited(visited), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:212-279";
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
        
        //#line 313 "SW.x10"
        x10_long i__4341 = maxRow;
        
        //#line 314 "SW.x10"
        if (((maxRow) > (line__4361))) {
            
            //#line 315 "SW.x10"
            i__4341 = line__4361;
        }
        
        //#line 317 "SW.x10"
        i__4341 = ((i__4341) - (k__4355));
        
        //#line 318 "SW.x10"
        x10_long j__4342 = ((((startCol__4356) + (k__4355))) + (((x10_long)1ll)));
        
        //#line 320 "SW.x10"
        x10_long max__4343 = (x10_long)0x8000000000000000LL;
        
        //#line 321 "SW.x10"
        x10_long dir__4344 = ((x10_long)0ll);
        
        //#line 323 "SW.x10"
        x10_long diagScore__4345;
        
        //#line 324 "SW.x10"
        x10_char firstChar__4346 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                     ((x10_int) (((i__4341) - (((x10_long)1ll))))));
        
        //#line 325 "SW.x10"
        x10_char secondChar__4347 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                      ((x10_int) (((j__4342) - (((x10_long)1ll))))));
        
        //#line 326 "SW.x10"
        diagScore__4345 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                              ((i__4341) - (((x10_long)1ll))),
                              ((j__4342) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                     ((x10_long)(((x10_int) (firstChar__4346).v))),
                                                                     ((x10_long)(((x10_int) (secondChar__4347).v))))));
        
        //#line 327 "SW.x10"
        if (((diagScore__4345) > (max__4343))) {
            
            //#line 328 "SW.x10"
            max__4343 = diagScore__4345;
            
            //#line 329 "SW.x10"
            dir__4344 = ((x10_long)0ll);
        }
        
        //#line 332 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> upResult__4348 =
          ::SW::checkUpwards(matrix, directions, gapOpening,
                             gapExtension, i__4341, j__4342);
        
        //#line 333 "SW.x10"
        x10_long upScore__4349 = upResult__4348->FMGL(first);
        
        //#line 334 "SW.x10"
        if (((upScore__4349) > (max__4343))) {
            
            //#line 335 "SW.x10"
            max__4343 = upScore__4349;
            
            //#line 336 "SW.x10"
            dir__4344 = upResult__4348->FMGL(second);
        }
        
        //#line 339 "SW.x10"
        ::x10::util::Pair<x10_long, x10_long> leftResult__4350 =
          ::SW::checkLeftwards(matrix, directions, gapOpening,
                               gapExtension, i__4341, j__4342);
        
        //#line 340 "SW.x10"
        x10_long leftScore__4351 = leftResult__4350->FMGL(first);
        
        //#line 341 "SW.x10"
        if (((leftScore__4351) > (max__4343))) {
            
            //#line 342 "SW.x10"
            max__4343 = leftScore__4351;
            
            //#line 343 "SW.x10"
            dir__4344 = leftResult__4350->FMGL(second);
        }
        
        //#line 346 "SW.x10"
        max__4343 = ((max__4343) < (((x10_long)0ll))) ? (((x10_long)0ll))
          : (max__4343);
        
        //#line 348 "SW.x10"
        if (((max__4343) > (globalMax))) {
            
            //#line 349 "SW.x10"
            globalMax = max__4343;
            
            //#line 350 "SW.x10"
            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4341,
                                                                          j__4342);
        }
        
        //#line 352 "SW.x10"
        matrix->x10::array::Array_2<x10_long>::__set(i__4341,
                                                     j__4342,
                                                     max__4343);
        
        //#line 353 "SW.x10"
        directions->x10::array::Array_2<x10_long>::__set(
          i__4341, j__4342, dir__4344);
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__4361;
    x10_long k__4355;
    x10aux::captured_struct_lval<x10_long> startCol__4356;
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
        buf.write(this->line__4361);
        buf.write(this->k__4355);
        buf.write(this->startCol__4356);
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
        x10_long that_line__4361 = buf.read<x10_long>();
        x10_long that_k__4355 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__4356 = buf.read<x10aux::captured_struct_lval<x10_long> >();
        ::x10::lang::String* that_string1 = buf.read< ::x10::lang::String*>();
        ::x10::lang::String* that_string2 = buf.read< ::x10::lang::String*>();
        ::x10::array::Array_2<x10_long>* that_matrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_2<x10_long>* that_directions = buf.read< ::x10::array::Array_2<x10_long>*>();
        x10_long that_gapOpening = buf.read<x10_long>();
        x10_long that_gapExtension = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_globalMax = buf.read<x10aux::captured_struct_lval<x10_long> >();
        x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > that_maxCoordinates = buf.read<x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > >();
        SW__closure__2* this_ = new (storage) SW__closure__2(that_maxRow, that_line__4361, that_k__4355, that_startCol__4356, that_string1, that_string2, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__2(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__4361, x10_long k__4355, x10aux::captured_struct_lval<x10_long> startCol__4356, ::x10::lang::String* string1, ::x10::lang::String* string2, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__4361(line__4361), k__4355(k__4355), startCol__4356(startCol__4356), string1(string1), string2(string2), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:312-354";
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
    ::x10::lang::String* currToken = (&::SW_Strings::sl__4391);
    
    //#line 23 "SW.x10"
    x10_long i__4002min__4271 = ((x10_long)0ll);
    x10_long i__4002max__4272 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__4273;
        for (i__4273 = i__4002min__4271; ((i__4273) <= (i__4002max__4272));
             i__4273 = ((i__4273) + (((x10_long)1ll)))) {
            x10_long i__4274 = i__4273;
            
            //#line 24 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__4274))),
                                         ((x10_char)' ')))) {
                
                //#line 25 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 26 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 27 "SW.x10"
                    currToken = (&::SW_Strings::sl__4391);
                }
                
            } else {
                
                //#line 31 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__4274))));
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
    x10_long i__4020min__4276 = ((x10_long)0ll);
    x10_long i__4020max__4277 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__4278;
        for (i__4278 = i__4020min__4276; ((i__4278) <= (i__4020max__4277));
             i__4278 = ((i__4278) + (((x10_long)1ll)))) {
            x10_long i__4279 = i__4278;
            
            //#line 47 "SW.x10"
            x10_long score__4275 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__4279, col)) + (((gapExtension) * (((row) - (i__4279))))));
            
            //#line 49 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__4279, col)) <= (((x10_long)0ll))))
            {
                
                //#line 50 "SW.x10"
                score__4275 = ((score__4275) + (gapOpening));
            }
            
            //#line 53 "SW.x10"
            if (((score__4275) > (max))) {
                
                //#line 54 "SW.x10"
                max = score__4275;
                
                //#line 55 "SW.x10"
                gap = ((row) - (i__4279));
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
    x10_long i__4038min__4281 = ((x10_long)0ll);
    x10_long i__4038max__4282 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__4283;
        for (i__4283 = i__4038min__4281; ((i__4283) <= (i__4038max__4282));
             i__4283 = ((i__4283) + (((x10_long)1ll)))) {
            x10_long j__4284 = i__4283;
            
            //#line 69 "SW.x10"
            x10_long score__4280 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__4284)) + (((gapExtension) * (((col) - (j__4284))))));
            
            //#line 70 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__4284)) >= (((x10_long)0ll))))
            {
                
                //#line 71 "SW.x10"
                score__4280 = ((score__4280) + (gapOpening));
            }
            
            //#line 74 "SW.x10"
            if (((score__4280) > (max))) {
                
                //#line 75 "SW.x10"
                max = score__4280;
                
                //#line 76 "SW.x10"
                gap = ((j__4284) - (col));
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
    ::x10::lang::String* result1 = (&::SW_Strings::sl__4391);
    
    //#line 87 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__4391);
    
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
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 97 "SW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 99 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 100 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 101 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 102 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 103 "SW.x10"
            x10_long i__4056min__4285 = ((x10_long)0ll);
            x10_long i__4056max__4286 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4287;
                for (i__4287 = i__4056min__4285; ((i__4287) <= (i__4056max__4286));
                     i__4287 = ((i__4287) + (((x10_long)1ll))))
                {
                    x10_long k__4288 = i__4287;
                    
                    //#line 104 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 105 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__4288))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 106 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 108 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 109 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 111 "SW.x10"
            x10_long i__4074min__4289 = ((x10_long)0ll);
            x10_long i__4074max__4290 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4291;
                for (i__4291 = i__4074min__4289; ((i__4291) <= (i__4074max__4290));
                     i__4291 = ((i__4291) + (((x10_long)1ll))))
                {
                    x10_long k__4292 = i__4291;
                    
                    //#line 112 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 113 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__4292))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 114 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 116 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 117 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 120 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4392), matchCount), (&::SW_Strings::sl__4393)), stringLength)));
    
    //#line 121 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4394), gapCount), (&::SW_Strings::sl__4393)), stringLength)));
    
    //#line 122 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__4395), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 123 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 124 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 127 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 130 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 131 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 132 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 133 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(S1_SIZE))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(S2_SIZE))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 134 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 135 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 137 "SW.x10"
    x10_long i__4110min__4306 = ((x10_long)1ll);
    x10_long i__4110max__4307 = ((x10_long)(S1_SIZE));
    {
        x10_long i__4308;
        for (i__4308 = i__4110min__4306; ((i__4308) <= (i__4110max__4307));
             i__4308 = ((i__4308) + (((x10_long)1ll)))) {
            x10_long i__4309 = i__4308;
            
            //#line 138 "SW.x10"
            x10_long i__4092min__4302 = ((x10_long)1ll);
            x10_long i__4092max__4303 = ((x10_long)(S2_SIZE));
            {
                x10_long i__4304;
                for (i__4304 = i__4092min__4302; ((i__4304) <= (i__4092max__4303));
                     i__4304 = ((i__4304) + (((x10_long)1ll))))
                {
                    x10_long j__4305 = i__4304;
                    
                    //#line 139 "SW.x10"
                    x10_long max__4293 = (x10_long)0x8000000000000000LL;
                    
                    //#line 140 "SW.x10"
                    x10_long dir__4294 = ((x10_long)0ll);
                    
                    //#line 141 "SW.x10"
                    x10_long diagScore__4295;
                    
                    //#line 142 "SW.x10"
                    x10_char firstChar__4296 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__4309) - (((x10_long)1ll))))));
                    
                    //#line 143 "SW.x10"
                    x10_char secondChar__4297 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__4305) - (((x10_long)1ll))))));
                    
                    //#line 144 "SW.x10"
                    diagScore__4295 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__4309) - (((x10_long)1ll))),
                                          ((j__4305) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__4296).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__4297).v))))));
                    
                    //#line 145 "SW.x10"
                    if (((diagScore__4295) > (max__4293)))
                    {
                        
                        //#line 146 "SW.x10"
                        max__4293 = diagScore__4295;
                        
                        //#line 147 "SW.x10"
                        dir__4294 = ((x10_long)0ll);
                    }
                    
                    //#line 150 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__4298 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__4309, j__4305);
                    
                    //#line 151 "SW.x10"
                    x10_long upScore__4299 = upResult__4298->FMGL(first);
                    
                    //#line 152 "SW.x10"
                    if (((upScore__4299) > (max__4293))) {
                        
                        //#line 153 "SW.x10"
                        max__4293 = upScore__4299;
                        
                        //#line 154 "SW.x10"
                        dir__4294 = upResult__4298->FMGL(second);
                    }
                    
                    //#line 156 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__4300 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__4309, j__4305);
                    
                    //#line 157 "SW.x10"
                    x10_long leftScore__4301 = leftResult__4300->FMGL(first);
                    
                    //#line 158 "SW.x10"
                    if (((leftScore__4301) > (max__4293)))
                    {
                        
                        //#line 159 "SW.x10"
                        max__4293 = leftScore__4301;
                        
                        //#line 160 "SW.x10"
                        dir__4294 = leftResult__4300->FMGL(second);
                    }
                    
                    //#line 162 "SW.x10"
                    max__4293 = ((max__4293) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__4293);
                    
                    //#line 164 "SW.x10"
                    if (((max__4293) > (globalMax))) {
                        
                        //#line 165 "SW.x10"
                        globalMax = max__4293;
                        
                        //#line 166 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__4309,
                                                                                      j__4305);
                    }
                    
                    //#line 169 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__4309, j__4305, max__4293);
                    
                    //#line 170 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__4309, j__4305, dir__4294);
                }
            }
            
        }
    }
    
    //#line 181 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 184 "SW.x10"
void SW::parallelMatch2(::x10::lang::String* string1, ::x10::lang::String* string2,
                        ::x10::array::Array_2<x10_long>* blosum,
                        x10_long gapOpening, x10_long gapExtension) {
    
    //#line 186 "SW.x10"
    x10_long cutoff = ((x10_long)5ll);
    
    //#line 187 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 188 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 190 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 191 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 193 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 194 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 196 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 197 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 199 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 200 "SW.x10"
    x10_long i__4182min__4337 = ((x10_long)1ll);
    x10_long i__4182max__4338 = ((maxRow) + (maxCol));
    {
        x10_long i__4339;
        for (i__4339 = i__4182min__4337; ((i__4339) <= (i__4182max__4338));
             i__4339 = ((i__4339) + (((x10_long)1ll)))) {
            x10_long line__4340 = i__4339;
            
            //#line 202 "SW.x10"
            x10_long startCol__4335 = ((x10_long)0ll);
            
            //#line 203 "SW.x10"
            if (((((line__4340) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 204 "SW.x10"
                startCol__4335 = ((line__4340) - (maxRow));
            }
            
            //#line 207 "SW.x10"
            x10_long count__4336 = ((line__4340) < (((maxCol) - (startCol__4335))))
              ? (line__4340) : (((maxCol) - (startCol__4335)));
            
            //#line 208 "SW.x10"
            count__4336 = ((count__4336) < (maxRow)) ? (count__4336)
              : (maxRow);
            {
                
                //#line 211 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4373 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4164min__4331 = ((x10_long)0ll);
                        x10_long i__4164max__4332 = ((count__4336) - (((x10_long)1ll)));
                        {
                            x10_long i__4333;
                            for (i__4333 = i__4164min__4331;
                                 ((i__4333) <= (i__4164max__4332));
                                 i__4333 = ((i__4333) + (((x10_long)1ll))))
                            {
                                x10_long k__4334 = i__4333;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(maxRow), line__4340, k__4334, &(startCol__4335), &(cutoff), string1, string2, &(visited), matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc6) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4371 =
                          __exc6;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4371);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4373);
            }
        }
    }
    
    //#line 287 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 290 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 292 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 293 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 295 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 296 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 297 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 298 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 300 "SW.x10"
    x10_long i__4218min__4358 = ((x10_long)1ll);
    x10_long i__4218max__4359 = ((maxRow) + (maxCol));
    {
        x10_long i__4360;
        for (i__4360 = i__4218min__4358; ((i__4360) <= (i__4218max__4359));
             i__4360 = ((i__4360) + (((x10_long)1ll)))) {
            x10_long line__4361 = i__4360;
            
            //#line 302 "SW.x10"
            x10_long startCol__4356 = ((x10_long)0ll);
            
            //#line 303 "SW.x10"
            if (((((line__4361) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 304 "SW.x10"
                startCol__4356 = ((line__4361) - (maxRow));
            }
            
            //#line 307 "SW.x10"
            x10_long count__4357 = ((line__4361) < (((maxCol) - (startCol__4356))))
              ? (line__4361) : (((maxCol) - (startCol__4356)));
            
            //#line 308 "SW.x10"
            count__4357 = ((count__4357) < (maxRow)) ? (count__4357)
              : (maxRow);
            {
                
                //#line 311 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__4378 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4200min__4352 = ((x10_long)0ll);
                        x10_long i__4200max__4353 = ((count__4357) - (((x10_long)1ll)));
                        {
                            x10_long i__4354;
                            for (i__4354 = i__4200min__4352;
                                 ((i__4354) <= (i__4200max__4353));
                                 i__4354 = ((i__4354) + (((x10_long)1ll))))
                            {
                                x10_long k__4355 = i__4354;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__2)))SW__closure__2(&(maxRow), line__4361, k__4355, &(startCol__4356), string1, string2, matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc8) {
                    {
                        ::x10::lang::CheckedThrowable* ct__4376 =
                          __exc8;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__4376);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__4378);
            }
        }
    }
    
    //#line 362 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 366 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 367 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 368 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 369 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 370 "SW.x10"
    x10_long gapOpening = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                          ((x10_long)3ll)))));
    
    //#line 371 "SW.x10"
    x10_long gapExtension = ((x10_long)(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                            ((x10_long)4ll)))));
    
    //#line 373 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__4391);
    
    //#line 374 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__4391);
    
    //#line 376 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 377 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 378 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 379 "SW.x10"
    line = reader1->readLine();
    
    //#line 380 "SW.x10"
    while (true) {
        
        //#line 381 "SW.x10"
        try {
            
            //#line 382 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 385 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 387 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 389 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 390 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 391 "SW.x10"
    line = reader2->readLine();
    
    //#line 392 "SW.x10"
    while (true) {
        
        //#line 393 "SW.x10"
        try {
            
            //#line 394 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 397 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 399 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 402 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 403 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 405 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 406 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 407 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 408 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 410 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 411 "SW.x10"
    x10_long i__4236min__4366 = ((x10_long)0ll);
    x10_long i__4236max__4367 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__4368;
        for (i__4368 = i__4236min__4366; ((i__4368) <= (i__4236max__4367));
             i__4368 = ((i__4368) + (((x10_long)1ll)))) {
            x10_long i__4369 = i__4368;
            
            //#line 412 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__4369))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 414 "SW.x10"
    while (true) {
        
        //#line 415 "SW.x10"
        try {
            
            //#line 416 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc12)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc12);
                {
                    
                    //#line 419 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 421 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 422 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 423 "SW.x10"
        x10_long i__4254min__4362 = ((x10_long)1ll);
        x10_long i__4254max__4363 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__4364;
            for (i__4364 = i__4254min__4362; ((i__4364) <= (i__4254max__4363));
                 i__4364 = ((i__4364) + (((x10_long)1ll))))
            {
                x10_long i__4365 = i__4364;
                
                //#line 424 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__4365) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__4365)))));
            }
        }
        
    }
    
    //#line 428 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 429 "SW.x10"
    ::SW::parallelMatch(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 430 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 431 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4396), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4397))));
    
    //#line 433 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 434 "SW.x10"
    ::SW::parallelMatch2(string1, string2, blosum, gapOpening,
                         gapExtension);
    
    //#line 435 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 436 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__4398), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__4397))));
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

::x10::lang::String SW_Strings::sl__4391("");
::x10::lang::String SW_Strings::sl__4394("Gaps: ");
::x10::lang::String SW_Strings::sl__4398("New Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4392("Identity: ");
::x10::lang::String SW_Strings::sl__4397("ms");
::x10::lang::String SW_Strings::sl__4396("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__4395("Score: ");
::x10::lang::String SW_Strings::sl__4393("/");

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
