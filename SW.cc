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
    x10_long i__1455min__1599 = ((x10_long)0ll);
    x10_long i__1455max__1600 = ((row) - (((x10_long)1ll)));
    {
        x10_long i__1601;
        for (i__1601 = i__1455min__1599; ((i__1601) <= (i__1455max__1600));
             i__1601 = ((i__1601) + (((x10_long)1ll)))) {
            x10_long i__1602 = i__1601;
            
            //#line 26 "SW.x10"
            x10_long score__1598 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i__1602, col)) + (((gap_extension) * (((row) - (i__1602))))));
            
            //#line 28 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    i__1602, col)) <= (((x10_long)0ll))))
            {
                
                //#line 29 "SW.x10"
                score__1598 = ((score__1598) + (gap_opening));
            }
            
            //#line 32 "SW.x10"
            if (((score__1598) > (max))) {
                
                //#line 33 "SW.x10"
                max = score__1598;
                
                //#line 34 "SW.x10"
                gap = ((row) - (i__1602));
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
    x10_long i__1473min__1604 = ((x10_long)0ll);
    x10_long i__1473max__1605 = ((col) - (((x10_long)1ll)));
    {
        x10_long i__1606;
        for (i__1606 = i__1473min__1604; ((i__1606) <= (i__1473max__1605));
             i__1606 = ((i__1606) + (((x10_long)1ll)))) {
            x10_long j__1607 = i__1606;
            
            //#line 48 "SW.x10"
            x10_long score__1603 = ((::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       row, j__1607)) + (((gap_extension) * (((col) - (j__1607))))));
            
            //#line 49 "SW.x10"
            if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                    row, j__1607)) >= (((x10_long)0ll))))
            {
                
                //#line 50 "SW.x10"
                score__1603 = ((score__1603) + (gap_opening));
            }
            
            //#line 53 "SW.x10"
            if (((score__1603) > (max))) {
                
                //#line 54 "SW.x10"
                max = score__1603;
                
                //#line 55 "SW.x10"
                gap = ((j__1607) - (col));
            }
            
        }
    }
    
    //#line 58 "SW.x10"
    return ::x10::util::Pair<x10_long, x10_long>::_make(max,
                                                        gap);
    
}

//#line 61 "SW.x10"
void SW::backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                   ::x10::array::Array_2<x10_long>* matrix,
                   ::x10::array::Array_2<x10_long>* directions,
                   ::x10::util::Pair<x10_long, x10_long> maxCoordinates) {
    
    //#line 63 "SW.x10"
    x10_long i = maxCoordinates->FMGL(first);
    
    //#line 64 "SW.x10"
    x10_long j = maxCoordinates->FMGL(second);
    
    //#line 65 "SW.x10"
    ::x10::lang::String* result1 = (&::SW_Strings::sl__1639);
    
    //#line 66 "SW.x10"
    ::x10::lang::String* result2 = (&::SW_Strings::sl__1639);
    
    //#line 67 "SW.x10"
    while ((!::x10aux::struct_equals(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
    {
        
        //#line 68 "SW.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                       i, j), ((x10_long)0ll))))
        {
            
            //#line 69 "SW.x10"
            result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                    ((x10_int) (((i) - (((x10_long)1ll)))))), result1);
            
            //#line 70 "SW.x10"
            result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                    ((x10_int) (((j) - (((x10_long)1ll)))))), result2);
            
            //#line 71 "SW.x10"
            i = ((i) - (((x10_long)1ll)));
            
            //#line 72 "SW.x10"
            j = ((j) - (((x10_long)1ll)));
        } else 
        //#line 73 "SW.x10"
        if (((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                i, j)) > (((x10_long)0ll)))) {
            
            //#line 74 "SW.x10"
            x10_long i__1491min__1608 = ((x10_long)0ll);
            x10_long i__1491max__1609 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__1610;
                for (i__1610 = i__1491min__1608; ((i__1610) <= (i__1491max__1609));
                     i__1610 = ((i__1610) + (((x10_long)1ll))))
                {
                    x10_long k__1611 = i__1610;
                    
                    //#line 75 "SW.x10"
                    result2 = ::x10::lang::String::__plus(((x10_char)'-'), result2);
                    
                    //#line 76 "SW.x10"
                    result1 = ::x10::lang::String::__plus(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                            ((x10_int) (((((i) - (k__1611))) - (((x10_long)1ll)))))), result1);
                }
            }
            
            //#line 78 "SW.x10"
            i = ((i) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        } else {
            
            //#line 80 "SW.x10"
            x10_long i__1509min__1612 = ((x10_long)0ll);
            x10_long i__1509max__1613 = ((::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                                            i, j)) - (((x10_long)1ll)));
            {
                x10_long i__1614;
                for (i__1614 = i__1509min__1612; ((i__1614) <= (i__1509max__1613));
                     i__1614 = ((i__1614) + (((x10_long)1ll))))
                {
                    x10_long k__1615 = i__1614;
                    
                    //#line 81 "SW.x10"
                    result1 = ::x10::lang::String::__plus(((x10_char)'-'), result1);
                    
                    //#line 82 "SW.x10"
                    result2 = ::x10::lang::String::__plus(::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                            ((x10_int) (((((j) - (k__1615))) - (((x10_long)1ll)))))), result2);
                }
            }
            
            //#line 84 "SW.x10"
            j = ((j) - (::x10aux::nullCheck(directions)->x10::array::Array_2<x10_long>::__apply(
                          i, j)));
        }
        
    }
    
    //#line 87 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result1));
    
    //#line 88 "SW.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(result2));
}

//#line 91 "SW.x10"
void SW::match(::x10::lang::String* string1, ::x10::lang::String* string2,
               x10_long simScore, x10_long gap_opening, x10_long gap_extension) {
    
    //#line 92 "SW.x10"
    ::x10::array::Array_2<x10_long>* matrix = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                     ((x10_long)0ll));
    
    //#line 93 "SW.x10"
    ::x10::array::Array_2<x10_long>* directions = ::x10::array::Array_2<x10_long>::_make(((::SW::FMGL(S1_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((::SW::FMGL(S2_SIZE__get)()) + (((x10_long)1ll))),
                                                                                         ((x10_long)-1ll));
    
    //#line 94 "SW.x10"
    x10_long globalMax = (x10_long)0x8000000000000000LL;
    
    //#line 95 "SW.x10"
    ::x10::util::Pair<x10_long, x10_long> maxCoordinates =
      ::x10::util::Pair<x10_long, x10_long>::_make(((x10_long)0ll),
                                                   ((x10_long)0ll));
    
    //#line 97 "SW.x10"
    x10_long i__1545min__1631 = ((x10_long)1ll);
    x10_long i__1545max__1632 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1633;
        for (i__1633 = i__1545min__1631; ((i__1633) <= (i__1545max__1632));
             i__1633 = ((i__1633) + (((x10_long)1ll)))) {
            x10_long i__1634 = i__1633;
            
            //#line 98 "SW.x10"
            x10_long i__1527min__1623 = ((x10_long)1ll);
            x10_long i__1527max__1624 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1625;
                for (i__1625 = i__1527min__1623; ((i__1625) <= (i__1527max__1624));
                     i__1625 = ((i__1625) + (((x10_long)1ll))))
                {
                    x10_long j__1626 = i__1625;
                    
                    //#line 99 "SW.x10"
                    x10_long max__1616 = (x10_long)0x8000000000000000LL;
                    
                    //#line 100 "SW.x10"
                    x10_long dir__1617 = ((x10_long)0ll);
                    
                    //#line 102 "SW.x10"
                    x10_long diagScore__1618;
                    
                    //#line 103 "SW.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(string1)->x10::lang::String::charAt(
                                                   ((x10_int) (((i__1634) - (((x10_long)1ll)))))),
                                                 ::x10aux::nullCheck(string2)->x10::lang::String::charAt(
                                                   ((x10_int) (((j__1626) - (((x10_long)1ll)))))))))
                    {
                        
                        //#line 104 "SW.x10"
                        diagScore__1618 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1634) - (((x10_long)1ll))),
                                              ((j__1626) - (((x10_long)1ll))))) + (simScore));
                    } else {
                        
                        //#line 106 "SW.x10"
                        diagScore__1618 = ((matrix->x10::array::Array_2<x10_long>::__apply(
                                              ((i__1634) - (((x10_long)1ll))),
                                              ((j__1626) - (((x10_long)1ll))))) - (simScore));
                    }
                    
                    //#line 108 "SW.x10"
                    if (((diagScore__1618) > (max__1616)))
                    {
                        
                        //#line 109 "SW.x10"
                        max__1616 = diagScore__1618;
                        
                        //#line 110 "SW.x10"
                        dir__1617 = ((x10_long)0ll);
                    }
                    
                    //#line 113 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> upResult__1619 =
                      ::SW::checkUpwards(matrix, directions,
                                         gap_opening, gap_extension,
                                         i__1634, j__1626);
                    
                    //#line 114 "SW.x10"
                    x10_long upScore__1620 = upResult__1619->FMGL(first);
                    
                    //#line 115 "SW.x10"
                    if (((upScore__1620) > (max__1616))) {
                        
                        //#line 116 "SW.x10"
                        max__1616 = upScore__1620;
                        
                        //#line 117 "SW.x10"
                        dir__1617 = upResult__1619->FMGL(second);
                    }
                    
                    //#line 120 "SW.x10"
                    ::x10::util::Pair<x10_long, x10_long> leftResult__1621 =
                      ::SW::checkLeftwards(matrix, directions,
                                           gap_opening, gap_extension,
                                           i__1634, j__1626);
                    
                    //#line 121 "SW.x10"
                    x10_long leftScore__1622 = leftResult__1621->FMGL(first);
                    
                    //#line 122 "SW.x10"
                    if (((leftScore__1622) > (max__1616)))
                    {
                        
                        //#line 123 "SW.x10"
                        max__1616 = leftScore__1622;
                        
                        //#line 124 "SW.x10"
                        dir__1617 = leftResult__1621->FMGL(second);
                    }
                    
                    //#line 127 "SW.x10"
                    max__1616 = ((max__1616) < (((x10_long)0ll)))
                      ? (((x10_long)0ll)) : (max__1616);
                    
                    //#line 129 "SW.x10"
                    if (((max__1616) > (globalMax))) {
                        
                        //#line 130 "SW.x10"
                        globalMax = max__1616;
                        
                        //#line 131 "SW.x10"
                        maxCoordinates = ::x10::util::Pair<x10_long, x10_long>::_make(i__1634,
                                                                                      j__1626);
                    }
                    
                    //#line 134 "SW.x10"
                    matrix->x10::array::Array_2<x10_long>::__set(
                      i__1634, j__1626, max__1616);
                    
                    //#line 135 "SW.x10"
                    directions->x10::array::Array_2<x10_long>::__set(
                      i__1634, j__1626, dir__1617);
                }
            }
            
        }
    }
    
    //#line 139 "SW.x10"
    x10_long i__1581min__1635 = ((x10_long)0ll);
    x10_long i__1581max__1636 = ::SW::FMGL(S1_SIZE__get)();
    {
        x10_long i__1637;
        for (i__1637 = i__1581min__1635; ((i__1637) <= (i__1581max__1636));
             i__1637 = ((i__1637) + (((x10_long)1ll)))) {
            x10_long i__1638 = i__1637;
            
            //#line 140 "SW.x10"
            x10_long i__1563min__1627 = ((x10_long)0ll);
            x10_long i__1563max__1628 = ::SW::FMGL(S2_SIZE__get)();
            {
                x10_long i__1629;
                for (i__1629 = i__1563min__1627; ((i__1629) <= (i__1563max__1628));
                     i__1629 = ((i__1629) + (((x10_long)1ll))))
                {
                    x10_long j__1630 = i__1629;
                    
                    //#line 141 "SW.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(matrix->x10::array::Array_2<x10_long>::__apply(
                                                    i__1638,
                                                    j__1630), (&::SW_Strings::sl__1640)));
                }
            }
            
            //#line 143 "SW.x10"
            ::x10::io::Console::FMGL(OUT__get)()->println();
        }
    }
    
    //#line 146 "SW.x10"
    ::SW::backtrack(string1, string2, matrix, directions,
                    maxCoordinates);
}

//#line 150 "SW.x10"
void SW::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 151 "SW.x10"
    ::x10::lang::Rail< x10_long >* indexMap = ::x10::lang::Rail< x10_long >::_make(((x10_long)100ll));
    
    //#line 152 "SW.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(::SW::FMGL(NUM_AMINO_ACIDS__get)(),
                                                                                     ::SW::FMGL(NUM_AMINO_ACIDS__get)());
    
    //#line 154 "SW.x10"
    x10_long gap_opening = ((x10_long)0ll);
    
    //#line 155 "SW.x10"
    x10_long gap_extension = ((x10_long)-2ll);
    
    //#line 156 "SW.x10"
    ::x10::lang::String* string1 = (&::SW_Strings::sl__1641);
    
    //#line 157 "SW.x10"
    ::x10::lang::String* string2 = (&::SW_Strings::sl__1642);
    
    //#line 158 "SW.x10"
    x10_long simScore = ((x10_long)3ll);
    
    //#line 159 "SW.x10"
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

::x10::lang::String SW_Strings::sl__1639("");
::x10::lang::String SW_Strings::sl__1640(" ");
::x10::lang::String SW_Strings::sl__1641("GGTTGACTA");
::x10::lang::String SW_Strings::sl__1642("TGTTACGG");

/* END of SW */
/*************************************************/
