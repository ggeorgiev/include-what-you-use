//===--- implicit_ctor.cc - test input file for iwyu ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// If you define an API that accepts an argument of class type or
// const reference to a class type with an implicit constructor, you
// must provide the definition for the class.
//
// If you use an API and that use triggers an implicit constructor
// call, you are *not* considered to have used that constructor,
// relying on the previous rule to make the code complete definition
// available.
//
// This tests that logic.

#include "tests/cxx/indirect_from_a_template.h"

template<typename T>
class Template
{
public:
    typedef T Type;
};

template<typename T>
class Test
{
public:
    typedef Template<T> Instance;
    
    void foo();
};

template<typename T>
void Test<T>::foo()
{
    Instance instance;
}

/**** IWYU_SUMMARY
***** IWYU_SUMMARY */
