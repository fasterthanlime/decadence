/* lang/Exception header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Exception___
#define ___lang_Exception___

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/types.h>

struct _lang_Exception__Exception {
    struct _lang_types__Object __super__;
    lang_types__Class* origin;
    lang_String__String msg;
};


struct _lang_Exception__ExceptionClass {
    struct _lang_types__ClassClass __super__;
    lang_Exception__Exception* (*new_originMsg)(lang_types__Class*, lang_String__String);
    void (*init_originMsg)(lang_Exception__Exception*, lang_types__Class*, lang_String__String);
    lang_Exception__Exception* (*new_noOrigin)(lang_String__String);
    void (*init_noOrigin)(lang_Exception__Exception*, lang_String__String);
    void (*crash)(lang_Exception__Exception*);
    lang_String__String (*getMessage)(lang_Exception__Exception*);
    void (*print)(lang_Exception__Exception*);
    void (*throw)(lang_Exception__Exception*);
};


#ifdef OOC_FROM_C
#define Exception lang_Exception__Exception
#define Exception_class() lang_Exception__Exception_class()
#define ExceptionClass lang_Exception__ExceptionClass
#define ExceptionClass_class() lang_Exception__ExceptionClass_class()
#define Exception_new_originMsg(origin, msg) (void*) lang_Exception__Exception_new_originMsg((void*) (origin), (msg))
#define Exception_init_originMsg(_this_, origin, msg) lang_Exception__Exception_init_originMsg((void*) (_this_), (void*) (origin), (msg))
#define Exception_new_noOrigin(msg) (void*) lang_Exception__Exception_new_noOrigin((msg))
#define Exception_init_noOrigin(_this_, msg) lang_Exception__Exception_init_noOrigin((void*) (_this_), (msg))
#define Exception_crash(_this_) lang_Exception__Exception_crash((void*) (_this_))
#define Exception_getMessage(_this_) lang_Exception__Exception_getMessage((void*) (_this_))
#define Exception_print(_this_) lang_Exception__Exception_print((void*) (_this_))
#define Exception_throw(_this_) lang_Exception__Exception_throw((void*) (_this_))
#define Exception___defaults__(_this_) lang_Exception__Exception___defaults__((void*) (_this_))
#define Exception___load__() lang_Exception__Exception___load__()
#endif

#endif // ___lang_Exception___
