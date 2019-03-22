#ifndef __SW_H
#define __SW_H

#include <x10rt.h>


namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Char;
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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class SW_Strings {
  public:
    static ::x10::lang::String sl__1639;
    static ::x10::lang::String sl__1640;
    static ::x10::lang::String sl__1641;
    static ::x10::lang::String sl__1642;
};

class SW : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(NUM_AMINO_ACIDS) */
    static const x10_long FMGL(NUM_AMINO_ACIDS) = 24;
    static x10_long FMGL(NUM_AMINO_ACIDS__get)();
    
    /* Static field: FMGL(S1_SIZE) */
    static const x10_long FMGL(S1_SIZE) = 9;
    static x10_long FMGL(S1_SIZE__get)();
    
    /* Static field: FMGL(S2_SIZE) */
    static const x10_long FMGL(S2_SIZE) = 8;
    static x10_long FMGL(S2_SIZE__get)();
    
    /* Static field: FMGL(DIAG) */
    static const x10_long FMGL(DIAG) = 0;
    static x10_long FMGL(DIAG__get)();
    
    /* Static field: FMGL(UP) */
    static const x10_long FMGL(UP) = 1;
    static x10_long FMGL(UP__get)();
    
    /* Static field: FMGL(LEFT) */
    static const x10_long FMGL(LEFT) = 2;
    static x10_long FMGL(LEFT__get)();
    
    static ::x10::util::Pair<x10_long, x10_long> checkUpwards(::x10::array::Array_2<x10_long>* matrix,
                                                              ::x10::array::Array_2<x10_long>* directions,
                                                              x10_long gap_opening,
                                                              x10_long gap_extension,
                                                              x10_long row,
                                                              x10_long col);
    static ::x10::util::Pair<x10_long, x10_long> checkLeftwards(
      ::x10::array::Array_2<x10_long>* matrix, ::x10::array::Array_2<x10_long>* directions,
      x10_long gap_opening, x10_long gap_extension, x10_long row,
      x10_long col);
    static void backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                          ::x10::array::Array_2<x10_long>* matrix,
                          ::x10::array::Array_2<x10_long>* directions,
                          ::x10::util::Pair<x10_long, x10_long> maxCoordinates);
    static void match(::x10::lang::String* string1, ::x10::lang::String* string2,
                      x10_long simScore, x10_long gap_opening,
                      x10_long gap_extension);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::SW* SW____this__SW();
    void _constructor();
    
    static ::SW* _make();
    
    virtual void __fieldInitializers_SW();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SW_H

class SW;

#ifndef SW_H_NODEPS
#define SW_H_NODEPS
#ifndef SW_H_GENERICS
#define SW_H_GENERICS
inline x10_long SW::FMGL(NUM_AMINO_ACIDS__get)() {
    return SW::FMGL(NUM_AMINO_ACIDS);
}

inline x10_long SW::FMGL(S1_SIZE__get)() {
    return SW::FMGL(S1_SIZE);
}

inline x10_long SW::FMGL(S2_SIZE__get)() {
    return SW::FMGL(S2_SIZE);
}

inline x10_long SW::FMGL(DIAG__get)() {
    return SW::FMGL(DIAG);
}

inline x10_long SW::FMGL(UP__get)() {
    return SW::FMGL(UP);
}

inline x10_long SW::FMGL(LEFT__get)() {
    return SW::FMGL(LEFT);
}

#endif // SW_H_GENERICS
#endif // __SW_H_NODEPS
