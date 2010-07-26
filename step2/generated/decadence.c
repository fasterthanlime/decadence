/* decadence source file, generated with rock, the ooc compiler written in ooc */

#include <./decadence.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


void decadence__Parser_init(decadence__Parser* this) {
}

void decadence__Parser_parse_impl(decadence__Parser* this) {
    decadenceParse(this);
}

void gotLust_impl(decadence__Parser* this) {
    lang_String__String_println("Got lust!");
}

void decadence__Parser___defaults___impl(decadence__Parser* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void decadence__Parser_parse(decadence__Parser* this) {
    ((decadence__ParserClass *)((lang_types__Object *)this)->class)->parse((decadence__Parser*)this);
}

void gotLust(decadence__Parser* this) {
    ((decadence__ParserClass *)((lang_types__Object *)this)->class)->gotLust((decadence__Parser*)this);
}

void decadence__Parser___defaults__(decadence__Parser* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
decadence__Parser* decadence__Parser_new() {
    
    decadence__Parser* this = ((decadence__Parser*) (lang_types__Class_alloc__class((lang_types__Class*) decadence__Parser_class())));
    decadence__Parser___defaults__(this);
    decadence__Parser_init((decadence__Parser*) this);
    return this;
}
void decadence__Parser___load__() {
    lang_types__Class___load__();
}

decadence__ParserClass *decadence__Parser_class(){
    static lang_types__Bool __done__ = false;
    static decadence__ParserClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(decadence__Parser),
                    .size = sizeof(void*),
                    .name = "Parser",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) decadence__Parser___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) decadence__Parser___load__,
            },
        },
        .new = decadence__Parser_new,
        .parse = decadence__Parser_parse_impl,
        .gotLust = gotLust_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void decadence_load() {
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
        decadence__Parser___load__();
    }
}


lang_Numbers__Int main() {
    GC_INIT();
    decadence_load();
    decadence__Parser_parse(decadence__Parser_new());
    return 0;
}
