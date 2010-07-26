/* lang/types header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_types_fwd___
#define ___lang_types_fwd___

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "Array.h"

struct _lang_types__Object;
typedef struct _lang_types__Object lang_types__Object;
struct _lang_types__Class;
typedef struct _lang_types__Class lang_types__Class;
typedef _lang_array__Array lang_types__Array;
struct _lang_types__None;
typedef struct _lang_types__None lang_types__None;
typedef void lang_types__Void;
typedef void* lang_types__Pointer;
typedef bool lang_types__Bool;
struct _lang_types__Comparable;
typedef struct _lang_types__Comparable lang_types__Comparable;
typedef struct _Comparable__reference Comparable__reference;
typedef struct _lang_types__Closure lang_types__Closure;
struct _lang_types__ObjectClass;
typedef struct _lang_types__ObjectClass lang_types__ObjectClass;
struct _lang_types__ClassClass;
typedef struct _lang_types__ClassClass lang_types__ClassClass;
struct _lang_types__ArrayClass;
typedef struct _lang_types__ArrayClass lang_types__ArrayClass;
struct _lang_types__NoneClass;
typedef struct _lang_types__NoneClass lang_types__NoneClass;
struct _lang_types__VoidClass;
typedef struct _lang_types__VoidClass lang_types__VoidClass;
struct _lang_types__PointerClass;
typedef struct _lang_types__PointerClass lang_types__PointerClass;
struct _lang_types__BoolClass;
typedef struct _lang_types__BoolClass lang_types__BoolClass;
struct _lang_types__ComparableClass;
typedef struct _lang_types__ComparableClass lang_types__ComparableClass;
struct _lang_types__ClosureClass;
typedef struct _lang_types__ClosureClass lang_types__ClosureClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
struct _Comparable__reference {
    lang_types__ComparableClass* impl;
    lang_types__Object* obj;
};

lang_types__ObjectClass *lang_types__Object_class();
void lang_types__Object___defaults__(lang_types__Object* this);
void lang_types__Object___defaults___impl(lang_types__Object* this);
void lang_types__Object___destroy__(lang_types__Object* this);
void lang_types__Object___destroy___impl(lang_types__Object* this);
lang_types__Bool lang_types__Object_instanceOf__quest(lang_types__Object* this, lang_types__Class* T);
void lang_types__Object___load__();
lang_types__ClassClass *lang_types__Class_class();
lang_types__Object* lang_types__Class_alloc__class(lang_types__Class* this);
lang_types__Bool lang_types__Class_inheritsFrom__quest__class(lang_types__Class* this, lang_types__Class* T);
void lang_types__Class___defaults__(lang_types__Class* this);
void lang_types__Class___defaults___impl(lang_types__Class* this);
void lang_types__Class___load__();
lang_types__ArrayClass *lang_types__Array_class();
void lang_types__Array___load__();
lang_types__NoneClass *lang_types__None_class();
lang_types__None* lang_types__None_new();
void lang_types__None_init(lang_types__None* this);
void lang_types__None___defaults__(lang_types__None* this);
void lang_types__None___defaults___impl(lang_types__None* this);
void lang_types__None___load__();
lang_types__VoidClass *lang_types__Void_class();
void lang_types__Void___load__();
lang_types__PointerClass *lang_types__Pointer_class();
lang_String__String lang_types__Pointer_toString(lang_types__Pointer this);
void lang_types__Pointer___load__();
lang_types__BoolClass *lang_types__Bool_class();
lang_String__String lang_types__Bool_toString(lang_types__Bool this);
void lang_types__Bool___load__();
lang_types__ComparableClass *lang_types__Comparable_class();
lang_Numbers__Int lang_types__Comparable_compareTo(Comparable__reference this, lang_types__Class* T, uint8_t* other);
lang_types__ClosureClass *lang_types__Closure_class();
void lang_types__Closure___load__();
void lang_types_load();

#endif // ___lang_types_fwd___
