/* text/Buffer source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/text/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


void text_Buffer__Buffer_init(text_Buffer__Buffer* this) {
    text_Buffer__Buffer_init_withCapa((text_Buffer__Buffer*) this, 128);
}

void text_Buffer__Buffer_init_withCapa(text_Buffer__Buffer* this, lang_Numbers__SizeT capacity) {
    this->capacity = capacity;
    capacity += 1;
    this->data = (void*) GC_MALLOC(capacity);
    this->data[capacity - 1] = '\0';
    this->size = 0;
}

void text_Buffer__Buffer_init_str(text_Buffer__Buffer* this, lang_String__String str) {
    text_Buffer__Buffer_init_strWithLength((text_Buffer__Buffer*) this, str, strlen(str));
}

void text_Buffer__Buffer_init_strWithLength(text_Buffer__Buffer* this, lang_String__String str, lang_Numbers__SizeT length) {
    text_Buffer__Buffer_init_withCapa((text_Buffer__Buffer*) this, length);
    memcpy(((lang_String__Char*) (this->data)), ((lang_String__Char*) (str)), length);
    this->size = length;
}

text_Buffer__Buffer* text_Buffer__Buffer_clone_impl(text_Buffer__Buffer* this) {
    text_Buffer__Buffer* result = text_Buffer__Buffer_new_withCapa(this->size);
    memcpy(((lang_String__Char*) (result->data)), ((lang_String__Char*) (this->data)), this->size);
    result->size = this->size;
    return result;
}

void text_Buffer__Buffer_append_str_impl(text_Buffer__Buffer* this, lang_String__String str) {
    text_Buffer__Buffer_append_strWithLength(this, str, strlen(str));
}

void text_Buffer__Buffer_append_strWithLength_impl(text_Buffer__Buffer* this, lang_String__String str, lang_Numbers__SizeT length) {
    text_Buffer__Buffer_checkLength(this, this->size + length + 1);
    memcpy(((lang_String__Char*) (this->data)) + this->size, ((lang_String__Char*) (str)), length);
    this->size += length;
    this->data[this->size] = '\0';
}

void text_Buffer__Buffer_append_chr_impl(text_Buffer__Buffer* this, lang_String__Char chr) {
    text_Buffer__Buffer_checkLength(this, this->size + 2);
    this->data[this->size] = chr;
    this->size += 1;
    this->data[this->size] = '\0';
}

lang_Numbers__Int text_Buffer__Buffer_get_strWithLengthOffset_impl(text_Buffer__Buffer* this, lang_String__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length) {
    if (offset >= this->size) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (text_Buffer__Buffer_class()), "Buffer overflow! Offset is larger than buffer size."));
    }
    lang_Numbers__Int copySize;
    if ((offset + length) > this->size) {
        copySize = this->size - offset;
    }
    else {
        copySize = length;
    }
    memcpy(str, (((lang_String__Char*) (this->data))) + offset, copySize);
    return copySize;
}

lang_String__Char text_Buffer__Buffer_get_chr_impl(text_Buffer__Buffer* this, lang_Numbers__Int offset) {
    if (offset >= (lang_Numbers__Int) this->size) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (text_Buffer__Buffer_class()), "Buffer overflow! Offset is larger than buffer size."));
    }
    return this->data[offset];
}

void text_Buffer__Buffer_checkLength_impl(text_Buffer__Buffer* this, lang_Numbers__SizeT min) {
    if (min >= this->capacity) {
        lang_Numbers__SizeT newCapa = min * 1.200000 + 10;
        lang_types__Pointer tmp = GC_REALLOC(this->data, newCapa);
        if (!tmp) {
            lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (text_Buffer__Buffer_class()), "Couldn't allocate enough memory for Buffer to grow to capacity " + newCapa));
        }
        this->data = (void*) tmp;
        this->capacity = newCapa;
    }
}

lang_String__String text_Buffer__Buffer_toString_impl(text_Buffer__Buffer* this) {
    return ((lang_String__String) (this->data));
}

void text_Buffer__Buffer___defaults___impl(text_Buffer__Buffer* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

text_Buffer__Buffer* text_Buffer__Buffer_clone(text_Buffer__Buffer* this) {
    return (text_Buffer__Buffer*) ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->clone((text_Buffer__Buffer*)this);
}

void text_Buffer__Buffer_append_str(text_Buffer__Buffer* this, lang_String__String str) {
    ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_str((text_Buffer__Buffer*)this, str);
}

void text_Buffer__Buffer_append_strWithLength(text_Buffer__Buffer* this, lang_String__String str, lang_Numbers__SizeT length) {
    ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_strWithLength((text_Buffer__Buffer*)this, str, length);
}

void text_Buffer__Buffer_append_chr(text_Buffer__Buffer* this, lang_String__Char chr) {
    ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_chr((text_Buffer__Buffer*)this, chr);
}

lang_Numbers__Int text_Buffer__Buffer_get_strWithLengthOffset(text_Buffer__Buffer* this, lang_String__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length) {
    return (lang_Numbers__Int) ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->get_strWithLengthOffset((text_Buffer__Buffer*)this, str, offset, length);
}

lang_String__Char text_Buffer__Buffer_get_chr(text_Buffer__Buffer* this, lang_Numbers__Int offset) {
    return (lang_String__Char) ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->get_chr((text_Buffer__Buffer*)this, offset);
}

void text_Buffer__Buffer_checkLength(text_Buffer__Buffer* this, lang_Numbers__SizeT min) {
    ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->checkLength((text_Buffer__Buffer*)this, min);
}

lang_String__String text_Buffer__Buffer_toString(text_Buffer__Buffer* this) {
    return (lang_String__String) ((text_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toString((text_Buffer__Buffer*)this);
}

void text_Buffer__Buffer___defaults__(text_Buffer__Buffer* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
text_Buffer__Buffer* text_Buffer__Buffer_new() {
    
    text_Buffer__Buffer* this = ((text_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__Buffer_class())));
    text_Buffer__Buffer___defaults__(this);
    text_Buffer__Buffer_init((text_Buffer__Buffer*) this);
    return this;
}
text_Buffer__Buffer* text_Buffer__Buffer_new_withCapa(lang_Numbers__SizeT capacity) {
    
    text_Buffer__Buffer* this = ((text_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__Buffer_class())));
    text_Buffer__Buffer___defaults__(this);
    text_Buffer__Buffer_init_withCapa((text_Buffer__Buffer*) this, capacity);
    return this;
}
text_Buffer__Buffer* text_Buffer__Buffer_new_str(lang_String__String str) {
    
    text_Buffer__Buffer* this = ((text_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__Buffer_class())));
    text_Buffer__Buffer___defaults__(this);
    text_Buffer__Buffer_init_str((text_Buffer__Buffer*) this, str);
    return this;
}
text_Buffer__Buffer* text_Buffer__Buffer_new_strWithLength(lang_String__String str, lang_Numbers__SizeT length) {
    
    text_Buffer__Buffer* this = ((text_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__Buffer_class())));
    text_Buffer__Buffer___defaults__(this);
    text_Buffer__Buffer_init_strWithLength((text_Buffer__Buffer*) this, str, length);
    return this;
}
void text_Buffer__Buffer___load__() {
    lang_types__Class___load__();
}

text_Buffer__BufferClass *text_Buffer__Buffer_class(){
    static lang_types__Bool __done__ = false;
    static text_Buffer__BufferClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(text_Buffer__Buffer),
                    .size = sizeof(void*),
                    .name = "Buffer",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) text_Buffer__Buffer___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) text_Buffer__Buffer___load__,
            },
        },
        .new = text_Buffer__Buffer_new,
        .new_withCapa = text_Buffer__Buffer_new_withCapa,
        .new_str = text_Buffer__Buffer_new_str,
        .new_strWithLength = text_Buffer__Buffer_new_strWithLength,
        .clone = text_Buffer__Buffer_clone_impl,
        .append_str = text_Buffer__Buffer_append_str_impl,
        .append_strWithLength = text_Buffer__Buffer_append_strWithLength_impl,
        .append_chr = text_Buffer__Buffer_append_chr_impl,
        .get_strWithLengthOffset = text_Buffer__Buffer_get_strWithLengthOffset_impl,
        .get_chr = text_Buffer__Buffer_get_chr_impl,
        .checkLength = text_Buffer__Buffer_checkLength_impl,
        .toString = text_Buffer__Buffer_toString_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}

void text_Buffer__BufferWriter_init(text_Buffer__BufferWriter* this) {
    this->buffer = text_Buffer__Buffer_new();
}

void text_Buffer__BufferWriter_init_withBuffer(text_Buffer__BufferWriter* this, text_Buffer__Buffer* buffer) {
    this->buffer = buffer;
}

text_Buffer__Buffer* text_Buffer__BufferWriter_buffer_impl(text_Buffer__BufferWriter* this) {
    return this->buffer;
}

void text_Buffer__BufferWriter_close_impl(text_Buffer__BufferWriter* this) {
}

void text_Buffer__BufferWriter_write_chr_impl(text_Buffer__BufferWriter* this, lang_String__Char chr) {
    text_Buffer__Buffer_append_chr(this->buffer, chr);
}

lang_Numbers__SizeT text_Buffer__BufferWriter_write_impl(text_Buffer__BufferWriter* this, lang_String__String chars, lang_Numbers__SizeT length) {
    text_Buffer__Buffer_append_strWithLength(this->buffer, chars, length);
    return length;
}

void text_Buffer__BufferWriter_vwritef_impl(text_Buffer__BufferWriter* this, lang_String__String fmt, lang_System__VaList list) {
    lang_System__VaList list2;
    va_copy(list2, list);
    lang_Numbers__Int length = vsnprintf(NULL, 0, fmt, list2);
    va_end(list2);
    text_Buffer__Buffer_checkLength(this->buffer, this->buffer->size + length);
    vsnprintf(((lang_String__Char*) (this->buffer->data)) + this->buffer->size, length + 1, fmt, list);
    this->buffer->size += length;
}

void text_Buffer__BufferWriter___defaults___impl(text_Buffer__BufferWriter* this) {
    io_Writer__Writer___defaults___impl((io_Writer__Writer*) this);
}

text_Buffer__Buffer* text_Buffer__BufferWriter_buffer(text_Buffer__BufferWriter* this) {
    return (text_Buffer__Buffer*) ((text_Buffer__BufferWriterClass *)((lang_types__Object *)this)->class)->buffer((text_Buffer__BufferWriter*)this);
}

void text_Buffer__BufferWriter_close(text_Buffer__BufferWriter* this) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->close((io_Writer__Writer*)this);
}

void text_Buffer__BufferWriter_write_chr(text_Buffer__BufferWriter* this, lang_String__Char chr) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_chr((io_Writer__Writer*)this, chr);
}

lang_Numbers__SizeT text_Buffer__BufferWriter_write(text_Buffer__BufferWriter* this, lang_String__String chars, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write((io_Writer__Writer*)this, chars, length);
}

void text_Buffer__BufferWriter_vwritef(text_Buffer__BufferWriter* this, lang_String__String fmt, lang_System__VaList list) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->vwritef((io_Writer__Writer*)this, fmt, list);
}

void text_Buffer__BufferWriter___defaults__(text_Buffer__BufferWriter* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
text_Buffer__BufferWriter* text_Buffer__BufferWriter_new() {
    
    text_Buffer__BufferWriter* this = ((text_Buffer__BufferWriter*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__BufferWriter_class())));
    text_Buffer__BufferWriter___defaults__(this);
    text_Buffer__BufferWriter_init((text_Buffer__BufferWriter*) this);
    return this;
}
text_Buffer__BufferWriter* text_Buffer__BufferWriter_new_withBuffer(text_Buffer__Buffer* buffer) {
    
    text_Buffer__BufferWriter* this = ((text_Buffer__BufferWriter*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__BufferWriter_class())));
    text_Buffer__BufferWriter___defaults__(this);
    text_Buffer__BufferWriter_init_withBuffer((text_Buffer__BufferWriter*) this, buffer);
    return this;
}
void text_Buffer__BufferWriter___load__() {
    io_Writer__Writer___load__();
}

text_Buffer__BufferWriterClass *text_Buffer__BufferWriter_class(){
    static lang_types__Bool __done__ = false;
    static text_Buffer__BufferWriterClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(text_Buffer__BufferWriter),
                        .size = sizeof(void*),
                        .name = "BufferWriter",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) text_Buffer__BufferWriter___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) text_Buffer__BufferWriter___load__,
                },
            },
            .write_chr = (void (*)(io_Writer__Writer*, lang_String__Char)) text_Buffer__BufferWriter_write_chr_impl,
            .write = (lang_Numbers__SizeT (*)(io_Writer__Writer*, lang_String__Char*, lang_Numbers__SizeT)) text_Buffer__BufferWriter_write_impl,
            .write_implicitLength = (lang_Numbers__SizeT (*)(io_Writer__Writer*, lang_String__String)) io_Writer__Writer_write_implicitLength_impl,
            .vwritef = (void (*)(io_Writer__Writer*, lang_String__String, lang_System__VaList)) text_Buffer__BufferWriter_vwritef_impl,
            .write_fromReader = (lang_Numbers__SizeT (*)(io_Writer__Writer*, io_Reader__Reader*, lang_Numbers__SizeT)) io_Writer__Writer_write_fromReader_impl,
            .write_fromReaderDefaultBufferSize = (void (*)(io_Writer__Writer*, io_Reader__Reader*)) io_Writer__Writer_write_fromReaderDefaultBufferSize_impl,
            .close = (void (*)(io_Writer__Writer*)) text_Buffer__BufferWriter_close_impl,
        },
        .new = text_Buffer__BufferWriter_new,
        .new_withBuffer = text_Buffer__BufferWriter_new_withBuffer,
        .buffer = text_Buffer__BufferWriter_buffer_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Writer__Writer_class();
        __done__ = true;
    }
    return &class;
}

void text_Buffer__BufferReader_init(text_Buffer__BufferReader* this) {
    this->buffer = text_Buffer__Buffer_new();
}

void text_Buffer__BufferReader_init_withBuffer(text_Buffer__BufferReader* this, text_Buffer__Buffer* buffer) {
    this->buffer = buffer;
}

text_Buffer__Buffer* text_Buffer__BufferReader_buffer_impl(text_Buffer__BufferReader* this) {
    return this->buffer;
}

void text_Buffer__BufferReader_close_impl(text_Buffer__BufferReader* this) {
}

lang_Numbers__SizeT text_Buffer__BufferReader_read_impl(text_Buffer__BufferReader* this, lang_String__String chars, lang_Numbers__Int offset, lang_Numbers__Int count) {
    lang_Numbers__Int copySize = text_Buffer__Buffer_get_strWithLengthOffset(this->buffer, ((lang_String__Char*) (chars)) + offset, ((io_Reader__Reader*) this)->marker, count);
    ((io_Reader__Reader*) this)->marker += copySize;
    return ((lang_Numbers__SizeT) (copySize));
}

lang_String__Char text_Buffer__BufferReader_read_char_impl(text_Buffer__BufferReader* this) {
    lang_String__Char c = text_Buffer__Buffer_get_chr(this->buffer, ((io_Reader__Reader*) this)->marker);
    ((io_Reader__Reader*) this)->marker += 1;
    return c;
}

lang_types__Bool text_Buffer__BufferReader_hasNext__quest_impl(text_Buffer__BufferReader* this) {
    return ((io_Reader__Reader*) this)->marker < (lang_Numbers__Long) this->buffer->size;
}

void text_Buffer__BufferReader_rewind_impl(text_Buffer__BufferReader* this, lang_Numbers__Int offset) {
    ((io_Reader__Reader*) this)->marker -= offset;
    if (((io_Reader__Reader*) this)->marker < (lang_Numbers__Long) 0) {
        ((io_Reader__Reader*) this)->marker = 0;
    }
}

lang_Numbers__Long text_Buffer__BufferReader_mark_impl(text_Buffer__BufferReader* this) {
    return ((io_Reader__Reader*) this)->marker;
}

void text_Buffer__BufferReader_reset_impl(text_Buffer__BufferReader* this, lang_Numbers__Long marker) {
    ((io_Reader__Reader*) this)->marker = marker;
}

void text_Buffer__BufferReader___defaults___impl(text_Buffer__BufferReader* this) {
    io_Reader__Reader___defaults___impl((io_Reader__Reader*) this);
}

text_Buffer__Buffer* text_Buffer__BufferReader_buffer(text_Buffer__BufferReader* this) {
    return (text_Buffer__Buffer*) ((text_Buffer__BufferReaderClass *)((lang_types__Object *)this)->class)->buffer((text_Buffer__BufferReader*)this);
}

void text_Buffer__BufferReader_close(text_Buffer__BufferReader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->close((io_Reader__Reader*)this);
}

lang_Numbers__SizeT text_Buffer__BufferReader_read(text_Buffer__BufferReader* this, lang_String__String chars, lang_Numbers__Int offset, lang_Numbers__Int count) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read((io_Reader__Reader*)this, chars, offset, count);
}

lang_String__Char text_Buffer__BufferReader_read_char(text_Buffer__BufferReader* this) {
    return (lang_String__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_char((io_Reader__Reader*)this);
}

lang_types__Bool text_Buffer__BufferReader_hasNext__quest(text_Buffer__BufferReader* this) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->hasNext__quest((io_Reader__Reader*)this);
}

void text_Buffer__BufferReader_rewind(text_Buffer__BufferReader* this, lang_Numbers__Int offset) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->rewind((io_Reader__Reader*)this, offset);
}

lang_Numbers__Long text_Buffer__BufferReader_mark(text_Buffer__BufferReader* this) {
    return (lang_Numbers__Long) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->mark((io_Reader__Reader*)this);
}

void text_Buffer__BufferReader_reset(text_Buffer__BufferReader* this, lang_Numbers__Long marker) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->reset((io_Reader__Reader*)this, marker);
}

void text_Buffer__BufferReader___defaults__(text_Buffer__BufferReader* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
text_Buffer__BufferReader* text_Buffer__BufferReader_new() {
    
    text_Buffer__BufferReader* this = ((text_Buffer__BufferReader*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__BufferReader_class())));
    text_Buffer__BufferReader___defaults__(this);
    text_Buffer__BufferReader_init((text_Buffer__BufferReader*) this);
    return this;
}
text_Buffer__BufferReader* text_Buffer__BufferReader_new_withBuffer(text_Buffer__Buffer* buffer) {
    
    text_Buffer__BufferReader* this = ((text_Buffer__BufferReader*) (lang_types__Class_alloc__class((lang_types__Class*) text_Buffer__BufferReader_class())));
    text_Buffer__BufferReader___defaults__(this);
    text_Buffer__BufferReader_init_withBuffer((text_Buffer__BufferReader*) this, buffer);
    return this;
}
void text_Buffer__BufferReader___load__() {
    io_Reader__Reader___load__();
}

text_Buffer__BufferReaderClass *text_Buffer__BufferReader_class(){
    static lang_types__Bool __done__ = false;
    static text_Buffer__BufferReaderClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(text_Buffer__BufferReader),
                        .size = sizeof(void*),
                        .name = "BufferReader",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) text_Buffer__BufferReader___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) text_Buffer__BufferReader___load__,
                },
            },
            .read = (lang_Numbers__SizeT (*)(io_Reader__Reader*, lang_String__Char*, lang_Numbers__Int, lang_Numbers__Int)) text_Buffer__BufferReader_read_impl,
            .read_char = (lang_String__Char (*)(io_Reader__Reader*)) text_Buffer__BufferReader_read_char_impl,
            .readUntil = (lang_String__String (*)(io_Reader__Reader*, lang_String__Char)) io_Reader__Reader_readUntil_impl,
            .skipUntil = (void (*)(io_Reader__Reader*, lang_String__Char)) io_Reader__Reader_skipUntil_impl,
            .readLine = (lang_String__String (*)(io_Reader__Reader*)) io_Reader__Reader_readLine_impl,
            .skipLine = (void (*)(io_Reader__Reader*)) io_Reader__Reader_skipLine_impl,
            .eachLine = (lang_types__Bool (*)(io_Reader__Reader*, lang_types__Closure)) io_Reader__Reader_eachLine_impl,
            .peek = (lang_String__Char (*)(io_Reader__Reader*)) io_Reader__Reader_peek_impl,
            .skipWhile = (void (*)(io_Reader__Reader*, lang_String__Char)) io_Reader__Reader_skipWhile_impl,
            .hasNext__quest = (lang_types__Bool (*)(io_Reader__Reader*)) text_Buffer__BufferReader_hasNext__quest_impl,
            .rewind = (void (*)(io_Reader__Reader*, lang_Numbers__Int)) text_Buffer__BufferReader_rewind_impl,
            .mark = (lang_Numbers__Long (*)(io_Reader__Reader*)) text_Buffer__BufferReader_mark_impl,
            .reset = (void (*)(io_Reader__Reader*, lang_Numbers__Long)) text_Buffer__BufferReader_reset_impl,
            .skip = (void (*)(io_Reader__Reader*, lang_Numbers__Int)) io_Reader__Reader_skip_impl,
            .close = (void (*)(io_Reader__Reader*)) text_Buffer__BufferReader_close_impl,
        },
        .new = text_Buffer__BufferReader_new,
        .new_withBuffer = text_Buffer__BufferReader_new_withBuffer,
        .buffer = text_Buffer__BufferReader_buffer_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Reader__Reader_class();
        __done__ = true;
    }
    return &class;
}
void text_Buffer_load() {
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
        io_Writer_load();
        io_Reader_load();
        text_Buffer__Buffer___load__();
        text_Buffer__BufferWriter___load__();
        text_Buffer__BufferReader___load__();
    }
}

