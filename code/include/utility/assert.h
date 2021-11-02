#ifndef UTILITY_ASSERT_H
#define UTILITY_ASSERT_H

#include <assert.h>
#include <stdexcept>
#include <stdio.h>
#include "utility/utility.h"
#include "utility/exception.h"

#ifndef _EF_FUNC_
#ifdef WIN32
#define _EF_FUNC_  __FUNCTION__
#else
#define _EF_FUNC_  __func__
#endif
#endif

namespace ece {
#define ece_assert(exp) { \
  if(!(exp)){ \
    ece_info("%s:%d:%s\n\"%s\"\n", __FILE__, __LINE__, _EF_FUNC_, #exp); \
    ece::dump_stack(); \
    throw ece::Exception("assert error!"); \
  } \
}

}


#endif
