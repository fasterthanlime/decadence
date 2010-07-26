/* io/Writer header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_Writer_fwd___
#define ___io_Writer_fwd___

struct _io_Writer__Writer;
typedef struct _io_Writer__Writer io_Writer__Writer;
struct _io_Writer__WriterClass;
typedef struct _io_Writer__WriterClass io_Writer__WriterClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/io/Reader-fwd.h>
io_Writer__WriterClass *io_Writer__Writer_class();
void io_Writer__Writer_init(io_Writer__Writer* this);
void io_Writer__Writer_write_chr(io_Writer__Writer* this, lang_String__Char chr);
lang_Numbers__SizeT io_Writer__Writer_write(io_Writer__Writer* this, lang_String__Char* bytes, lang_Numbers__SizeT length);
lang_Numbers__SizeT io_Writer__Writer_write_implicitLength(io_Writer__Writer* this, lang_String__String str);
lang_Numbers__SizeT io_Writer__Writer_write_implicitLength_impl(io_Writer__Writer* this, lang_String__String str);
void io_Writer__Writer_writef(io_Writer__Writer* this, lang_String__String fmt, ...);
void io_Writer__Writer_vwritef(io_Writer__Writer* this, lang_String__String fmt, lang_System__VaList args);
lang_Numbers__SizeT io_Writer__Writer_write_fromReader(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize);
lang_Numbers__SizeT io_Writer__Writer_write_fromReader_impl(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize);
void io_Writer__Writer_write_fromReaderDefaultBufferSize(io_Writer__Writer* this, io_Reader__Reader* source);
void io_Writer__Writer_write_fromReaderDefaultBufferSize_impl(io_Writer__Writer* this, io_Reader__Reader* source);
void io_Writer__Writer_close(io_Writer__Writer* this);
void io_Writer__Writer___defaults__(io_Writer__Writer* this);
void io_Writer__Writer___defaults___impl(io_Writer__Writer* this);
void io_Writer__Writer___load__();
void io_Writer_load();

#endif // ___io_Writer_fwd___
