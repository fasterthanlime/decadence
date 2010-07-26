/* lang/types source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/types.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


void lang_types__Object___defaults___impl(lang_types__Object* this) {
}

void lang_types__Object___destroy___impl(lang_types__Object* this) {
}

lang_types__Bool lang_types__Object_instanceOf__quest(lang_types__Object* this, lang_types__Class* T) {
    if (!this) {
        return false;
    }
    return lang_types__Class_inheritsFrom__quest__class((lang_types__Class*) this->class, T);
}

void lang_types__Object___defaults__(lang_types__Object* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}

void lang_types__Object___destroy__(lang_types__Object* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__destroy__((lang_types__Object*)this);
}
void lang_types__Object___load__() {
    
}

lang_types__ObjectClass *lang_types__Object_class(){
    static lang_types__ObjectClass class = 
    {
        {
            .instanceSize = sizeof(lang_types__Object),
            .size = sizeof(void*),
            .name = "Object",
        },
        .__defaults__ = lang_types__Object___defaults___impl,
        .__destroy__ = lang_types__Object___destroy___impl,
        .__load__ = lang_types__Object___load__,
    };
    return &class;
}

lang_types__Object* lang_types__Class_alloc__class(lang_types__Class* this) {
    lang_types__Object* object = ((lang_types__Object*) (GC_MALLOC(this->instanceSize)));
    if (object) {
        object->class = this;
    }
    return object;
}

lang_types__Bool lang_types__Class_inheritsFrom__quest__class(lang_types__Class* this, lang_types__Class* T) {
    if (this == T) {
        return true;
    }
    return (this->super ? lang_types__Class_inheritsFrom__quest__class((lang_types__Class*) this->super, T) : false);
}

void lang_types__Class___defaults___impl(lang_types__Class* this) {
    lang_types__Object___defaults___impl((lang_types__Object*) this);
}

void lang_types__Class___defaults__(lang_types__Class* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_types__Class___load__() {
    lang_types__Object___load__();
}

lang_types__ClassClass *lang_types__Class_class(){
    static lang_types__Bool __done__ = false;
    static lang_types__ClassClass class = 
    {
        {
            {
                .instanceSize = sizeof(lang_types__Class),
                .size = sizeof(void*),
                .name = "Class",
            },
            .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
            .__load__ = (void (*)()) lang_types__Class___load__,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void lang_types__Array___load__() {
    lang_types__Class___load__();
}

lang_types__ArrayClass *lang_types__Array_class(){
    static lang_types__ArrayClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Array),
                    .size = sizeof(lang_types__Array),
                    .name = "Array",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Array___load__,
            },
        },
    };
    return &class;
}

void lang_types__None_init(lang_types__None* this) {
}

void lang_types__None___defaults___impl(lang_types__None* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void lang_types__None___defaults__(lang_types__None* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_types__None* lang_types__None_new() {
    
    lang_types__None* this = ((lang_types__None*) (lang_types__Class_alloc__class((lang_types__Class*) lang_types__None_class())));
    lang_types__None___defaults__(this);
    lang_types__None_init((lang_types__None*) this);
    return this;
}
void lang_types__None___load__() {
    lang_types__Class___load__();
}

lang_types__NoneClass *lang_types__None_class(){
    static lang_types__Bool __done__ = false;
    static lang_types__NoneClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__None),
                    .size = sizeof(void*),
                    .name = "None",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__None___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__None___load__,
            },
        },
        .new = lang_types__None_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void lang_types__Void___load__() {
    lang_types__Class___load__();
}

lang_types__VoidClass *lang_types__Void_class(){
    static lang_types__VoidClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Void),
                    .size = sizeof(lang_types__Void),
                    .name = "Void",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Void___load__,
            },
        },
    };
    return &class;
}

lang_String__String lang_types__Pointer_toString(lang_types__Pointer this) {
    return lang_String__String_format("%p", this);
}
void lang_types__Pointer___load__() {
    lang_types__Class___load__();
}

lang_types__PointerClass *lang_types__Pointer_class(){
    static lang_types__PointerClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Pointer),
                    .size = sizeof(lang_types__Pointer),
                    .name = "Pointer",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Pointer___load__,
            },
        },
    };
    return &class;
}

lang_String__String lang_types__Bool_toString(lang_types__Bool this) {
    return this ? "true" : "false";
}
void lang_types__Bool___load__() {
    lang_types__Class___load__();
}

lang_types__BoolClass *lang_types__Bool_class(){
    static lang_types__BoolClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Bool),
                    .size = sizeof(lang_types__Bool),
                    .name = "Bool",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Bool___load__,
            },
        },
    };
    return &class;
}

lang_Numbers__Int lang_types__Comparable_compareTo(Comparable__reference this, lang_types__Class* T, uint8_t* other) {
    return (lang_Numbers__Int) this.impl->compareTo(this.obj, T, other);
}

lang_types__ComparableClass *lang_types__Comparable_class(){
    static lang_types__Bool __done__ = false;
    static lang_types__ComparableClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Comparable),
                    .size = sizeof(void*),
                    .name = "Comparable",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Class___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void lang_types__Closure___load__() {
    lang_types__Class___load__();
}

lang_types__ClosureClass *lang_types__Closure_class(){
    static lang_types__ClosureClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_types__Closure),
                    .size = sizeof(lang_types__Closure),
                    .name = "Closure",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_types__Closure___load__,
            },
        },
    };
    return &class;
}
void lang_types_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_Iterators_load();
        lang_String_load();
        lang_Exception_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        lang_types__Object___load__();
        lang_types__Class___load__();
        lang_types__Array___load__();
        lang_types__None___load__();
        lang_types__Void___load__();
        lang_types__Pointer___load__();
        lang_types__Bool___load__();
        lang_types__Class___load__();
        lang_types__Closure___load__();
    }
}

