/* lang/Iterators source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Iterators.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/structs/List.h>
#include <sdk/structs/ArrayList.h>


void lang_Iterators__Iterable_init(lang_Iterators__Iterable* this) {
}

structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList_impl(lang_Iterators__Iterable* this) {
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new((lang_types__Class*)this->T);
    
    {
        uint8_t* elem = GC_MALLOC(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter36 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter36)) {
                lang_Iterators__Iterator_next(__iter36, elem);
                structs_ArrayList__ArrayList_add(result, (uint8_t*) elem);
            }
        }
    }
    return result;
}

void lang_Iterators__Iterable_reduce_impl(lang_Iterators__Iterable* this, uint8_t* __genericReturn1, lang_types__Closure f) {
    lang_Iterators__Iterator* iter = lang_Iterators__Iterable_iterator(this);
    uint8_t* __genCall37 = GC_MALLOC(this->T->size);
    uint8_t* __genCall38 = GC_MALLOC(this->T->size);
    uint8_t* acc = GC_MALLOC(this->T->size);
    ((void (*)(uint8_t*, uint8_t*, uint8_t*, void*)) f.thunk)(acc, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall37), __genCall37), (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall38), __genCall38), f.context);
    while (lang_Iterators__Iterator_hasNext__quest(iter)) {
        uint8_t* __genCall39 = GC_MALLOC(this->T->size);
        ((void (*)(uint8_t*, uint8_t*, uint8_t*, void*)) f.thunk)(acc, (uint8_t*) acc, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall39), __genCall39), f.context);
    }
    if (__genericReturn1) {
        memcpy(__genericReturn1, acc, this->T->size);
    }
    return;
}

void lang_Iterators__Iterable_each_impl(lang_Iterators__Iterable* this, lang_types__Closure f) {
    
    {
        uint8_t* elem = GC_MALLOC(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter40 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter40)) {
                lang_Iterators__Iterator_next(__iter40, elem);
                ((void (*)(uint8_t*, void*)) f.thunk)((uint8_t*) elem, f.context);
            }
        }
    }
}

void lang_Iterators__Iterable___defaults___impl(lang_Iterators__Iterable* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_Iterators__Iterator* lang_Iterators__Iterable_iterator(lang_Iterators__Iterable* this) {
    return (lang_Iterators__Iterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList(lang_Iterators__Iterable* this) {
    return (structs_ArrayList__ArrayList*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->toList((lang_Iterators__Iterable*)this);
}

void lang_Iterators__Iterable_reduce(lang_Iterators__Iterable* this, uint8_t* __genericReturn1, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->reduce((lang_Iterators__Iterable*)this, __genericReturn1, f);
}

void lang_Iterators__Iterable_each(lang_Iterators__Iterable* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->each((lang_Iterators__Iterable*)this, f);
}

void lang_Iterators__Iterable___defaults__(lang_Iterators__Iterable* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__Iterable___load__() {
    lang_types__Class___load__();
}

lang_Iterators__IterableClass *lang_Iterators__Iterable_class(){
    static lang_types__Bool __done__ = false;
    static lang_Iterators__IterableClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Iterators__Iterable),
                    .size = sizeof(void*),
                    .name = "Iterable",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_Iterators__Iterable___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Iterators__Iterable___load__,
            },
        },
        .iterator = lang_Iterators__Iterable_iterator,
        .toList = lang_Iterators__Iterable_toList_impl,
        .reduce = lang_Iterators__Iterable_reduce_impl,
        .each = lang_Iterators__Iterable_each_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}

void lang_Iterators__BackIterable_init(lang_Iterators__BackIterable* this) {
    lang_Iterators__Iterable_init((lang_Iterators__Iterable*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator_impl(lang_Iterators__BackIterable* this) {
    lang_Iterators__BackIterator* iter = lang_Iterators__BackIterable_iterator(this);
    while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) iter)) {
        lang_Iterators__Iterator_next((lang_Iterators__Iterator*) iter, NULL);
    }
    return iter;
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward_impl(lang_Iterators__BackIterable* this) {
    return lang_Iterators__BackIterable_iterator(this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward_impl(lang_Iterators__BackIterable* this) {
    return ((lang_Iterators__BackIterator*) (lang_Iterators__BackIterator_reversed(lang_Iterators__BackIterable_backIterator(this))));
}

void lang_Iterators__BackIterable___defaults___impl(lang_Iterators__BackIterable* this) {
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_iterator(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->forward((lang_Iterators__BackIterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backward((lang_Iterators__BackIterable*)this);
}

void lang_Iterators__BackIterable___defaults__(lang_Iterators__BackIterable* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__BackIterable___load__() {
    lang_Iterators__Iterable___load__();
}

lang_Iterators__BackIterableClass *lang_Iterators__BackIterable_class(){
    static lang_types__Bool __done__ = false;
    static lang_Iterators__BackIterableClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Iterators__BackIterable),
                        .size = sizeof(void*),
                        .name = "BackIterable",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_Iterators__BackIterable___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Iterators__BackIterable___load__,
                },
            },
            .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
            .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
            .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
        },
        .backIterator = lang_Iterators__BackIterable_backIterator_impl,
        .forward = lang_Iterators__BackIterable_forward_impl,
        .backward = lang_Iterators__BackIterable_backward_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
    }
    return &class;
}

void lang_Iterators__Iterator_init(lang_Iterators__Iterator* this) {
    lang_Iterators__Iterable_init((lang_Iterators__Iterable*) this);
}

lang_Iterators__Iterator* lang_Iterators__Iterator_iterator_impl(lang_Iterators__Iterator* this) {
    return this;
}

void lang_Iterators__Iterator___defaults___impl(lang_Iterators__Iterator* this) {
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_types__Bool lang_Iterators__Iterator_hasNext__quest(lang_Iterators__Iterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_Iterators__Iterator_next(lang_Iterators__Iterator* this, uint8_t* __genericReturn5) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn5);
}

lang_types__Bool lang_Iterators__Iterator_remove(lang_Iterators__Iterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

lang_Iterators__Iterator* lang_Iterators__Iterator_iterator(lang_Iterators__Iterator* this) {
    return (lang_Iterators__Iterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

void lang_Iterators__Iterator___defaults__(lang_Iterators__Iterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__Iterator___load__() {
    lang_Iterators__Iterable___load__();
}

lang_Iterators__IteratorClass *lang_Iterators__Iterator_class(){
    static lang_types__Bool __done__ = false;
    static lang_Iterators__IteratorClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Iterators__Iterator),
                        .size = sizeof(void*),
                        .name = "Iterator",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_Iterators__Iterator___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Iterators__Iterator___load__,
                },
            },
            .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterator_iterator_impl,
            .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
            .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
            .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
        },
        .hasNext__quest = lang_Iterators__Iterator_hasNext__quest,
        .next = lang_Iterators__Iterator_next,
        .remove = lang_Iterators__Iterator_remove,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
    }
    return &class;
}

void lang_Iterators__BackIterator_init(lang_Iterators__BackIterator* this) {
    lang_Iterators__Iterator_init((lang_Iterators__Iterator*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator_impl(lang_Iterators__BackIterator* this) {
    return this;
}

lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed_impl(lang_Iterators__BackIterator* this) {
    lang_Iterators__ReverseIterator* iter = lang_Iterators__ReverseIterator_new((lang_types__Class*)((lang_Iterators__Iterable*) this)->T);
    iter->iterator = this;
    return iter;
}

void lang_Iterators__BackIterator___defaults___impl(lang_Iterators__BackIterator* this) {
    lang_Iterators__Iterator___defaults___impl((lang_Iterators__Iterator*) this);
}

lang_types__Bool lang_Iterators__BackIterator_hasPrev__quest(lang_Iterators__BackIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__BackIterator_prev(lang_Iterators__BackIterator* this, uint8_t* __genericReturn6) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn6);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator(lang_Iterators__BackIterator* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed(lang_Iterators__BackIterator* this) {
    return (lang_Iterators__ReverseIterator*) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->reversed((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__BackIterator___defaults__(lang_Iterators__BackIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__BackIterator___load__() {
    lang_Iterators__Iterator___load__();
}

lang_Iterators__BackIteratorClass *lang_Iterators__BackIterator_class(){
    static lang_types__Bool __done__ = false;
    static lang_Iterators__BackIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Iterators__BackIterator),
                            .size = sizeof(void*),
                            .name = "BackIterator",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_Iterators__BackIterator___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Iterators__BackIterator___load__,
                    },
                },
                .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__BackIterator_iterator_impl,
                .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
            },
        },
        .hasPrev__quest = lang_Iterators__BackIterator_hasPrev__quest,
        .prev = lang_Iterators__BackIterator_prev,
        .reversed = lang_Iterators__BackIterator_reversed_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterator_class();
        __done__ = true;
    }
    return &class;
}

void lang_Iterators__ReverseIterator_init(lang_Iterators__ReverseIterator* this) {
    lang_Iterators__BackIterator_init((lang_Iterators__BackIterator*) this);
}

lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__BackIterator_hasPrev__quest(this->iterator);
}

void lang_Iterators__ReverseIterator_next_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn7) {
    lang_Iterators__BackIterator_prev(this->iterator, __genericReturn7);
    return;
}

lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) this->iterator);
}

void lang_Iterators__ReverseIterator_prev_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn8) {
    lang_Iterators__Iterator_next((lang_Iterators__Iterator*) this->iterator, __genericReturn8);
    return;
}

lang_types__Bool lang_Iterators__ReverseIterator_remove_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__Iterator_remove((lang_Iterators__Iterator*) this->iterator);
}

lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed_impl(lang_Iterators__ReverseIterator* this) {
    return this->iterator;
}

lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator_impl(lang_Iterators__ReverseIterator* this) {
    return this;
}

void lang_Iterators__ReverseIterator___defaults___impl(lang_Iterators__ReverseIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->iterator = NULL;
}

lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_Iterators__ReverseIterator_next(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn7) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn7);
}

lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__ReverseIterator_prev(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn8) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn8);
}

lang_types__Bool lang_Iterators__ReverseIterator_remove(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed(lang_Iterators__ReverseIterator* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->reversed((lang_Iterators__BackIterator*)this);
}

lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator(lang_Iterators__ReverseIterator* this) {
    return (lang_Iterators__ReverseIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

void lang_Iterators__ReverseIterator___defaults__(lang_Iterators__ReverseIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_new(lang_types__Class* T) {
    
    lang_Iterators__ReverseIterator* this = ((lang_Iterators__ReverseIterator*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Iterators__ReverseIterator_class())));
    ((lang_Iterators__Iterable*) this)->T = T;
    lang_Iterators__ReverseIterator___defaults__(this);
    lang_Iterators__ReverseIterator_init((lang_Iterators__ReverseIterator*) this);
    return this;
}
void lang_Iterators__ReverseIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

lang_Iterators__ReverseIteratorClass *lang_Iterators__ReverseIterator_class(){
    static lang_types__Bool __done__ = false;
    static lang_Iterators__ReverseIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(lang_Iterators__ReverseIterator),
                                .size = sizeof(void*),
                                .name = "ReverseIterator",
                            },
                            .__defaults__ = (void (*)(lang_types__Object*)) lang_Iterators__ReverseIterator___defaults___impl,
                            .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                            .__load__ = (void (*)()) lang_Iterators__ReverseIterator___load__,
                        },
                    },
                    .iterator = (lang_Iterators__Iterator* (*)(lang_Iterators__Iterable*)) lang_Iterators__ReverseIterator_iterator_impl,
                    .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                    .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
                },
                .hasNext__quest = (lang_types__Bool (*)(lang_Iterators__Iterator*)) lang_Iterators__ReverseIterator_hasNext__quest_impl,
                .next = (void (*)(lang_Iterators__Iterator*, uint8_t*)) lang_Iterators__ReverseIterator_next_impl,
                .remove = (lang_types__Bool (*)(lang_Iterators__Iterator*)) lang_Iterators__ReverseIterator_remove_impl,
            },
            .hasPrev__quest = (lang_types__Bool (*)(lang_Iterators__BackIterator*)) lang_Iterators__ReverseIterator_hasPrev__quest_impl,
            .prev = (void (*)(lang_Iterators__BackIterator*, uint8_t*)) lang_Iterators__ReverseIterator_prev_impl,
            .reversed = (lang_Iterators__ReverseIterator* (*)(lang_Iterators__BackIterator*)) lang_Iterators__ReverseIterator_reversed_impl,
        },
        .new = lang_Iterators__ReverseIterator_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
    }
    return &class;
}
void lang_Iterators_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_String_load();
        lang_Exception_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        structs_List_load();
        structs_ArrayList_load();
        lang_Iterators__Iterable___load__();
        lang_Iterators__BackIterable___load__();
        lang_Iterators__Iterator___load__();
        lang_Iterators__BackIterator___load__();
        lang_Iterators__ReverseIterator___load__();
    }
}

