#include "rw_utilities/mem_read_utilities.h"

u8 read_8LE(u8* data)
{
    return (data[0] & 0xFF);
}

u16 read_16LE(u8* data)
{
	return (u16)(data[0] & 0xFF) | ((u16)(data[1] & 0xFF) << 8);
}

u16 read_16BE(u8* data)
{
	return (u16)(data[1] & 0xFF) | ((u16)(data[0] & 0xFF) << 8);
}

u32 read_32LE(u8* data)
{
    return (u32)(data[0] & 0xFF) | ((u32)(data[1] & 0xFF) << 8) | ((u32)(data[2] & 0xFF) << 16) | ((u32)(data[3] & 0xFF) << 24);
}

u32 read_32BE(u8* data)
{
    return (u32)(data[3] & 0xFF) | ((u32)(data[2] & 0xFF) << 8) | ((u32)(data[1] & 0xFF) << 16) | ((u32)(data[0] & 0xFF) << 24);
}

u64 read_64LE(u8* data)
{
    return (u64)(data[0] & 0xFF) | ((u64)(data[1] & 0xFF) << 8) | ((u64)(data[2] & 0xFF) << 16) | ((u64)(data[3] & 0xFF) << 24) |
			((u64)(data[4] & 0xFF) << 32) | ((u64)(data[5] & 0xFF) << 40) | ((u64)(data[6] & 0xFF) << 48) | ((u64)(data[7] & 0xFF) << 56);
}

u64 read_64BE(u8* data)
{
    return (u64)(data[7] & 0xFF) | ((u64)(data[6] & 0xFF) << 8) | ((u64)(data[5] & 0xFF) << 16) | ((u64)(data[4] & 0xFF) << 24) |
			((u64)(data[3] & 0xFF) << 32) | ((u64)(data[2] & 0xFF) << 40) | ((u64)(data[1] & 0xFF) << 48) | ((u64)(data[0] & 0xFF) << 56);
}
