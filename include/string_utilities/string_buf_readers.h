#ifndef STRING_BUF_READERS_H_INCLUDED

#include "types/typedefs.h"

// read arbitrary length terminated string into buffer using oversized buffer - we can adjust this later
// NOTE: THIS IS NOT OVERFLOW SAFE
u8* read_dynamic_string(const u8* source, const u64 expected_size);

#define STRING_BUF_READERS_H_INCLUDED

#endif
