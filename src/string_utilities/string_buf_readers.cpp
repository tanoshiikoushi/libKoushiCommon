#include <cstring>
#include "string_utilities/string_buf_readers.h"

u8* read_dynamic_string(const u8* source) {
    u64 str_size = strlen(source);
    u8* ret = new char[str_size + 1];
    strncpy((char*)ret, source, str_size);
    return ret;
}
