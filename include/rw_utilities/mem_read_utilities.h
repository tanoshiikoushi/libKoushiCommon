#ifndef MEM_READ_UTILITIES_H_INCLUDED

#include "types/typedefs.h"

// read unsigned values
u8 read_8LE(char* data);
constexpr auto read_8BE = read_8LE;
u16 read_16LE(char* data);
u16 read_16BE(char* data);
u32 read_32LE(char* data);
u32 read_32BE(char* data);
u64 read_64LE(char* data);
u64 read_64BE(char* data);

#define MEM_READ_UTILITIES_H_INCLUDED

#endif
