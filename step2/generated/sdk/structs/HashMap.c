/* structs/HashMap source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/HashMap.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/structs/ArrayList.h>


void structs_HashMap__HashEntry_init_keyVal(structs_HashMap__HashEntry* this, lang_types__Pointer key, lang_types__Pointer value) {
    (*this).value = (void*) value;
    (*this).key = (void*) key;
    (*this).next = (void*) NULL;
}
structs_HashMap__HashEntry structs_HashMap__HashEntry_new_keyVal(lang_types__Pointer key, lang_types__Pointer value) {
    
    structs_HashMap__HashEntry this;
    structs_HashMap__HashEntry_init_keyVal(&(this), key, value);
    return this;
}
void structs_HashMap__HashEntry___load__() {
    lang_types__Class___load__();
}

structs_HashMap__HashEntryClass *structs_HashMap__HashEntry_class(){
    static structs_HashMap__HashEntryClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(structs_HashMap__HashEntry),
                    .size = sizeof(structs_HashMap__HashEntry),
                    .name = "HashEntry",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) structs_HashMap__HashEntry___load__,
            },
        },
        .new_keyVal = structs_HashMap__HashEntry_new_keyVal,
    };
    return &class;
}

void structs_HashMap__HashMap_init(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, 100);
}

void structs_HashMap__HashMap_init_withCapacity(structs_HashMap__HashMap* this, lang_Numbers__SizeT capaArg) {
    this->size = 0;
    this->capacity = capaArg * 1.500000;
    this->buckets = _lang_array__Array_new(structs_HashMap__HashEntry, this->capacity);
    this->keys = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)this->K, this->capacity);
    if (this->K == (lang_types__Class*) lang_String__String_class()) {
        this->keyEquals = (lang_types__Closure) { structs_HashMap__stringEquals, NULL };
        this->hashKey = (lang_types__Closure) { structs_HashMap__ac_X31_hash, NULL };
    }
    else if (this->K->size == ((lang_types__Class*) lang_types__Pointer_class())->size) {
        this->keyEquals = (lang_types__Closure) { structs_HashMap__pointerEquals, NULL };
        this->hashKey = (lang_types__Closure) { structs_HashMap__pointerHash, NULL };
    }
    else if (this->K->size == ((lang_types__Class*) lang_Numbers__UInt_class())->size) {
        this->keyEquals = (lang_types__Closure) { structs_HashMap__intEquals, NULL };
        this->hashKey = (lang_types__Closure) { structs_HashMap__intHash, NULL };
    }
    else if (this->K->size == ((lang_types__Class*) lang_String__Char_class())->size) {
        this->keyEquals = (lang_types__Closure) { structs_HashMap__charEquals, NULL };
        this->hashKey = (lang_types__Closure) { structs_HashMap__charHash, NULL };
    }
    else {
        this->keyEquals = (lang_types__Closure) { structs_HashMap__genericEquals, NULL };
        this->hashKey = (lang_types__Closure) { structs_HashMap__murmurHash, NULL };
    }
}

lang_types__Bool structs_HashMap__HashMap_getEntry_impl(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (result) {
                (*(result)) = entry;
            }
            return true;
        }
        if (entry.next) {
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

lang_types__Bool structs_HashMap__HashMap_getEntryForHash_impl(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result) {
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (result) {
                (*(result)) = entry;
            }
            return true;
        }
        if (entry.next) {
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

lang_types__Bool structs_HashMap__HashMap_put_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry entry;
    if (structs_HashMap__HashMap_getEntryForHash(this, (uint8_t*) key, hash, &(entry))) {
        memcpy(entry.value, value, this->V->size);
    }
    else {
        structs_ArrayList__ArrayList_add(this->keys, (uint8_t*) key);
        structs_HashMap__HashEntry current = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
        if (current.key != NULL) {
            structs_HashMap__HashEntry* currentPointer = &((((structs_HashMap__HashEntry*) (this->buckets.data)))[hash]);
            while ((*(currentPointer)).next) {
                currentPointer = (void*) (*(currentPointer)).next;
            }
            structs_HashMap__HashEntry* newEntry = ((structs_HashMap__HashEntry*) (GC_MALLOC(((lang_types__Class*) structs_HashMap__HashEntry_class())->size)));
            (*(newEntry)).key = (void*) GC_MALLOC(this->K->size);
            memcpy((*(newEntry)).key, key, this->K->size);
            (*(newEntry)).value = (void*) GC_MALLOC(this->V->size);
            memcpy((*(newEntry)).value, value, this->V->size);
            (*(currentPointer)).next = (void*) newEntry;
        }
        else {
            entry.key = (void*) GC_MALLOC(this->K->size);
            memcpy(entry.key, key, this->K->size);
            entry.value = (void*) GC_MALLOC(this->V->size);
            memcpy(entry.value, value, this->V->size);
            entry.next = (void*) NULL;
            _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, entry);
        }
        this->size += 1;
        if ((((lang_Numbers__Float) (this->size)) / ((lang_Numbers__Float) (this->capacity))) > 0.750000) {
            structs_HashMap__HashMap_resize(this, this->size * (this->size > (lang_Numbers__SizeT) 50000 ? 2 : 4));
        }
    }
    return true;
}

lang_types__Bool structs_HashMap__HashMap_add_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return structs_HashMap__HashMap_put(this, (uint8_t*) key, (uint8_t*) value);
}

void structs_HashMap__HashMap_get_impl(structs_HashMap__HashMap* this, uint8_t* __genericReturn29, uint8_t* key) {
    structs_HashMap__HashEntry entry;
    if (structs_HashMap__HashMap_getEntry(this, (uint8_t*) key, &(entry))) {
        uint8_t* __returnVal30 = GC_MALLOC(this->V->size);
        memcpy(__returnVal30, ((uint8_t*) (entry.value)), this->V->size);
        if (__genericReturn29) {
            memcpy(__genericReturn29, __returnVal30, this->V->size);
        }
        return;
    }
    if (__genericReturn29) {
        lang_types__Pointer __wakaref53 = NULL;
        memcpy(__genericReturn29, &(__wakaref53), ((lang_types__Class*) lang_types__Pointer_class())->size);
    }
    return;
}

lang_types__Bool structs_HashMap__HashMap_empty__quest_impl(structs_HashMap__HashMap* this) {
    return structs_List__List_empty__quest((structs_List__List*) this->keys);
}

lang_types__Bool structs_HashMap__HashMap_contains__quest_impl(structs_HashMap__HashMap* this, uint8_t* key) {
    return structs_HashMap__HashMap_getEntry(this, (uint8_t*) key, NULL);
}

lang_types__Bool structs_HashMap__HashMap_remove_impl(structs_HashMap__HashMap* this, uint8_t* key) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry* prev = NULL;
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (prev) {
                (*(prev)).next = (void*) entry.next;
            }
            else {
                if (entry.next) {
                    _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, (*(entry.next)));
                }
                else {
                    _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, structs_HashMap__nullHashEntry);
                }
            }
            
            {
                lang_Numbers__Int i;
                for (i = 0; i < structs_ArrayList__ArrayList_size(this->keys); i++) {
                    uint8_t* cKey = GC_MALLOC(this->K->size);
                    structs_ArrayList__ArrayList_get(this->keys, cKey, i);
                    if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) key, (uint8_t*) cKey, this->keyEquals.context)) {
                        structs_ArrayList__ArrayList_removeAt(this->keys, NULL, i);
                        break;
                    }
                }
            }
            this->size -= 1;
            return true;
        }
        if (entry.next) {
            prev = (void*) &(entry);
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

lang_types__Bool structs_HashMap__HashMap_resize_impl(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity) {
    lang_Numbers__SizeT oldCapacity = this->capacity;
    _lang_array__Array oldBuckets = this->buckets;
    structs_ArrayList__ArrayList_clear(this->keys);
    this->size = 0;
    this->capacity = _capacity;
    this->buckets = _lang_array__Array_new(structs_HashMap__HashEntry, this->capacity);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < oldCapacity; i++) {
            structs_HashMap__HashEntry entry = _lang_array__Array_get(oldBuckets, i, structs_HashMap__HashEntry);
            if (entry.key == NULL) {
                continue;
            }
            structs_HashMap__HashMap_put(this, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) ((uint8_t*) (entry.value)));
            while (entry.next) {
                entry = (*(entry.next));
                structs_HashMap__HashMap_put(this, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) ((uint8_t*) (entry.value)));
            }
        }
    }
    return true;
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator_impl(structs_HashMap__HashMap* this) {
    return ((lang_Iterators__BackIterator*) (structs_HashMap__HashMapValueIterator_new_withMap((lang_types__Class*)this->K, (lang_types__Class*)this->V, this)));
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator_impl(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMapValueIterator* iter = structs_HashMap__HashMapValueIterator_new_withMap((lang_types__Class*)this->K, (lang_types__Class*)this->V, this);
    iter->index = structs_ArrayList__ArrayList_size(this->keys);
    return ((lang_Iterators__BackIterator*) (iter));
}

void structs_HashMap__HashMap_clear_impl(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, this->capacity);
}

lang_Numbers__SizeT structs_HashMap__HashMap_size_impl(structs_HashMap__HashMap* this) {
    return this->size;
}

structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys_impl(structs_HashMap__HashMap* this) {
    return this->keys;
}

void structs_HashMap__HashMap_each_impl(structs_HashMap__HashMap* this, lang_types__Closure f) {
    
    {
        uint8_t* key = GC_MALLOC(this->K->size);
        
        {
            lang_Iterators__BackIterator* __iter31 = structs_ArrayList__ArrayList_iterator(structs_HashMap__HashMap_getKeys(this));
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter31)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter31, key);
                uint8_t* __genCall52 = GC_MALLOC(this->V->size);
                ((void (*)(uint8_t*, uint8_t*, void*)) f.thunk)((uint8_t*) key, (uint8_t*) (structs_HashMap__HashMap_get(this, __genCall52, (uint8_t*) key), __genCall52), f.context);
            }
        }
    }
}

void structs_HashMap__HashMap___defaults___impl(structs_HashMap__HashMap* this) {
    lang_Iterators__BackIterable___defaults___impl((lang_Iterators__BackIterable*) this);
}

lang_types__Bool structs_HashMap__HashMap_getEntry(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getEntry((structs_HashMap__HashMap*)this, key, result);
}

lang_types__Bool structs_HashMap__HashMap_getEntryForHash(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getEntryForHash((structs_HashMap__HashMap*)this, key, hash, result);
}

lang_types__Bool structs_HashMap__HashMap_put(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->put((structs_HashMap__HashMap*)this, key, value);
}

lang_types__Bool structs_HashMap__HashMap_add(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->add((structs_HashMap__HashMap*)this, key, value);
}

void structs_HashMap__HashMap_get(structs_HashMap__HashMap* this, uint8_t* __genericReturn29, uint8_t* key) {
    ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->get((structs_HashMap__HashMap*)this, __genericReturn29, key);
}

lang_types__Bool structs_HashMap__HashMap_empty__quest(structs_HashMap__HashMap* this) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->empty__quest((structs_HashMap__HashMap*)this);
}

lang_types__Bool structs_HashMap__HashMap_contains__quest(structs_HashMap__HashMap* this, uint8_t* key) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->contains__quest((structs_HashMap__HashMap*)this, key);
}

lang_types__Bool structs_HashMap__HashMap_remove(structs_HashMap__HashMap* this, uint8_t* key) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->remove((structs_HashMap__HashMap*)this, key);
}

lang_types__Bool structs_HashMap__HashMap_resize(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->resize((structs_HashMap__HashMap*)this, _capacity);
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator(structs_HashMap__HashMap* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator(structs_HashMap__HashMap* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

void structs_HashMap__HashMap_clear(structs_HashMap__HashMap* this) {
    ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->clear((structs_HashMap__HashMap*)this);
}

lang_Numbers__SizeT structs_HashMap__HashMap_size(structs_HashMap__HashMap* this) {
    return (lang_Numbers__SizeT) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->size((structs_HashMap__HashMap*)this);
}

structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys(structs_HashMap__HashMap* this) {
    return (structs_ArrayList__ArrayList*) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getKeys((structs_HashMap__HashMap*)this);
}

void structs_HashMap__HashMap_each(structs_HashMap__HashMap* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->each((lang_Iterators__Iterable*)this, f);
}

void structs_HashMap__HashMap___defaults__(structs_HashMap__HashMap* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_HashMap__HashMap* structs_HashMap__HashMap_new(lang_types__Class* K, lang_types__Class* V) {
    
    structs_HashMap__HashMap* this = ((structs_HashMap__HashMap*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMap_class())));
    this->K = K;
    this->V = V;
    structs_HashMap__HashMap___defaults__(this);
    structs_HashMap__HashMap_init((structs_HashMap__HashMap*) this);
    return this;
}
structs_HashMap__HashMap* structs_HashMap__HashMap_new_withCapacity(lang_types__Class* K, lang_types__Class* V, lang_Numbers__SizeT capaArg) {
    
    structs_HashMap__HashMap* this = ((structs_HashMap__HashMap*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMap_class())));
    this->K = K;
    this->V = V;
    structs_HashMap__HashMap___defaults__(this);
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, capaArg);
    return this;
}
void structs_HashMap__HashMap___load__() {
    lang_Iterators__BackIterable___load__();
}

structs_HashMap__HashMapClass *structs_HashMap__HashMap_class(){
    static lang_types__Bool __done__ = false;
    static structs_HashMap__HashMapClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(structs_HashMap__HashMap),
                            .size = sizeof(void*),
                            .name = "HashMap",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) structs_HashMap__HashMap___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) structs_HashMap__HashMap___load__,
                    },
                },
                .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) structs_HashMap__HashMap_iterator_impl,
                .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) structs_HashMap__HashMap_each_impl,
            },
            .backIterator = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) structs_HashMap__HashMap_backIterator_impl,
            .forward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_forward_impl,
            .backward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_backward_impl,
        },
        .new = structs_HashMap__HashMap_new,
        .new_withCapacity = structs_HashMap__HashMap_new_withCapacity,
        .getEntry = structs_HashMap__HashMap_getEntry_impl,
        .getEntryForHash = structs_HashMap__HashMap_getEntryForHash_impl,
        .put = structs_HashMap__HashMap_put_impl,
        .add = structs_HashMap__HashMap_add_impl,
        .get = structs_HashMap__HashMap_get_impl,
        .empty__quest = structs_HashMap__HashMap_empty__quest_impl,
        .contains__quest = structs_HashMap__HashMap_contains__quest_impl,
        .remove = structs_HashMap__HashMap_remove_impl,
        .resize = structs_HashMap__HashMap_resize_impl,
        .clear = structs_HashMap__HashMap_clear_impl,
        .size = structs_HashMap__HashMap_size_impl,
        .getKeys = structs_HashMap__HashMap_getKeys_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterable_class();
        __done__ = true;
    }
    return &class;
}

void structs_HashMap__HashMapValueIterator_init_withMap(structs_HashMap__HashMapValueIterator* this, structs_HashMap__HashMap* map) {
    this->map = map;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest_impl(structs_HashMap__HashMapValueIterator* this) {
    return this->index < structs_ArrayList__ArrayList_size(this->map->keys);
}

void structs_HashMap__HashMapValueIterator_next_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn32) {
    uint8_t* key = GC_MALLOC(this->K->size);
    structs_ArrayList__ArrayList_get(this->map->keys, key, this->index);
    this->index += 1;
    structs_HashMap__HashMap_get(this->map, __genericReturn32, (uint8_t*) key);
    return;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest_impl(structs_HashMap__HashMapValueIterator* this) {
    return this->index > 0;
}

void structs_HashMap__HashMapValueIterator_prev_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn33) {
    this->index -= 1;
    uint8_t* key = GC_MALLOC(this->K->size);
    structs_ArrayList__ArrayList_get(this->map->keys, key, this->index);
    structs_HashMap__HashMap_get(this->map, __genericReturn33, (uint8_t*) key);
    return;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_remove_impl(structs_HashMap__HashMapValueIterator* this) {
    uint8_t* __genCall34 = GC_MALLOC(this->K->size);
    lang_types__Bool result = structs_HashMap__HashMap_remove(this->map, (uint8_t*) (structs_ArrayList__ArrayList_get(this->map->keys, __genCall34, this->index), __genCall34));
    if (this->index <= structs_ArrayList__ArrayList_size(this->map->keys)) {
        this->index -= 1;
    }
    return result;
}

void structs_HashMap__HashMapValueIterator___defaults___impl(structs_HashMap__HashMapValueIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->index = 0;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void structs_HashMap__HashMapValueIterator_next(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn32) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn32);
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void structs_HashMap__HashMapValueIterator_prev(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn33) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn33);
}

lang_types__Bool structs_HashMap__HashMapValueIterator_remove(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void structs_HashMap__HashMapValueIterator___defaults__(structs_HashMap__HashMapValueIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_HashMap__HashMapValueIterator* structs_HashMap__HashMapValueIterator_new_withMap(lang_types__Class* K, lang_types__Class* T, structs_HashMap__HashMap* map) {
    
    structs_HashMap__HashMapValueIterator* this = ((structs_HashMap__HashMapValueIterator*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMapValueIterator_class())));
    this->K = K;
    ((lang_Iterators__Iterable*) this)->T = T;
    structs_HashMap__HashMapValueIterator___defaults__(this);
    structs_HashMap__HashMapValueIterator_init_withMap((structs_HashMap__HashMapValueIterator*) this, map);
    return this;
}
void structs_HashMap__HashMapValueIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

structs_HashMap__HashMapValueIteratorClass *structs_HashMap__HashMapValueIterator_class(){
    static lang_types__Bool __done__ = false;
    static structs_HashMap__HashMapValueIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_HashMap__HashMapValueIterator),
                                .size = sizeof(void*),
                                .name = "HashMapValueIterator",
                            },
                            .__defaults__ = (void (*)(lang_types__Object*)) structs_HashMap__HashMapValueIterator___defaults___impl,
                            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                            .__load__ = (void (*)()) structs_HashMap__HashMapValueIterator___load__,
                        },
                    },
                    .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                    .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
                },
                .hasNext__quest = (lang_types__Bool (*)(lang_Iterators__Iterator*)) structs_HashMap__HashMapValueIterator_hasNext__quest_impl,
                .next = (void (*)(lang_Iterators__Iterator*, uint8_t*)) structs_HashMap__HashMapValueIterator_next_impl,
                .remove = (lang_types__Bool (*)(lang_Iterators__Iterator*)) structs_HashMap__HashMapValueIterator_remove_impl,
            },
            .hasPrev__quest = (lang_types__Bool (*)(lang_Iterators__BackIterator*)) structs_HashMap__HashMapValueIterator_hasPrev__quest_impl,
            .prev = (void (*)(lang_Iterators__BackIterator*, uint8_t*)) structs_HashMap__HashMapValueIterator_prev_impl,
            .reversed = (lang_Iterators__ReverseIterator* (*)(lang_Iterators__BackIterator*)) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_withMap = structs_HashMap__HashMapValueIterator_new_withMap,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
    }
    return &class;
}
structs_HashMap__HashEntry structs_HashMap__nullHashEntry;
void structs_HashMap_load() {
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
        structs_ArrayList_load();
        structs_HashMap__HashEntry___load__();
        structs_HashMap__HashMap___load__();
        structs_HashMap__HashMapValueIterator___load__();
        memset(&(structs_HashMap__nullHashEntry), 0, ((lang_types__Class*) structs_HashMap__HashEntry_class())->size);
    }
}


lang_types__Bool structs_HashMap__stringEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return lang_String__String_equals__quest((* (lang_String__String*)k1), (* (lang_String__String*)k2));
}

lang_types__Bool structs_HashMap__pointerEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_types__Pointer*)k1) == (* (lang_types__Pointer*)k2);
}

lang_types__Bool structs_HashMap__intEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_Numbers__Int*)k1) == (* (lang_Numbers__Int*)k2);
}

lang_types__Bool structs_HashMap__charEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_String__Char*)k1) == (* (lang_String__Char*)k2);
}

lang_types__Bool structs_HashMap__genericEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return memcmp(k1, k2, K->size) == 0;
}

lang_Numbers__SizeT structs_HashMap__intHash(lang_types__Class* K, uint8_t* key) {
    return (* (lang_Numbers__SizeT*)key);
}

lang_Numbers__SizeT structs_HashMap__pointerHash(lang_types__Class* K, uint8_t* key) {
    return ((lang_Numbers__SizeT) (((* (lang_types__Pointer*)key))));
}

lang_Numbers__SizeT structs_HashMap__charHash(lang_types__Class* K, uint8_t* key) {
    return ((lang_Numbers__SizeT) (((* (lang_String__Char*)key))));
}

lang_Numbers__SizeT structs_HashMap__murmurHash(lang_types__Class* K, uint8_t* keyTagazok) {
    lang_Numbers__SizeT seed = 1;
    lang_Numbers__SizeT len = K->size;
    lang_Numbers__SizeT m = 1540483477;
    lang_Numbers__SSizeT r = 24;
    lang_Numbers__SizeT l = len;
    lang_Numbers__SizeT h = seed ^ len;
    lang_Numbers__Octet* data = ((lang_Numbers__Octet*) ((keyTagazok)));
    while (true) {
        lang_Numbers__SizeT k = (*((((lang_Numbers__SizeT*) (data)))));
        k *= m;
        k ^= k >> r;
        k *= m;
        h *= m;
        h ^= k;
        data += 4;
        if (len < (lang_Numbers__SizeT) 4) {
            break;
        }
        len -= 4;
    }
    lang_Numbers__Int t = 0;
    if (len == (lang_Numbers__SizeT) 3) {
        h ^= data[2] << 16;
    }
    if (len == (lang_Numbers__SizeT) 2) {
        h ^= data[1] << 8;
    }
    if (len == (lang_Numbers__SizeT) 1) {
        h ^= data[0];
    }
    t *= m;
    t ^= t >> r;
    t *= m;
    h *= m;
    h ^= t;
    l *= m;
    l ^= l >> r;
    l *= m;
    h *= m;
    h ^= l;
    h ^= h >> 13;
    h *= m;
    h ^= h >> 15;
    return h;
}

lang_Numbers__SizeT structs_HashMap__ac_X31_hash(lang_types__Class* K, uint8_t* key) {
    lang_String__Char* s = (* (lang_String__Char**)key);
    lang_Numbers__SizeT h = (*(s));
    if (h) {
        s += 1;
        while ((*(s))) {
            h = (h << 5) - h + (*(s));
            s += 1;
        }
    }
    return h;
}

lang_types__Closure structs_HashMap__getStandardEquals(lang_types__Class* T) {
    if (T == (lang_types__Class*) lang_String__String_class()) {
        return (lang_types__Closure) { structs_HashMap__stringEquals, NULL };
    }
    else if (T->size == ((lang_types__Class*) lang_types__Pointer_class())->size) {
        return (lang_types__Closure) { structs_HashMap__pointerEquals, NULL };
    }
    else if (T->size == ((lang_types__Class*) lang_Numbers__UInt_class())->size) {
        return (lang_types__Closure) { structs_HashMap__intEquals, NULL };
    }
    else if (T->size == ((lang_types__Class*) lang_String__Char_class())->size) {
        return (lang_types__Closure) { structs_HashMap__charEquals, NULL };
    }
    else {
        return (lang_types__Closure) { structs_HashMap__genericEquals, NULL };
    }
}

void structs_HashMap____OP_IDX_HashMap_K__V(uint8_t* __genericReturn35, lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key) {
    structs_HashMap__HashMap_get(map, __genericReturn35, (uint8_t*) key);
    return;
}

void structs_HashMap____OP_IDX_ASS_HashMap_K_V(lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key, uint8_t* value) {
    structs_HashMap__HashMap_put(map, (uint8_t*) key, (uint8_t*) value);
}
