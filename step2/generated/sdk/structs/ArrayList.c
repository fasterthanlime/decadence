/* structs/ArrayList source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/ArrayList.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


void structs_ArrayList__ArrayList_init(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayList_init_withCapacity((structs_ArrayList__ArrayList*) this, 10);
}

void structs_ArrayList__ArrayList_init_withCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__Int capacity) {
    this->capacity = capacity;
    this->data = (void*) GC_MALLOC(capacity * ((lang_Iterators__Iterable*) this)->T->size);
}

void structs_ArrayList__ArrayList_init_withData(structs_ArrayList__ArrayList* this, uint8_t* data, lang_Numbers__Int size) {
    this->size = size;
    this->data = (void*) GC_MALLOC(size * ((lang_Iterators__Iterable*) this)->T->size);
    memcpy(this->data, data, size * ((lang_Iterators__Iterable*) this)->T->size);
    this->capacity = size;
}

void structs_ArrayList__ArrayList_add_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    structs_ArrayList__ArrayList_ensureCapacity(this, this->size + 1);
    memcpy(&(this->data[this->size * ((lang_Iterators__Iterable*) this)->T->size]), element, ((lang_Iterators__Iterable*) this)->T->size);
    this->size += 1;
}

void structs_ArrayList__ArrayList_add_withIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__Int index, uint8_t* element) {
    if (index == 0) {
        structs_ArrayList__ArrayList_ensureCapacity(this, this->size + 1);
        lang_Numbers__Octet* dst = NULL;
        lang_Numbers__Octet* src = NULL;
        dst = (void*) this->data + (((lang_Iterators__Iterable*) this)->T->size);
        src = (void*) this->data;
        memmove(dst, src, ((lang_Iterators__Iterable*) this)->T->size * this->size);
        memcpy(&(this->data[0 * ((lang_Iterators__Iterable*) this)->T->size]), element, ((lang_Iterators__Iterable*) this)->T->size);
        this->size += 1;
        return;
    }
    if (index == this->size) {
        structs_ArrayList__ArrayList_add(this, (uint8_t*) element);
        return;
    }
    structs_ArrayList__ArrayList_checkIndex(this, index);
    structs_ArrayList__ArrayList_ensureCapacity(this, this->size + 1);
    lang_Numbers__Octet* dst = NULL;
    lang_Numbers__Octet* src = NULL;
    dst = (void*) this->data + (((lang_Iterators__Iterable*) this)->T->size * (index + 1));
    src = (void*) this->data + (((lang_Iterators__Iterable*) this)->T->size * index);
    lang_Numbers__Int bsize = (this->size - index) * ((lang_Iterators__Iterable*) this)->T->size;
    memmove(dst, src, bsize);
    memcpy(&(this->data[index * ((lang_Iterators__Iterable*) this)->T->size]), element, ((lang_Iterators__Iterable*) this)->T->size);
    this->size += 1;
}

void structs_ArrayList__ArrayList_clear_impl(structs_ArrayList__ArrayList* this) {
    this->size = 0;
}

void structs_ArrayList__ArrayList_get_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn22, lang_Numbers__Int index) {
    structs_ArrayList__ArrayList_checkIndex(this, index);
    if (__genericReturn22) {
        memcpy(__genericReturn22, &(this->data[index * ((lang_Iterators__Iterable*) this)->T->size]), ((lang_Iterators__Iterable*) this)->T->size);
    }
    return;
}

lang_Numbers__Int structs_ArrayList__ArrayList_indexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__Int index = 0;
    while (index < this->size) {
        uint8_t* __genCall48 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) ((structs_List__List*) (this))->equals__quest.thunk)((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, (uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall48, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, index), __genCall48), (uint8_t*) element, ((structs_List__List*) (this))->equals__quest.context)) {
            return index;
        }
        index += 1;
    }
    return -1;
}

lang_Numbers__Int structs_ArrayList__ArrayList_lastIndexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__Int index = this->size;
    while (index > -1) {
        if (memcmp(this->data + index * ((lang_Iterators__Iterable*) this)->T->size, element, ((lang_Iterators__Iterable*) this)->T->size) == 0) {
            return index;
        }
        index -= 1;
    }
    return -1;
}

void structs_ArrayList__ArrayList_removeAt_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn23, lang_Numbers__Int index) {
    uint8_t* element = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
    memcpy(element, &(this->data[index * ((lang_Iterators__Iterable*) this)->T->size]), ((lang_Iterators__Iterable*) this)->T->size);
    memmove(this->data + (index * ((lang_Iterators__Iterable*) this)->T->size), this->data + ((index + 1) * ((lang_Iterators__Iterable*) this)->T->size), (this->size - index) * ((lang_Iterators__Iterable*) this)->T->size);
    this->size -= 1;
    if (__genericReturn23) {
        memcpy(__genericReturn23, element, ((lang_Iterators__Iterable*) this)->T->size);
    }
    return;
}

void structs_ArrayList__ArrayList_sort_impl(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan) {
    lang_types__Bool inOrder = false;
    while (!inOrder) {
        inOrder = true;
        
        {
            lang_Numbers__Int i;
            for (i = 0; i < this->size - 1; i++) {
                uint8_t* __genCall49 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
                uint8_t* __genCall50 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
                if (((lang_types__Bool (*)(uint8_t*, uint8_t*, void*)) greaterThan.thunk)((uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall49, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i), __genCall49), (uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall50, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i + 1), __genCall50), greaterThan.context)) {
                    inOrder = false;
                    uint8_t* tmp = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
                    structs_ArrayList____OP_IDX_ArrayList_Int__T(tmp, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i);
                    uint8_t* __genCall51 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
                    structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i, (uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall51, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i + 1), __genCall51));
                    structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i + 1, (uint8_t*) tmp);
                }
            }
        }
    }
}

lang_types__Bool structs_ArrayList__ArrayList_remove_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__Int index = structs_ArrayList__ArrayList_indexOf(this, (uint8_t*) element);
    if (index == -1) {
        return false;
    }
    else {
        structs_ArrayList__ArrayList_removeAt(this, NULL, index);
    }
    return true;
}

void structs_ArrayList__ArrayList_set_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn24, lang_Numbers__Int index, uint8_t* element) {
    structs_ArrayList__ArrayList_checkIndex(this, index);
    uint8_t* old = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
    memcpy(old, &(this->data[index * ((lang_Iterators__Iterable*) this)->T->size]), ((lang_Iterators__Iterable*) this)->T->size);
    memcpy(&(this->data[index * ((lang_Iterators__Iterable*) this)->T->size]), element, ((lang_Iterators__Iterable*) this)->T->size);
    if (__genericReturn24) {
        memcpy(__genericReturn24, old, ((lang_Iterators__Iterable*) this)->T->size);
    }
    return;
}

lang_Numbers__Int structs_ArrayList__ArrayList_size_impl(structs_ArrayList__ArrayList* this) {
    return this->size;
}

void structs_ArrayList__ArrayList_ensureCapacity_impl(structs_ArrayList__ArrayList* this, lang_Numbers__Int newSize) {
    if (newSize > this->capacity) {
        this->capacity = newSize * (newSize > 50000 ? 2 : 4);
        lang_types__Pointer tmpData = GC_REALLOC(this->data, this->capacity * ((lang_Iterators__Iterable*) this)->T->size);
        if (tmpData) {
            this->data = (void*) tmpData;
        }
        else {
            lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (structs_ArrayList__ArrayList_class()), lang_String__String_format("Failed to allocate %zu bytes of memory for array to grow! Exiting..\n", this->capacity * ((lang_Iterators__Iterable*) this)->T->size)));
        }
    }
}

void structs_ArrayList__ArrayList_checkIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__Int index) {
    if (index < 0) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (structs_ArrayList__ArrayList_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_LLong__String("Index too small! ", (lang_Numbers__LLong) (index)), " < 0")));
    }
    if (index >= this->size) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_originMsg((lang_types__Class*) (structs_ArrayList__ArrayList_class()), lang_String____OP_ADD_String_LLong__String(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_LLong__String("Index too big! ", (lang_Numbers__LLong) (index)), " >= "), (lang_Numbers__LLong) (structs_ArrayList__ArrayList_size(this)))));
    }
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator_impl(structs_ArrayList__ArrayList* this) {
    return ((lang_Iterators__BackIterator*) (structs_ArrayList__ArrayListIterator_new_iter((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this)));
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator_impl(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayListIterator* iter = structs_ArrayList__ArrayListIterator_new_iter((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this);
    iter->index = structs_ArrayList__ArrayList_size(this);
    return ((lang_Iterators__BackIterator*) (iter));
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone_impl(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayList* copy = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)((lang_Iterators__Iterable*) this)->T, structs_ArrayList__ArrayList_size(this));
    structs_List__List_addAll((structs_List__List*) copy, (lang_Iterators__Iterable*) (this));
    return copy;
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone_impl(structs_ArrayList__ArrayList* this, lang_types__Class* K) {
    return structs_ArrayList__ArrayList_new((lang_types__Class*)K);
}

lang_types__Pointer structs_ArrayList__ArrayList_toArray_impl(structs_ArrayList__ArrayList* this) {
    return ((lang_types__Pointer) (this->data));
}

void structs_ArrayList__ArrayList___defaults___impl(structs_ArrayList__ArrayList* this) {
    structs_List__List___defaults___impl((structs_List__List*) this);
    this->size = 0;
}

void structs_ArrayList__ArrayList_add(structs_ArrayList__ArrayList* this, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_add_withIndex(structs_ArrayList__ArrayList* this, lang_Numbers__Int index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add_withIndex((structs_List__List*)this, index, element);
}

void structs_ArrayList__ArrayList_clear(structs_ArrayList__ArrayList* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clear((structs_List__List*)this);
}

void structs_ArrayList__ArrayList_get(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn22, lang_Numbers__Int index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->get((structs_List__List*)this, __genericReturn22, index);
}

lang_Numbers__Int structs_ArrayList__ArrayList_indexOf(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->indexOf((structs_List__List*)this, element);
}

lang_Numbers__Int structs_ArrayList__ArrayList_lastIndexOf(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndexOf((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_removeAt(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn23, lang_Numbers__Int index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeAt((structs_List__List*)this, __genericReturn23, index);
}

void structs_ArrayList__ArrayList_sort(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->sort((structs_ArrayList__ArrayList*)this, greaterThan);
}

lang_types__Bool structs_ArrayList__ArrayList_remove(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->remove((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_set(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn24, lang_Numbers__Int index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->set((structs_List__List*)this, __genericReturn24, index, element);
}

lang_Numbers__Int structs_ArrayList__ArrayList_size(structs_ArrayList__ArrayList* this) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->size((structs_List__List*)this);
}

void structs_ArrayList__ArrayList_ensureCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__Int newSize) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->ensureCapacity((structs_ArrayList__ArrayList*)this, newSize);
}

void structs_ArrayList__ArrayList_checkIndex(structs_ArrayList__ArrayList* this, lang_Numbers__Int index) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->checkIndex((structs_ArrayList__ArrayList*)this, index);
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator(structs_ArrayList__ArrayList* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator(structs_ArrayList__ArrayList* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone(structs_ArrayList__ArrayList* this) {
    return (structs_ArrayList__ArrayList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clone((structs_List__List*)this);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone(structs_ArrayList__ArrayList* this, lang_types__Class* K) {
    return (structs_ArrayList__ArrayList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone((structs_List__List*)this, K);
}

lang_types__Pointer structs_ArrayList__ArrayList_toArray(structs_ArrayList__ArrayList* this) {
    return (lang_types__Pointer) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->toArray((structs_List__List*)this);
}

void structs_ArrayList__ArrayList___defaults__(structs_ArrayList__ArrayList* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new(lang_types__Class* T) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init((structs_ArrayList__ArrayList*) this);
    return this;
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withCapacity(lang_types__Class* T, lang_Numbers__Int capacity) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init_withCapacity((structs_ArrayList__ArrayList*) this, capacity);
    return this;
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withData(lang_types__Class* T, uint8_t* data, lang_Numbers__Int size) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init_withData((structs_ArrayList__ArrayList*) this, (uint8_t*) data, size);
    return this;
}
void structs_ArrayList__ArrayList___load__() {
    structs_List__List___load__();
}

structs_ArrayList__ArrayListClass *structs_ArrayList__ArrayList_class(){
    static lang_types__Bool __done__ = false;
    static structs_ArrayList__ArrayListClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_ArrayList__ArrayList),
                                .size = sizeof(void*),
                                .name = "ArrayList",
                            },
                            .__defaults__ = (void (*)(lang_types__Object*)) structs_ArrayList__ArrayList___defaults___impl,
                            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                            .__load__ = (void (*)()) structs_ArrayList__ArrayList___load__,
                        },
                    },
                    .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) structs_ArrayList__ArrayList_iterator_impl,
                    .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                    .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
                },
                .backIterator = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) structs_ArrayList__ArrayList_backIterator_impl,
                .forward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_forward_impl,
                .backward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_backward_impl,
            },
            .add = (void (*)(structs_List__List*, uint8_t*)) structs_ArrayList__ArrayList_add_impl,
            .add_withIndex = (void (*)(structs_List__List*, lang_Numbers__Int, uint8_t*)) structs_ArrayList__ArrayList_add_withIndex_impl,
            .addAll = (void (*)(structs_List__List*, lang_Iterators__Iterable*)) structs_List__List_addAll_impl,
            .addAll_atStart = (void (*)(structs_List__List*, lang_Numbers__Int, lang_Iterators__Iterable*)) structs_List__List_addAll_atStart_impl,
            .clear = (void (*)(structs_List__List*)) structs_ArrayList__ArrayList_clear_impl,
            .removeLast = (lang_types__Bool (*)(structs_List__List*)) structs_List__List_removeLast_impl,
            .contains__quest = (lang_types__Bool (*)(structs_List__List*, uint8_t*)) structs_List__List_contains__quest_impl,
            .replace = (lang_types__Bool (*)(structs_List__List*, uint8_t*, uint8_t*)) structs_List__List_replace_impl,
            .get = (void (*)(structs_List__List*, uint8_t*, lang_Numbers__Int)) structs_ArrayList__ArrayList_get_impl,
            .indexOf = (lang_Numbers__Int (*)(structs_List__List*, uint8_t*)) structs_ArrayList__ArrayList_indexOf_impl,
            .empty__quest = (lang_types__Bool (*)(structs_List__List*)) structs_List__List_empty__quest_impl,
            .lastIndexOf = (lang_Numbers__Int (*)(structs_List__List*, uint8_t*)) structs_ArrayList__ArrayList_lastIndexOf_impl,
            .removeAt = (void (*)(structs_List__List*, uint8_t*, lang_Numbers__Int)) structs_ArrayList__ArrayList_removeAt_impl,
            .remove = (lang_types__Bool (*)(structs_List__List*, uint8_t*)) structs_ArrayList__ArrayList_remove_impl,
            .set = (void (*)(structs_List__List*, uint8_t*, lang_Numbers__Int, uint8_t*)) structs_ArrayList__ArrayList_set_impl,
            .size = (lang_Numbers__Int (*)(structs_List__List*)) structs_ArrayList__ArrayList_size_impl,
            .clone = (structs_List__List* (*)(structs_List__List*)) structs_ArrayList__ArrayList_clone_impl,
            .emptyClone = (structs_List__List* (*)(structs_List__List*, lang_types__Class*)) structs_ArrayList__ArrayList_emptyClone_impl,
            .emptyClone_defaults = (structs_List__List* (*)(structs_List__List*)) structs_List__List_emptyClone_defaults_impl,
            .split = (void (*)(structs_List__List*, lang_types__Closure, structs_List__List**, structs_List__List**)) structs_List__List_split_impl,
            .shuffle = (structs_List__List* (*)(structs_List__List*)) structs_List__List_shuffle_impl,
            .first = (void (*)(structs_List__List*, uint8_t*)) structs_List__List_first_impl,
            .last = (void (*)(structs_List__List*, uint8_t*)) structs_List__List_last_impl,
            .lastIndex = (lang_Numbers__Int (*)(structs_List__List*)) structs_List__List_lastIndex_impl,
            .reverse = (void (*)(structs_List__List*)) structs_List__List_reverse_impl,
            .toArray = (lang_types__Pointer (*)(structs_List__List*)) structs_ArrayList__ArrayList_toArray_impl,
            .map = (structs_List__List* (*)(structs_List__List*, lang_types__Class*, lang_types__Closure)) structs_List__List_map_impl,
            .filter = (structs_List__List* (*)(structs_List__List*, lang_types__Closure)) structs_List__List_filter_impl,
            .join_stringDefault = (lang_String__String (*)(structs_List__List*)) structs_List__List_join_stringDefault_impl,
            .join_string = (lang_String__String (*)(structs_List__List*, lang_String__String)) structs_List__List_join_string_impl,
            .join_char = (lang_String__String (*)(structs_List__List*, lang_String__Char)) structs_List__List_join_char_impl,
        },
        .new = structs_ArrayList__ArrayList_new,
        .new_withCapacity = structs_ArrayList__ArrayList_new_withCapacity,
        .new_withData = structs_ArrayList__ArrayList_new_withData,
        .sort = structs_ArrayList__ArrayList_sort_impl,
        .ensureCapacity = structs_ArrayList__ArrayList_ensureCapacity_impl,
        .checkIndex = structs_ArrayList__ArrayList_checkIndex_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) structs_List__List_class();
        __done__ = true;
    }
    return &class;
}

void structs_ArrayList__ArrayListIterator_init_iter(structs_ArrayList__ArrayListIterator* this, structs_ArrayList__ArrayList* list) {
    this->list = list;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest_impl(structs_ArrayList__ArrayListIterator* this) {
    return this->index < structs_ArrayList__ArrayList_size(this->list);
}

void structs_ArrayList__ArrayListIterator_next_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn25) {
    uint8_t* element = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
    structs_ArrayList__ArrayList_get(this->list, element, this->index);
    this->index += 1;
    if (__genericReturn25) {
        memcpy(__genericReturn25, element, ((lang_Iterators__Iterable*) this)->T->size);
    }
    return;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest_impl(structs_ArrayList__ArrayListIterator* this) {
    return this->index > 0;
}

void structs_ArrayList__ArrayListIterator_prev_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn26) {
    this->index -= 1;
    uint8_t* element = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
    structs_ArrayList__ArrayList_get(this->list, element, this->index);
    if (__genericReturn26) {
        memcpy(__genericReturn26, element, ((lang_Iterators__Iterable*) this)->T->size);
    }
    return;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_remove_impl(structs_ArrayList__ArrayListIterator* this) {
    uint8_t* __genCall27 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
    if ((structs_ArrayList__ArrayList_removeAt(this->list, __genCall27, this->index - 1), __genCall27) == (uint8_t*) NULL) {
        return false;
    }
    if (this->index <= structs_ArrayList__ArrayList_size(this->list)) {
        this->index -= 1;
    }
    return true;
}

void structs_ArrayList__ArrayListIterator___defaults___impl(structs_ArrayList__ArrayListIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->index = 0;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void structs_ArrayList__ArrayListIterator_next(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn25) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn25);
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void structs_ArrayList__ArrayListIterator_prev(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn26) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn26);
}

lang_types__Bool structs_ArrayList__ArrayListIterator_remove(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void structs_ArrayList__ArrayListIterator___defaults__(structs_ArrayList__ArrayListIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_ArrayList__ArrayListIterator* structs_ArrayList__ArrayListIterator_new_iter(lang_types__Class* T, structs_ArrayList__ArrayList* list) {
    
    structs_ArrayList__ArrayListIterator* this = ((structs_ArrayList__ArrayListIterator*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayListIterator_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    structs_ArrayList__ArrayListIterator___defaults__(this);
    structs_ArrayList__ArrayListIterator_init_iter((structs_ArrayList__ArrayListIterator*) this, list);
    return this;
}
void structs_ArrayList__ArrayListIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

structs_ArrayList__ArrayListIteratorClass *structs_ArrayList__ArrayListIterator_class(){
    static lang_types__Bool __done__ = false;
    static structs_ArrayList__ArrayListIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_ArrayList__ArrayListIterator),
                                .size = sizeof(void*),
                                .name = "ArrayListIterator",
                            },
                            .__defaults__ = (void (*)(lang_types__Object*)) structs_ArrayList__ArrayListIterator___defaults___impl,
                            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                            .__load__ = (void (*)()) structs_ArrayList__ArrayListIterator___load__,
                        },
                    },
                    .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                    .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
                },
                .hasNext__quest = (lang_types__Bool (*)(lang_Iterators__Iterator*)) structs_ArrayList__ArrayListIterator_hasNext__quest_impl,
                .next = (void (*)(lang_Iterators__Iterator*, uint8_t*)) structs_ArrayList__ArrayListIterator_next_impl,
                .remove = (lang_types__Bool (*)(lang_Iterators__Iterator*)) structs_ArrayList__ArrayListIterator_remove_impl,
            },
            .hasPrev__quest = (lang_types__Bool (*)(lang_Iterators__BackIterator*)) structs_ArrayList__ArrayListIterator_hasPrev__quest_impl,
            .prev = (void (*)(lang_Iterators__BackIterator*, uint8_t*)) structs_ArrayList__ArrayListIterator_prev_impl,
            .reversed = (lang_Iterators__ReverseIterator* (*)(lang_Iterators__BackIterator*)) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_iter = structs_ArrayList__ArrayListIterator_new_iter,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
    }
    return &class;
}
void structs_ArrayList_load() {
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
        structs_List_load();
        structs_ArrayList__ArrayList___load__();
        structs_ArrayList__ArrayListIterator___load__();
    }
}


void structs_ArrayList____OP_IDX_ArrayList_Int__T(uint8_t* __genericReturn28, lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i) {
    structs_ArrayList__ArrayList_get(list, __genericReturn28, i);
    return;
}

void structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i, uint8_t* element) {
    structs_ArrayList__ArrayList_set(list, NULL, i, (uint8_t*) element);
}

void structs_ArrayList____OP_ADD_ASS_ArrayList_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element) {
    structs_ArrayList__ArrayList_add(list, (uint8_t*) element);
}

lang_types__Bool structs_ArrayList____OP_SUB_ASS_ArrayList_T__Bool(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element) {
    return structs_ArrayList__ArrayList_remove(list, (uint8_t*) element);
}

structs_ArrayList__ArrayList* structs_ArrayList____OP_AS_T__array__ArrayList(lang_types__Class* T, _lang_array__Array array) {
    return structs_ArrayList__ArrayList_new_withData((lang_types__Class*)T, (uint8_t*) array.data, array.length);
}
