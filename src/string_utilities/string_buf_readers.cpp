#include <cstring>
#include <stdio.h>
#include "string_utilities/string_buf_readers.h"

u8* read_dynamic_string(const u8* source, const u64 expected_size) {
    u64 current_size = expected_size;
    u8* ret = new u8[current_size];

    for (u64 offset = 0; ; offset++) {
        // check if we need to allocate a larger buffer
        if (offset >= current_size - 1) {
            printf("doubling\n");
            current_size *= 2;
            u8* swap_ret = new u8[current_size];
            printf("old ptr: 0x%p - new ptr: 0x%p\n", ret, swap_ret);
            strncpy((char*)swap_ret, (char*)ret, offset);
            delete ret;
            ret = swap_ret;
            printf("ret is now 0x%p\n", ret);
        }

        // copy over the u8, including if it is a terminator
        ret[offset] = source[offset] & 0xFF;

        // if this is a terminator, break
        if (source[offset] == 0x00) {
            printf("breaking out\n");
            if (offset == 0) {
                printf("offset 0 char: %c\n", ret[offset]);
            }
            break;
        }
    }

    return ret;
}
