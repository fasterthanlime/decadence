/* lang/IO source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/IO.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>

void FILE___load__() {
    lang_types__Class___load__();
}

lang_Numbers__Int lang_IO__FStream_close(lang_IO__FStream this) {
    return fclose(this);
}

lang_Numbers__Int lang_IO__FStream_error(lang_IO__FStream this) {
    return ferror(this);
}

lang_types__Bool lang_IO__FStream_eof__quest(lang_IO__FStream this) {
    return feof(this) != 0;
}

lang_Numbers__Int lang_IO__FStream_seek(lang_IO__FStream this, lang_Numbers__Long offset, lang_Numbers__Int origin) {
    return fseek(this, offset, origin);
}

lang_Numbers__Long lang_IO__FStream_tell(lang_IO__FStream this) {
    return ftell(this);
}

void lang_IO__FStream_flush(lang_IO__FStream this) {
    fflush(this);
}

lang_Numbers__SizeT lang_IO__FStream_read(lang_IO__FStream this, lang_types__Pointer dest, lang_Numbers__SizeT bytesToRead) {
    return fread(dest, 1, bytesToRead, this);
}

lang_String__Char lang_IO__FStream_readChar(lang_IO__FStream this) {
    lang_String__Char c;
    lang_Numbers__SizeT count = fread(&(c), 1, 1, this);
    if (count < (lang_Numbers__SizeT) 1) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_IO__FStream_class()), "Trying to read a char at the end of a file!"));
    }
    return c;
}

lang_String__String lang_IO__FStream_readLine_defaults(lang_IO__FStream this) {
    return lang_IO__FStream_readLine(this, 128);
}

lang_String__String lang_IO__FStream_readLine(lang_IO__FStream this, lang_Numbers__Int chunk) {
    lang_Numbers__Int length = 128;
    lang_Numbers__Int pos = 0;
    lang_String__Char* str = ((lang_String__Char*) (GC_MALLOC(length)));
    while (true) {
        lang_Numbers__Int c = fgetc(this);
        if (c == (lang_Numbers__Int) '\n') {
            str[pos] = '\0';
            break;
        }
        str[pos] = c;
        pos += 1;
        if (pos >= length) {
            length += chunk;
            lang_String__String tmp = ((lang_String__String) (GC_REALLOC(str, length)));
            if (!tmp) {
                lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (lang_IO__FStream_class()), "Ran out of memory while reading a (apparently never-ending) line!"));
            }
            str = (void*) tmp;
        }
        if (!lang_IO__FStream_hasNext__quest(this)) {
            str[pos] = '\0';
            break;
        }
    }
    return ((lang_String__String) (str));
}

lang_Numbers__SizeT lang_IO__FStream_size(lang_IO__FStream this) {
    lang_IO__FStream_seek(this, 0, SEEK_END);
    lang_Numbers__SizeT result = ((lang_Numbers__SizeT) (lang_IO__FStream_tell(this)));
    rewind(this);
    return result;
}

lang_types__Bool lang_IO__FStream_hasNext__quest(lang_IO__FStream this) {
    return feof(this) == 0;
}

void lang_IO__FStream_write_chr(lang_IO__FStream this, lang_String__Char chr) {
    fputc(chr, this);
}

lang_Numbers__SizeT lang_IO__FStream_write(lang_IO__FStream this, lang_String__String str, lang_Numbers__SizeT length) {
    return lang_IO__FStream_write_precise(this, str, 0, length);
}

lang_Numbers__SizeT lang_IO__FStream_write_precise(lang_IO__FStream this, lang_String__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length) {
    return fwrite(str + offset, 1, length, this);
}
lang_IO__FStream lang_IO__FStream_open(lang_String__String filename, lang_String__String mode) {
    
    return fopen(filename, mode);
}
void lang_IO__FStream___load__() {
    lang_types__Class___load__();
}

lang_IO__FStreamClass *lang_IO__FStream_class(){
    static lang_IO__FStreamClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_IO__FStream),
                    .size = sizeof(lang_IO__FStream),
                    .name = "FStream",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_IO__FStream___load__,
            },
        },
    };
    return &class;
}
void lang_IO_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_Iterators_load();
        lang_String_load();
        lang_Exception_load();
        lang_System_load();
        lang_Memory_load();
        FILE___load__();
        lang_IO__FStream___load__();
    }
}


void lang_IO__println_withStr(lang_String__Char* str) {
    printf("%s\n", str);
}

void lang_IO__println() {
    printf("\n");
}
