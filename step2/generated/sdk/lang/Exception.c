/* lang/Exception source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Exception.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


void lang_Exception__Exception_init_originMsg(lang_Exception__Exception* this, lang_types__Class* origin, lang_String__String msg) {
    this->msg = msg;
    this->origin = origin;
}

void lang_Exception__Exception_init_noOrigin(lang_Exception__Exception* this, lang_String__String msg) {
    this->msg = msg;
}

void lang_Exception__Exception_crash_impl(lang_Exception__Exception* this) {
    fflush(stdout);
    lang_Numbers__Int x = 0;
    x = 1 / x;
    printf("%d", x);
}

lang_String__String lang_Exception__Exception_getMessage_impl(lang_Exception__Exception* this) {
    lang_Numbers__Int max = 1024;
    lang_String__String buffer = ((lang_String__String) (GC_MALLOC(max)));
    if (this->origin) {
        snprintf(buffer, max, "[%s in %s]: %s\n", ((lang_types__Object*) (this))->class->name, this->origin->name, this->msg);
    }
    else {
        snprintf(buffer, max, "[%s]: %s\n", ((lang_types__Object*) (this))->class->name, this->msg);
    }
    return buffer;
}

void lang_Exception__Exception_print_impl(lang_Exception__Exception* this) {
    fprintf(stderr, "%s", lang_Exception__Exception_getMessage(this));
}

void lang_Exception__Exception_throw_impl(lang_Exception__Exception* this) {
    lang_Exception__Exception_print(this);
    lang_Exception__Exception_crash(this);
}

void lang_Exception__Exception___defaults___impl(lang_Exception__Exception* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void lang_Exception__Exception_crash(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->crash((lang_Exception__Exception*)this);
}

lang_String__String lang_Exception__Exception_getMessage(lang_Exception__Exception* this) {
    return (lang_String__String) ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->getMessage((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_print(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->print((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_throw(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->throw((lang_Exception__Exception*)this);
}

void lang_Exception__Exception___defaults__(lang_Exception__Exception* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__Exception* lang_Exception__Exception_new_originMsg(lang_types__Class* origin, lang_String__String msg) {
    
    lang_Exception__Exception* this = ((lang_Exception__Exception*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__Exception_class())));
    lang_Exception__Exception___defaults__(this);
    lang_Exception__Exception_init_originMsg((lang_Exception__Exception*) this, origin, msg);
    return this;
}
lang_Exception__Exception* lang_Exception__Exception_new_noOrigin(lang_String__String msg) {
    
    lang_Exception__Exception* this = ((lang_Exception__Exception*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__Exception_class())));
    lang_Exception__Exception___defaults__(this);
    lang_Exception__Exception_init_noOrigin((lang_Exception__Exception*) this, msg);
    return this;
}
void lang_Exception__Exception___load__() {
    lang_types__Class___load__();
}

lang_Exception__ExceptionClass *lang_Exception__Exception_class(){
    static lang_types__Bool __done__ = false;
    static lang_Exception__ExceptionClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__Exception),
                    .size = sizeof(void*),
                    .name = "Exception",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_Exception__Exception___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Exception__Exception___load__,
            },
        },
        .new_originMsg = lang_Exception__Exception_new_originMsg,
        .new_noOrigin = lang_Exception__Exception_new_noOrigin,
        .crash = lang_Exception__Exception_crash_impl,
        .getMessage = lang_Exception__Exception_getMessage_impl,
        .print = lang_Exception__Exception_print_impl,
        .throw = lang_Exception__Exception_throw_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void lang_Exception_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_Iterators_load();
        lang_String_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        lang_Exception__Exception___load__();
    }
}

