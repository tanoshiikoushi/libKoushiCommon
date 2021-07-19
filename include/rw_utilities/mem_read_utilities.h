#ifndef MEM_READ_UTILITIES_H_INCLUDED

#include "types/typedefs.h"

// read unsigned values
u8 read_8LE(u8* data);
constexpr auto read_8BE = read_8LE;
u16 read_16LE(u8* data);
u16 read_16BE(u8* data);
u32 read_32LE(u8* data);
u32 read_32BE(u8* data);
u64 read_64LE(u8* data);
u64 read_64BE(u8* data);

#define MEM_READ_UTILITIES_H_INCLUDED

#endif
