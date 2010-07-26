/* lang/IO header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_IO___
#define ___lang_IO___

#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/types.h>

struct _lang_IO__FILEClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_IO__FStreamClass {
    struct _lang_types__ClassClass __super__;
    lang_IO__FStream (*open)(lang_String__String, lang_String__String);
    lang_Numbers__Int (*close)(lang_IO__FStream);
    lang_Numbers__Int (*error)(lang_IO__FStream);
    lang_types__Bool (*eof__quest)(lang_IO__FStream);
    lang_Numbers__Int (*seek)(lang_IO__FStream, lang_Numbers__Long, lang_Numbers__Int);
    lang_Numbers__Long (*tell)(lang_IO__FStream);
    void (*flush)(lang_IO__FStream);
    lang_Numbers__SizeT (*read)(lang_IO__FStream, lang_types__Pointer, lang_Numbers__SizeT);
    lang_String__Char (*readChar)(lang_IO__FStream);
    lang_String__String (*readLine_defaults)(lang_IO__FStream);
    lang_String__String (*readLine)(lang_IO__FStream, lang_Numbers__Int);
    lang_Numbers__SizeT (*size)(lang_IO__FStream);
    lang_types__Bool (*hasNext__quest)(lang_IO__FStream);
    void (*write_chr)(lang_IO__FStream, lang_String__Char);
    lang_Numbers__SizeT (*write)(lang_IO__FStream, lang_String__String, lang_Numbers__SizeT);
    lang_Numbers__SizeT (*write_precise)(lang_IO__FStream, lang_String__Char*, lang_Numbers__SizeT, lang_Numbers__SizeT);
};


#ifdef OOC_FROM_C
#define println_withStr(str) lang_IO__println_withStr((void*) (str))
#define println() lang_IO__println()
#define FILEClass lang_IO__FILEClass
#define FILEClass_class() lang_IO__FILEClass_class()
#define FILE___load__() FILE___load__()
#define FStream lang_IO__FStream
#define FStream_class() lang_IO__FStream_class()
#define FStreamClass lang_IO__FStreamClass
#define FStreamClass_class() lang_IO__FStreamClass_class()
#define FStream_open(filename, mode) lang_IO__FStream_open((filename), (mode))
#define FStream_close(_this_) lang_IO__FStream_close((void*) (_this_))
#define FStream_error(_this_) lang_IO__FStream_error((void*) (_this_))
#define FStream_eof__quest(_this_) lang_IO__FStream_eof__quest((void*) (_this_))
#define FStream_seek(_this_, offset, origin) lang_IO__FStream_seek((void*) (_this_), (offset), (origin))
#define FStream_tell(_this_) lang_IO__FStream_tell((void*) (_this_))
#define FStream_flush(_this_) lang_IO__FStream_flush((void*) (_this_))
#define FStream_read(_this_, dest, bytesToRead) lang_IO__FStream_read((void*) (_this_), (void*) (dest), (bytesToRead))
#define FStream_readChar(_this_) lang_IO__FStream_readChar((void*) (_this_))
#define FStream_readLine_defaults(_this_) lang_IO__FStream_readLine_defaults((void*) (_this_))
#define FStream_readLine(_this_, chunk) lang_IO__FStream_readLine((void*) (_this_), (chunk))
#define FStream_size(_this_) lang_IO__FStream_size((void*) (_this_))
#define FStream_hasNext__quest(_this_) lang_IO__FStream_hasNext__quest((void*) (_this_))
#define FStream_write_chr(_this_, chr) lang_IO__FStream_write_chr((void*) (_this_), (chr))
#define FStream_write(_this_, str, length) lang_IO__FStream_write((void*) (_this_), (str), (length))
#define FStream_write_precise(_this_, str, offset, length) lang_IO__FStream_write_precise((void*) (_this_), (void*) (str), (offset), (length))
#define FStream___load__() lang_IO__FStream___load__()
#endif

#endif // ___lang_IO___
