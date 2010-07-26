/* lang/types header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_types___
#define ___lang_types___

#include <sdk/lang/types-fwd.h>

struct _lang_types__Object {
    lang_types__Class* class;
};


struct _lang_types__Class {
    struct _lang_types__Object __super__;
    lang_Numbers__SizeT instanceSize;
    lang_Numbers__SizeT size;
    lang_String__String name;
    lang_types__Class* super;
};


struct _lang_types__None {
    struct _lang_types__Object __super__;
};


struct _lang_types__Comparable {
    struct _lang_types__Object __super__;
};


struct _lang_types__Closure {
    lang_types__Pointer thunk;
    lang_types__Pointer context;
};

struct _lang_types__ObjectClass {
    struct _lang_types__Class __super__;
    void (*__defaults__)(lang_types__Object*);
    void (*__destroy__)(lang_types__Object*);
    lang_types__Bool (*instanceOf__quest)(lang_types__Object*, lang_types__Class*);
    void (*__load__)();
};


struct _lang_types__ClassClass {
    struct _lang_types__ObjectClass __super__;
    lang_types__Object* (*alloc__class)(lang_types__Class*);
    lang_types__Bool (*inheritsFrom__quest__class)(lang_types__Class*, lang_types__Class*);
};


struct _lang_types__ArrayClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__NoneClass {
    struct _lang_types__ClassClass __super__;
    lang_types__None* (*new)();
    void (*init)(lang_types__None*);
};


struct _lang_types__VoidClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__PointerClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String (*toString)(lang_types__Pointer);
};


struct _lang_types__BoolClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String (*toString)(lang_types__Bool);
};


struct _lang_types__ComparableClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int (*compareTo)(void*, lang_types__Class*, uint8_t*);
};


struct _lang_types__ClosureClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define Object lang_types__Object
#define Object_class() lang_types__Object_class()
#define ObjectClass lang_types__ObjectClass
#define ObjectClass_class() lang_types__ObjectClass_class()
#define Object___defaults__(_this_) lang_types__Object___defaults__((void*) (_this_))
#define Object___destroy__(_this_) lang_types__Object___destroy__((void*) (_this_))
#define Object_instanceOf__quest(_this_, T) lang_types__Object_instanceOf__quest((void*) (_this_), (void*) (T))
#define Object___load__() lang_types__Object___load__()
#define Class lang_types__Class
#define Class_class() lang_types__Class_class()
#define ClassClass lang_types__ClassClass
#define ClassClass_class() lang_types__ClassClass_class()
#define Class_alloc__class(_this_) (void*) lang_types__Class_alloc__class((void*) (_this_))
#define Class_inheritsFrom__quest__class(_this_, T) lang_types__Class_inheritsFrom__quest__class((void*) (_this_), (void*) (T))
#define Class___defaults__(_this_) lang_types__Class___defaults__((void*) (_this_))
#define Class___load__() lang_types__Class___load__()
#define Array lang_types__Array
#define Array_class() lang_types__Array_class()
#define ArrayClass lang_types__ArrayClass
#define ArrayClass_class() lang_types__ArrayClass_class()
#define Array_free(_this_) _lang_array__Array_free((void*) (_this_))
#define Array___load__() lang_types__Array___load__()
#define None lang_types__None
#define None_class() lang_types__None_class()
#define NoneClass lang_types__NoneClass
#define NoneClass_class() lang_types__NoneClass_class()
#define None_new() (void*) lang_types__None_new()
#define None_init(_this_) lang_types__None_init((void*) (_this_))
#define None___defaults__(_this_) lang_types__None___defaults__((void*) (_this_))
#define None___load__() lang_types__None___load__()
#define Void lang_types__Void
#define Void_class() lang_types__Void_class()
#define VoidClass lang_types__VoidClass
#define VoidClass_class() lang_types__VoidClass_class()
#define Void___load__() lang_types__Void___load__()
#define Pointer lang_types__Pointer
#define Pointer_class() lang_types__Pointer_class()
#define PointerClass lang_types__PointerClass
#define PointerClass_class() lang_types__PointerClass_class()
#define Pointer_toString(_this_) lang_types__Pointer_toString((void*) (_this_))
#define Pointer___load__() lang_types__Pointer___load__()
#define Bool lang_types__Bool
#define Bool_class() lang_types__Bool_class()
#define BoolClass lang_types__BoolClass
#define BoolClass_class() lang_types__BoolClass_class()
#define Bool_toString(_this_) lang_types__Bool_toString((void*) (_this_))
#define Bool___load__() lang_types__Bool___load__()
#define Comparable lang_types__Comparable
#define Comparable_class() lang_types__Comparable_class()
#define ComparableClass lang_types__ComparableClass
#define ComparableClass_class() lang_types__ComparableClass_class()
#define Comparable_compareTo(_this_, T, other) lang_types__Comparable_compareTo((void*) (_this_), (T), (other))
#define Closure lang_types__Closure
#define Closure_class() lang_types__Closure_class()
#define ClosureClass lang_types__ClosureClass
#define ClosureClass_class() lang_types__ClosureClass_class()
#define Closure___load__() lang_types__Closure___load__()
#endif

#endif // ___lang_types___
