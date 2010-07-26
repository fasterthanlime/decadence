/* io/Reader header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_Reader___
#define ___io_Reader___

#include <sdk/io/Reader-fwd.h>
#include <sdk/lang/types.h>

struct _io_Reader__Reader {
    struct _lang_types__Object __super__;
    lang_Numbers__Long marker;
};


struct _io_Reader__ReaderClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(io_Reader__Reader*);
    lang_Numbers__SizeT (*read)(io_Reader__Reader*, lang_String__Char*, lang_Numbers__Int, lang_Numbers__Int);
    lang_String__Char (*read_char)(io_Reader__Reader*);
    lang_String__String (*readUntil)(io_Reader__Reader*, lang_String__Char);
    void (*skipUntil)(io_Reader__Reader*, lang_String__Char);
    lang_String__String (*readLine)(io_Reader__Reader*);
    void (*skipLine)(io_Reader__Reader*);
    lang_types__Bool (*eachLine)(io_Reader__Reader*, lang_types__Closure);
    lang_String__Char (*peek)(io_Reader__Reader*);
    void (*skipWhile)(io_Reader__Reader*, lang_String__Char);
    lang_types__Bool (*hasNext__quest)(io_Reader__Reader*);
    void (*rewind)(io_Reader__Reader*, lang_Numbers__Int);
    lang_Numbers__Long (*mark)(io_Reader__Reader*);
    void (*reset)(io_Reader__Reader*, lang_Numbers__Long);
    void (*skip)(io_Reader__Reader*, lang_Numbers__Int);
    void (*close)(io_Reader__Reader*);
};


#ifdef OOC_FROM_C
#define Reader io_Reader__Reader
#define Reader_class() io_Reader__Reader_class()
#define ReaderClass io_Reader__ReaderClass
#define ReaderClass_class() io_Reader__ReaderClass_class()
#define Reader_init(_this_) io_Reader__Reader_init((void*) (_this_))
#define Reader_read(_this_, chars, offset, count) io_Reader__Reader_read((void*) (_this_), (void*) (chars), (offset), (count))
#define Reader_read_char(_this_) io_Reader__Reader_read_char((void*) (_this_))
#define Reader_readUntil(_this_, end) io_Reader__Reader_readUntil((void*) (_this_), (end))
#define Reader_skipUntil(_this_, end) io_Reader__Reader_skipUntil((void*) (_this_), (end))
#define Reader_readLine(_this_) io_Reader__Reader_readLine((void*) (_this_))
#define Reader_skipLine(_this_) io_Reader__Reader_skipLine((void*) (_this_))
#define Reader_eachLine(_this_, f) io_Reader__Reader_eachLine((void*) (_this_), (f))
#define Reader_peek(_this_) io_Reader__Reader_peek((void*) (_this_))
#define Reader_skipWhile(_this_, unwanted) io_Reader__Reader_skipWhile((void*) (_this_), (unwanted))
#define Reader_hasNext__quest(_this_) io_Reader__Reader_hasNext__quest((void*) (_this_))
#define Reader_rewind(_this_, offset) io_Reader__Reader_rewind((void*) (_this_), (offset))
#define Reader_mark(_this_) io_Reader__Reader_mark((void*) (_this_))
#define Reader_reset(_this_, marker) io_Reader__Reader_reset((void*) (_this_), (marker))
#define Reader_skip(_this_, offset) io_Reader__Reader_skip((void*) (_this_), (offset))
#define Reader_close(_this_) io_Reader__Reader_close((void*) (_this_))
#define Reader___defaults__(_this_) io_Reader__Reader___defaults__((void*) (_this_))
#define Reader___load__() io_Reader__Reader___load__()
#endif

#endif // ___io_Reader___
