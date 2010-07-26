/* lang/Iterators header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Iterators___
#define ___lang_Iterators___

#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/types.h>

struct _lang_Iterators__Iterable {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
};


struct _lang_Iterators__BackIterable {
    struct _lang_Iterators__Iterable __super__;
};


struct _lang_Iterators__Iterator {
    struct _lang_Iterators__Iterable __super__;
};


struct _lang_Iterators__BackIterator {
    struct _lang_Iterators__Iterator __super__;
};


struct _lang_Iterators__ReverseIterator {
    struct _lang_Iterators__BackIterator __super__;
    lang_Iterators__BackIterator* iterator;
};


struct _lang_Iterators__IterableClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(lang_Iterators__Iterable*);
    lang_Iterators__Iterator* (*iterator)(lang_Iterators__Iterable*);
    structs_ArrayList__ArrayList* (*toList)(lang_Iterators__Iterable*);
    void (*reduce)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure);
    void (*each)(lang_Iterators__Iterable*, lang_types__Closure);
};


struct _lang_Iterators__BackIterableClass {
    struct _lang_Iterators__IterableClass __super__;
    lang_Iterators__BackIterator* (*backIterator)(lang_Iterators__BackIterable*);
    lang_Iterators__BackIterator* (*forward)(lang_Iterators__BackIterable*);
    lang_Iterators__BackIterator* (*backward)(lang_Iterators__BackIterable*);
};


struct _lang_Iterators__IteratorClass {
    struct _lang_Iterators__IterableClass __super__;
    lang_types__Bool (*hasNext__quest)(lang_Iterators__Iterator*);
    void (*next)(lang_Iterators__Iterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_Iterators__Iterator*);
};


struct _lang_Iterators__BackIteratorClass {
    struct _lang_Iterators__IteratorClass __super__;
    lang_types__Bool (*hasPrev__quest)(lang_Iterators__BackIterator*);
    void (*prev)(lang_Iterators__BackIterator*, uint8_t*);
    lang_Iterators__ReverseIterator* (*reversed)(lang_Iterators__BackIterator*);
};


struct _lang_Iterators__ReverseIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    lang_Iterators__ReverseIterator* (*new)(lang_types__Class*);
    lang_types__Bool (*hasNext__quest)(lang_Iterators__ReverseIterator*);
    void (*next)(lang_Iterators__ReverseIterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_Iterators__ReverseIterator*);
};


#ifdef OOC_FROM_C
#define Iterable lang_Iterators__Iterable
#define Iterable_class() lang_Iterators__Iterable_class()
#define IterableClass lang_Iterators__IterableClass
#define IterableClass_class() lang_Iterators__IterableClass_class()
#define Iterable_init(_this_) lang_Iterators__Iterable_init((void*) (_this_))
#define Iterable_iterator(_this_) (void*) lang_Iterators__Iterable_iterator((void*) (_this_))
#define Iterable_toList(_this_) (void*) lang_Iterators__Iterable_toList((void*) (_this_))
#define Iterable_reduce(_this_, __genericReturn1, f) lang_Iterators__Iterable_reduce((void*) (_this_), (__genericReturn1), (f))
#define Iterable_each(_this_, f) lang_Iterators__Iterable_each((void*) (_this_), (f))
#define Iterable___defaults__(_this_) lang_Iterators__Iterable___defaults__((void*) (_this_))
#define Iterable___load__() lang_Iterators__Iterable___load__()
#define BackIterable lang_Iterators__BackIterable
#define BackIterable_class() lang_Iterators__BackIterable_class()
#define BackIterableClass lang_Iterators__BackIterableClass
#define BackIterableClass_class() lang_Iterators__BackIterableClass_class()
#define BackIterable_init(_this_) lang_Iterators__BackIterable_init((void*) (_this_))
#define BackIterable_iterator(_this_) (void*) lang_Iterators__BackIterable_iterator((void*) (_this_))
#define BackIterable_backIterator(_this_) (void*) lang_Iterators__BackIterable_backIterator((void*) (_this_))
#define BackIterable_forward(_this_) (void*) lang_Iterators__BackIterable_forward((void*) (_this_))
#define BackIterable_backward(_this_) (void*) lang_Iterators__BackIterable_backward((void*) (_this_))
#define BackIterable___defaults__(_this_) lang_Iterators__BackIterable___defaults__((void*) (_this_))
#define BackIterable___load__() lang_Iterators__BackIterable___load__()
#define Iterator lang_Iterators__Iterator
#define Iterator_class() lang_Iterators__Iterator_class()
#define IteratorClass lang_Iterators__IteratorClass
#define IteratorClass_class() lang_Iterators__IteratorClass_class()
#define Iterator_init(_this_) lang_Iterators__Iterator_init((void*) (_this_))
#define Iterator_hasNext__quest(_this_) lang_Iterators__Iterator_hasNext__quest((void*) (_this_))
#define Iterator_next(_this_, __genericReturn5) lang_Iterators__Iterator_next((void*) (_this_), (__genericReturn5))
#define Iterator_remove(_this_) lang_Iterators__Iterator_remove((void*) (_this_))
#define Iterator_iterator(_this_) (void*) lang_Iterators__Iterator_iterator((void*) (_this_))
#define Iterator___defaults__(_this_) lang_Iterators__Iterator___defaults__((void*) (_this_))
#define Iterator___load__() lang_Iterators__Iterator___load__()
#define BackIterator lang_Iterators__BackIterator
#define BackIterator_class() lang_Iterators__BackIterator_class()
#define BackIteratorClass lang_Iterators__BackIteratorClass
#define BackIteratorClass_class() lang_Iterators__BackIteratorClass_class()
#define BackIterator_init(_this_) lang_Iterators__BackIterator_init((void*) (_this_))
#define BackIterator_hasPrev__quest(_this_) lang_Iterators__BackIterator_hasPrev__quest((void*) (_this_))
#define BackIterator_prev(_this_, __genericReturn6) lang_Iterators__BackIterator_prev((void*) (_this_), (__genericReturn6))
#define BackIterator_iterator(_this_) (void*) lang_Iterators__BackIterator_iterator((void*) (_this_))
#define BackIterator_reversed(_this_) (void*) lang_Iterators__BackIterator_reversed((void*) (_this_))
#define BackIterator___defaults__(_this_) lang_Iterators__BackIterator___defaults__((void*) (_this_))
#define BackIterator___load__() lang_Iterators__BackIterator___load__()
#define ReverseIterator lang_Iterators__ReverseIterator
#define ReverseIterator_class() lang_Iterators__ReverseIterator_class()
#define ReverseIteratorClass lang_Iterators__ReverseIteratorClass
#define ReverseIteratorClass_class() lang_Iterators__ReverseIteratorClass_class()
#define ReverseIterator_new(T) (void*) lang_Iterators__ReverseIterator_new((T))
#define ReverseIterator_init(_this_) lang_Iterators__ReverseIterator_init((void*) (_this_))
#define ReverseIterator_hasNext__quest(_this_) lang_Iterators__ReverseIterator_hasNext__quest((void*) (_this_))
#define ReverseIterator_next(_this_, __genericReturn7) lang_Iterators__ReverseIterator_next((void*) (_this_), (__genericReturn7))
#define ReverseIterator_hasPrev__quest(_this_) lang_Iterators__ReverseIterator_hasPrev__quest((void*) (_this_))
#define ReverseIterator_prev(_this_, __genericReturn8) lang_Iterators__ReverseIterator_prev((void*) (_this_), (__genericReturn8))
#define ReverseIterator_remove(_this_) lang_Iterators__ReverseIterator_remove((void*) (_this_))
#define ReverseIterator_reversed(_this_) (void*) lang_Iterators__ReverseIterator_reversed((void*) (_this_))
#define ReverseIterator_iterator(_this_) (void*) lang_Iterators__ReverseIterator_iterator((void*) (_this_))
#define ReverseIterator___defaults__(_this_) lang_Iterators__ReverseIterator___defaults__((void*) (_this_))
#define ReverseIterator___load__() lang_Iterators__ReverseIterator___load__()
#endif

#endif // ___lang_Iterators___
