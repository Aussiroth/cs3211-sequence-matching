#ifndef __SW_M_H
#define __SW_M_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class SW_M_Strings {
  public:
    static ::x10::lang::String sl__4235;
    static ::x10::lang::String sl__4238;
    static ::x10::lang::String sl__4240;
    static ::x10::lang::String sl__4236;
    static ::x10::lang::String sl__4242;
    static ::x10::lang::String sl__4241;
    static ::x10::lang::String sl__4239;
    static ::x10::lang::String sl__4237;
    static ::x10::lang::String sl__4243;
};

class SW_M : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(NUM_AMINO_ACIDS) */
    static const x10_long FMGL(NUM_AMINO_ACIDS) = 24;
    static x10_long FMGL(NUM_AMINO_ACIDS__get)();
    
    /* Static field: FMGL(DIAG) */
    static const x10_long FMGL(DIAG) = 0;
    static x10_long FMGL(DIAG__get)();
    
    /* Static field: FMGL(UP) */
    static const x10_long FMGL(UP) = 1;
    static x10_long FMGL(UP__get)();
    
    /* Static field: FMGL(LEFT) */
    static const x10_long FMGL(LEFT) = 2;
    static x10_long FMGL(LEFT__get)();
    
    static ::x10::util::ArrayList< ::x10::lang::String*>* splitString(::x10::lang::String* lineToSplit);
    static ::x10::util::Pair<x10_long, x10_long> checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                              ::x10::array::Array_2<x10_long>* directions,
                                                              x10_long gapOpening,
                                                              x10_long gapExtension,
                                                              x10_long row,
                                                              x10_long col);
    static ::x10::util::Pair<x10_long, x10_long> checkLeftwards(
      ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
      x10_long gapOpening, x10_long gapExtension, x10_long row,
      x10_long col);
    static void backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                          ::x10::array::Array_2<x10_long>* matrix,
                          ::x10::array::Array_2<x10_long>* directions,
                          ::x10::util::Pair<x10_long, x10_long> maxCoordinates);
    static void match(::x10::lang::String* string1, ::x10::lang::String* string2,
                      ::x10::array::Array_2<x10_long>* blosum,
                      x10_long gapOpening, x10_long gapExtension);
    static void parallelMatch(::x10::lang::String* string1,
                              ::x10::lang::String* string2,
                              ::x10::array::Array_2<x10_long>* blosum,
                              x10_long gapOpening, x10_long gapExtension);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::SW_M* SW_M____this__SW_M();
    void _constructor();
    
    static ::SW_M* _make();
    
    virtual void __fieldInitializers_SW_M();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SW_M_H

class SW_M;

#ifndef SW_M_H_NODEPS
#define SW_M_H_NODEPS
#ifndef SW_M_H_GENERICS
#define SW_M_H_GENERICS
inline x10_long SW_M::FMGL(NUM_AMINO_ACIDS__get)() {
    return SW_M::FMGL(NUM_AMINO_ACIDS);
}

inline x10_long SW_M::FMGL(DIAG__get)() {
    return SW_M::FMGL(DIAG);
}

inline x10_long SW_M::FMGL(UP__get)() {
    return SW_M::FMGL(UP);
}

inline x10_long SW_M::FMGL(LEFT__get)() {
    return SW_M::FMGL(LEFT);
}

#endif // SW_M_H_GENERICS
#endif // __SW_M_H_NODEPS
