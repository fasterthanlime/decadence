/* structs/ArrayList header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_ArrayList___
#define ___structs_ArrayList___

#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>
#include <sdk/structs/List.h>

struct _structs_ArrayList__ArrayList {
    struct _structs_List__List __super__;
    uint8_t* data;
    lang_Numbers__Int capacity;
    lang_Numbers__Int size;
};


struct _structs_ArrayList__ArrayListIterator {
    struct _lang_Iterators__BackIterator __super__;
    structs_ArrayList__ArrayList* list;
    lang_Numbers__Int index;
};


struct _structs_ArrayList__ArrayListClass {
    struct _structs_List__ListClass __super__;
    structs_ArrayList__ArrayList* (*new)(lang_types__Class*);
    structs_ArrayList__ArrayList* (*new_withCapacity)(lang_types__Class*, lang_Numbers__Int);
    void (*init_withCapacity)(structs_ArrayList__ArrayList*, lang_Numbers__Int);
    structs_ArrayList__ArrayList* (*new_withData)(lang_types__Class*, uint8_t*, lang_Numbers__Int);
    void (*init_withData)(structs_ArrayList__ArrayList*, uint8_t*, lang_Numbers__Int);
    void (*sort)(structs_ArrayList__ArrayList*, lang_types__Closure);
    void (*ensureCapacity)(structs_ArrayList__ArrayList*, lang_Numbers__Int);
    void (*checkIndex)(structs_ArrayList__ArrayList*, lang_Numbers__Int);
    lang_Iterators__BackIterator* (*backIterator)(structs_ArrayList__ArrayList*);
};


struct _structs_ArrayList__ArrayListIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    structs_ArrayList__ArrayListIterator* (*new_iter)(lang_types__Class*, structs_ArrayList__ArrayList*);
    void (*init_iter)(structs_ArrayList__ArrayListIterator*, structs_ArrayList__ArrayList*);
    lang_types__Bool (*hasNext__quest)(structs_ArrayList__ArrayListIterator*);
    void (*next)(structs_ArrayList__ArrayListIterator*, uint8_t*);
    lang_types__Bool (*remove)(structs_ArrayList__ArrayListIterator*);
};


#ifdef OOC_FROM_C
#define ArrayList structs_ArrayList__ArrayList
#define ArrayList_class() structs_ArrayList__ArrayList_class()
#define ArrayListClass structs_ArrayList__ArrayListClass
#define ArrayListClass_class() structs_ArrayList__ArrayListClass_class()
#define ArrayList_new(T) (void*) structs_ArrayList__ArrayList_new((T))
#define ArrayList_init(_this_) structs_ArrayList__ArrayList_init((void*) (_this_))
#define ArrayList_new_withCapacity(T, capacity) (void*) structs_ArrayList__ArrayList_new_withCapacity((T), (capacity))
#define ArrayList_init_withCapacity(_this_, capacity) structs_ArrayList__ArrayList_init_withCapacity((void*) (_this_), (capacity))
#define ArrayList_new_withData(T, data, size) (void*) structs_ArrayList__ArrayList_new_withData((T), (void*) (data), (size))
#define ArrayList_init_withData(_this_, data, size) structs_ArrayList__ArrayList_init_withData((void*) (_this_), (void*) (data), (size))
#define ArrayList_add(_this_, element) structs_ArrayList__ArrayList_add((void*) (_this_), (element))
#define ArrayList_add_withIndex(_this_, index, element) structs_ArrayList__ArrayList_add_withIndex((void*) (_this_), (index), (element))
#define ArrayList_clear(_this_) structs_ArrayList__ArrayList_clear((void*) (_this_))
#define ArrayList_get(_this_, __genericReturn22, index) structs_ArrayList__ArrayList_get((void*) (_this_), (__genericReturn22), (index))
#define ArrayList_indexOf(_this_, element) structs_ArrayList__ArrayList_indexOf((void*) (_this_), (element))
#define ArrayList_lastIndexOf(_this_, element) structs_ArrayList__ArrayList_lastIndexOf((void*) (_this_), (element))
#define ArrayList_removeAt(_this_, __genericReturn23, index) structs_ArrayList__ArrayList_removeAt((void*) (_this_), (__genericReturn23), (index))
#define ArrayList_sort(_this_, greaterThan) structs_ArrayList__ArrayList_sort((void*) (_this_), (greaterThan))
#define ArrayList_remove(_this_, element) structs_ArrayList__ArrayList_remove((void*) (_this_), (element))
#define ArrayList_set(_this_, __genericReturn24, index, element) structs_ArrayList__ArrayList_set((void*) (_this_), (__genericReturn24), (index), (element))
#define ArrayList_size(_this_) structs_ArrayList__ArrayList_size((void*) (_this_))
#define ArrayList_ensureCapacity(_this_, newSize) structs_ArrayList__ArrayList_ensureCapacity((void*) (_this_), (newSize))
#define ArrayList_checkIndex(_this_, index) structs_ArrayList__ArrayList_checkIndex((void*) (_this_), (index))
#define ArrayList_iterator(_this_) (void*) structs_ArrayList__ArrayList_iterator((void*) (_this_))
#define ArrayList_backIterator(_this_) (void*) structs_ArrayList__ArrayList_backIterator((void*) (_this_))
#define ArrayList_clone(_this_) (void*) structs_ArrayList__ArrayList_clone((void*) (_this_))
#define ArrayList_emptyClone(_this_, K) (void*) structs_ArrayList__ArrayList_emptyClone((void*) (_this_), (K))
#define ArrayList_toArray(_this_) (void*) structs_ArrayList__ArrayList_toArray((void*) (_this_))
#define ArrayList___defaults__(_this_) structs_ArrayList__ArrayList___defaults__((void*) (_this_))
#define ArrayList___load__() structs_ArrayList__ArrayList___load__()
#define ArrayListIterator structs_ArrayList__ArrayListIterator
#define ArrayListIterator_class() structs_ArrayList__ArrayListIterator_class()
#define ArrayListIteratorClass structs_ArrayList__ArrayListIteratorClass
#define ArrayListIteratorClass_class() structs_ArrayList__ArrayListIteratorClass_class()
#define ArrayListIterator_new_iter(T, list) (void*) structs_ArrayList__ArrayListIterator_new_iter((T), (void*) (list))
#define ArrayListIterator_init_iter(_this_, list) structs_ArrayList__ArrayListIterator_init_iter((void*) (_this_), (void*) (list))
#define ArrayListIterator_hasNext__quest(_this_) structs_ArrayList__ArrayListIterator_hasNext__quest((void*) (_this_))
#define ArrayListIterator_next(_this_, __genericReturn25) structs_ArrayList__ArrayListIterator_next((void*) (_this_), (__genericReturn25))
#define ArrayListIterator_hasPrev__quest(_this_) structs_ArrayList__ArrayListIterator_hasPrev__quest((void*) (_this_))
#define ArrayListIterator_prev(_this_, __genericReturn26) structs_ArrayList__ArrayListIterator_prev((void*) (_this_), (__genericReturn26))
#define ArrayListIterator_remove(_this_) structs_ArrayList__ArrayListIterator_remove((void*) (_this_))
#define ArrayListIterator___defaults__(_this_) structs_ArrayList__ArrayListIterator___defaults__((void*) (_this_))
#define ArrayListIterator___load__() structs_ArrayList__ArrayListIterator___load__()
#endif

#endif // ___structs_ArrayList___
