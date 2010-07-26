/* lang/IO header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_IO_fwd___
#define ___lang_IO_fwd___

#include <stdio.h>

typedef FILE* lang_IO__FStream;
struct _lang_IO__FILEClass;
typedef struct _lang_IO__FILEClass lang_IO__FILEClass;
struct _lang_IO__FStreamClass;
typedef struct _lang_IO__FStreamClass lang_IO__FStreamClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
lang_IO__FILEClass *FILE_class();
void FILE___load__();
lang_IO__FStreamClass *lang_IO__FStream_class();
lang_IO__FStream lang_IO__FStream_open(lang_String__String filename, lang_String__String mode);
lang_Numbers__Int lang_IO__FStream_close(lang_IO__FStream this);
lang_Numbers__Int lang_IO__FStream_error(lang_IO__FStream this);
lang_types__Bool lang_IO__FStream_eof__quest(lang_IO__FStream this);
lang_Numbers__Int lang_IO__FStream_seek(lang_IO__FStream this, lang_Numbers__Long offset, lang_Numbers__Int origin);
lang_Numbers__Long lang_IO__FStream_tell(lang_IO__FStream this);
void lang_IO__FStream_flush(lang_IO__FStream this);
lang_Numbers__SizeT lang_IO__FStream_read(lang_IO__FStream this, lang_types__Pointer dest, lang_Numbers__SizeT bytesToRead);
lang_String__Char lang_IO__FStream_readChar(lang_IO__FStream this);
lang_String__String lang_IO__FStream_readLine_defaults(lang_IO__FStream this);
lang_String__String lang_IO__FStream_readLine(lang_IO__FStream this, lang_Numbers__Int chunk);
lang_Numbers__SizeT lang_IO__FStream_size(lang_IO__FStream this);
lang_types__Bool lang_IO__FStream_hasNext__quest(lang_IO__FStream this);
void lang_IO__FStream_write_chr(lang_IO__FStream this, lang_String__Char chr);
lang_Numbers__SizeT lang_IO__FStream_write(lang_IO__FStream this, lang_String__String str, lang_Numbers__SizeT length);
lang_Numbers__SizeT lang_IO__FStream_write_precise(lang_IO__FStream this, lang_String__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length);
void lang_IO__FStream___load__();
void lang_IO_load();
void lang_IO__println_withStr(lang_String__Char* str);
void lang_IO__println();

#endif // ___lang_IO_fwd___
