/* structs/HashMap header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_HashMap_fwd___
#define ___structs_HashMap_fwd___

typedef struct _structs_HashMap__HashEntry structs_HashMap__HashEntry;
struct _structs_HashMap__HashMap;
typedef struct _structs_HashMap__HashMap structs_HashMap__HashMap;
struct _structs_HashMap__HashMapValueIterator;
typedef struct _structs_HashMap__HashMapValueIterator structs_HashMap__HashMapValueIterator;
struct _structs_HashMap__HashEntryClass;
typedef struct _structs_HashMap__HashEntryClass structs_HashMap__HashEntryClass;
struct _structs_HashMap__HashMapClass;
typedef struct _structs_HashMap__HashMapClass structs_HashMap__HashMapClass;
struct _structs_HashMap__HashMapValueIteratorClass;
typedef struct _structs_HashMap__HashMapValueIteratorClass structs_HashMap__HashMapValueIteratorClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>

#ifndef __FUNC___K_K_K_Bool__DEFINE
#define __FUNC___K_K_K_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___K_K_K_Bool)(lang_types__Class*, uint8_t*, uint8_t*, void*);

#endif


#ifndef __FUNC___K_K_SizeT__DEFINE
#define __FUNC___K_K_SizeT__DEFINE

typedef lang_Numbers__SizeT (*__FUNC___K_K_SizeT)(lang_types__Class*, uint8_t*, void*);

#endif


#ifndef __FUNC___K_V__DEFINE
#define __FUNC___K_V__DEFINE

typedef void (*__FUNC___K_V)(uint8_t*, uint8_t*, void*);

#endif


#ifndef __FUNC___T_T_T_Bool__DEFINE
#define __FUNC___T_T_T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_T_T_Bool)(lang_types__Class*, uint8_t*, uint8_t*, void*);

#endif

structs_HashMap__HashEntryClass *structs_HashMap__HashEntry_class();
structs_HashMap__HashEntry structs_HashMap__HashEntry_new_keyVal(lang_types__Pointer key, lang_types__Pointer value);
void structs_HashMap__HashEntry_init_keyVal(structs_HashMap__HashEntry* this, lang_types__Pointer key, lang_types__Pointer value);
void structs_HashMap__HashEntry___load__();
structs_HashMap__HashMapClass *structs_HashMap__HashMap_class();
structs_HashMap__HashMap* structs_HashMap__HashMap_new(lang_types__Class* K, lang_types__Class* V);
void structs_HashMap__HashMap_init(structs_HashMap__HashMap* this);
structs_HashMap__HashMap* structs_HashMap__HashMap_new_withCapacity(lang_types__Class* K, lang_types__Class* V, lang_Numbers__SizeT capaArg);
void structs_HashMap__HashMap_init_withCapacity(structs_HashMap__HashMap* this, lang_Numbers__SizeT capaArg);
lang_types__Bool structs_HashMap__HashMap_getEntry(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result);
lang_types__Bool structs_HashMap__HashMap_getEntry_impl(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result);
lang_types__Bool structs_HashMap__HashMap_getEntryForHash(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result);
lang_types__Bool structs_HashMap__HashMap_getEntryForHash_impl(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result);
lang_types__Bool structs_HashMap__HashMap_put(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value);
lang_types__Bool structs_HashMap__HashMap_put_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value);
lang_types__Bool structs_HashMap__HashMap_add(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value);
lang_types__Bool structs_HashMap__HashMap_add_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value);
void structs_HashMap__HashMap_get(structs_HashMap__HashMap* this, uint8_t* __genericReturn29, uint8_t* key);
void structs_HashMap__HashMap_get_impl(structs_HashMap__HashMap* this, uint8_t* __genericReturn29, uint8_t* key);
lang_types__Bool structs_HashMap__HashMap_empty__quest(structs_HashMap__HashMap* this);
lang_types__Bool structs_HashMap__HashMap_empty__quest_impl(structs_HashMap__HashMap* this);
lang_types__Bool structs_HashMap__HashMap_contains__quest(structs_HashMap__HashMap* this, uint8_t* key);
lang_types__Bool structs_HashMap__HashMap_contains__quest_impl(structs_HashMap__HashMap* this, uint8_t* key);
lang_types__Bool structs_HashMap__HashMap_remove(structs_HashMap__HashMap* this, uint8_t* key);
lang_types__Bool structs_HashMap__HashMap_remove_impl(structs_HashMap__HashMap* this, uint8_t* key);
lang_types__Bool structs_HashMap__HashMap_resize(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity);
lang_types__Bool structs_HashMap__HashMap_resize_impl(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity);
lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator(structs_HashMap__HashMap* this);
lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator_impl(structs_HashMap__HashMap* this);
lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator(structs_HashMap__HashMap* this);
lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator_impl(structs_HashMap__HashMap* this);
void structs_HashMap__HashMap_clear(structs_HashMap__HashMap* this);
void structs_HashMap__HashMap_clear_impl(structs_HashMap__HashMap* this);
lang_Numbers__SizeT structs_HashMap__HashMap_size(structs_HashMap__HashMap* this);
lang_Numbers__SizeT structs_HashMap__HashMap_size_impl(structs_HashMap__HashMap* this);
structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys(structs_HashMap__HashMap* this);
structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys_impl(structs_HashMap__HashMap* this);
void structs_HashMap__HashMap_each(structs_HashMap__HashMap* this, lang_types__Closure f);
void structs_HashMap__HashMap_each_impl(structs_HashMap__HashMap* this, lang_types__Closure f);
void structs_HashMap__HashMap___defaults__(structs_HashMap__HashMap* this);
void structs_HashMap__HashMap___defaults___impl(structs_HashMap__HashMap* this);
void structs_HashMap__HashMap___load__();
structs_HashMap__HashMapValueIteratorClass *structs_HashMap__HashMapValueIterator_class();
structs_HashMap__HashMapValueIterator* structs_HashMap__HashMapValueIterator_new_withMap(lang_types__Class* K, lang_types__Class* T, structs_HashMap__HashMap* map);
void structs_HashMap__HashMapValueIterator_init_withMap(structs_HashMap__HashMapValueIterator* this, structs_HashMap__HashMap* map);
lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest(structs_HashMap__HashMapValueIterator* this);
lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest_impl(structs_HashMap__HashMapValueIterator* this);
void structs_HashMap__HashMapValueIterator_next(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn32);
void structs_HashMap__HashMapValueIterator_next_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn32);
lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest(structs_HashMap__HashMapValueIterator* this);
lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest_impl(structs_HashMap__HashMapValueIterator* this);
void structs_HashMap__HashMapValueIterator_prev(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn33);
void structs_HashMap__HashMapValueIterator_prev_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn33);
lang_types__Bool structs_HashMap__HashMapValueIterator_remove(structs_HashMap__HashMapValueIterator* this);
lang_types__Bool structs_HashMap__HashMapValueIterator_remove_impl(structs_HashMap__HashMapValueIterator* this);
void structs_HashMap__HashMapValueIterator___defaults__(structs_HashMap__HashMapValueIterator* this);
void structs_HashMap__HashMapValueIterator___defaults___impl(structs_HashMap__HashMapValueIterator* this);
void structs_HashMap__HashMapValueIterator___load__();
extern structs_HashMap__HashEntry structs_HashMap__nullHashEntry;
void structs_HashMap_load();
lang_types__Bool structs_HashMap__stringEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2);
lang_types__Bool structs_HashMap__pointerEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2);
lang_types__Bool structs_HashMap__intEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2);
lang_types__Bool structs_HashMap__charEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2);
lang_types__Bool structs_HashMap__genericEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2);
lang_Numbers__SizeT structs_HashMap__intHash(lang_types__Class* K, uint8_t* key);
lang_Numbers__SizeT structs_HashMap__pointerHash(lang_types__Class* K, uint8_t* key);
lang_Numbers__SizeT structs_HashMap__charHash(lang_types__Class* K, uint8_t* key);
lang_Numbers__SizeT structs_HashMap__murmurHash(lang_types__Class* K, uint8_t* keyTagazok);
lang_Numbers__SizeT structs_HashMap__ac_X31_hash(lang_types__Class* K, uint8_t* key);
lang_types__Closure structs_HashMap__getStandardEquals(lang_types__Class* T);
void structs_HashMap____OP_IDX_HashMap_K__V(uint8_t* __genericReturn35, lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key);
void structs_HashMap____OP_IDX_ASS_HashMap_K_V(lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key, uint8_t* value);

#endif // ___structs_HashMap_fwd___
