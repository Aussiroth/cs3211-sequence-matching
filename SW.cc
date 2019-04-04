/*************************************************/
/* START of SW */
#include <SW.h>

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
        
        //#line 266 "SW.x10"
        x10_long i__5030 = maxRow;
        
        //#line 267 "SW.x10"
        if (((maxRow) > (line__5045))) {
            
            //#line 268 "SW.x10"
            i__5030 = line__5045;
        }
        
        //#line 270 "SW.x10"
        i__5030 = ((i__5030) - (k__5039));
        
        //#line 271 "SW.x10"
        x10_long j__5031 = ((((startCol__5040) + (k__5039))) + (((x10_long)1ll)));
        
        //#line 273 "SW.x10"
        x10_long max__5032 = (x10_long)0x8000000000000000LL;
        
        //#line 274 "SW.x10"
        x10_long dir__5033 = ((x10_long)0ll);
        
        //#line 277 "SW.x10"
        i__5030 = ((((((i__5030) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 278 "SW.x10"
        j__5031 = ((((((j__5031) - (((x10_long)1ll)))) * (cutoff))) + (((x10_long)1ll)));
        
        //#line 280 "SW.x10"
        x10_long cellMaxRow__5034 = ((((i__5030) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 281 "SW.x10"
        x10_long cellMaxCol__5035 = ((((j__5031) + (cutoff))) - (((x10_long)1ll)));
        
        //#line 284 "SW.x10"
        if (((cellMaxRow__5034) > (((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length())))))
        {
            
            //#line 285 "SW.x10"
            cellMaxRow__5034 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
        }
        
        //#line 287 "SW.x10"
        if (((cellMaxCol__5035) > (((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length())))))
        {
            
            //#line 288 "SW.x10"
            cellMaxCol__5035 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
        }
        
        //#line 291 "SW.x10"
        x10_long i__4863min__5026 = i__5030;
        x10_long i__4863max__5027 = cellMaxRow__5034;
        {
            x10_long i__5028;
            for (i__5028 = i__4863min__5026; ((i__5028) <= (i__4863max__5027));
                 i__5028 = ((i__5028) + (((x10_long)1ll))))
            {
                x10_long a__5029 = i__5028;
                
                //#line 292 "SW.x10"
                x10_long i__4845min__5022 = j__5031;
                x10_long i__4845max__5023 = cellMaxCol__5035;
                {
                    x10_long i__5024;
                    for (i__5024 = i__4845min__5022; ((i__5024) <= (i__4845max__5023));
                         i__5024 = ((i__5024) + (((x10_long)1ll))))
                    {
                        x10_long b__5025 = i__5024;
                        
                        //#line 293 "SW.x10"
                        max__5032 = (x10_long)0x8000000000000000LL;
                        
                        //#line 294 "SW.x10"
                        dir__5033 = ((x10_long)0ll);
                        
                        //#line 296 "SW.x10"
                        visited = ((visited) + (((x10_long)1ll)));
                        
                        //#line 298 "SW.x10"
                        x10_long diagScore__5015;
                        
                        //#line 299 "SW.x10"
                        x10_char firstChar__5016 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                     ((x10_int) (((a__5029) - (((x10_long)1ll))))));
                        
                        //#line 300 "SW.x10"
                        x10_char secondChar__5017 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                      ((x10_int) (((b__5025) - (((x10_long)1ll))))));
                        
                        //#line 301 "SW.x10"
                        diagScore__5015 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((a__5029) - (((x10_long)1ll))),
                                              ((b__5025) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                     ((x10_long)(((x10_int) (firstChar__5016).v))),
                                                                                     ((x10_long)(((x10_int) (secondChar__5017).v))))));
                        
                        //#line 302 "SW.x10"
                        if (((diagScore__5015) > (max__5032)))
                        {
                            
                            //#line 303 "SW.x10"
                            max__5032 = diagScore__5015;
                            
                            //#line 304 "SW.x10"
                            dir__5033 = ((x10_long)0ll);
                        }
                        
                        //#line 307 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> upResult__5018 =
                          ::SW::checkUpwards(matrix, directions,
                                             gapOpening, gapExtension,
                                             a__5029, b__5025);
                        
                        //#line 308 "SW.x10"
                        x10_long upScore__5019 = upResult__5018->FMGL(first);
                        
                        //#line 309 "SW.x10"
                        if (((upScore__5019) > (max__5032)))
                        {
                            
                            //#line 310 "SW.x10"
                            max__5032 = upScore__5019;
                            
                            //#line 311 "SW.x10"
                            dir__5033 = upResult__5018->FMGL(second);
                        }
                        
                        //#line 314 "SW.x10"
                        ::x10::util::Pair<x10_long, x10_long> leftResult__5020 =
                          ::SW::checkLeftwards(matrix, directions,
                                               gapOpening,
                                               gapExtension,
                                               a__5029, b__5025);
                        
                        //#line 315 "SW.x10"
                        x10_long leftScore__5021 = leftResult__5020->FMGL(first);
                        
                        //#line 316 "SW.x10"
                        if (((leftScore__5021) > (max__5032)))
                        {
                            
                            //#line 317 "SW.x10"
                            max__5032 = leftScore__5021;
                            
                            //#line 318 "SW.x10"
                            dir__5033 = leftResult__5020->FMGL(second);
                        }
                        
                        //#line 321 "SW.x10"
                        max__5032 = ((max__5032) < (((x10_long)0ll)))
                          ? (((x10_long)0ll)) : (max__5032);
                        
                        //#line 323 "SW.x10"
                        if (((max__5032) > (globalMax))) {
                            
                            //#line 324 "SW.x10"
                            globalMax = max__5032;
                            
                            //#line 325 "SW.x10"
                            maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(a__5029,
                                                                                          b__5025);
                        }
                        
                        //#line 327 "SW.x10"
                        matrix->x10::array::Array_2<x10_long>::__set(
                          a__5029, b__5025, max__5032);
                        
                        //#line 328 "SW.x10"
                        directions->x10::array::Array_2<x10_long>::__set(
                          a__5029, b__5025, dir__5033);
                    }
                }
                
            }
        }
        
    }
    
    // captured environment
    x10aux::captured_struct_lval<x10_long> maxRow;
    x10_long line__5045;
    x10_long k__5039;
    x10aux::captured_struct_lval<x10_long> startCol__5040;
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
        buf.write(this->line__5045);
        buf.write(this->k__5039);
        buf.write(this->startCol__5040);
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
        x10_long that_line__5045 = buf.read<x10_long>();
        x10_long that_k__5039 = buf.read<x10_long>();
        x10aux::captured_struct_lval<x10_long> that_startCol__5040 = buf.read<x10aux::captured_struct_lval<x10_long> >();
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
        SW__closure__1* this_ = new (storage) SW__closure__1(that_maxRow, that_line__5045, that_k__5039, that_startCol__5040, that_cutoff, that_string1, that_string2, that_visited, that_matrix, that_blosum, that_directions, that_gapOpening, that_gapExtension, that_globalMax, that_maxCoordinates);
        return this_;
    }
    
    SW__closure__1(x10aux::captured_struct_lval<x10_long> maxRow, x10_long line__5045, x10_long k__5039, x10aux::captured_struct_lval<x10_long> startCol__5040, x10aux::captured_struct_lval<x10_long> cutoff, ::x10::lang::String* string1, ::x10::lang::String* string2, x10aux::captured_struct_lval<x10_long> visited, ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_2<x10_long>* directions, x10_long gapOpening, x10_long gapExtension, x10aux::captured_struct_lval<x10_long> globalMax, x10aux::captured_struct_lval< ::x10::util::Pair<x10_long, x10_long> > maxCoordinates) : maxRow(maxRow), line__5045(line__5045), k__5039(k__5039), startCol__5040(startCol__5040), cutoff(cutoff), string1(string1), string2(string2), visited(visited), matrix(matrix), blosum(blosum), directions(directions), gapOpening(gapOpening), gapExtension(gapExtension), globalMax(globalMax), maxCoordinates(maxCoordinates) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "SW.x10:265-331";
    }

};

#endif // SW__CLOSURE__1_CLOSURE

//#line 13 "SW.x10"
::x10::util::ArrayList< ::x10::lang::String*>* SW::splitString(::x10::lang::String* lineToSplit) {
    
    //#line 14 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* tokens = ::x10::util::ArrayList< ::x10::lang::String*>::_make();
    
    //#line 15 "SW.x10"
    ::x10::lang::String* currToken = (&::SW_Strings::sl__5070);
    
    //#line 16 "SW.x10"
    x10_long i__4611min__4952 = ((x10_long)0ll);
    x10_long i__4611max__4953 = ((((x10_long)(::x10aux::nullCheck(lineToSplit)->x10::lang::String::length()))) - (((x10_long)1ll)));
    {
        x10_long i__4954;
        for (i__4954 = i__4611min__4952; ((i__4954) <= (i__4611max__4953));
             i__4954 = ((i__4954) + (((x10_long)1ll)))) {
            x10_long i__4955 = i__4954;
            
            //#line 17 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                           ((x10_int) (i__4955))),
                                         ((x10_char)' ')))) {
                
                //#line 18 "SW.x10"
                if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
                {
                    
                    //#line 19 "SW.x10"
                    tokens->add(currToken);
                    
                    //#line 20 "SW.x10"
                    currToken = (&::SW_Strings::sl__5070);
                }
                
            } else {
                
                //#line 24 "SW.x10"
                currToken = ::x10::lang::String::__plus(currToken, ::x10aux::nullCheck(lineToSplit)->x10::lang::String::charAt(
                                                                     ((x10_int) (i__4955))));
            }
            
        }
    }
    
    //#line 27 "SW.x10"
    if (((((x10_long)(::x10aux::nullCheck(currToken)->x10::lang::String::length()))) > (((x10_long)0ll))))
    {
        
        //#line 28 "SW.x10"
        tokens->add(currToken);
    }
    
    //#line 30 "SW.x10"
    return tokens;
    
}

//#line 33 "SW.x10"
void SW::printMatrix(::x10::array::Array_2<x10_long>* matrix,
                     x10_long nRows, x10_long nCols) {
    
    //#line 34 "SW.x10"
    x10_long i__4647min__4960 = ((x10_long)0ll);
    x10_long i__4647max__4961 = ((nRows) - (((x10_long)1ll)));
    {
        x10_long i__4962;
        for (i__4962 = i__4647min__4960; ((i__4962) <= (i__4647max__4961));
             i__4962 = ((i__4962) + (((x10_long)1ll)))) {
            x10_long i__4963 = i__4962;
            
            //#line 35 "SW.x10"
            x10_long i__4629min__4956 = ((x10_long)0ll);
            x10_long i__4629max__4957 = ((nCols) - (((x10_long)1ll)));
            {
                x10_long i__4958;
                for (i__4958 = i__4629min__4956; ((i__4958) <= (i__4629max__4957));
                     i__4958 = ((i__4958) + (((x10_long)1ll))))
                {
                    x10_long j__4959 = i__4958;
                    
                    //#line 36 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                         i__4963,
                                                                                         j__4959), (&::SW_Strings::sl__5071))));
                }
            }
            
            //#line 38 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
}

//#line 42 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 45 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 46 "SW.x10"
    x10_long gap = ((x10_long)0ll);
    
    //#line 48 "SW.x10"
    x10_long i__4665min__4965 = ((x10_long)0ll);
    x10_long i__4665max__4966 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__4967;
        for (i__4967 = i__4665min__4965; ((i__4967) <= (i__4665max__4966));
             i__4967 = ((i__4967) + (((x10_long)1ll)))) {
            x10_long i__4968 = i__4967;
            
            //#line 49 "SW.x10"
            x10_long score__4964 = ((x10_long)0ll);
            
            //#line 50 "SW.x10"
            score__4964 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              i__4968, col)) + (((gapExtension) * (((((row) - (i__4968))) - (((x10_long)1ll)))))));
            
            //#line 53 "SW.x10"
            score__4964 = ((score__4964) + (gapOpening));
            
            //#line 56 "SW.x10"
            if (((score__4964) > (max))) {
                
                //#line 57 "SW.x10"
                max = score__4964;
                
                //#line 58 "SW.x10"
                gap = ((row) - (i__4968));
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
    x10_long i__4683min__4970 = ((x10_long)0ll);
    x10_long i__4683max__4971 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__4972;
        for (i__4972 = i__4683min__4970; ((i__4972) <= (i__4683max__4971));
             i__4972 = ((i__4972) + (((x10_long)1ll)))) {
            x10_long j__4973 = i__4972;
            
            //#line 71 "SW.x10"
            x10_long score__4969 = ((x10_long)0ll);
            
            //#line 72 "SW.x10"
            score__4969 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                              row, j__4973)) + (((gapExtension) * (((((col) - (j__4973))) - (((x10_long)1ll)))))));
            
            //#line 75 "SW.x10"
            score__4969 = ((score__4969) + (gapOpening));
            
            //#line 78 "SW.x10"
            if (((score__4969) > (max))) {
                
                //#line 79 "SW.x10"
                max = score__4969;
                
                //#line 80 "SW.x10"
                gap = ((j__4973) - (col));
            }
            
        }
    }
    
    //#line 83 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 86 "SW.x10"
void SW::railBacktrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* matrix,
                       ::x10::array::Array_2<x10_long>* directions,
                       ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 88 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 89 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 90 "SW.x10"
    ::x10::lang::Rail< x10_char >* result1 = ::x10::lang::Rail< x10_char >::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)100ll))));
    
    //#line 91 "SW.x10"
    ::x10::lang::Rail< x10_char >* result2 = ::x10::lang::Rail< x10_char >::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)100ll))));
    
    //#line 92 "SW.x10"
    x10_long resultSize = ((x10_long)0ll);
    
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
            result1->x10::lang::Rail< x10_char >::__set(resultSize,
                                                        ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                          ((x10_int) (((i) - (((x10_long)1ll)))))));
            
            //#line 100 "SW.x10"
            result2->x10::lang::Rail< x10_char >::__set(resultSize,
                                                        ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                          ((x10_int) (((j) - (((x10_long)1ll)))))));
            
            //#line 101 "SW.x10"
            resultSize = ((resultSize) + (((x10_long)1ll)));
            
            //#line 103 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 104 "SW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 106 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 107 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 108 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 109 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 110 "SW.x10"
            x10_long i__4701min__4974 = ((x10_long)0ll);
            x10_long i__4701max__4975 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4976;
                for (i__4976 = i__4701min__4974; ((i__4976) <= (i__4701max__4975));
                     i__4976 = ((i__4976) + (((x10_long)1ll))))
                {
                    x10_long k__4977 = i__4976;
                    
                    //#line 111 "SW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                    ((x10_int) (((((i) - (k__4977))) - (((x10_long)1ll)))))));
                    
                    //#line 112 "SW.x10"
                    result2->x10::lang::Rail< x10_char >::__set(
                      resultSize, ((x10_char)'-'));
                    
                    //#line 113 "SW.x10"
                    resultSize = ((resultSize) + (((x10_long)1ll)));
                    
                    //#line 114 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 116 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 117 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 119 "SW.x10"
            x10_long i__4719min__4978 = ((x10_long)0ll);
            x10_long i__4719max__4979 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4980;
                for (i__4980 = i__4719min__4978; ((i__4980) <= (i__4719max__4979));
                     i__4980 = ((i__4980) + (((x10_long)1ll))))
                {
                    x10_long k__4981 = i__4980;
                    
                    //#line 120 "SW.x10"
                    result1->x10::lang::Rail< x10_char >::__set(
                      resultSize, ((x10_char)'-'));
                    
                    //#line 121 "SW.x10"
                    result2->x10::lang::Rail< x10_char >::__set(
                      resultSize, ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                    ((x10_int) (((((j) - (k__4981))) - (((x10_long)1ll)))))));
                    
                    //#line 122 "SW.x10"
                    resultSize = ((resultSize) + (((x10_long)1ll)));
                    
                    //#line 123 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 125 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 126 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 129 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5072), matchCount), (&::SW_Strings::sl__5073)), stringLength)));
    
    //#line 130 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5074), gapCount), (&::SW_Strings::sl__5073)), stringLength)));
    
    //#line 131 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__5075), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 133 "SW.x10"
    x10_long i__4737min__4982 = ((x10_long)0ll);
    x10_long i__4737max__4983 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__4984;
        for (i__4984 = i__4737min__4982; ((i__4984) <= (i__4737max__4983));
             i__4984 = ((i__4984) + (((x10_long)1ll)))) {
            x10_long k__4985 = i__4984;
            
            //#line 134 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result1->x10::lang::Rail< x10_char >::__apply(
                                                                   k__4985)));
        }
    }
    
    //#line 136 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
    
    //#line 137 "SW.x10"
    x10_long i__4755min__4986 = ((x10_long)0ll);
    x10_long i__4755max__4987 = ((resultSize) - (((x10_long)1ll)));
    {
        x10_long i__4988;
        for (i__4988 = i__4755min__4986; ((i__4988) <= (i__4755max__4987));
             i__4988 = ((i__4988) + (((x10_long)1ll)))) {
            x10_long k__4989 = i__4988;
            
            //#line 138 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(result2->x10::lang::Rail< x10_char >::__apply(
                                                                   k__4989)));
        }
    }
    
    //#line 140 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->println();
}

//#line 143 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 145 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 146 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 147 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__5070);
    
    //#line 148 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__5070);
    
    //#line 150 "SW.x10"
    x10_long stringLength = ((x10_long)0ll);
    
    //#line 151 "SW.x10"
    x10_long matchCount = ((x10_long)0ll);
    
    //#line 152 "SW.x10"
    x10_long gapCount = ((x10_long)0ll);
    
    //#line 153 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 154 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 155 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 156 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 157 "SW.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                           ((x10_int) (((i) - (((x10_long)1ll)))))),
                                         ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                           ((x10_int) (((j) - (((x10_long)1ll)))))))))
            {
                
                //#line 158 "SW.x10"
                matchCount = ((matchCount) + (((x10_long)1ll)));
            }
            
            //#line 160 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 161 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
            
            //#line 162 "SW.x10"
            stringLength = ((stringLength) + (((x10_long)1ll)));
        } else 
        //#line 163 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 164 "SW.x10"
            x10_long i__4773min__4990 = ((x10_long)0ll);
            x10_long i__4773max__4991 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__4992;
                for (i__4992 = i__4773min__4990; ((i__4992) <= (i__4773max__4991));
                     i__4992 = ((i__4992) + (((x10_long)1ll))))
                {
                    x10_long k__4993 = i__4992;
                    
                    //#line 165 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 166 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__4993))) - (((x10_long)1ll)))))), result1);
                    
                    //#line 167 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 169 "SW.x10"
            gapCount = ((gapCount) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 170 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 172 "SW.x10"
            x10_long i__4791min__4994 = ((x10_long)0ll);
            x10_long i__4791max__4995 = (((-(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                               i, j)))) - (((x10_long)1ll)));
            {
                x10_long i__4996;
                for (i__4996 = i__4791min__4994; ((i__4996) <= (i__4791max__4995));
                     i__4996 = ((i__4996) + (((x10_long)1ll))))
                {
                    x10_long k__4997 = i__4996;
                    
                    //#line 173 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 174 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__4997))) - (((x10_long)1ll)))))), result2);
                    
                    //#line 175 "SW.x10"
                    stringLength = ((stringLength) + (((x10_long)1ll)));
                }
            }
            
            //#line 177 "SW.x10"
            gapCount = ((gapCount) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                        i, j)));
            
            //#line 178 "SW.x10"
            j = ((j) + (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 181 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5072), matchCount), (&::SW_Strings::sl__5073)), stringLength)));
    
    //#line 182 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5074), gapCount), (&::SW_Strings::sl__5073)), stringLength)));
    
    //#line 183 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SW_Strings::sl__5075), ::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                                                                                    maxCoordinates->FMGL(first),
                                                                                                    maxCoordinates->FMGL(second)))));
    
    //#line 184 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 185 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 188 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               ::x10::array::Array_2<x10_long>* blosum, x10_long gapOpening,
               x10_long gapExtension) {
    
    //#line 191 "SW.x10"
    x10_int S1_SIZE = ::x10aux::nullCheck(string1)->x10::lang::String::length();
    
    //#line 192 "SW.x10"
    x10_int S2_SIZE = ::x10aux::nullCheck(string2)->x10::lang::String::length();
    
    //#line 193 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 194 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()))) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 195 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 196 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 198 "SW.x10"
    x10_long i__4827min__5011 = ((x10_long)1ll);
    x10_long i__4827max__5012 = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    {
        x10_long i__5013;
        for (i__5013 = i__4827min__5011; ((i__5013) <= (i__4827max__5012));
             i__5013 = ((i__5013) + (((x10_long)1ll)))) {
            x10_long i__5014 = i__5013;
            
            //#line 199 "SW.x10"
            x10_long i__4809min__5007 = ((x10_long)1ll);
            x10_long i__4809max__5008 = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
            {
                x10_long i__5009;
                for (i__5009 = i__4809min__5007; ((i__5009) <= (i__4809max__5008));
                     i__5009 = ((i__5009) + (((x10_long)1ll))))
                {
                    x10_long j__5010 = i__5009;
                    
                    //#line 200 "SW.x10"
                    x10_long max__4998 = (x10_long)0x8000000000000000LL;
                    
                    //#line 201 "SW.x10"
                    x10_long dir__4999 = ((x10_long)0ll);
                    
                    //#line 202 "SW.x10"
                    x10_long diagScore__5000;
                    
                    //#line 203 "SW.x10"
                    x10_char firstChar__5001 = ::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                 ((x10_int) (((i__5014) - (((x10_long)1ll))))));
                    
                    //#line 204 "SW.x10"
                    x10_char secondChar__5002 = ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                  ((x10_int) (((j__5010) - (((x10_long)1ll))))));
                    
                    //#line 205 "SW.x10"
                    diagScore__5000 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                          ((i__5014) - (((x10_long)1ll))),
                                          ((j__5010) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ((x10_long)(((x10_int) (firstChar__5001).v))),
                                                                                 ((x10_long)(((x10_int) (secondChar__5002).v))))));
                    
                    //#line 206 "SW.x10"
                    if (((diagScore__5000) > (max__4998)))
                    {
                        
                        //#line 207 "SW.x10"
                        max__4998 = diagScore__5000;
                        
                        //#line 208 "SW.x10"
                        dir__4999 = ((x10_long)0ll);
                    }
                    
                    //#line 211 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__5003 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__5014, j__5010);
                    
                    //#line 212 "SW.x10"
                    x10_long upScore__5004 = upResult__5003->FMGL(first);
                    
                    //#line 213 "SW.x10"
                    if (((upScore__5004) > (max__4998))) {
                        
                        //#line 214 "SW.x10"
                        max__4998 = upScore__5004;
                        
                        //#line 215 "SW.x10"
                        dir__4999 = upResult__5003->FMGL(second);
                    }
                    
                    //#line 217 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__5005 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__5014, j__5010);
                    
                    //#line 218 "SW.x10"
                    x10_long leftScore__5006 = leftResult__5005->FMGL(first);
                    
                    //#line 219 "SW.x10"
                    if (((leftScore__5006) > (max__4998)))
                    {
                        
                        //#line 220 "SW.x10"
                        max__4998 = leftScore__5006;
                        
                        //#line 221 "SW.x10"
                        dir__4999 = leftResult__5005->FMGL(second);
                    }
                    
                    //#line 223 "SW.x10"
                    max__4998 = ((max__4998) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__4998);
                    
                    //#line 225 "SW.x10"
                    if (((max__4998) > (globalMax))) {
                        
                        //#line 226 "SW.x10"
                        globalMax = max__4998;
                        
                        //#line 227 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__5014,
                                                                                      j__5010);
                    }
                    
                    //#line 230 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__5014, j__5010, max__4998);
                    
                    //#line 231 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__5014, j__5010, dir__4999);
                }
            }
            
        }
    }
    
    //#line 234 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 237 "SW.x10"
void SW::parallelMatch(::x10::lang::String* string1, ::x10::lang::String* string2,
                       ::x10::array::Array_2<x10_long>* blosum,
                       x10_long gapOpening, x10_long gapExtension) {
    
    //#line 239 "SW.x10"
    x10_long cutoff = ((x10_long)5ll);
    
    //#line 240 "SW.x10"
    x10_long maxRow = ((x10_long)(::x10aux::nullCheck(string1)->x10::lang::String::length()));
    
    //#line 241 "SW.x10"
    x10_long maxCol = ((x10_long)(::x10aux::nullCheck(string2)->x10::lang::String::length()));
    
    //#line 243 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                     ((maxCol) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 244 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((maxRow) + (((x10_long)1ll))),
                                                                                         ((maxCol) + (((x10_long)1ll))),
                                                                                         ((x10_long)0ll));
    
    //#line 246 "SW.x10"
    maxRow = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxRow))) / (((x10_double) (cutoff))))))));
    
    //#line 247 "SW.x10"
    maxCol = ((x10_long)(::x10::lang::DoubleNatives::toInt(::x10::lang::MathNatives::ceil(((((x10_double) (maxCol))) / (((x10_double) (cutoff))))))));
    
    //#line 249 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 250 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 252 "SW.x10"
    x10_long visited = ((x10_long)0ll);
    
    //#line 253 "SW.x10"
    x10_long i__4899min__5042 = ((x10_long)1ll);
    x10_long i__4899max__5043 = ((maxRow) + (maxCol));
    {
        x10_long i__5044;
        for (i__5044 = i__4899min__5042; ((i__5044) <= (i__4899max__5043));
             i__5044 = ((i__5044) + (((x10_long)1ll)))) {
            x10_long line__5045 = i__5044;
            
            //#line 255 "SW.x10"
            x10_long startCol__5040 = ((x10_long)0ll);
            
            //#line 256 "SW.x10"
            if (((((line__5045) - (maxRow))) > (((x10_long)0ll))))
            {
                
                //#line 257 "SW.x10"
                startCol__5040 = ((line__5045) - (maxRow));
            }
            
            //#line 260 "SW.x10"
            x10_long count__5041 = ((line__5045) < (((maxCol) - (startCol__5040))))
              ? (line__5045) : (((maxCol) - (startCol__5040)));
            
            //#line 261 "SW.x10"
            count__5041 = ((count__5041) < (maxRow)) ? (count__5041)
              : (maxRow);
            {
                
                //#line 264 "SW.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__5057 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__4881min__5036 = ((x10_long)0ll);
                        x10_long i__4881max__5037 = ((count__5041) - (((x10_long)1ll)));
                        {
                            x10_long i__5038;
                            for (i__5038 = i__4881min__5036;
                                 ((i__5038) <= (i__4881max__5037));
                                 i__5038 = ((i__5038) + (((x10_long)1ll))))
                            {
                                x10_long k__5039 = i__5038;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SW__closure__1)))SW__closure__1(&(maxRow), line__5045, k__5039, &(startCol__5040), &(cutoff), string1, string2, &(visited), matrix, blosum, directions, gapOpening, gapExtension, &(globalMax), &(maxCoordinates)))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc8) {
                    {
                        ::x10::lang::CheckedThrowable* ct__5055 =
                          __exc8;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__5055);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__5057);
            }
        }
    }
    
    //#line 333 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 336 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 337 "SW.x10"
    ::x10::lang::String* firstStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             ((x10_long)0ll));
    
    //#line 338 "SW.x10"
    ::x10::lang::String* secondStringFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                              ((x10_long)1ll));
    
    //#line 339 "SW.x10"
    ::x10::lang::String* matchFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                       ((x10_long)2ll));
    
    //#line 340 "SW.x10"
    x10_long gapOpening = ((x10_long)((-(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)3ll)))))));
    
    //#line 341 "SW.x10"
    x10_long gapExtension = ((x10_long)((-(::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                               ((x10_long)4ll)))))));
    
    //#line 343 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__5070);
    
    //#line 344 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__5070);
    
    //#line 346 "SW.x10"
    ::x10::io::File* FIRST_STRING_FILE = ::x10::io::File::_make(firstStringFile);
    
    //#line 347 "SW.x10"
    ::x10::io::FileReader* reader1 = ::x10::io::FileReader::_make(FIRST_STRING_FILE);
    
    //#line 348 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 349 "SW.x10"
    line = reader1->readLine();
    
    //#line 350 "SW.x10"
    while (true) {
        
        //#line 351 "SW.x10"
        try {
            
            //#line 352 "SW.x10"
            line = reader1->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
                ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc10);
                {
                    
                    //#line 355 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 357 "SW.x10"
        string1 = ::x10::lang::String::__plus(string1, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 359 "SW.x10"
    ::x10::io::File* SECOND_STRING_FILE = ::x10::io::File::_make(secondStringFile);
    
    //#line 360 "SW.x10"
    ::x10::io::FileReader* reader2 = ::x10::io::FileReader::_make(SECOND_STRING_FILE);
    
    //#line 361 "SW.x10"
    line = reader2->readLine();
    
    //#line 362 "SW.x10"
    while (true) {
        
        //#line 363 "SW.x10"
        try {
            
            //#line 364 "SW.x10"
            line = reader2->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc11)) {
                ::x10::lang::Exception* id__1 = static_cast< ::x10::lang::Exception*>(__exc11);
                {
                    
                    //#line 367 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 369 "SW.x10"
        string2 = ::x10::lang::String::__plus(string2, ::x10aux::nullCheck(line)->x10::lang::String::trim());
    }
    
    //#line 372 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 373 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 375 "SW.x10"
    ::x10::io::File* MATCH_FILE = ::x10::io::File::_make(matchFile);
    
    //#line 376 "SW.x10"
    ::x10::io::FileReader* matchReader = ::x10::io::FileReader::_make(MATCH_FILE);
    
    //#line 377 "SW.x10"
    ::x10::util::ArrayList<x10_char>* headerOrder = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 378 "SW.x10"
    while (((!::x10aux::struct_equals((line = matchReader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 380 "SW.x10"
    ::x10::util::ArrayList< ::x10::lang::String*>* headerLine =
      ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 381 "SW.x10"
    x10_long i__4917min__5050 = ((x10_long)0ll);
    x10_long i__4917max__5051 = ((headerLine->size()) - (((x10_long)1ll)));
    {
        x10_long i__5052;
        for (i__5052 = i__4917min__5050; ((i__5052) <= (i__4917max__5051));
             i__5052 = ((i__5052) + (((x10_long)1ll)))) {
            x10_long i__5053 = i__5052;
            
            //#line 382 "SW.x10"
            headerOrder->add(::x10aux::nullCheck(headerLine->get(
                                                   i__5053))->x10::lang::String::charAt(
                               ((x10_int) (((x10_long)0ll)))));
        }
    }
    
    //#line 384 "SW.x10"
    while (true) {
        
        //#line 385 "SW.x10"
        try {
            
            //#line 386 "SW.x10"
            line = matchReader->readLine();
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc12)) {
                ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc12);
                {
                    
                    //#line 389 "SW.x10"
                    break;
                }
            } else {
                throw;
            }
        }
        
        //#line 391 "SW.x10"
        ::x10::util::ArrayList< ::x10::lang::String*>* currLine =
          ::SW::splitString(::x10aux::nullCheck(line)->x10::lang::String::trim());
        
        //#line 392 "SW.x10"
        x10_char currChar = ::x10aux::nullCheck(currLine->get(
                                                  ((x10_long)0ll)))->x10::lang::String::charAt(
                              ((x10_int) (((x10_long)0ll))));
        
        //#line 393 "SW.x10"
        x10_long i__4935min__5046 = ((x10_long)1ll);
        x10_long i__4935max__5047 = ((currLine->size()) - (((x10_long)1ll)));
        {
            x10_long i__5048;
            for (i__5048 = i__4935min__5046; ((i__5048) <= (i__4935max__5047));
                 i__5048 = ((i__5048) + (((x10_long)1ll))))
            {
                x10_long i__5049 = i__5048;
                
                //#line 394 "SW.x10"
                blosum->x10::array::Array_2<x10_long>::__set(
                  ((x10_long)(((x10_int) (currChar).v))),
                  ((x10_long)(((x10_int) (headerOrder->get(
                                            ((i__5049) - (((x10_long)1ll))))).v))),
                  ((x10_long)(::x10::lang::IntNatives::parseInt(currLine->get(
                                                                  i__5049)))));
            }
        }
        
    }
    
    //#line 397 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((&::SW_Strings::sl__5076)));
    
    //#line 399 "SW.x10"
    x10_long startTime = ::x10::lang::System::nanoTime();
    
    //#line 400 "SW.x10"
    ::SW::parallelMatch(string1, string2, blosum, gapOpening,
                        gapExtension);
    
    //#line 401 "SW.x10"
    x10_long finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 402 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5077), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__5078))));
    
    //#line 404 "SW.x10"
    startTime = ::x10::lang::System::nanoTime();
    
    //#line 405 "SW.x10"
    ::SW::match(string1, string2, blosum, gapOpening, gapExtension);
    
    //#line 406 "SW.x10"
    finalTime = ((::x10::lang::System::nanoTime()) - (startTime));
    
    //#line 407 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__5079), ((((x10_double) (finalTime))) / (1000000.0))), (&::SW_Strings::sl__5078))));
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

::x10::lang::String SW_Strings::sl__5070("");
::x10::lang::String SW_Strings::sl__5071(" ");
::x10::lang::String SW_Strings::sl__5074("Gaps: ");
::x10::lang::String SW_Strings::sl__5072("Identity: ");
::x10::lang::String SW_Strings::sl__5076("==================== Non-Memoized String Waterman ====================");
::x10::lang::String SW_Strings::sl__5078("ms");
::x10::lang::String SW_Strings::sl__5077("Parallel Runtime: ");
::x10::lang::String SW_Strings::sl__5075("Score: ");
::x10::lang::String SW_Strings::sl__5073("/");
::x10::lang::String SW_Strings::sl__5079("Sequential Runtime: ");

::x10::lang::VoidFun_0_0::itable<SW__closure__1>SW__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SW__closure__1::__apply, &SW__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SW__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SW__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SW__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SW__closure__1::_deserialize);
const ::x10aux::serialization_id_t SW__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(SW__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of SW */
/*************************************************/
