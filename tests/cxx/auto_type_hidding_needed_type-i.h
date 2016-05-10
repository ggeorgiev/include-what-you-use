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

#pragma once

class Needed
{
};

/**** IWYU_SUMMARY
***** IWYU_SUMMARY */
