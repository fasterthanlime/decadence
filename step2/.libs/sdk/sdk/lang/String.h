/* lang/String header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_String___
#define ___lang_String___

#include <sdk/lang/String-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _lang_String__StringIterator {
    struct _lang_Iterators__BackIterator __super__;
    lang_Numbers__Int i;
    lang_String__String str;
};


struct _lang_String__Cell {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
    uint8_t* val;
};


struct _lang_String__CharClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Bool (*alphaNumeric__quest)(lang_String__Char);
    lang_types__Bool (*alpha__quest)(lang_String__Char);
    lang_types__Bool (*lower__quest)(lang_String__Char);
    lang_types__Bool (*upper__quest)(lang_String__Char);
    lang_types__Bool (*digit__quest)(lang_String__Char);
    lang_types__Bool (*hexDigit__quest)(lang_String__Char);
    lang_types__Bool (*control__quest)(lang_String__Char);
    lang_types__Bool (*graph__quest)(lang_String__Char);
    lang_types__Bool (*printable__quest)(lang_String__Char);
    lang_types__Bool (*punctuation__quest)(lang_String__Char);
    lang_types__Bool (*whitespace__quest)(lang_String__Char);
    lang_types__Bool (*blank__quest)(lang_String__Char);
    lang_Numbers__Int (*toInt)(lang_String__Char);
    lang_String__String (*toString)(lang_String__Char);
    void (*print)(lang_String__Char);
    void (*println)(lang_String__Char);
};


struct _lang_String__SCharClass {
    struct _lang_String__CharClass __super__;
};


struct _lang_String__UCharClass {
    struct _lang_String__CharClass __super__;
};


struct _lang_String__WCharClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_String__StringClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String (*new_withLength)(lang_Numbers__Int);
    lang_String__String (*new_withChar)(lang_String__Char);
    lang_types__Bool (*compare)(lang_String__String, lang_String__String, lang_Numbers__Int, lang_Numbers__Int);
    lang_types__Bool (*compare_implicitLength)(lang_String__String, lang_String__String, lang_Numbers__Int);
    lang_types__Bool (*compare_whole)(lang_String__String, lang_String__String);
    lang_types__Bool (*equals__quest)(lang_String__String, lang_String__String);
    lang_Numbers__Int (*toInt)(lang_String__String);
    lang_Numbers__Int (*toInt_withBase)(lang_String__String, lang_Numbers__Int);
    lang_Numbers__Long (*toLong)(lang_String__String);
    lang_Numbers__Long (*toLong_withBase)(lang_String__String, lang_Numbers__Long);
    lang_Numbers__LLong (*toLLong)(lang_String__String);
    lang_Numbers__LLong (*toLLong_withBase)(lang_String__String, lang_Numbers__LLong);
    lang_Numbers__ULong (*toULong)(lang_String__String);
    lang_Numbers__ULong (*toULong_withBase)(lang_String__String, lang_Numbers__ULong);
    lang_Numbers__Float (*toFloat)(lang_String__String);
    lang_Numbers__Double (*toDouble)(lang_String__String);
    lang_Numbers__LDouble (*toLDouble)(lang_String__String);
    lang_types__Bool (*empty__quest)(lang_String__String);
    lang_types__Bool (*startsWith__quest)(lang_String__String, lang_String__String);
    lang_types__Bool (*startsWith__quest_withChar)(lang_String__String, lang_String__Char);
    lang_types__Bool (*endsWith__quest)(lang_String__String, lang_String__String);
    lang_Numbers__Int (*indexOf_charZero)(lang_String__String, lang_String__Char);
    lang_Numbers__Int (*indexOf_char)(lang_String__String, lang_String__Char, lang_Numbers__Int);
    lang_Numbers__Int (*indexOf_stringZero)(lang_String__String, lang_String__String);
    lang_Numbers__Int (*indexOf_string)(lang_String__String, lang_String__String, lang_Numbers__Int);
    lang_types__Bool (*contains__quest_char)(lang_String__String, lang_String__Char);
    lang_types__Bool (*contains__quest_string)(lang_String__String, lang_String__String);
    lang_String__String (*trim_whitespace)(lang_String__String);
    lang_String__String (*trim)(lang_String__String, lang_String__Char);
    lang_String__String (*trim_string)(lang_String__String, lang_String__String);
    lang_String__String (*trimLeft_space)(lang_String__String);
    lang_String__String (*trimLeft)(lang_String__String, lang_String__Char);
    lang_String__String (*trimLeft_string)(lang_String__String, lang_String__String);
    lang_String__String (*trimRight_space)(lang_String__String);
    lang_String__String (*trimRight)(lang_String__String, lang_String__Char);
    lang_String__String (*trimRight_string)(lang_String__String, lang_String__String);
    lang_String__Char (*first)(lang_String__String);
    lang_Numbers__Int (*lastIndex)(lang_String__String);
    lang_String__Char (*last)(lang_String__String);
    lang_Numbers__Int (*lastIndexOf)(lang_String__String, lang_String__Char);
    lang_String__String (*substring_tillEnd)(lang_String__String, lang_Numbers__Int);
    lang_String__String (*substring)(lang_String__String, lang_Numbers__Int, lang_Numbers__Int);
    lang_String__String (*reverse)(lang_String__String);
    void (*print)(lang_String__String);
    void (*println)(lang_String__String);
    lang_String__String (*times)(lang_String__String, lang_Numbers__Int);
    lang_String__String (*clone)(lang_String__String);
    lang_String__String (*append)(lang_String__String, lang_String__String);
    lang_String__String (*append_char)(lang_String__String, lang_String__Char);
    lang_Numbers__Int (*count_char)(lang_String__String, lang_String__Char);
    lang_Numbers__Int (*count_string)(lang_String__String, lang_String__String);
    lang_String__String (*replace)(lang_String__String, lang_String__Char, lang_String__Char);
    lang_String__String (*replace_string)(lang_String__String, lang_String__String, lang_String__String);
    lang_String__String (*prepend)(lang_String__String, lang_String__String);
    lang_String__String (*prepend_char)(lang_String__String, lang_String__Char);
    lang_String__String (*toLower)(lang_String__String);
    lang_String__String (*toUpper)(lang_String__String);
    lang_String__Char (*charAt)(lang_String__String, lang_Numbers__SizeT);
    lang_String__String (*format)(lang_String__String, ...);
    void (*printf)(lang_String__String, ...);
    void (*vprintf)(lang_String__String, lang_System__VaList);
    void (*printfln)(lang_String__String, ...);
    lang_Numbers__Int (*scanf)(lang_String__String, lang_String__String, ...);
    lang_String__StringIterator* (*iterator)(lang_String__String);
    lang_String__StringIterator* (*forward)(lang_String__String);
    lang_Iterators__BackIterator* (*backward)(lang_String__String);
    lang_String__StringIterator* (*backIterator)(lang_String__String);
};


struct _lang_String__StringIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    lang_String__StringIterator* (*new_withStr)(lang_types__Class*, lang_String__String);
    void (*init_withStr)(lang_String__StringIterator*, lang_String__String);
    lang_types__Bool (*hasNext__quest)(lang_String__StringIterator*);
    void (*next)(lang_String__StringIterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_String__StringIterator*);
};


struct _lang_String__CellClass {
    struct _lang_types__ClassClass __super__;
    lang_String__Cell* (*new)(lang_types__Class*, uint8_t*);
    void (*init)(lang_String__Cell*, uint8_t*);
};


#ifdef OOC_FROM_C
#define Char lang_String__Char
#define Char_class() lang_String__Char_class()
#define CharClass lang_String__CharClass
#define CharClass_class() lang_String__CharClass_class()
#define Char_alphaNumeric__quest(_this_) lang_String__Char_alphaNumeric__quest((void*) (_this_))
#define Char_alpha__quest(_this_) lang_String__Char_alpha__quest((void*) (_this_))
#define Char_lower__quest(_this_) lang_String__Char_lower__quest((void*) (_this_))
#define Char_upper__quest(_this_) lang_String__Char_upper__quest((void*) (_this_))
#define Char_digit__quest(_this_) lang_String__Char_digit__quest((void*) (_this_))
#define Char_hexDigit__quest(_this_) lang_String__Char_hexDigit__quest((void*) (_this_))
#define Char_control__quest(_this_) lang_String__Char_control__quest((void*) (_this_))
#define Char_graph__quest(_this_) lang_String__Char_graph__quest((void*) (_this_))
#define Char_printable__quest(_this_) lang_String__Char_printable__quest((void*) (_this_))
#define Char_punctuation__quest(_this_) lang_String__Char_punctuation__quest((void*) (_this_))
#define Char_whitespace__quest(_this_) lang_String__Char_whitespace__quest((void*) (_this_))
#define Char_blank__quest(_this_) lang_String__Char_blank__quest((void*) (_this_))
#define Char_toInt(_this_) lang_String__Char_toInt((void*) (_this_))
#define Char_toLower(_this_) tolower((void*) (_this_))
#define Char_toUpper(_this_) toupper((void*) (_this_))
#define Char_toString(_this_) lang_String__Char_toString((void*) (_this_))
#define Char_print(_this_) lang_String__Char_print((void*) (_this_))
#define Char_println(_this_) lang_String__Char_println((void*) (_this_))
#define Char___load__() lang_String__Char___load__()
#define SChar lang_String__SChar
#define SChar_class() lang_String__SChar_class()
#define SCharClass lang_String__SCharClass
#define SCharClass_class() lang_String__SCharClass_class()
#define SChar___load__() lang_String__SChar___load__()
#define UChar lang_String__UChar
#define UChar_class() lang_String__UChar_class()
#define UCharClass lang_String__UCharClass
#define UCharClass_class() lang_String__UCharClass_class()
#define UChar___load__() lang_String__UChar___load__()
#define WChar lang_String__WChar
#define WChar_class() lang_String__WChar_class()
#define WCharClass lang_String__WCharClass
#define WCharClass_class() lang_String__WCharClass_class()
#define WChar___load__() lang_String__WChar___load__()
#define String lang_String__String
#define String_class() lang_String__String_class()
#define StringClass lang_String__StringClass
#define StringClass_class() lang_String__StringClass_class()
#define String_new_withLength(length) lang_String__String_new_withLength((length))
#define String_new_withChar(c) lang_String__String_new_withChar((c))
#define String_compare(_this_, other, start, length) lang_String__String_compare((void*) (_this_), (other), (start), (length))
#define String_compare_implicitLength(_this_, other, start) lang_String__String_compare_implicitLength((void*) (_this_), (other), (start))
#define String_compare_whole(_this_, other) lang_String__String_compare_whole((void*) (_this_), (other))
#define String_length(_this_) strlen((void*) (_this_))
#define String_equals__quest(_this_, other) lang_String__String_equals__quest((void*) (_this_), (other))
#define String_toInt(_this_) lang_String__String_toInt((void*) (_this_))
#define String_toInt_withBase(_this_, base) lang_String__String_toInt_withBase((void*) (_this_), (base))
#define String_toLong(_this_) lang_String__String_toLong((void*) (_this_))
#define String_toLong_withBase(_this_, base) lang_String__String_toLong_withBase((void*) (_this_), (base))
#define String_toLLong(_this_) lang_String__String_toLLong((void*) (_this_))
#define String_toLLong_withBase(_this_, base) lang_String__String_toLLong_withBase((void*) (_this_), (base))
#define String_toULong(_this_) lang_String__String_toULong((void*) (_this_))
#define String_toULong_withBase(_this_, base) lang_String__String_toULong_withBase((void*) (_this_), (base))
#define String_toFloat(_this_) lang_String__String_toFloat((void*) (_this_))
#define String_toDouble(_this_) lang_String__String_toDouble((void*) (_this_))
#define String_toLDouble(_this_) lang_String__String_toLDouble((void*) (_this_))
#define String_empty__quest(_this_) lang_String__String_empty__quest((void*) (_this_))
#define String_startsWith__quest(_this_, s) lang_String__String_startsWith__quest((void*) (_this_), (s))
#define String_startsWith__quest_withChar(_this_, c) lang_String__String_startsWith__quest_withChar((void*) (_this_), (c))
#define String_endsWith__quest(_this_, s) lang_String__String_endsWith__quest((void*) (_this_), (s))
#define String_indexOf_charZero(_this_, c) lang_String__String_indexOf_charZero((void*) (_this_), (c))
#define String_indexOf_char(_this_, c, start) lang_String__String_indexOf_char((void*) (_this_), (c), (start))
#define String_indexOf_stringZero(_this_, s) lang_String__String_indexOf_stringZero((void*) (_this_), (s))
#define String_indexOf_string(_this_, s, start) lang_String__String_indexOf_string((void*) (_this_), (s), (start))
#define String_contains__quest_char(_this_, c) lang_String__String_contains__quest_char((void*) (_this_), (c))
#define String_contains__quest_string(_this_, s) lang_String__String_contains__quest_string((void*) (_this_), (s))
#define String_trim_whitespace(_this_) lang_String__String_trim_whitespace((void*) (_this_))
#define String_trim(_this_, c) lang_String__String_trim((void*) (_this_), (c))
#define String_trim_string(_this_, s) lang_String__String_trim_string((void*) (_this_), (s))
#define String_trimLeft_space(_this_) lang_String__String_trimLeft_space((void*) (_this_))
#define String_trimLeft(_this_, c) lang_String__String_trimLeft((void*) (_this_), (c))
#define String_trimLeft_string(_this_, s) lang_String__String_trimLeft_string((void*) (_this_), (s))
#define String_trimRight_space(_this_) lang_String__String_trimRight_space((void*) (_this_))
#define String_trimRight(_this_, c) lang_String__String_trimRight((void*) (_this_), (c))
#define String_trimRight_string(_this_, s) lang_String__String_trimRight_string((void*) (_this_), (s))
#define String_first(_this_) lang_String__String_first((void*) (_this_))
#define String_lastIndex(_this_) lang_String__String_lastIndex((void*) (_this_))
#define String_last(_this_) lang_String__String_last((void*) (_this_))
#define String_lastIndexOf(_this_, c) lang_String__String_lastIndexOf((void*) (_this_), (c))
#define String_substring_tillEnd(_this_, start) lang_String__String_substring_tillEnd((void*) (_this_), (start))
#define String_substring(_this_, start, end) lang_String__String_substring((void*) (_this_), (start), (end))
#define String_reverse(_this_) lang_String__String_reverse((void*) (_this_))
#define String_print(_this_) lang_String__String_print((void*) (_this_))
#define String_println(_this_) lang_String__String_println((void*) (_this_))
#define String_times(_this_, count) lang_String__String_times((void*) (_this_), (count))
#define String_clone(_this_) lang_String__String_clone((void*) (_this_))
#define String_append(_this_, other) lang_String__String_append((void*) (_this_), (other))
#define String_append_char(_this_, other) lang_String__String_append_char((void*) (_this_), (other))
#define String_count_char(_this_, what) lang_String__String_count_char((void*) (_this_), (what))
#define String_count_string(_this_, what) lang_String__String_count_string((void*) (_this_), (what))
#define String_replace(_this_, oldie, kiddo) lang_String__String_replace((void*) (_this_), (oldie), (kiddo))
#define String_replace_string(_this_, oldie, kiddo) lang_String__String_replace_string((void*) (_this_), (oldie), (kiddo))
#define String_prepend(_this_, other) lang_String__String_prepend((void*) (_this_), (other))
#define String_prepend_char(_this_, other) lang_String__String_prepend_char((void*) (_this_), (other))
#define String_toLower(_this_) lang_String__String_toLower((void*) (_this_))
#define String_toUpper(_this_) lang_String__String_toUpper((void*) (_this_))
#define String_charAt(_this_, index) lang_String__String_charAt((void*) (_this_), (index))
#define String_format(_this_, ...) lang_String__String_format((void*) (_this_), __VA_ARGS__)
#define String_printf(_this_, ...) lang_String__String_printf((void*) (_this_), __VA_ARGS__)
#define String_vprintf(_this_, list) lang_String__String_vprintf((void*) (_this_), (list))
#define String_printfln(_this_, ...) lang_String__String_printfln((void*) (_this_), __VA_ARGS__)
#define String_scanf(_this_, format, ...) lang_String__String_scanf((void*) (_this_), (format), __VA_ARGS__)
#define String_iterator(_this_) (void*) lang_String__String_iterator((void*) (_this_))
#define String_forward(_this_) (void*) lang_String__String_forward((void*) (_this_))
#define String_backward(_this_) (void*) lang_String__String_backward((void*) (_this_))
#define String_backIterator(_this_) (void*) lang_String__String_backIterator((void*) (_this_))
#define String___load__() lang_String__String___load__()
#define StringIterator lang_String__StringIterator
#define StringIterator_class() lang_String__StringIterator_class()
#define StringIteratorClass lang_String__StringIteratorClass
#define StringIteratorClass_class() lang_String__StringIteratorClass_class()
#define StringIterator_new_withStr(T, str) (void*) lang_String__StringIterator_new_withStr((T), (str))
#define StringIterator_init_withStr(_this_, str) lang_String__StringIterator_init_withStr((void*) (_this_), (str))
#define StringIterator_hasNext__quest(_this_) lang_String__StringIterator_hasNext__quest((void*) (_this_))
#define StringIterator_next(_this_, __genericReturn9) lang_String__StringIterator_next((void*) (_this_), (__genericReturn9))
#define StringIterator_hasPrev__quest(_this_) lang_String__StringIterator_hasPrev__quest((void*) (_this_))
#define StringIterator_prev(_this_, __genericReturn10) lang_String__StringIterator_prev((void*) (_this_), (__genericReturn10))
#define StringIterator_remove(_this_) lang_String__StringIterator_remove((void*) (_this_))
#define StringIterator___defaults__(_this_) lang_String__StringIterator___defaults__((void*) (_this_))
#define StringIterator___load__() lang_String__StringIterator___load__()
#define Cell lang_String__Cell
#define Cell_class() lang_String__Cell_class()
#define CellClass lang_String__CellClass
#define CellClass_class() lang_String__CellClass_class()
#define Cell_new(T, val) (void*) lang_String__Cell_new((T), (val))
#define Cell_init(_this_, val) lang_String__Cell_init((void*) (_this_), (val))
#define Cell___defaults__(_this_) lang_String__Cell___defaults__((void*) (_this_))
#define Cell___load__() lang_String__Cell___load__()
#endif

#endif // ___lang_String___
