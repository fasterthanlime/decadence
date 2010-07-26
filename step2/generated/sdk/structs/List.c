/* structs/List source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/List.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>
#include <sdk/text/Buffer.h>
#include <sdk/math/Random.h>
#include <sdk/structs/ArrayList.h>
#include <sdk/structs/HashMap.h>


void structs_List__List_init(structs_List__List* this) {
    lang_Iterators__BackIterable_init((lang_Iterators__BackIterable*) this);
}

void structs_List__List_addAll_impl(structs_List__List* this, lang_Iterators__Iterable* list) {
    structs_List__List_addAll_atStart(this, 0, list);
}

void structs_List__List_addAll_atStart_impl(structs_List__List* this, lang_Numbers__Int start, lang_Iterators__Iterable* list) {
    if (start == 0) {
        
        {
            uint8_t* element = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
            
            {
                lang_Iterators__Iterator* __iter18 = lang_Iterators__Iterable_iterator(list);
                while (lang_Iterators__Iterator_hasNext__quest(__iter18)) {
                    lang_Iterators__Iterator_next(__iter18, element);
                    structs_List__List_add(this, (uint8_t*) element);
                }
            }
        }
        return;
    }
    lang_Numbers__Int index = 0;
    lang_Iterators__Iterator* iter = lang_Iterators__Iterable_iterator(list);
    while (index < start) {
        lang_Iterators__Iterator_next(iter, NULL);
        index += 1;
    }
    while (lang_Iterators__Iterator_hasNext__quest(iter)) {
        uint8_t* __genCall19 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        structs_List__List_add(this, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall19), __genCall19));
    }
}

lang_types__Bool structs_List__List_removeLast_impl(structs_List__List* this) {
    lang_Numbers__Int size = structs_List__List_size(this);
    if (size > 0) {
        structs_List__List_removeAt(this, NULL, size - 1);
        return true;
    }
    return false;
}

lang_types__Bool structs_List__List_contains__quest_impl(structs_List__List* this, uint8_t* element) {
    return structs_List__List_indexOf(this, (uint8_t*) element) != -1;
}

lang_types__Bool structs_List__List_replace_impl(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo) {
    lang_Numbers__Int idx = structs_List__List_indexOf(this, (uint8_t*) oldie);
    if (idx == -1) {
        return false;
    }
    structs_List__List_set(this, NULL, idx, (uint8_t*) kiddo);
    return true;
}

lang_types__Bool structs_List__List_empty__quest_impl(structs_List__List* this) {
    return structs_List__List_size(this) == 0;
}

structs_List__List* structs_List__List_emptyClone_defaults_impl(structs_List__List* this) {
    return structs_List__List_emptyClone(this, ((lang_Iterators__Iterable*) this)->T);
}

void structs_List__List_split_impl(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2) {
    (*list1) = structs_List__List_emptyClone_defaults(this);
    (*list2) = structs_List__List_clone(this);
    
    {
        uint8_t* x = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        
        {
            lang_Iterators__BackIterator* __iter42 = structs_List__List_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter42)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter42, x);
                if (((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) x, f.context)) {
                    structs_List__List_remove((structs_List__List*) (*list2), (uint8_t*) x);
                    structs_List__List_add((structs_List__List*) (*list1), (uint8_t*) x);
                }
            }
        }
    }
}

structs_List__List* structs_List__List_shuffle_impl(structs_List__List* this) {
    structs_List__List* shuffled = structs_List__List_emptyClone_defaults(this);
    structs_ArrayList__ArrayList* indexes = structs_ArrayList__ArrayList_new((lang_types__Class*)lang_Numbers__Int_class());
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < structs_List__List_size(this); i++) {
            structs_ArrayList__ArrayList_add(indexes, (uint8_t*) &(i));
        }
    }
    while (!structs_List__List_empty__quest((structs_List__List*) indexes)) {
        lang_Numbers__Int i = math_Random__Random_randRange(0, structs_ArrayList__ArrayList_size(indexes));
        lang_Numbers__Int __genCall43;
        uint8_t* __genCall44 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        structs_List__List_add(shuffled, (uint8_t*) (structs_List____OP_IDX_List_Int__T(__genCall44, (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, ((lang_Numbers__Int) ((structs_ArrayList__ArrayList_removeAt(indexes, (uint8_t*) &(__genCall43), i), __genCall43)))), __genCall44));
    }
    return shuffled;
}

void structs_List__List_first_impl(structs_List__List* this, uint8_t* __genericReturn14) {
    structs_List__List_get(this, __genericReturn14, 0);
    return;
}

void structs_List__List_last_impl(structs_List__List* this, uint8_t* __genericReturn15) {
    structs_List__List_get(this, __genericReturn15, structs_List__List_lastIndex(this));
    return;
}

lang_Numbers__Int structs_List__List_lastIndex_impl(structs_List__List* this) {
    return structs_List__List_size(this) - 1;
}

void structs_List__List_reverse_impl(structs_List__List* this) {
    lang_Numbers__Int i = 0;
    lang_Numbers__Int j = structs_List__List_size(this) - 1;
    while (i <= j / 2) {
        uint8_t* __genCall16 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        uint8_t* __genCall17 = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        structs_List__List_set(this, NULL, i, (uint8_t*) (structs_List__List_set(this, __genCall17, j, (uint8_t*) (structs_List__List_get(this, __genCall16, i), __genCall16)), __genCall17));
        i += 1;
        j -= 1;
    }
}

lang_types__Pointer structs_List__List_toArray_impl(structs_List__List* this) {
    uint8_t* arr = GC_MALLOC(structs_List__List_size(this) * ((lang_Iterators__Iterable*) this)->T->size);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < structs_List__List_size(this); i++) {
            structs_List____OP_IDX_List_Int__T(&(arr[i * ((lang_Iterators__Iterable*) this)->T->size]), (lang_types__Class*)((lang_Iterators__Iterable*) this)->T, this, i);
        }
    }
    return ((lang_types__Pointer) (arr));
}

structs_List__List* structs_List__List_map_impl(structs_List__List* this, lang_types__Class* K, lang_types__Closure f) {
    structs_List__List* copy = structs_List__List_emptyClone(this, K);
    __structs_List_closure54_ctx* __ctx55 = GC_MALLOC(((lang_types__Class*) __structs_List_closure54_ctx_class())->size);
    (*(__ctx55)) = (__structs_List_closure54_ctx) { f, copy, K };
    lang_types__Closure __closure56 = (lang_types__Closure) { structs_List____structs_List_closure54_thunk, __ctx55 };
    lang_Iterators__Iterable_each((lang_Iterators__Iterable*) this, __closure56);
    return copy;
}

structs_List__List* structs_List__List_filter_impl(structs_List__List* this, lang_types__Closure f) {
    structs_List__List* copy = structs_List__List_emptyClone_defaults(this);
    __structs_List_closure57_ctx* __ctx58 = GC_MALLOC(((lang_types__Class*) __structs_List_closure57_ctx_class())->size);
    (*(__ctx58)) = (__structs_List_closure57_ctx) { f, copy };
    lang_types__Closure __closure59 = (lang_types__Closure) { structs_List____structs_List_closure57_thunk, __ctx58 };
    lang_Iterators__Iterable_each((lang_Iterators__Iterable*) this, __closure59);
    return copy;
}

lang_String__String structs_List__List_join_stringDefault_impl(structs_List__List* this) {
    return structs_List__List_join_string(this, "");
}

lang_String__String structs_List__List_join_string_impl(structs_List__List* this, lang_String__String str) {
    text_Buffer__Buffer* result = text_Buffer__Buffer_new();
    lang_types__Bool first = true;
    
    {
        uint8_t* item = GC_MALLOC(((lang_Iterators__Iterable*) this)->T->size);
        
        {
            lang_Iterators__BackIterator* __iter45 = structs_List__List_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter45)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter45, item);
                if (first) {
                    first = false;
                }
                else {
                    text_Buffer__Buffer_append_str(result, str);
                }
                if (((lang_Iterators__Iterable*) this)->T == (lang_types__Class*) lang_String__String_class()){
                    text_Buffer__Buffer_append_str(result, (* (lang_String__String*)item));
                } else if (((lang_Iterators__Iterable*) this)->T == (lang_types__Class*) lang_String__Char_class()){
                    text_Buffer__Buffer_append_chr(result, (* (lang_String__Char*)item));
                } else {
                    lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(lang_String__String_format("You cannot use `List join` with %s instances.", ((lang_Iterators__Iterable*) this)->T->name)));
                };
            }
        }
    }
    return text_Buffer__Buffer_toString(result);
}

lang_String__String structs_List__List_join_char_impl(structs_List__List* this, lang_String__Char chr) {
    return structs_List__List_join_string(this, lang_String__String_new_withChar(chr));
}

void structs_List__List___defaults___impl(structs_List__List* this) {
    lang_Iterators__BackIterable___defaults___impl((lang_Iterators__BackIterable*) this);
    this->equals__quest = structs_HashMap__getStandardEquals(((lang_Iterators__Iterable*) this)->T);
}

void structs_List__List_add(structs_List__List* this, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add((structs_List__List*)this, element);
}

void structs_List__List_add_withIndex(structs_List__List* this, lang_Numbers__Int index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add_withIndex((structs_List__List*)this, index, element);
}

void structs_List__List_addAll(structs_List__List* this, lang_Iterators__Iterable* list) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->addAll((structs_List__List*)this, list);
}

void structs_List__List_addAll_atStart(structs_List__List* this, lang_Numbers__Int start, lang_Iterators__Iterable* list) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->addAll_atStart((structs_List__List*)this, start, list);
}

void structs_List__List_clear(structs_List__List* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clear((structs_List__List*)this);
}

lang_types__Bool structs_List__List_removeLast(structs_List__List* this) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeLast((structs_List__List*)this);
}

lang_types__Bool structs_List__List_contains__quest(structs_List__List* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->contains__quest((structs_List__List*)this, element);
}

lang_types__Bool structs_List__List_replace(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->replace((structs_List__List*)this, oldie, kiddo);
}

void structs_List__List_get(structs_List__List* this, uint8_t* __genericReturn11, lang_Numbers__Int index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->get((structs_List__List*)this, __genericReturn11, index);
}

lang_Numbers__Int structs_List__List_indexOf(structs_List__List* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->indexOf((structs_List__List*)this, element);
}

lang_types__Bool structs_List__List_empty__quest(structs_List__List* this) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->empty__quest((structs_List__List*)this);
}

lang_Numbers__Int structs_List__List_lastIndexOf(structs_List__List* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndexOf((structs_List__List*)this, element);
}

void structs_List__List_removeAt(structs_List__List* this, uint8_t* __genericReturn12, lang_Numbers__Int index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeAt((structs_List__List*)this, __genericReturn12, index);
}

lang_types__Bool structs_List__List_remove(structs_List__List* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->remove((structs_List__List*)this, element);
}

void structs_List__List_set(structs_List__List* this, uint8_t* __genericReturn13, lang_Numbers__Int index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->set((structs_List__List*)this, __genericReturn13, index, element);
}

lang_Numbers__Int structs_List__List_size(structs_List__List* this) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->size((structs_List__List*)this);
}

lang_Iterators__BackIterator* structs_List__List_iterator(structs_List__List* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

structs_List__List* structs_List__List_clone(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clone((structs_List__List*)this);
}

structs_List__List* structs_List__List_emptyClone(structs_List__List* this, lang_types__Class* K) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone((structs_List__List*)this, K);
}

structs_List__List* structs_List__List_emptyClone_defaults(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone_defaults((structs_List__List*)this);
}

void structs_List__List_split(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->split((structs_List__List*)this, f, list1, list2);
}

structs_List__List* structs_List__List_shuffle(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->shuffle((structs_List__List*)this);
}

void structs_List__List_first(structs_List__List* this, uint8_t* __genericReturn14) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->first((structs_List__List*)this, __genericReturn14);
}

void structs_List__List_last(structs_List__List* this, uint8_t* __genericReturn15) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->last((structs_List__List*)this, __genericReturn15);
}

lang_Numbers__Int structs_List__List_lastIndex(structs_List__List* this) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndex((structs_List__List*)this);
}

void structs_List__List_reverse(structs_List__List* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->reverse((structs_List__List*)this);
}

lang_types__Pointer structs_List__List_toArray(structs_List__List* this) {
    return (lang_types__Pointer) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->toArray((structs_List__List*)this);
}

structs_List__List* structs_List__List_map(structs_List__List* this, lang_types__Class* K, lang_types__Closure f) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->map((structs_List__List*)this, K, f);
}

structs_List__List* structs_List__List_filter(structs_List__List* this, lang_types__Closure f) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->filter((structs_List__List*)this, f);
}

lang_String__String structs_List__List_join_stringDefault(structs_List__List* this) {
    return (lang_String__String) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_stringDefault((structs_List__List*)this);
}

lang_String__String structs_List__List_join_string(structs_List__List* this, lang_String__String str) {
    return (lang_String__String) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_string((structs_List__List*)this, str);
}

lang_String__String structs_List__List_join_char(structs_List__List* this, lang_String__Char chr) {
    return (lang_String__String) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_char((structs_List__List*)this, chr);
}

void structs_List__List___defaults__(structs_List__List* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void structs_List__List___load__() {
    lang_Iterators__BackIterable___load__();
}

structs_List__ListClass *structs_List__List_class(){
    static lang_types__Bool __done__ = false;
    static structs_List__ListClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(structs_List__List),
                            .size = sizeof(void*),
                            .name = "List",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) structs_List__List___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) structs_List__List___load__,
                    },
                },
                .toList = (structs_ArrayList__ArrayList* (*)(lang_Iterators__Iterable*)) lang_Iterators__Iterable_toList_impl,
                .reduce = (void (*)(lang_Iterators__Iterable*, uint8_t*, lang_types__Closure)) lang_Iterators__Iterable_reduce_impl,
                .each = (void (*)(lang_Iterators__Iterable*, lang_types__Closure)) lang_Iterators__Iterable_each_impl,
            },
            .backIterator = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_backIterator_impl,
            .forward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_forward_impl,
            .backward = (lang_Iterators__BackIterator* (*)(lang_Iterators__BackIterable*)) lang_Iterators__BackIterable_backward_impl,
        },
        .add = structs_List__List_add,
        .add_withIndex = structs_List__List_add_withIndex,
        .addAll = structs_List__List_addAll_impl,
        .addAll_atStart = structs_List__List_addAll_atStart_impl,
        .clear = structs_List__List_clear,
        .removeLast = structs_List__List_removeLast_impl,
        .contains__quest = structs_List__List_contains__quest_impl,
        .replace = structs_List__List_replace_impl,
        .get = structs_List__List_get,
        .indexOf = structs_List__List_indexOf,
        .empty__quest = structs_List__List_empty__quest_impl,
        .lastIndexOf = structs_List__List_lastIndexOf,
        .removeAt = structs_List__List_removeAt,
        .remove = structs_List__List_remove,
        .set = structs_List__List_set,
        .size = structs_List__List_size,
        .clone = structs_List__List_clone,
        .emptyClone = structs_List__List_emptyClone,
        .emptyClone_defaults = structs_List__List_emptyClone_defaults_impl,
        .split = structs_List__List_split_impl,
        .shuffle = structs_List__List_shuffle_impl,
        .first = structs_List__List_first_impl,
        .last = structs_List__List_last_impl,
        .lastIndex = structs_List__List_lastIndex_impl,
        .reverse = structs_List__List_reverse_impl,
        .toArray = structs_List__List_toArray_impl,
        .map = structs_List__List_map_impl,
        .filter = structs_List__List_filter_impl,
        .join_stringDefault = structs_List__List_join_stringDefault_impl,
        .join_string = structs_List__List_join_string_impl,
        .join_char = structs_List__List_join_char_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterable_class();
        __done__ = true;
    }
    return &class;
}
void __structs_List_closure54_ctx___load__() {
    lang_types__Class___load__();
}

__structs_List_closure54_ctxClass *__structs_List_closure54_ctx_class(){
    static __structs_List_closure54_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_List_closure54_ctx),
                    .size = sizeof(__structs_List_closure54_ctx),
                    .name = "__structs_List_closure54_ctx",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) __structs_List_closure54_ctx___load__,
            },
        },
    };
    return &class;
}
void __structs_List_closure57_ctx___load__() {
    lang_types__Class___load__();
}

__structs_List_closure57_ctxClass *__structs_List_closure57_ctx_class(){
    static __structs_List_closure57_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_List_closure57_ctx),
                    .size = sizeof(__structs_List_closure57_ctx),
                    .name = "__structs_List_closure57_ctx",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) __structs_List_closure57_ctx___load__,
            },
        },
    };
    return &class;
}
void structs_List_load() {
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
        text_Buffer_load();
        math_Random_load();
        structs_ArrayList_load();
        structs_HashMap_load();
        structs_List__List___load__();
        __structs_List_closure54_ctx___load__();
        __structs_List_closure57_ctx___load__();
    }
}


void structs_List____structs_List_closure54(lang_types__Closure f, structs_List__List* copy, lang_types__Class* K, uint8_t* x) {
    uint8_t* __genCall47 = GC_MALLOC(K->size);
    structs_List__List_add(copy, (uint8_t*) (((void (*)(uint8_t*, uint8_t*, void*)) f.thunk)(__genCall47, (uint8_t*) x, f.context), __genCall47));
}

void structs_List____structs_List_closure54_thunk(uint8_t* x, __structs_List_closure54_ctx* __context__) {
    structs_List____structs_List_closure54((*__context__).f, (*__context__).copy, (*__context__).K, (uint8_t*) x);
}

void structs_List____structs_List_closure57(lang_types__Closure f, structs_List__List* copy, uint8_t* x) {
    if (((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) x, f.context)) {
        structs_List__List_add(copy, (uint8_t*) x);
    }
}

void structs_List____structs_List_closure57_thunk(uint8_t* x, __structs_List_closure57_ctx* __context__) {
    structs_List____structs_List_closure57((*__context__).f, (*__context__).copy, (uint8_t*) x);
}

void structs_List____OP_IDX_List_Int__T(uint8_t* __genericReturn20, lang_types__Class* T, structs_List__List* list, lang_Numbers__Int i) {
    structs_List__List_get(list, __genericReturn20, i);
    return;
}

void structs_List____OP_IDX_ASS_List_Int_T(lang_types__Class* T, structs_List__List* list, lang_Numbers__Int i, uint8_t* element) {
    structs_List__List_set(list, NULL, i, (uint8_t*) element);
}

void structs_List____OP_ADD_ASS_List_T(lang_types__Class* T, structs_List__List* list, uint8_t* element) {
    structs_List__List_add(list, (uint8_t*) element);
}

lang_types__Bool structs_List____OP_SUB_ASS_List_T__Bool(lang_types__Class* T, structs_List__List* list, uint8_t* element) {
    return structs_List__List_remove(list, (uint8_t*) element);
}
