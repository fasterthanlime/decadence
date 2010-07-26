/* io/Writer header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_Writer___
#define ___io_Writer___

#include <sdk/io/Writer-fwd.h>
#include <sdk/lang/types.h>

struct _io_Writer__Writer {
    struct _lang_types__Object __super__;
};


struct _io_Writer__WriterClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(io_Writer__Writer*);
    void (*write_chr)(io_Writer__Writer*, lang_String__Char);
    lang_Numbers__SizeT (*write)(io_Writer__Writer*, lang_String__Char*, lang_Numbers__SizeT);
    lang_Numbers__SizeT (*write_implicitLength)(io_Writer__Writer*, lang_String__String);
    void (*writef)(io_Writer__Writer*, lang_String__String, ...);
    void (*vwritef)(io_Writer__Writer*, lang_String__String, lang_System__VaList);
    lang_Numbers__SizeT (*write_fromReader)(io_Writer__Writer*, io_Reader__Reader*, lang_Numbers__SizeT);
    void (*write_fromReaderDefaultBufferSize)(io_Writer__Writer*, io_Reader__Reader*);
    void (*close)(io_Writer__Writer*);
};


#ifdef OOC_FROM_C
#define Writer io_Writer__Writer
#define Writer_class() io_Writer__Writer_class()
#define WriterClass io_Writer__WriterClass
#define WriterClass_class() io_Writer__WriterClass_class()
#define Writer_init(_this_) io_Writer__Writer_init((void*) (_this_))
#define Writer_write_chr(_this_, chr) io_Writer__Writer_write_chr((void*) (_this_), (chr))
#define Writer_write(_this_, bytes, length) io_Writer__Writer_write((void*) (_this_), (void*) (bytes), (length))
#define Writer_write_implicitLength(_this_, str) io_Writer__Writer_write_implicitLength((void*) (_this_), (str))
#define Writer_writef(_this_, fmt, ...) io_Writer__Writer_writef((void*) (_this_), (fmt), __VA_ARGS__)
#define Writer_vwritef(_this_, fmt, args) io_Writer__Writer_vwritef((void*) (_this_), (fmt), (args))
#define Writer_write_fromReader(_this_, source, bufferSize) io_Writer__Writer_write_fromReader((void*) (_this_), (void*) (source), (bufferSize))
#define Writer_write_fromReaderDefaultBufferSize(_this_, source) io_Writer__Writer_write_fromReaderDefaultBufferSize((void*) (_this_), (void*) (source))
#define Writer_close(_this_) io_Writer__Writer_close((void*) (_this_))
#define Writer___defaults__(_this_) io_Writer__Writer___defaults__((void*) (_this_))
#define Writer___load__() io_Writer__Writer___load__()
#endif

#endif // ___io_Writer___
