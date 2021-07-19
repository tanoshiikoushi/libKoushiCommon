#ifndef MEM_READ_UTILITIES_H_INCLUDED

#include "types/typedefs.h"

// read unsigned values
u8 read_8LE(const u8* data);
constexpr auto read_8BE = read_8LE;
u16 read_16LE(const u8* data);
u16 read_16BE(const u8* data);
u32 read_32LE(const u8* data);
u32 read_32BE(const u8* data);
u64 read_64LE(const u8* data);
u64 read_64BE(const u8* data);

#define MEM_READ_UTILITIES_H_INCLUDED

#endif
