/* io/Reader header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_Reader_fwd___
#define ___io_Reader_fwd___

struct _io_Reader__Reader;
typedef struct _io_Reader__Reader io_Reader__Reader;
struct _io_Reader__ReaderClass;
typedef struct _io_Reader__ReaderClass io_Reader__ReaderClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/text/Buffer-fwd.h>

#ifndef __FUNC___String_Bool__DEFINE
#define __FUNC___String_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___String_Bool)(lang_String__String, void*);

#endif

io_Reader__ReaderClass *io_Reader__Reader_class();
void io_Reader__Reader_init(io_Reader__Reader* this);
lang_Numbers__SizeT io_Reader__Reader_read(io_Reader__Reader* this, lang_String__Char* chars, lang_Numbers__Int offset, lang_Numbers__Int count);
lang_String__Char io_Reader__Reader_read_char(io_Reader__Reader* this);
lang_String__String io_Reader__Reader_readUntil(io_Reader__Reader* this, lang_String__Char end);
lang_String__String io_Reader__Reader_readUntil_impl(io_Reader__Reader* this, lang_String__Char end);
void io_Reader__Reader_skipUntil(io_Reader__Reader* this, lang_String__Char end);
void io_Reader__Reader_skipUntil_impl(io_Reader__Reader* this, lang_String__Char end);
lang_String__String io_Reader__Reader_readLine(io_Reader__Reader* this);
lang_String__String io_Reader__Reader_readLine_impl(io_Reader__Reader* this);
void io_Reader__Reader_skipLine(io_Reader__Reader* this);
void io_Reader__Reader_skipLine_impl(io_Reader__Reader* this);
lang_types__Bool io_Reader__Reader_eachLine(io_Reader__Reader* this, lang_types__Closure f);
lang_types__Bool io_Reader__Reader_eachLine_impl(io_Reader__Reader* this, lang_types__Closure f);
lang_String__Char io_Reader__Reader_peek(io_Reader__Reader* this);
lang_String__Char io_Reader__Reader_peek_impl(io_Reader__Reader* this);
void io_Reader__Reader_skipWhile(io_Reader__Reader* this, lang_String__Char unwanted);
void io_Reader__Reader_skipWhile_impl(io_Reader__Reader* this, lang_String__Char unwanted);
lang_types__Bool io_Reader__Reader_hasNext__quest(io_Reader__Reader* this);
void io_Reader__Reader_rewind(io_Reader__Reader* this, lang_Numbers__Int offset);
lang_Numbers__Long io_Reader__Reader_mark(io_Reader__Reader* this);
void io_Reader__Reader_reset(io_Reader__Reader* this, lang_Numbers__Long marker);
void io_Reader__Reader_skip(io_Reader__Reader* this, lang_Numbers__Int offset);
void io_Reader__Reader_skip_impl(io_Reader__Reader* this, lang_Numbers__Int offset);
void io_Reader__Reader_close(io_Reader__Reader* this);
void io_Reader__Reader___defaults__(io_Reader__Reader* this);
void io_Reader__Reader___defaults___impl(io_Reader__Reader* this);
void io_Reader__Reader___load__();
void io_Reader_load();

#endif // ___io_Reader_fwd___
