#include <cstring>
#include "string_utilities/string_buf_readers.h"

u8* read_dynamic_string(const u8* source, const u64 expected_size) {
    u64 current_size = expected_size;
    u8* ret = new u8[current_size];

    for (u64 offset = 0; ; offset++) {
        // check if we need to allocate a larger buffer
        if (offset >= current_size - 1) {
            current_size *= 2;
            u8* swap_ret = new u8[current_size];
            strncpy((char*)swap_ret, (char*)ret, offset);
            delete ret;
            ret = swap_ret;
        }

        // copy over the u8, including if it is a terminator
        ret[offset] = source[offset];

        // if this is a terminator, break
        if (source[offset] == 0x00) {
            break;
        }
    }

    return ret;
}
