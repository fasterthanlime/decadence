/* structs/HashMap header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_HashMap___
#define ___structs_HashMap___

#include <sdk/structs/HashMap-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _structs_HashMap__HashEntry {
    lang_types__Pointer key;
    lang_types__Pointer value;
    structs_HashMap__HashEntry* next;
};

struct _structs_HashMap__HashMap {
    struct _lang_Iterators__BackIterable __super__;
    lang_types__Class* K;
    lang_types__Class* V;
    lang_Numbers__SizeT size;
    lang_Numbers__SizeT capacity;
    lang_types__Closure keyEquals;
    lang_types__Closure hashKey;
    _lang_array__Array buckets;
    structs_ArrayList__ArrayList* keys;
};


struct _structs_HashMap__HashMapValueIterator {
    struct _lang_Iterators__BackIterator __super__;
    lang_types__Class* K;
    structs_HashMap__HashMap* map;
    lang_Numbers__Int index;
};


struct _structs_HashMap__HashEntryClass {
    struct _lang_types__ClassClass __super__;
    structs_HashMap__HashEntry (*new_keyVal)(lang_types__Pointer, lang_types__Pointer);
    void (*init_keyVal)(structs_HashMap__HashEntry*, lang_types__Pointer, lang_types__Pointer);
};


struct _structs_HashMap__HashMapClass {
    struct _lang_Iterators__BackIterableClass __super__;
    structs_HashMap__HashMap* (*new)(lang_types__Class*, lang_types__Class*);
    structs_HashMap__HashMap* (*new_withCapacity)(lang_types__Class*, lang_types__Class*, lang_Numbers__SizeT);
    void (*init_withCapacity)(structs_HashMap__HashMap*, lang_Numbers__SizeT);
    lang_types__Bool (*getEntry)(structs_HashMap__HashMap*, uint8_t*, structs_HashMap__HashEntry*);
    lang_types__Bool (*getEntryForHash)(structs_HashMap__HashMap*, uint8_t*, lang_Numbers__SizeT, structs_HashMap__HashEntry*);
    lang_types__Bool (*put)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    lang_types__Bool (*add)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    void (*get)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    lang_types__Bool (*empty__quest)(structs_HashMap__HashMap*);
    lang_types__Bool (*contains__quest)(structs_HashMap__HashMap*, uint8_t*);
    lang_types__Bool (*remove)(structs_HashMap__HashMap*, uint8_t*);
    lang_types__Bool (*resize)(structs_HashMap__HashMap*, lang_Numbers__SizeT);
    void (*clear)(structs_HashMap__HashMap*);
    lang_Numbers__SizeT (*size)(structs_HashMap__HashMap*);
    structs_ArrayList__ArrayList* (*getKeys)(structs_HashMap__HashMap*);
    void (*each)(structs_HashMap__HashMap*, lang_types__Closure);
};


struct _structs_HashMap__HashMapValueIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    structs_HashMap__HashMapValueIterator* (*new_withMap)(lang_types__Class*, lang_types__Class*, structs_HashMap__HashMap*);
    void (*init_withMap)(structs_HashMap__HashMapValueIterator*, structs_HashMap__HashMap*);
    lang_types__Bool (*hasNext__quest)(structs_HashMap__HashMapValueIterator*);
    void (*next)(structs_HashMap__HashMapValueIterator*, uint8_t*);
    lang_types__Bool (*remove)(structs_HashMap__HashMapValueIterator*);
};


#ifdef OOC_FROM_C
#define stringEquals(K, k1, k2) structs_HashMap__stringEquals((K), (k1), (k2))
#define pointerEquals(K, k1, k2) structs_HashMap__pointerEquals((K), (k1), (k2))
#define intEquals(K, k1, k2) structs_HashMap__intEquals((K), (k1), (k2))
#define charEquals(K, k1, k2) structs_HashMap__charEquals((K), (k1), (k2))
#define genericEquals(K, k1, k2) structs_HashMap__genericEquals((K), (k1), (k2))
#define intHash(K, key) structs_HashMap__intHash((K), (key))
#define pointerHash(K, key) structs_HashMap__pointerHash((K), (key))
#define charHash(K, key) structs_HashMap__charHash((K), (key))
#define murmurHash(K, keyTagazok) structs_HashMap__murmurHash((K), (keyTagazok))
#define ac_X31_hash(K, key) structs_HashMap__ac_X31_hash((K), (key))
#define getStandardEquals(T, T) structs_HashMap__getStandardEquals((T), (void*) (T))
#define HashEntry structs_HashMap__HashEntry
#define HashEntry_class() structs_HashMap__HashEntry_class()
#define HashEntryClass structs_HashMap__HashEntryClass
#define HashEntryClass_class() structs_HashMap__HashEntryClass_class()
#define HashEntry_new_keyVal(key, value) structs_HashMap__HashEntry_new_keyVal((void*) (key), (void*) (value))
#define HashEntry_init_keyVal(_this_, key, value) structs_HashMap__HashEntry_init_keyVal((void*) (_this_), (void*) (key), (void*) (value))
#define HashEntry___load__() structs_HashMap__HashEntry___load__()
#define HashMap structs_HashMap__HashMap
#define HashMap_class() structs_HashMap__HashMap_class()
#define HashMapClass structs_HashMap__HashMapClass
#define HashMapClass_class() structs_HashMap__HashMapClass_class()
#define HashMap_new(K, V) (void*) structs_HashMap__HashMap_new((K), (V))
#define HashMap_init(_this_) structs_HashMap__HashMap_init((void*) (_this_))
#define HashMap_new_withCapacity(K, V, capaArg) (void*) structs_HashMap__HashMap_new_withCapacity((K), (V), (capaArg))
#define HashMap_init_withCapacity(_this_, capaArg) structs_HashMap__HashMap_init_withCapacity((void*) (_this_), (capaArg))
#define HashMap_getEntry(_this_, key, result) structs_HashMap__HashMap_getEntry((void*) (_this_), (key), (void*) (result))
#define HashMap_getEntryForHash(_this_, key, hash, result) structs_HashMap__HashMap_getEntryForHash((void*) (_this_), (key), (hash), (void*) (result))
#define HashMap_put(_this_, key, value) structs_HashMap__HashMap_put((void*) (_this_), (key), (value))
#define HashMap_add(_this_, key, value) structs_HashMap__HashMap_add((void*) (_this_), (key), (value))
#define HashMap_get(_this_, __genericReturn29, key) structs_HashMap__HashMap_get((void*) (_this_), (__genericReturn29), (key))
#define HashMap_empty__quest(_this_) structs_HashMap__HashMap_empty__quest((void*) (_this_))
#define HashMap_contains__quest(_this_, key) structs_HashMap__HashMap_contains__quest((void*) (_this_), (key))
#define HashMap_remove(_this_, key) structs_HashMap__HashMap_remove((void*) (_this_), (key))
#define HashMap_resize(_this_, _capacity) structs_HashMap__HashMap_resize((void*) (_this_), (_capacity))
#define HashMap_iterator(_this_) (void*) structs_HashMap__HashMap_iterator((void*) (_this_))
#define HashMap_backIterator(_this_) (void*) structs_HashMap__HashMap_backIterator((void*) (_this_))
#define HashMap_clear(_this_) structs_HashMap__HashMap_clear((void*) (_this_))
#define HashMap_size(_this_) structs_HashMap__HashMap_size((void*) (_this_))
#define HashMap_getKeys(_this_) (void*) structs_HashMap__HashMap_getKeys((void*) (_this_))
#define HashMap_each(_this_, f) structs_HashMap__HashMap_each((void*) (_this_), (f))
#define HashMap___defaults__(_this_) structs_HashMap__HashMap___defaults__((void*) (_this_))
#define HashMap___load__() structs_HashMap__HashMap___load__()
#define HashMapValueIterator structs_HashMap__HashMapValueIterator
#define HashMapValueIterator_class() structs_HashMap__HashMapValueIterator_class()
#define HashMapValueIteratorClass structs_HashMap__HashMapValueIteratorClass
#define HashMapValueIteratorClass_class() structs_HashMap__HashMapValueIteratorClass_class()
#define HashMapValueIterator_new_withMap(K, T, map) (void*) structs_HashMap__HashMapValueIterator_new_withMap((K), (T), (void*) (map))
#define HashMapValueIterator_init_withMap(_this_, map) structs_HashMap__HashMapValueIterator_init_withMap((void*) (_this_), (void*) (map))
#define HashMapValueIterator_hasNext__quest(_this_) structs_HashMap__HashMapValueIterator_hasNext__quest((void*) (_this_))
#define HashMapValueIterator_next(_this_, __genericReturn32) structs_HashMap__HashMapValueIterator_next((void*) (_this_), (__genericReturn32))
#define HashMapValueIterator_hasPrev__quest(_this_) structs_HashMap__HashMapValueIterator_hasPrev__quest((void*) (_this_))
#define HashMapValueIterator_prev(_this_, __genericReturn33) structs_HashMap__HashMapValueIterator_prev((void*) (_this_), (__genericReturn33))
#define HashMapValueIterator_remove(_this_) structs_HashMap__HashMapValueIterator_remove((void*) (_this_))
#define HashMapValueIterator___defaults__(_this_) structs_HashMap__HashMapValueIterator___defaults__((void*) (_this_))
#define HashMapValueIterator___load__() structs_HashMap__HashMapValueIterator___load__()
#endif

#endif // ___structs_HashMap___
