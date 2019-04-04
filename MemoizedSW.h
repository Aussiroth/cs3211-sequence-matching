#ifndef __MEMOIZEDSW_H
#define __MEMOIZEDSW_H

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
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Math;
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

class MemoizedSW_Strings {
  public:
    static ::x10::lang::String sl__7290;
    static ::x10::lang::String sl__7291;
    static ::x10::lang::String sl__7294;
    static ::x10::lang::String sl__7292;
    static ::x10::lang::String sl__7298;
    static ::x10::lang::String sl__7297;
    static ::x10::lang::String sl__7295;
    static ::x10::lang::String sl__7293;
    static ::x10::lang::String sl__7296;
    static ::x10::lang::String sl__7299;
};

class MemoizedSW : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10::util::ArrayList< ::x10::lang::String*>* splitString(::x10::lang::String* lineToSplit);
    static void printMatrix(::x10::array::Array_2<x10_long>* matrix, x10_long nRows,
                            x10_long nCols);
    static void railBacktrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                              ::x10::array::Array_2<x10_long>* matrix,
                              ::x10::array::Array_2<x10_long>* directions,
                              ::x10::util::Pair<x10_long, x10_long> maxCoordinates);
    static void backtrack(::x10::lang::String* string1, ::x10::lang::String* string2,
                          ::x10::array::Array_2<x10_long>* matrix,
                          ::x10::array::Array_2<x10_long>* directions,
                          ::x10::util::Pair<x10_long, x10_long> maxCoordinates);
    static void match(::x10::lang::String* string1, ::x10::lang::String* string2,
                      ::x10::array::Array_2<x10_long>* blosum,
                      x10_long gapOpening, x10_long gapExtension);
    static x10_long max(x10_long first, x10_long second, x10_long third);
    static void parallelMatch(::x10::lang::String* string1,
                              ::x10::lang::String* string2,
                              ::x10::array::Array_2<x10_long>* blosum,
                              x10_long gapOpening, x10_long gapExtension);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::MemoizedSW* MemoizedSW____this__MemoizedSW(
      );
    void _constructor();
    
    static ::MemoizedSW* _make();
    
    virtual void __fieldInitializers_MemoizedSW();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // MEMOIZEDSW_H

class MemoizedSW;

#ifndef MEMOIZEDSW_H_NODEPS
#define MEMOIZEDSW_H_NODEPS
#ifndef MEMOIZEDSW_H_GENERICS
#define MEMOIZEDSW_H_GENERICS
#endif // MEMOIZEDSW_H_GENERICS
#endif // __MEMOIZEDSW_H_NODEPS
