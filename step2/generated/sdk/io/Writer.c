/* io/Writer source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/Writer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/io/Reader.h>


void io_Writer__Writer_init(io_Writer__Writer* this) {
}

lang_Numbers__SizeT io_Writer__Writer_write_implicitLength_impl(io_Writer__Writer* this, lang_String__String str) {
    return io_Writer__Writer_write(this, str, strlen(str));
}

void io_Writer__Writer_writef(io_Writer__Writer* this, lang_String__String fmt, ...) {
    lang_System__VaList ap;
    va_start(ap, fmt);
    io_Writer__Writer_vwritef(this, fmt, ap);
    va_end(ap);
}

lang_Numbers__SizeT io_Writer__Writer_write_fromReader_impl(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize) {
    lang_String__String buffer = lang_String__String_new_withLength(bufferSize);
    lang_Numbers__Int cursor;
    lang_Numbers__Int bytesRead;
    lang_Numbers__Int bytesTransfered;
    cursor = 0;
    bytesTransfered = 0;
    while (io_Reader__Reader_hasNext__quest(source)) {
        bytesRead = io_Reader__Reader_read(source, buffer, cursor, bufferSize);
        bytesTransfered += io_Writer__Writer_write(this, buffer, bytesRead);
    }
    return ((lang_Numbers__SizeT) (bytesTransfered));
}

void io_Writer__Writer_write_fromReaderDefaultBufferSize_impl(io_Writer__Writer* this, io_Reader__Reader* source) {
    io_Writer__Writer_write_fromReader(this, source, 8192);
}

void io_Writer__Writer___defaults___impl(io_Writer__Writer* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void io_Writer__Writer_write_chr(io_Writer__Writer* this, lang_String__Char chr) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_chr((io_Writer__Writer*)this, chr);
}

lang_Numbers__SizeT io_Writer__Writer_write(io_Writer__Writer* this, lang_String__Char* bytes, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write((io_Writer__Writer*)this, bytes, length);
}

lang_Numbers__SizeT io_Writer__Writer_write_implicitLength(io_Writer__Writer* this, lang_String__String str) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_implicitLength((io_Writer__Writer*)this, str);
}

void io_Writer__Writer_vwritef(io_Writer__Writer* this, lang_String__String fmt, lang_System__VaList args) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->vwritef((io_Writer__Writer*)this, fmt, args);
}

lang_Numbers__SizeT io_Writer__Writer_write_fromReader(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_fromReader((io_Writer__Writer*)this, source, bufferSize);
}

void io_Writer__Writer_write_fromReaderDefaultBufferSize(io_Writer__Writer* this, io_Reader__Reader* source) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_fromReaderDefaultBufferSize((io_Writer__Writer*)this, source);
}

void io_Writer__Writer_close(io_Writer__Writer* this) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->close((io_Writer__Writer*)this);
}

void io_Writer__Writer___defaults__(io_Writer__Writer* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void io_Writer__Writer___load__() {
    lang_types__Class___load__();
}

io_Writer__WriterClass *io_Writer__Writer_class(){
    static lang_types__Bool __done__ = false;
    static io_Writer__WriterClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_Writer__Writer),
                    .size = sizeof(void*),
                    .name = "Writer",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) io_Writer__Writer___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) io_Writer__Writer___load__,
            },
        },
        .write_chr = io_Writer__Writer_write_chr,
        .write = io_Writer__Writer_write,
        .write_implicitLength = io_Writer__Writer_write_implicitLength_impl,
        .vwritef = io_Writer__Writer_vwritef,
        .write_fromReader = io_Writer__Writer_write_fromReader_impl,
        .write_fromReaderDefaultBufferSize = io_Writer__Writer_write_fromReaderDefaultBufferSize_impl,
        .close = io_Writer__Writer_close,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void io_Writer_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_Iterators_load();
        lang_String_load();
        lang_Exception_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        io_Reader_load();
        io_Writer__Writer___load__();
    }
}

