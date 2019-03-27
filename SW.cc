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
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 12 "SW.x10"

//#line 15 "SW.x10"

//#line 16 "SW.x10"

//#line 18 "SW.x10"

//#line 19 "SW.x10"

//#line 20 "SW.x10"

//#line 22 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                       ::x10::array::Array_2<x10_long>* directions,
                                                       x10_long gapOpening,
                                                       x10_long gapExtension,
                                                       x10_long row,
                                                       x10_long col) {
    
    //#line 25 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 26 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 28 "SW.x10"
    x10_long i__1539min__1701 = ((x10_long)0ll);
    x10_long i__1539max__1702 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__1703;
        for (i__1703 = i__1539min__1701; ((i__1703) <= (i__1539max__1702));
             i__1703 = ((i__1703) + (((x10_long)1ll)))) {
            x10_long i__1704 = i__1703;
            
            //#line 29 "SW.x10"
            x10_long score__1700 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__1704, col)) + (((gapExtension) * (((row) - (i__1704))))));
            
            //#line 31 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__1704, col)) <= (((x10_long)0ll))))
            {
                
                //#line 32 "SW.x10"
                score__1700 = ((score__1700) + (gapOpening));
            }
            
            //#line 35 "SW.x10"
            if (((score__1700) > (max))) {
                
                //#line 36 "SW.x10"
                max = score__1700;
                
                //#line 37 "SW.x10"
                gap = ((row) - (i__1704));
            }
            
        }
    }
    
    //#line 40 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 43 "SW.x10"
::x10::util::Pair<x10_long, x10_long> SW::checkLeftwards(
  ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
  x10_long gapOpening, x10_long gapExtension, x10_long row,
  x10_long col) {
    
    //#line 46 "SW.x10"
    x10_long max = (x10_long)0x8000000000000000LL;
    
    //#line 47 "SW.x10"
    x10_long gap = ((x10_long)-1ll);
    
    //#line 49 "SW.x10"
    x10_long i__1557min__1706 = ((x10_long)0ll);
    x10_long i__1557max__1707 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__1708;
        for (i__1708 = i__1557min__1706; ((i__1708) <= (i__1557max__1707));
             i__1708 = ((i__1708) + (((x10_long)1ll)))) {
            x10_long j__1709 = i__1708;
            
            //#line 51 "SW.x10"
            x10_long score__1705 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__1709)) + (((gapExtension) * (((col) - (j__1709))))));
            
            //#line 52 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__1709)) >= (((x10_long)0ll))))
            {
                
                //#line 53 "SW.x10"
                score__1705 = ((score__1705) + (gapOpening));
            }
            
            //#line 56 "SW.x10"
            if (((score__1705) > (max))) {
                
                //#line 57 "SW.x10"
                max = score__1705;
                
                //#line 58 "SW.x10"
                gap = ((j__1709) - (col));
            }
            
        }
    }
    
    //#line 61 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 64 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 66 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 67 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 68 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__1745);
    
    //#line 69 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__1745);
    
    //#line 70 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 71 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 72 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 73 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 74 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 75 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
        } else 
        //#line 76 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 77 "SW.x10"
            x10_long i__1575min__1710 = ((x10_long)0ll);
            x10_long i__1575max__1711 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__1712;
                for (i__1712 = i__1575min__1710; ((i__1712) <= (i__1575max__1711));
                     i__1712 = ((i__1712) + (((x10_long)1ll))))
                {
                    x10_long k__1713 = i__1712;
                    
                    //#line 78 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 79 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__1713))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 81 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 83 "SW.x10"
            x10_long i__1593min__1714 = ((x10_long)0ll);
            x10_long i__1593max__1715 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__1716;
                for (i__1716 = i__1593min__1714; ((i__1716) <= (i__1593max__1715));
                     i__1716 = ((i__1716) + (((x10_long)1ll))))
                {
                    x10_long k__1717 = i__1716;
                    
                    //#line 84 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 85 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__1717))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 87 "SW.x10"
            j = ((j) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 90 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 91 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 94 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               x10_long simScore, x10_long gapOpening, x10_long gapExtension) {
    
    //#line 95 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 96 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 97 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 98 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 100 "SW.x10"
    x10_long i__1629min__1733 = ((x10_long)1ll);
    x10_long i__1629max__1734 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1735;
        for (i__1735 = i__1629min__1733; ((i__1735) <= (i__1629max__1734));
             i__1735 = ((i__1735) + (((x10_long)1ll)))) {
            x10_long i__1736 = i__1735;
            
            //#line 101 "SW.x10"
            x10_long i__1611min__1725 = ((x10_long)1ll);
            x10_long i__1611max__1726 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1727;
                for (i__1727 = i__1611min__1725; ((i__1727) <= (i__1611max__1726));
                     i__1727 = ((i__1727) + (((x10_long)1ll))))
                {
                    x10_long j__1728 = i__1727;
                    
                    //#line 102 "SW.x10"
                    x10_long max__1718 = (x10_long)0x8000000000000000LL;
                    
                    //#line 103 "SW.x10"
                    x10_long dir__1719 = ((x10_long)0ll);
                    
                    //#line 105 "SW.x10"
                    x10_long diagScore__1720;
                    
                    //#line 106 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__1736) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__1728) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 107 "SW.x10"
                        diagScore__1720 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1736) - (((x10_long)1ll))),
                                              ((j__1728) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 109 "SW.x10"
                        diagScore__1720 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1736) - (((x10_long)1ll))),
                                              ((j__1728) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 111 "SW.x10"
                    if (((diagScore__1720) > (max__1718)))
                    {
                        
                        //#line 112 "SW.x10"
                        max__1718 = diagScore__1720;
                        
                        //#line 113 "SW.x10"
                        dir__1719 = ((x10_long)0ll);
                    }
                    
                    //#line 116 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__1721 =
                      ::SW::checkUpwards(matrix, directions,
                                         gapOpening, gapExtension,
                                         i__1736, j__1728);
                    
                    //#line 117 "SW.x10"
                    x10_long upScore__1722 = upResult__1721->FMGL(first);
                    
                    //#line 118 "SW.x10"
                    if (((upScore__1722) > (max__1718))) {
                        
                        //#line 119 "SW.x10"
                        max__1718 = upScore__1722;
                        
                        //#line 120 "SW.x10"
                        dir__1719 = upResult__1721->FMGL(second);
                    }
                    
                    //#line 123 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__1723 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gapOpening, gapExtension,
                                           i__1736, j__1728);
                    
                    //#line 124 "SW.x10"
                    x10_long leftScore__1724 = leftResult__1723->FMGL(first);
                    
                    //#line 125 "SW.x10"
                    if (((leftScore__1724) > (max__1718)))
                    {
                        
                        //#line 126 "SW.x10"
                        max__1718 = leftScore__1724;
                        
                        //#line 127 "SW.x10"
                        dir__1719 = leftResult__1723->FMGL(second);
                    }
                    
                    //#line 130 "SW.x10"
                    max__1718 = ((max__1718) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__1718);
                    
                    //#line 132 "SW.x10"
                    if (((max__1718) > (globalMax))) {
                        
                        //#line 133 "SW.x10"
                        globalMax = max__1718;
                        
                        //#line 134 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__1736,
                                                                                      j__1728);
                    }
                    
                    //#line 137 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__1736, j__1728, max__1718);
                    
                    //#line 138 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__1736, j__1728, dir__1719);
                }
            }
            
        }
    }
    
    //#line 142 "SW.x10"
    x10_long i__1665min__1737 = ((x10_long)0ll);
    x10_long i__1665max__1738 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1739;
        for (i__1739 = i__1665min__1737; ((i__1739) <= (i__1665max__1738));
             i__1739 = ((i__1739) + (((x10_long)1ll)))) {
            x10_long i__1740 = i__1739;
            
            //#line 143 "SW.x10"
            x10_long i__1647min__1729 = ((x10_long)0ll);
            x10_long i__1647max__1730 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1731;
                for (i__1731 = i__1647min__1729; ((i__1731) <= (i__1647max__1730));
                     i__1731 = ((i__1731) + (((x10_long)1ll))))
                {
                    x10_long j__1732 = i__1731;
                    
                    //#line 144 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__1740,
                                                    j__1732), (&::SW_Strings::sl__1746)));
                }
            }
            
            //#line 146 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 149 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 153 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 154 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 155 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)127ll),
                                                                                     ((x10_long)127ll),
                                                                                     ((x10_long)0ll));
    
    //#line 158 "SW.x10"
    ::x10::io::File* FILE = ::x10::io::File::_make((&::SW_Strings::sl__1747));
    
    //#line 159 "SW.x10"
    ::x10::io::FileReader* reader = ::x10::io::FileReader::_make(FILE);
    
    //#line 161 "SW.x10"
    ::x10::lang::String* line;
    
    //#line 163 "SW.x10"
    ::x10::lang::Rail< x10_char >* headerOrder = ::x10::lang::Rail< x10_char >::_make();
    
    //#line 164 "SW.x10"
    while (((!::x10aux::struct_equals((line = reader->readLine()),
                                      reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
           (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(line)->x10::lang::String::trim())->x10::lang::String::charAt(
                                      ((x10_int) (((x10_long)0ll)))),
                                    ((x10_char)'#'))))) {
        ;
    }
    
    //#line 166 "SW.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* headerLine =
      ::x10::lang::StringHelper::split((&::SW_Strings::sl__1746), ::x10aux::nullCheck(line)->x10::lang::String::trim());
    
    //#line 167 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(headerLine));
    
    //#line 168 "SW.x10"
    x10_long i__1683min__1741 = ((x10_long)0ll);
    x10_long i__1683max__1742 = (((x10_long)(::x10aux::nullCheck(headerLine)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__1743;
        for (i__1743 = i__1683min__1741; ((i__1743) <= (i__1683max__1742));
             i__1743 = ((i__1743) + (((x10_long)1ll)))) {
            x10_long i__1744 = i__1743;
            
            //#line 169 "SW.x10"
            headerOrder->x10::lang::Rail< x10_char >::__set(
              i__1744, ::x10aux::nullCheck(::x10aux::nullCheck(headerLine)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                             i__1744))->x10::lang::String::charAt(
                         ((x10_int) (((x10_long)0ll)))));
            
            //#line 170 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(headerOrder->x10::lang::Rail< x10_char >::__apply(
                                                                   i__1744)));
        }
    }
    
    //#line 179 "SW.x10"
    x10_long gapOpening = ((x10_long)0ll);
    
    //#line 180 "SW.x10"
    x10_long gapExtension = ((x10_long)-2ll);
    
    //#line 181 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__1748);
    
    //#line 182 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__1749);
    
    //#line 183 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 184 "SW.x10"
    ::SW::match(string1, string2, simScore, gapOpening, gapExtension);
}

//#line 9 "SW.x10"
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

::x10::lang::String SW_Strings::sl__1745("");
::x10::lang::String SW_Strings::sl__1746(" ");
::x10::lang::String SW_Strings::sl__1748("GGTTGACTA");
::x10::lang::String SW_Strings::sl__1749("TGTTACGG");
::x10::lang::String SW_Strings::sl__1747("BLOSUM62");

/* END of SW */
/*************************************************/
