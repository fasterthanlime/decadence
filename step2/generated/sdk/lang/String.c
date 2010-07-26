/* lang/String source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/String.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/text/Buffer.h>


lang_types__Bool lang_String__Char_alphaNumeric__quest(lang_String__Char this) {
    return lang_String__Char_alpha__quest(this) || lang_String__Char_digit__quest(this);
}

lang_types__Bool lang_String__Char_alpha__quest(lang_String__Char this) {
    return lang_String__Char_lower__quest(this) || lang_String__Char_upper__quest(this);
}

lang_types__Bool lang_String__Char_lower__quest(lang_String__Char this) {
    return this >= 'a' && this <= 'z';
}

lang_types__Bool lang_String__Char_upper__quest(lang_String__Char this) {
    return this >= 'A' && this <= 'Z';
}

lang_types__Bool lang_String__Char_digit__quest(lang_String__Char this) {
    return this >= '0' && this <= '9';
}

lang_types__Bool lang_String__Char_hexDigit__quest(lang_String__Char this) {
    return lang_String__Char_digit__quest(this) || (this >= 'A' && this <= 'F') || (this >= 'a' && this <= 'f');
}

lang_types__Bool lang_String__Char_control__quest(lang_String__Char this) {
    return (this >= (lang_String__Char) 0 && this <= (lang_String__Char) 31) || this == (lang_String__Char) 127;
}

lang_types__Bool lang_String__Char_graph__quest(lang_String__Char this) {
    return lang_String__Char_printable__quest(this) && this != ' ';
}

lang_types__Bool lang_String__Char_printable__quest(lang_String__Char this) {
    return this >= (lang_String__Char) 32 && this <= (lang_String__Char) 126;
}

lang_types__Bool lang_String__Char_punctuation__quest(lang_String__Char this) {
    return lang_String__Char_printable__quest(this) && !lang_String__Char_alphaNumeric__quest(this) && this != ' ';
}

lang_types__Bool lang_String__Char_whitespace__quest(lang_String__Char this) {
    return this == ' ' || this == '\f' || this == '\n' || this == '\r' || this == '\t' || this == '\v';
}

lang_types__Bool lang_String__Char_blank__quest(lang_String__Char this) {
    return this == ' ' || this == '\t';
}

lang_Numbers__Int lang_String__Char_toInt(lang_String__Char this) {
    if (lang_String__Char_digit__quest(this)) {
        return ((lang_Numbers__Int) ((this - '0')));
    }
    return -1;
}

lang_String__String lang_String__Char_toString(lang_String__Char this) {
    return lang_String__String_new_withChar(this);
}

void lang_String__Char_print(lang_String__Char this) {
    lang_String__String_printf("%c", this);
}

void lang_String__Char_println(lang_String__Char this) {
    lang_String__String_printf("%c\n", this);
}
void lang_String__Char___load__() {
    lang_types__Class___load__();
}

lang_String__CharClass *lang_String__Char_class(){
    static lang_String__CharClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_String__Char),
                    .size = sizeof(lang_String__Char),
                    .name = "Char",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_String__Char___load__,
            },
        },
    };
    return &class;
}
void lang_String__SChar___load__() {
    lang_String__Char___load__();
}

lang_String__SCharClass *lang_String__SChar_class(){
    static lang_types__Bool __done__ = false;
    static lang_String__SCharClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_String__SChar),
                        .size = sizeof(lang_String__SChar),
                        .name = "SChar",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_String__SChar___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_String__Char_class();
        __done__ = true;
    }
    return &class;
}
void lang_String__UChar___load__() {
    lang_String__Char___load__();
}

lang_String__UCharClass *lang_String__UChar_class(){
    static lang_types__Bool __done__ = false;
    static lang_String__UCharClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_String__UChar),
                        .size = sizeof(lang_String__UChar),
                        .name = "UChar",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_String__UChar___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_String__Char_class();
        __done__ = true;
    }
    return &class;
}
void lang_String__WChar___load__() {
    lang_types__Class___load__();
}

lang_String__WCharClass *lang_String__WChar_class(){
    static lang_String__WCharClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_String__WChar),
                    .size = sizeof(lang_String__WChar),
                    .name = "WChar",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_String__WChar___load__,
            },
        },
    };
    return &class;
}

lang_types__Bool lang_String__String_compare(lang_String__String this, lang_String__String other, lang_Numbers__Int start, lang_Numbers__Int length) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < length; i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(this, start + i) != lang_String____OP_IDX_String_SizeT__Char(other, i)) {
                return false;
            }
        }
    }
    return true;
}

lang_types__Bool lang_String__String_compare_implicitLength(lang_String__String this, lang_String__String other, lang_Numbers__Int start) {
    return lang_String__String_compare(this, other, start, strlen(other));
}

lang_types__Bool lang_String__String_compare_whole(lang_String__String this, lang_String__String other) {
    return lang_String__String_compare(this, other, 0, strlen(other));
}

lang_types__Bool lang_String__String_equals__quest(lang_String__String this, lang_String__String other) {
    if ((this == (lang_String__String) NULL) || (other == (lang_String__String) NULL)) {
        return false;
    }
    lang_Numbers__Int otherlen = strlen(other);
    if (strlen(this) != otherlen) {
        return false;
    }
    lang_String__Char* s1 = ((lang_String__Char*) (this));
    lang_String__Char* s2 = ((lang_String__Char*) (other));
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < otherlen; i++) {
            if (s1[i] != s2[i]) {
                return false;
            }
        }
    }
    return true;
}

lang_Numbers__Int lang_String__String_toInt(lang_String__String this) {
    return ((lang_Numbers__Int) (strtol(this, NULL, 10)));
}

lang_Numbers__Int lang_String__String_toInt_withBase(lang_String__String this, lang_Numbers__Int base) {
    return ((lang_Numbers__Int) (strtol(this, NULL, base)));
}

lang_Numbers__Long lang_String__String_toLong(lang_String__String this) {
    return strtol(this, NULL, 10);
}

lang_Numbers__Long lang_String__String_toLong_withBase(lang_String__String this, lang_Numbers__Long base) {
    return strtol(this, NULL, base);
}

lang_Numbers__LLong lang_String__String_toLLong(lang_String__String this) {
    return ((lang_Numbers__LLong) (strtol(this, NULL, 10)));
}

lang_Numbers__LLong lang_String__String_toLLong_withBase(lang_String__String this, lang_Numbers__LLong base) {
    return ((lang_Numbers__LLong) (strtol(this, NULL, base)));
}

lang_Numbers__ULong lang_String__String_toULong(lang_String__String this) {
    return strtoul(this, NULL, 10);
}

lang_Numbers__ULong lang_String__String_toULong_withBase(lang_String__String this, lang_Numbers__ULong base) {
    return strtoul(this, NULL, base);
}

lang_Numbers__Float lang_String__String_toFloat(lang_String__String this) {
    return strtof(this, NULL);
}

lang_Numbers__Double lang_String__String_toDouble(lang_String__String this) {
    return strtod(this, NULL);
}

lang_Numbers__LDouble lang_String__String_toLDouble(lang_String__String this) {
    return strtold(this, NULL);
}

lang_types__Bool lang_String__String_empty__quest(lang_String__String this) {
    return (this == (lang_String__String) NULL) || (lang_String____OP_IDX_String_SizeT__Char(this, 0) == (lang_String__Char) 0);
}

lang_types__Bool lang_String__String_startsWith__quest(lang_String__String this, lang_String__String s) {
    if (strlen(this) < strlen(s)) {
        return false;
    }
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < strlen(s); i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(this, i) != lang_String____OP_IDX_String_SizeT__Char(s, i)) {
                return false;
            }
        }
    }
    return true;
}

lang_types__Bool lang_String__String_startsWith__quest_withChar(lang_String__String this, lang_String__Char c) {
    return lang_String____OP_IDX_String_SizeT__Char(this, 0) == c;
}

lang_types__Bool lang_String__String_endsWith__quest(lang_String__String this, lang_String__String s) {
    lang_Numbers__Int l1 = strlen(this);
    lang_Numbers__Int l2 = strlen(s);
    if (l1 < l2) {
        return false;
    }
    lang_Numbers__Int offset = (l1 - l2);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < l2; i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(this, i + offset) != lang_String____OP_IDX_String_SizeT__Char(s, i)) {
                return false;
            }
        }
    }
    return true;
}

lang_Numbers__Int lang_String__String_indexOf_charZero(lang_String__String this, lang_String__Char c) {
    return lang_String__String_indexOf_char(this, c, 0);
}

lang_Numbers__Int lang_String__String_indexOf_char(lang_String__String this, lang_String__Char c, lang_Numbers__Int start) {
    lang_Numbers__Int length = strlen(this);
    
    {
        lang_Numbers__Int i;
        for (i = start; i < length; i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(this, i) == c) {
                return i;
            }
        }
    }
    return -1;
}

lang_Numbers__Int lang_String__String_indexOf_stringZero(lang_String__String this, lang_String__String s) {
    return lang_String__String_indexOf_string(this, s, 0);
}

lang_Numbers__Int lang_String__String_indexOf_string(lang_String__String this, lang_String__String s, lang_Numbers__Int start) {
    lang_Numbers__Int length = strlen(this);
    lang_Numbers__Int slength = strlen(s);
    
    {
        lang_Numbers__Int i;
        for (i = start; i < length; i++) {
            if (lang_String__String_compare(this, s, i, slength)) {
                return i;
            }
        }
    }
    return -1;
}

lang_types__Bool lang_String__String_contains__quest_char(lang_String__String this, lang_String__Char c) {
    return lang_String__String_indexOf_charZero(this, c) != -1;
}

lang_types__Bool lang_String__String_contains__quest_string(lang_String__String this, lang_String__String s) {
    return lang_String__String_indexOf_stringZero(this, s) != -1;
}

lang_String__String lang_String__String_trim_whitespace(lang_String__String this) {
    return lang_String__String_trim_string(this, " \r\n\t");
}

lang_String__String lang_String__String_trim(lang_String__String this, lang_String__Char c) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int start = 0;
    while (lang_String____OP_IDX_String_SizeT__Char(this, start) == c) {
        start += 1;
    }
    lang_Numbers__Int end = strlen(this);
    if (start >= end) {
        return "";
    }
    while (lang_String____OP_IDX_String_SizeT__Char(this, end - 1) == c) {
        end -= 1;
    }
    if (start != 0 || end != strlen(this)) {
        return lang_String__String_substring(this, start, end);
    }
    return this;
}

lang_String__String lang_String__String_trim_string(lang_String__String this, lang_String__String s) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int start = 0;
    while (lang_String__String_contains__quest_char(s, lang_String____OP_IDX_String_SizeT__Char(this, start))) {
        start += 1;
    }
    lang_Numbers__Int end = strlen(this);
    if (start >= end) {
        return "";
    }
    while (lang_String__String_contains__quest_char(s, lang_String____OP_IDX_String_SizeT__Char(this, end - 1))) {
        end -= 1;
    }
    if (start != 0 || end != strlen(this)) {
        return lang_String__String_substring(this, start, end);
    }
    return this;
}

lang_String__String lang_String__String_trimLeft_space(lang_String__String this) {
    return lang_String__String_trimLeft(this, ' ');
}

lang_String__String lang_String__String_trimLeft(lang_String__String this, lang_String__Char c) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int start = 0;
    while (lang_String____OP_IDX_String_SizeT__Char(this, start) == c) {
        start += 1;
    }
    lang_Numbers__Int end = strlen(this);
    if (start >= end) {
        return "";
    }
    if (start != 0) {
        return lang_String__String_substring_tillEnd(this, start);
    }
    return this;
}

lang_String__String lang_String__String_trimLeft_string(lang_String__String this, lang_String__String s) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int start = 0;
    while (lang_String__String_contains__quest_char(s, lang_String____OP_IDX_String_SizeT__Char(this, start))) {
        start += 1;
    }
    lang_Numbers__Int end = strlen(this);
    if (start >= end) {
        return "";
    }
    if (start != 0) {
        return lang_String__String_substring_tillEnd(this, start);
    }
    return this;
}

lang_String__String lang_String__String_trimRight_space(lang_String__String this) {
    return lang_String__String_trimRight(this, ' ');
}

lang_String__String lang_String__String_trimRight(lang_String__String this, lang_String__Char c) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int end = strlen(this);
    if (0 >= end) {
        return "";
    }
    while (end - 1 >= 0 && lang_String____OP_IDX_String_SizeT__Char(this, end - 1) == c) {
        end -= 1;
    }
    if (end != strlen(this)) {
        return lang_String__String_substring(this, 0, end);
    }
    return this;
}

lang_String__String lang_String__String_trimRight_string(lang_String__String this, lang_String__String s) {
    if (strlen(this) == 0) {
        return this;
    }
    lang_Numbers__Int end = strlen(this);
    while (lang_String__String_contains__quest_char(s, lang_String____OP_IDX_String_SizeT__Char(this, end - 1))) {
        end -= 1;
    }
    if (0 >= end) {
        return "";
    }
    if (end != strlen(this)) {
        return lang_String__String_substring(this, 0, end);
    }
    return this;
}

lang_String__Char lang_String__String_first(lang_String__String this) {
    return lang_String____OP_IDX_String_SizeT__Char(this, 0);
}

lang_Numbers__Int lang_String__String_lastIndex(lang_String__String this) {
    return strlen(this) - 1;
}

lang_String__Char lang_String__String_last(lang_String__String this) {
    return lang_String____OP_IDX_String_SizeT__Char(this, lang_String__String_lastIndex(this));
}

lang_Numbers__Int lang_String__String_lastIndexOf(lang_String__String this, lang_String__Char c) {
    lang_Numbers__Int i = strlen(this);
    while (i) {
        if (lang_String____OP_IDX_String_SizeT__Char(this, i) == c) {
            return i;
        }
        i -= 1;
    }
    return -1;
}

lang_String__String lang_String__String_substring_tillEnd(lang_String__String this, lang_Numbers__Int start) {
    lang_Numbers__Int len = strlen(this);
    if (start > len) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_String__String_class()), lang_String__String_format("String.substring: out of bounds: length = %zd, start = %zd\n", len, start)));
        return ((lang_String__String) (NULL));
    }
    lang_Numbers__SizeT diff = (len - start);
    lang_String__String sub = lang_String__String_new_withLength(diff);
    memcpy(sub, (((lang_String__Char*) (this))) + start, diff);
    lang_String____OP_IDX_ASS_String_SizeT_Char(sub, diff, '\0');
    return ((lang_String__String) (sub));
}

lang_String__String lang_String__String_substring(lang_String__String this, lang_Numbers__Int start, lang_Numbers__Int end) {
    lang_Numbers__Int len = strlen(this);
    if (start == end) {
        return "";
    }
    if (end < 0) {
        end = len + end + 1;
    }
    if (start > len || start > end || end > len) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_String__String_class()), lang_String__String_format("String.substring: out of bounds: length = %zd, start = %zd, end = %zd\n", len, start, end)));
        return ((lang_String__String) (NULL));
    }
    lang_Numbers__Int diff = (end - start);
    lang_String__String sub = lang_String__String_new_withLength(diff);
    memcpy(sub, (((lang_String__Char*) (this))) + start, diff);
    return ((lang_String__String) (sub));
}

lang_String__String lang_String__String_reverse(lang_String__String this) {
    lang_Numbers__Int len = strlen(this);
    if (!len) {
        return ((lang_String__String) (NULL));
    }
    lang_String__String result = lang_String__String_new_withLength(len + 1);
    
    {
        lang_Numbers__SizeT i;
        for (i = 0; i < len; i++) {
            lang_String____OP_IDX_ASS_String_SizeT_Char(result, i, lang_String____OP_IDX_String_SizeT__Char(this, (len - 1) - i));
        }
    }
    lang_String____OP_IDX_ASS_String_SizeT_Char(result, len, 0);
    return ((lang_String__String) (result));
}

void lang_String__String_print(lang_String__String this) {
    lang_String__String_printf("%s", this);
    lang_IO__FStream_flush(stdout);
}

void lang_String__String_println(lang_String__String this) {
    lang_String__String_printf("%s\n", this);
}

lang_String__String lang_String__String_times(lang_String__String this, lang_Numbers__Int count) {
    lang_Numbers__Int length = strlen(this);
    lang_String__Char* result = ((lang_String__Char*) (GC_MALLOC((length * count) + 1)));
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < count; i++) {
            memcpy(result + (i * length), this, length);
        }
    }
    result[length * count] = '\0';
    return ((lang_String__String) (result));
}

lang_String__String lang_String__String_clone(lang_String__String this) {
    lang_Numbers__Int length = strlen(this);
    lang_String__String copy = lang_String__String_new_withLength(length);
    memcpy(copy, this, length + 1);
    return ((lang_String__String) (copy));
}

lang_String__String lang_String__String_append(lang_String__String this, lang_String__String other) {
    lang_Numbers__Int length = strlen(this);
    lang_Numbers__Int rlength = strlen(other);
    lang_String__Char* copy = ((lang_String__Char*) (lang_String__String_new_withLength(length + rlength)));
    memcpy(copy, this, length);
    memcpy(copy + length, other, rlength + 1);
    return ((lang_String__String) (copy));
}

lang_String__String lang_String__String_append_char(lang_String__String this, lang_String__Char other) {
    lang_Numbers__Int length = strlen(this);
    lang_String__Char* copy = ((lang_String__Char*) (lang_String__String_new_withLength(length + 1)));
    memcpy(copy, this, length);
    copy[length] = other;
    copy[length + 1] = '\0';
    return ((lang_String__String) (copy));
}

lang_Numbers__Int lang_String__String_count_char(lang_String__String this, lang_String__Char what) {
    lang_Numbers__Int count = 0;
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < strlen(this); i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(this, i) == what) {
                count += 1;
            }
        }
    }
    return count;
}

lang_Numbers__Int lang_String__String_count_string(lang_String__String this, lang_String__String what) {
    lang_Numbers__Int length = strlen(this);
    lang_Numbers__Int whatLength = strlen(what);
    lang_Numbers__Int count = 0;
    lang_Numbers__Int i = 0;
    while (i < length) {
        if (lang_String__String_compare(this, what, i, whatLength)) {
            count += 1;
            i += whatLength;
        }
        else {
            i += 1;
        }
    }
    return count;
}

lang_String__String lang_String__String_replace(lang_String__String this, lang_String__Char oldie, lang_String__Char kiddo) {
    if (!lang_String__String_contains__quest_char(this, oldie)) {
        return this;
    }
    lang_Numbers__Int length = strlen(this);
    lang_String__String copy = lang_String__String_clone(this);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < length; i++) {
            if (lang_String____OP_IDX_String_SizeT__Char(copy, i) == oldie) {
                lang_String____OP_IDX_ASS_String_SizeT_Char(copy, i, kiddo);
            }
        }
    }
    return copy;
}

lang_String__String lang_String__String_replace_string(lang_String__String this, lang_String__String oldie, lang_String__String kiddo) {
    if (!lang_String__String_contains__quest_string(this, oldie)) {
        return this;
    }
    lang_Numbers__Int length = strlen(this);
    lang_Numbers__Int oldieLength = strlen(oldie);
    text_Buffer__Buffer* buffer = text_Buffer__Buffer_new_withCapa(length);
    lang_Numbers__Int i = 0;
    while (i < length) {
        if (lang_String__String_compare(this, oldie, i, oldieLength)) {
            text_Buffer__Buffer_append_str(buffer, kiddo);
            i += oldieLength;
        }
        else {
            text_Buffer__Buffer_append_chr(buffer, (((lang_String__Char*) (this)))[i]);
            i += 1;
        }
    }
    return text_Buffer__Buffer_toString(buffer);
}

lang_String__String lang_String__String_prepend(lang_String__String this, lang_String__String other) {
    return lang_String__String_append(other, this);
}

lang_String__String lang_String__String_prepend_char(lang_String__String this, lang_String__Char other) {
    lang_Numbers__Int length = strlen(this);
    lang_String__Char* copy = ((lang_String__Char*) (lang_String__String_new_withLength(length + 1)));
    copy[0] = other;
    memcpy(copy + 1, this, length);
    return ((lang_String__String) (copy));
}

lang_String__String lang_String__String_toLower(lang_String__String this) {
    lang_Numbers__Int length = strlen(this);
    lang_String__Char* copy = ((lang_String__Char*) (lang_String__String_new_withLength(length)));
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < length; i++) {
            copy[i] = tolower(((lang_String__Char) (lang_String____OP_IDX_String_SizeT__Char(this, i))));
        }
    }
    return ((lang_String__String) (copy));
}

lang_String__String lang_String__String_toUpper(lang_String__String this) {
    lang_Numbers__Int length = strlen(this);
    lang_String__Char* copy = ((lang_String__Char*) (lang_String__String_new_withLength(length)));
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < length; i++) {
            copy[i] = toupper(((lang_String__Char) (lang_String____OP_IDX_String_SizeT__Char(this, i))));
        }
    }
    return ((lang_String__String) (copy));
}

lang_String__Char lang_String__String_charAt(lang_String__String this, lang_Numbers__SizeT index) {
    if (index < (lang_Numbers__SizeT) 0 || index > (lang_Numbers__SizeT) strlen(this)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_String__String_class()), lang_String__String_format("Accessing a String out of bounds index = %d, length = %d!", index, strlen(this))));
    }
    return (((lang_String__Char*) (this)))[index];
}

lang_String__String lang_String__String_format(lang_String__String this, ...) {
    lang_System__VaList list;
    va_start(list, this);
    lang_Numbers__Int length = vsnprintf(NULL, 0, this, list);
    lang_String__String output = lang_String__String_new_withLength(length);
    va_end(list);
    va_start(list, this);
    vsnprintf(output, length + 1, this, list);
    va_end(list);
    return output;
}

void lang_String__String_printf(lang_String__String this, ...) {
    lang_System__VaList list;
    va_start(list, this);
    vprintf(this, list);
    va_end(list);
}

void lang_String__String_vprintf(lang_String__String this, lang_System__VaList list) {
    vprintf(this, list);
}

void lang_String__String_printfln(lang_String__String this, ...) {
    lang_System__VaList list;
    va_start(list, this);
    vprintf(this, list);
    va_end(list);
    lang_String__Char_print('\n');
}

lang_Numbers__Int lang_String__String_scanf(lang_String__String this, lang_String__String format, ...) {
    lang_System__VaList list;
    va_start(list, format);
    lang_Numbers__Int retval = vsscanf(this, format, list);
    va_end(list);
    return retval;
}

lang_String__StringIterator* lang_String__String_iterator(lang_String__String this) {
    return lang_String__StringIterator_new_withStr((lang_types__Class*)lang_String__Char_class(), this);
}

lang_String__StringIterator* lang_String__String_forward(lang_String__String this) {
    return lang_String__String_iterator(this);
}

lang_Iterators__BackIterator* lang_String__String_backward(lang_String__String this) {
    return ((lang_Iterators__BackIterator*) (lang_Iterators__BackIterator_reversed((lang_Iterators__BackIterator*) lang_String__String_backIterator(this))));
}

lang_String__StringIterator* lang_String__String_backIterator(lang_String__String this) {
    lang_String__StringIterator* iter = lang_String__StringIterator_new_withStr((lang_types__Class*)lang_String__Char_class(), this);
    iter->i = strlen(this);
    return iter;
}
lang_String__String lang_String__String_new_withLength(lang_Numbers__Int length) {
    
    lang_String__Char* result = ((lang_String__Char*) (GC_MALLOC(length + 1)));
    result[length] = '\0';
    return ((lang_String__String) (result));
}
lang_String__String lang_String__String_new_withChar(lang_String__Char c) {
    
    lang_String__String result = lang_String__String_new_withLength(1);
    lang_String____OP_IDX_ASS_String_SizeT_Char(result, 0, c);
    return result;
}
void lang_String__String___load__() {
    lang_types__Class___load__();
}

lang_String__StringClass *lang_String__String_class(){
    static lang_String__StringClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_String__String),
                    .size = sizeof(lang_String__String),
                    .name = "String",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_String__String___load__,
            },
        },
    };
    return &class;
}

void lang_String__StringIterator_init_withStr(lang_String__StringIterator* this, lang_String__String str) {
    this->str = str;
}

lang_types__Bool lang_String__StringIterator_hasNext__quest_impl(lang_String__StringIterator* this) {
    return this->i < strlen(this->str);
}

void lang_String__StringIterator_next_impl(lang_String__StringIterator* this, uint8_t* __genericReturn9) {
    lang_String__Char c = lang_String____OP_IDX_String_SizeT__Char(this->str, this->i);
    this->i += 1;
    if (__genericReturn9) {
        memcpy(__genericReturn9, &(c), ((lang_types__Class*) lang_String__Char_class())->size);
    }
    return;
}

lang_types__Bool lang_String__StringIterator_hasPrev__quest_impl(lang_String__StringIterator* this) {
    return this->i > 0;
}

void lang_String__StringIterator_prev_impl(lang_String__StringIterator* this, uint8_t* __genericReturn10) {
    this->i -= 1;
    lang_String__Char __returnVal41 = lang_String____OP_IDX_String_SizeT__Char(this->str, this->i);
    if (__genericReturn10) {
        memcpy(__genericReturn10, &(__returnVal41), ((lang_types__Class*) lang_String__Char_class())->size);
    }
    return;
}

lang_types__Bool lang_String__StringIterator_remove_impl(lang_String__StringIterator* this) {
    return false;
}

void lang_String__StringIterator___defaults___impl(lang_String__StringIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->i = 0;
}

lang_types__Bool lang_String__StringIterator_hasNext__quest(lang_String__StringIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_String__StringIterator_next(lang_String__StringIterator* this, uint8_t* __genericReturn9) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn9);
}

lang_types__Bool lang_String__StringIterator_hasPrev__quest(lang_String__StringIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_String__StringIterator_prev(lang_String__StringIterator* this, uint8_t* __genericReturn10) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn10);
}

lang_types__Bool lang_String__StringIterator_remove(lang_String__StringIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void lang_String__StringIterator___defaults__(lang_String__StringIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_String__StringIterator* lang_String__StringIterator_new_withStr(lang_types__Class* T, lang_String__String str) {
    
    lang_String__StringIterator* this = ((lang_String__StringIterator*) (lang_types__Class_alloc__class((lang_types__Class*) lang_String__StringIterator_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    lang_String__StringIterator___defaults__(this);
    lang_String__StringIterator_init_withStr((lang_String__StringIterator*) this, str);
    return this;
}
void lang_String__StringIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

lang_String__StringIteratorClass *lang_String__StringIterator_class(){
    static lang_types__Bool __done__ = false;
    static lang_String__StringIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(lang_String__StringIterator),
                                .size = sizeof(void*),
                                .name = "StringIterator",
                            },
                            .__defaults__ = (void (*)(lang_types__Object*)) lang_String__StringIterator___defaults___impl,
                            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                            .__load__ = (void (*)()) lang_String__StringIterator___load__,
                        },
                    },
                    .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                    .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
                },
                .hasNext__quest = (lang_types__Bool (*)(lang_Iterators__Iterator*)) lang_String__StringIterator_hasNext__quest_impl,
                .next = (void (*)(lang_Iterators__Iterator*, uint8_t*)) lang_String__StringIterator_next_impl,
                .remove = (lang_types__Bool (*)(lang_Iterators__Iterator*)) lang_String__StringIterator_remove_impl,
            },
            .hasPrev__quest = (lang_types__Bool (*)(lang_Iterators__BackIterator*)) lang_String__StringIterator_hasPrev__quest_impl,
            .prev = (void (*)(lang_Iterators__BackIterator*, uint8_t*)) lang_String__StringIterator_prev_impl,
            .reversed = (lang_Iterators__ReverseIterator* (*)(lang_Iterators__BackIterator*)) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_withStr = lang_String__StringIterator_new_withStr,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
    }
    return &class;
}

void lang_String__Cell_init(lang_String__Cell* this, uint8_t* val) {
    memcpy(this->val, val, this->T->size);
}

void lang_String__Cell___defaults___impl(lang_String__Cell* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
    this->val = GC_MALLOC(this->T->size);
}

void lang_String__Cell___defaults__(lang_String__Cell* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_String__Cell* lang_String__Cell_new(lang_types__Class* T, uint8_t* val) {
    
    lang_String__Cell* this = ((lang_String__Cell*) (lang_types__Class_alloc__class((lang_types__Class*) lang_String__Cell_class())));
    this->T = T;
    lang_String__Cell___defaults__(this);
    lang_String__Cell_init((lang_String__Cell*) this, (uint8_t*) val);
    return this;
}
void lang_String__Cell___load__() {
    lang_types__Class___load__();
}

lang_String__CellClass *lang_String__Cell_class(){
    static lang_types__Bool __done__ = false;
    static lang_String__CellClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_String__Cell),
                    .size = sizeof(void*),
                    .name = "Cell",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_String__Cell___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_String__Cell___load__,
            },
        },
        .new = lang_String__Cell_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void lang_String_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Exception_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        text_Buffer_load();
        lang_String__Char___load__();
        lang_String__SChar___load__();
        lang_String__UChar___load__();
        lang_String__WChar___load__();
        lang_String__String___load__();
        lang_String__StringIterator___load__();
        lang_String__Cell___load__();
    }
}


lang_String__String lang_String____OP_AS_Char__String(lang_String__Char value) {
    return lang_String__Char_toString(value);
}

lang_types__Bool lang_String____OP_EQ_String_String__Bool(lang_String__String str1, lang_String__String str2) {
    return lang_String__String_equals__quest(str1, str2);
}

lang_types__Bool lang_String____OP_NE_String_String__Bool(lang_String__String str1, lang_String__String str2) {
    return !lang_String__String_equals__quest(str1, str2);
}

lang_String__Char lang_String____OP_IDX_String_SizeT__Char(lang_String__String string, lang_Numbers__SizeT index) {
    return lang_String__String_charAt(string, index);
}

void lang_String____OP_IDX_ASS_String_SizeT_Char(lang_String__String string, lang_Numbers__SizeT index, lang_String__Char value) {
    if (index < (lang_Numbers__SizeT) 0 || index > (lang_Numbers__SizeT) strlen(string)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_String__String_class()), lang_String__String_format("Writing to a String out of bounds index = %d, length = %d!", index, strlen(string))));
    }
    (((lang_String__Char*) (string)))[index] = value;
}

lang_String__String lang_String____OP_IDX_String_Range__String(lang_String__String string, lang_Numbers__Range range) {
    return lang_String__String_substring(string, range.min, range.max);
}

lang_String__String lang_String____OP_MUL_String_Int__String(lang_String__String str, lang_Numbers__Int count) {
    return lang_String__String_times(str, count);
}

lang_String__String lang_String____OP_ADD_String_String__String(lang_String__String left, lang_String__String right) {
    return lang_String__String_append(left, right);
}

lang_String__String lang_String____OP_ADD_LLong_String__String(lang_Numbers__LLong left, lang_String__String right) {
    return lang_String____OP_ADD_String_String__String(lang_Numbers__LLong_toString(left), right);
}

lang_String__String lang_String____OP_ADD_String_LLong__String(lang_String__String left, lang_Numbers__LLong right) {
    return lang_String____OP_ADD_String_String__String(left, lang_Numbers__LLong_toString(right));
}

lang_String__String lang_String____OP_ADD_Int_String__String(lang_Numbers__Int left, lang_String__String right) {
    return lang_String____OP_ADD_String_String__String(lang_Numbers__LLong_toString((lang_Numbers__LLong) left), right);
}

lang_String__String lang_String____OP_ADD_String_Int__String(lang_String__String left, lang_Numbers__Int right) {
    return lang_String____OP_ADD_String_String__String(left, lang_Numbers__LLong_toString((lang_Numbers__LLong) right));
}

lang_String__String lang_String____OP_ADD_Bool_String__String(lang_types__Bool left, lang_String__String right) {
    return lang_String____OP_ADD_String_String__String(lang_types__Bool_toString(left), right);
}

lang_String__String lang_String____OP_ADD_String_Bool__String(lang_String__String left, lang_types__Bool right) {
    return lang_String____OP_ADD_String_String__String(left, lang_types__Bool_toString(right));
}

lang_String__String lang_String____OP_ADD_Double_String__String(lang_Numbers__Double left, lang_String__String right) {
    return lang_String____OP_ADD_String_String__String(lang_Numbers__LDouble_toString((lang_Numbers__LDouble) left), right);
}

lang_String__String lang_String____OP_ADD_String_Double__String(lang_String__String left, lang_Numbers__Double right) {
    return lang_String____OP_ADD_String_String__String(left, lang_Numbers__LDouble_toString((lang_Numbers__LDouble) right));
}

lang_String__String lang_String____OP_ADD_String_Char__String(lang_String__String left, lang_String__Char right) {
    return lang_String__String_append_char(left, right);
}

lang_String__String lang_String____OP_ADD_Char_String__String(lang_String__Char left, lang_String__String right) {
    return lang_String__String_prepend_char(right, left);
}
