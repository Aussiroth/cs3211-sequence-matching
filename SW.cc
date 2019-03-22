/*************************************************/
/* START of SW */
#include <SW.h>

#include <x10/lang/Long.h>
#include <x10/array/Array_2.h>
#include <x10/util/Pair.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/lang/Char.h>
#include <x10/lang/Int.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 9 "SW.x10"

//#line 12 "SW.x10"

//#line 13 "SW.x10"

//#line 15 "SW.x10"

//#line 16 "SW.x10"

//#line 17 "SW.x10"

//#line 19 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gap_opening,
                                                       x10_long gap_extension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 22 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 23 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 25 "SW.x10"
    x10_long i__977min__1085 = ((x10_long)0ll);
    x10_long i__977max__1086 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__1087;
        for (i__1087 = i__977min__1085; ((i__1087) <= (i__977max__1086));
             i__1087 = ((i__1087) + (((x10_long)1ll)))) {
            x10_long i__1088 = i__1087;
            
            //#line 26 "SW.x10"
            x10_long score__1084 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__1088, col)) + (((gap_extension) * (((row) - (i__1088))))));
            
            //#line 28 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__1088, col)) <= (((x10_long)0ll))))
            {
                
                //#line 29 "SW.x10"
                score__1084 = ((score__1084) + (gap_opening));
            }
            
            //#line 32 "SW.x10"
            if (((score__1084) > (max))) {
                
                //#line 33 "SW.x10"
                max = score__1084;
                
                //#line 34 "SW.x10"
                gap = ((row) - (i__1088));
            }
            
        }
    }
    
    //#line 37 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 40 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gap_opening, x10_long gap_extension, x10_long row,
  x10_long col) {
    
    //#line 43 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 44 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 46 "SW.x10"
    x10_long i__995min__1090 = ((x10_long)0ll);
    x10_long i__995max__1091 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__1092;
        for (i__1092 = i__995min__1090; ((i__1092) <= (i__995max__1091));
             i__1092 = ((i__1092) + (((x10_long)1ll)))) {
            x10_long j__1093 = i__1092;
            
            //#line 48 "SW.x10"
            x10_long score__1089 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__1093)) + (((gap_extension) * (((col) - (j__1093))))));
            
            //#line 49 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__1093)) >= (((x10_long)0ll))))
            {
                
                //#line 50 "SW.x10"
                score__1089 = ((score__1089) + (gap_opening));
            }
            
            //#line 53 "SW.x10"
            if (((score__1089) > (max))) {
                
                //#line 54 "SW.x10"
                max = score__1089;
                
                //#line 55 "SW.x10"
                gap = ((j__1093) - (col));
            }
            
        }
    }
    
    //#line 58 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 61 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               x10_long simScore, x10_long gap_opening, x10_long gap_extension) {
    
    //#line 62 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 63 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 64 "SW.x10"
    x10_long i__1031min__1109 = ((x10_long)1ll);
    x10_long i__1031max__1110 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1111;
        for (i__1111 = i__1031min__1109; ((i__1111) <= (i__1031max__1110));
             i__1111 = ((i__1111) + (((x10_long)1ll)))) {
            x10_long i__1112 = i__1111;
            
            //#line 65 "SW.x10"
            x10_long i__1013min__1101 = ((x10_long)1ll);
            x10_long i__1013max__1102 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1103;
                for (i__1103 = i__1013min__1101; ((i__1103) <= (i__1013max__1102));
                     i__1103 = ((i__1103) + (((x10_long)1ll))))
                {
                    x10_long j__1104 = i__1103;
                    
                    //#line 66 "SW.x10"
                    x10_long max__1094 = (x10_long)0x8000000000000000LL;
                    
                    //#line 67 "SW.x10"
                    x10_long dir__1095 = ((x10_long)0ll);
                    
                    //#line 69 "SW.x10"
                    x10_long diagScore__1096;
                    
                    //#line 70 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__1112) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__1104) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 71 "SW.x10"
                        diagScore__1096 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1112) - (((x10_long)1ll))),
                                              ((j__1104) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 73 "SW.x10"
                        diagScore__1096 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1112) - (((x10_long)1ll))),
                                              ((j__1104) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 75 "SW.x10"
                    if (((diagScore__1096) > (max__1094)))
                    {
                        
                        //#line 76 "SW.x10"
                        max__1094 = diagScore__1096;
                        
                        //#line 77 "SW.x10"
                        dir__1095 = ((x10_long)0ll);
                    }
                    
                    //#line 80 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__1097 =
                      ::SW::checkUpwards(matrix, directions,
                                         gap_opening, gap_extension,
                                         i__1112, j__1104);
                    
                    //#line 81 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::SW_Strings::sl__1117), upResult__1097->FMGL(first)), (&::SW_Strings::sl__1118)), upResult__1097->FMGL(second))));
                    
                    //#line 82 "SW.x10"
                    x10_long upScore__1098 = upResult__1097->FMGL(first);
                    
                    //#line 83 "SW.x10"
                    if (((upScore__1098) > (max__1094))) {
                        
                        //#line 84 "SW.x10"
                        max__1094 = upScore__1098;
                        
                        //#line 85 "SW.x10"
                        dir__1095 = upResult__1097->FMGL(second);
                    }
                    
                    //#line 88 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__1099 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gap_opening, gap_extension,
                                           i__1112, j__1104);
                    
                    //#line 89 "SW.x10"
                    x10_long leftScore__1100 = leftResult__1099->FMGL(first);
                    
                    //#line 90 "SW.x10"
                    if (((leftScore__1100) > (max__1094)))
                    {
                        
                        //#line 91 "SW.x10"
                        max__1094 = leftScore__1100;
                        
                        //#line 92 "SW.x10"
                        dir__1095 = leftResult__1099->FMGL(second);
                    }
                    
                    //#line 95 "SW.x10"
                    max__1094 = ((max__1094) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__1094);
                    
                    //#line 97 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__1112, j__1104, max__1094);
                    
                    //#line 98 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__1112, j__1104, dir__1095);
                }
            }
            
        }
    }
    
    //#line 102 "SW.x10"
    x10_long i__1067min__1113 = ((x10_long)0ll);
    x10_long i__1067max__1114 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1115;
        for (i__1115 = i__1067min__1113; ((i__1115) <= (i__1067max__1114));
             i__1115 = ((i__1115) + (((x10_long)1ll)))) {
            x10_long i__1116 = i__1115;
            
            //#line 103 "SW.x10"
            x10_long i__1049min__1105 = ((x10_long)0ll);
            x10_long i__1049max__1106 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1107;
                for (i__1107 = i__1049min__1105; ((i__1107) <= (i__1049max__1106));
                     i__1107 = ((i__1107) + (((x10_long)1ll))))
                {
                    x10_long j__1108 = i__1107;
                    
                    //#line 104 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__1116,
                                                    j__1108), (&::SW_Strings::sl__1119)));
                }
            }
            
            //#line 106 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
}

//#line 111 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 112 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 113 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(::SW::FMGL(NUM_AMINO_ACIDS__get)(),
                                                                                     ::SW::FMGL(NUM_AMINO_ACIDS__get)());
    
    //#line 115 "SW.x10"
    x10_long gap_opening = ((x10_long)0ll);
    
    //#line 116 "SW.x10"
    x10_long gap_extension = ((x10_long)-2ll);
    
    //#line 117 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__1120);
    
    //#line 118 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__1121);
    
    //#line 119 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 120 "SW.x10"
    ::SW::match(string1, string2, simScore, gap_opening, gap_extension);
}

//#line 6 "SW.x10"
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

::x10::lang::String SW_Strings::sl__1119(" ");
::x10::lang::String SW_Strings::sl__1117("upResult.first: ");
::x10::lang::String SW_Strings::sl__1120("GGTTGACTA");
::x10::lang::String SW_Strings::sl__1118(", upResult.second: ");
::x10::lang::String SW_Strings::sl__1121("TGTTACGG");

/* END of SW */
/*************************************************/
