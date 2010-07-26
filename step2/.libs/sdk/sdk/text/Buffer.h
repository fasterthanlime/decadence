/* text/Buffer header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___text_Buffer___
#define ___text_Buffer___

#include <sdk/text/Buffer-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/Writer.h>
#include <sdk/io/Reader.h>

struct _text_Buffer__Buffer {
    struct _lang_types__Object __super__;
    lang_Numbers__SizeT size;
    lang_Numbers__SizeT capacity;
    lang_String__Char* data;
};


struct _text_Buffer__BufferWriter {
    struct _io_Writer__Writer __super__;
    text_Buffer__Buffer* buffer;
};


struct _text_Buffer__BufferReader {
    struct _io_Reader__Reader __super__;
    text_Buffer__Buffer* buffer;
};


struct _text_Buffer__BufferClass {
    struct _lang_types__ClassClass __super__;
    text_Buffer__Buffer* (*new)();
    void (*init)(text_Buffer__Buffer*);
    text_Buffer__Buffer* (*new_withCapa)(lang_Numbers__SizeT);
    void (*init_withCapa)(text_Buffer__Buffer*, lang_Numbers__SizeT);
    text_Buffer__Buffer* (*new_str)(lang_String__String);
    void (*init_str)(text_Buffer__Buffer*, lang_String__String);
    text_Buffer__Buffer* (*new_strWithLength)(lang_String__String, lang_Numbers__SizeT);
    void (*init_strWithLength)(text_Buffer__Buffer*, lang_String__String, lang_Numbers__SizeT);
    text_Buffer__Buffer* (*clone)(text_Buffer__Buffer*);
    void (*append_str)(text_Buffer__Buffer*, lang_String__String);
    void (*append_strWithLength)(text_Buffer__Buffer*, lang_String__String, lang_Numbers__SizeT);
    void (*append_chr)(text_Buffer__Buffer*, lang_String__Char);
    lang_Numbers__Int (*get_strWithLengthOffset)(text_Buffer__Buffer*, lang_String__Char*, lang_Numbers__SizeT, lang_Numbers__SizeT);
    lang_String__Char (*get_chr)(text_Buffer__Buffer*, lang_Numbers__Int);
    void (*checkLength)(text_Buffer__Buffer*, lang_Numbers__SizeT);
    lang_String__String (*toString)(text_Buffer__Buffer*);
};


struct _text_Buffer__BufferWriterClass {
    struct _io_Writer__WriterClass __super__;
    text_Buffer__BufferWriter* (*new)();
    text_Buffer__BufferWriter* (*new_withBuffer)(text_Buffer__Buffer*);
    void (*init_withBuffer)(text_Buffer__BufferWriter*, text_Buffer__Buffer*);
    text_Buffer__Buffer* (*buffer)(text_Buffer__BufferWriter*);
};


struct _text_Buffer__BufferReaderClass {
    struct _io_Reader__ReaderClass __super__;
    text_Buffer__BufferReader* (*new)();
    text_Buffer__BufferReader* (*new_withBuffer)(text_Buffer__Buffer*);
    void (*init_withBuffer)(text_Buffer__BufferReader*, text_Buffer__Buffer*);
    text_Buffer__Buffer* (*buffer)(text_Buffer__BufferReader*);
};


#ifdef OOC_FROM_C
#define Buffer text_Buffer__Buffer
#define Buffer_class() text_Buffer__Buffer_class()
#define BufferClass text_Buffer__BufferClass
#define BufferClass_class() text_Buffer__BufferClass_class()
#define Buffer_new() (void*) text_Buffer__Buffer_new()
#define Buffer_init(_this_) text_Buffer__Buffer_init((void*) (_this_))
#define Buffer_new_withCapa(capacity) (void*) text_Buffer__Buffer_new_withCapa((capacity))
#define Buffer_init_withCapa(_this_, capacity) text_Buffer__Buffer_init_withCapa((void*) (_this_), (capacity))
#define Buffer_new_str(str) (void*) text_Buffer__Buffer_new_str((str))
#define Buffer_init_str(_this_, str) text_Buffer__Buffer_init_str((void*) (_this_), (str))
#define Buffer_new_strWithLength(str, length) (void*) text_Buffer__Buffer_new_strWithLength((str), (length))
#define Buffer_init_strWithLength(_this_, str, length) text_Buffer__Buffer_init_strWithLength((void*) (_this_), (str), (length))
#define Buffer_clone(_this_) (void*) text_Buffer__Buffer_clone((void*) (_this_))
#define Buffer_append_str(_this_, str) text_Buffer__Buffer_append_str((void*) (_this_), (str))
#define Buffer_append_strWithLength(_this_, str, length) text_Buffer__Buffer_append_strWithLength((void*) (_this_), (str), (length))
#define Buffer_append_chr(_this_, chr) text_Buffer__Buffer_append_chr((void*) (_this_), (chr))
#define Buffer_get_strWithLengthOffset(_this_, str, offset, length) text_Buffer__Buffer_get_strWithLengthOffset((void*) (_this_), (void*) (str), (offset), (length))
#define Buffer_get_chr(_this_, offset) text_Buffer__Buffer_get_chr((void*) (_this_), (offset))
#define Buffer_checkLength(_this_, min) text_Buffer__Buffer_checkLength((void*) (_this_), (min))
#define Buffer_toString(_this_) text_Buffer__Buffer_toString((void*) (_this_))
#define Buffer___defaults__(_this_) text_Buffer__Buffer___defaults__((void*) (_this_))
#define Buffer___load__() text_Buffer__Buffer___load__()
#define BufferWriter text_Buffer__BufferWriter
#define BufferWriter_class() text_Buffer__BufferWriter_class()
#define BufferWriterClass text_Buffer__BufferWriterClass
#define BufferWriterClass_class() text_Buffer__BufferWriterClass_class()
#define BufferWriter_new() (void*) text_Buffer__BufferWriter_new()
#define BufferWriter_init(_this_) text_Buffer__BufferWriter_init((void*) (_this_))
#define BufferWriter_new_withBuffer(buffer) (void*) text_Buffer__BufferWriter_new_withBuffer((void*) (buffer))
#define BufferWriter_init_withBuffer(_this_, buffer) text_Buffer__BufferWriter_init_withBuffer((void*) (_this_), (void*) (buffer))
#define BufferWriter_buffer(_this_) (void*) text_Buffer__BufferWriter_buffer((void*) (_this_))
#define BufferWriter_close(_this_) text_Buffer__BufferWriter_close((void*) (_this_))
#define BufferWriter_write_chr(_this_, chr) text_Buffer__BufferWriter_write_chr((void*) (_this_), (chr))
#define BufferWriter_write(_this_, chars, length) text_Buffer__BufferWriter_write((void*) (_this_), (chars), (length))
#define BufferWriter_vwritef(_this_, fmt, list) text_Buffer__BufferWriter_vwritef((void*) (_this_), (fmt), (list))
#define BufferWriter___defaults__(_this_) text_Buffer__BufferWriter___defaults__((void*) (_this_))
#define BufferWriter___load__() text_Buffer__BufferWriter___load__()
#define BufferReader text_Buffer__BufferReader
#define BufferReader_class() text_Buffer__BufferReader_class()
#define BufferReaderClass text_Buffer__BufferReaderClass
#define BufferReaderClass_class() text_Buffer__BufferReaderClass_class()
#define BufferReader_new() (void*) text_Buffer__BufferReader_new()
#define BufferReader_init(_this_) text_Buffer__BufferReader_init((void*) (_this_))
#define BufferReader_new_withBuffer(buffer) (void*) text_Buffer__BufferReader_new_withBuffer((void*) (buffer))
#define BufferReader_init_withBuffer(_this_, buffer) text_Buffer__BufferReader_init_withBuffer((void*) (_this_), (void*) (buffer))
#define BufferReader_buffer(_this_) (void*) text_Buffer__BufferReader_buffer((void*) (_this_))
#define BufferReader_close(_this_) text_Buffer__BufferReader_close((void*) (_this_))
#define BufferReader_read(_this_, chars, offset, count) text_Buffer__BufferReader_read((void*) (_this_), (chars), (offset), (count))
#define BufferReader_read_char(_this_) text_Buffer__BufferReader_read_char((void*) (_this_))
#define BufferReader_hasNext__quest(_this_) text_Buffer__BufferReader_hasNext__quest((void*) (_this_))
#define BufferReader_rewind(_this_, offset) text_Buffer__BufferReader_rewind((void*) (_this_), (offset))
#define BufferReader_mark(_this_) text_Buffer__BufferReader_mark((void*) (_this_))
#define BufferReader_reset(_this_, marker) text_Buffer__BufferReader_reset((void*) (_this_), (marker))
#define BufferReader___defaults__(_this_) text_Buffer__BufferReader___defaults__((void*) (_this_))
#define BufferReader___load__() text_Buffer__BufferReader___load__()
#endif

#endif // ___text_Buffer___
