#include "checksum/crc32eth.h"

u32 crc32eth(u8* buf, size_t size)
{
    u8* p = buf;
    u32 crc;

    crc = ~0U;
    while (size--)
        crc = crc32eth_tab[(crc ^ *p++) & 0xFF] ^ (crc >> 8);
    return crc ^ ~0U;
}
