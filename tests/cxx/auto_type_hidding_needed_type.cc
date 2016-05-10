//===--- auto_type_within_template.cc - test input file for iwyu ----------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// Tests that IWYU doesn't crash when auto type is within template and has no
// deduced type.

#include "auto_type_hidding_needed_type-f.h"
#include "auto_type_hidding_needed_type-i.h"

void bar() {
    auto needed = foo();
}

/**** IWYU_SUMMARY

(tests/cxx/auto_type_hidding_needed_type.cc has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
