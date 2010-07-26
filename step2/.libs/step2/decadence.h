/* decadence header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___decadence___
#define ___decadence___

#include <./decadence-fwd.h>
#include <sdk/lang/types.h>

struct _decadence__Parser {
    struct _lang_types__Object __super__;
};


struct _decadence__ParserClass {
    struct _lang_types__ClassClass __super__;
    decadence__Parser* (*new)();
    void (*init)(decadence__Parser*);
    void (*parse)(decadence__Parser*);
    void (*gotLust)(decadence__Parser*);
};


#ifdef OOC_FROM_C
#define Parser decadence__Parser
#define Parser_class() decadence__Parser_class()
#define ParserClass decadence__ParserClass
#define ParserClass_class() decadence__ParserClass_class()
#define Parser_new() (void*) decadence__Parser_new()
#define Parser_init(_this_) decadence__Parser_init((void*) (_this_))
#define Parser_parse(_this_) decadence__Parser_parse((void*) (_this_))
#define Parser___defaults__(_this_) decadence__Parser___defaults__((void*) (_this_))
#define Parser___load__() decadence__Parser___load__()
#endif

#endif // ___decadence___
