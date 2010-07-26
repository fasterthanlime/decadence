/* io/Reader source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/Reader.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/text/Buffer.h>


void io_Reader__Reader_init(io_Reader__Reader* this) {
}

lang_String__String io_Reader__Reader_readUntil_impl(io_Reader__Reader* this, lang_String__Char end) {
    text_Buffer__Buffer* sb = text_Buffer__Buffer_new_withCapa(40);
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_String__Char c = io_Reader__Reader_read_char(this);
        if (c == end || (!io_Reader__Reader_hasNext__quest(this) && c == (lang_String__Char) 8)) {
            break;
        }
        text_Buffer__Buffer_append_chr(sb, c);
    }
    return text_Buffer__Buffer_toString(sb);
}

void io_Reader__Reader_skipUntil_impl(io_Reader__Reader* this, lang_String__Char end) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_String__Char c = io_Reader__Reader_read_char(this);
        if (c == end) {
            break;
        }
    }
}

lang_String__String io_Reader__Reader_readLine_impl(io_Reader__Reader* this) {
    return lang_String__String_trimRight(io_Reader__Reader_readUntil(this, '\n'), '\r');
}

void io_Reader__Reader_skipLine_impl(io_Reader__Reader* this) {
    io_Reader__Reader_skipUntil(this, '\n');
}

lang_types__Bool io_Reader__Reader_eachLine_impl(io_Reader__Reader* this, lang_types__Closure f) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        if (!((lang_types__Bool (*)(lang_String__String, void*)) f.thunk)(io_Reader__Reader_readLine(this), f.context)) {
            return false;
        }
    }
    return true;
}

lang_String__Char io_Reader__Reader_peek_impl(io_Reader__Reader* this) {
    lang_String__Char c = io_Reader__Reader_read_char(this);
    io_Reader__Reader_rewind(this, 1);
    return c;
}

void io_Reader__Reader_skipWhile_impl(io_Reader__Reader* this, lang_String__Char unwanted) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_String__Char c = io_Reader__Reader_read_char(this);
        if (c != unwanted) {
            io_Reader__Reader_rewind(this, 1);
            break;
        }
    }
}

void io_Reader__Reader_skip_impl(io_Reader__Reader* this, lang_Numbers__Int offset) {
    if (offset < 0) {
        io_Reader__Reader_rewind(this, -offset);
    }
    else {
        
        {
            lang_Numbers__Int i;
            for (i = 0; i < offset; i++) {
                io_Reader__Reader_read_char(this);
            }
        }
    }
}

void io_Reader__Reader___defaults___impl(io_Reader__Reader* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_Numbers__SizeT io_Reader__Reader_read(io_Reader__Reader* this, lang_String__Char* chars, lang_Numbers__Int offset, lang_Numbers__Int count) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read((io_Reader__Reader*)this, chars, offset, count);
}

lang_String__Char io_Reader__Reader_read_char(io_Reader__Reader* this) {
    return (lang_String__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_char((io_Reader__Reader*)this);
}

lang_String__String io_Reader__Reader_readUntil(io_Reader__Reader* this, lang_String__Char end) {
    return (lang_String__String) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readUntil((io_Reader__Reader*)this, end);
}

void io_Reader__Reader_skipUntil(io_Reader__Reader* this, lang_String__Char end) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipUntil((io_Reader__Reader*)this, end);
}

lang_String__String io_Reader__Reader_readLine(io_Reader__Reader* this) {
    return (lang_String__String) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readLine((io_Reader__Reader*)this);
}

void io_Reader__Reader_skipLine(io_Reader__Reader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipLine((io_Reader__Reader*)this);
}

lang_types__Bool io_Reader__Reader_eachLine(io_Reader__Reader* this, lang_types__Closure f) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->eachLine((io_Reader__Reader*)this, f);
}

lang_String__Char io_Reader__Reader_peek(io_Reader__Reader* this) {
    return (lang_String__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->peek((io_Reader__Reader*)this);
}

void io_Reader__Reader_skipWhile(io_Reader__Reader* this, lang_String__Char unwanted) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipWhile((io_Reader__Reader*)this, unwanted);
}

lang_types__Bool io_Reader__Reader_hasNext__quest(io_Reader__Reader* this) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->hasNext__quest((io_Reader__Reader*)this);
}

void io_Reader__Reader_rewind(io_Reader__Reader* this, lang_Numbers__Int offset) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->rewind((io_Reader__Reader*)this, offset);
}

lang_Numbers__Long io_Reader__Reader_mark(io_Reader__Reader* this) {
    return (lang_Numbers__Long) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->mark((io_Reader__Reader*)this);
}

void io_Reader__Reader_reset(io_Reader__Reader* this, lang_Numbers__Long marker) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->reset((io_Reader__Reader*)this, marker);
}

void io_Reader__Reader_skip(io_Reader__Reader* this, lang_Numbers__Int offset) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skip((io_Reader__Reader*)this, offset);
}

void io_Reader__Reader_close(io_Reader__Reader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->close((io_Reader__Reader*)this);
}

void io_Reader__Reader___defaults__(io_Reader__Reader* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void io_Reader__Reader___load__() {
    lang_types__Class___load__();
}

io_Reader__ReaderClass *io_Reader__Reader_class(){
    static lang_types__Bool __done__ = false;
    static io_Reader__ReaderClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_Reader__Reader),
                    .size = sizeof(void*),
                    .name = "Reader",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) io_Reader__Reader___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) io_Reader__Reader___load__,
            },
        },
        .read = io_Reader__Reader_read,
        .read_char = io_Reader__Reader_read_char,
        .readUntil = io_Reader__Reader_readUntil_impl,
        .skipUntil = io_Reader__Reader_skipUntil_impl,
        .readLine = io_Reader__Reader_readLine_impl,
        .skipLine = io_Reader__Reader_skipLine_impl,
        .eachLine = io_Reader__Reader_eachLine_impl,
        .peek = io_Reader__Reader_peek_impl,
        .skipWhile = io_Reader__Reader_skipWhile_impl,
        .hasNext__quest = io_Reader__Reader_hasNext__quest,
        .rewind = io_Reader__Reader_rewind,
        .mark = io_Reader__Reader_mark,
        .reset = io_Reader__Reader_reset,
        .skip = io_Reader__Reader_skip_impl,
        .close = io_Reader__Reader_close,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void io_Reader_load() {
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
        text_Buffer_load();
        io_Reader__Reader___load__();
    }
}

