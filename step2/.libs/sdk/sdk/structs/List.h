/* structs/List header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_List___
#define ___structs_List___

#include <sdk/structs/List-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _structs_List__List {
    struct _lang_Iterators__BackIterable __super__;
    lang_types__Closure equals__quest;
};


struct ___structs_List_closure54_ctx {
    lang_types__Closure f;
    structs_List__List* copy;
    lang_types__Class* K;
};

struct ___structs_List_closure57_ctx {
    lang_types__Closure f;
    structs_List__List* copy;
};

struct _structs_List__ListClass {
    struct _lang_Iterators__BackIterableClass __super__;
    void (*add)(structs_List__List*, uint8_t*);
    void (*add_withIndex)(structs_List__List*, lang_Numbers__Int, uint8_t*);
    void (*addAll)(structs_List__List*, lang_Iterators__Iterable*);
    void (*addAll_atStart)(structs_List__List*, lang_Numbers__Int, lang_Iterators__Iterable*);
    void (*clear)(structs_List__List*);
    lang_types__Bool (*removeLast)(structs_List__List*);
    lang_types__Bool (*contains__quest)(structs_List__List*, uint8_t*);
    lang_types__Bool (*replace)(structs_List__List*, uint8_t*, uint8_t*);
    void (*get)(structs_List__List*, uint8_t*, lang_Numbers__Int);
    lang_Numbers__Int (*indexOf)(structs_List__List*, uint8_t*);
    lang_types__Bool (*empty__quest)(structs_List__List*);
    lang_Numbers__Int (*lastIndexOf)(structs_List__List*, uint8_t*);
    void (*removeAt)(structs_List__List*, uint8_t*, lang_Numbers__Int);
    lang_types__Bool (*remove)(structs_List__List*, uint8_t*);
    void (*set)(structs_List__List*, uint8_t*, lang_Numbers__Int, uint8_t*);
    lang_Numbers__Int (*size)(structs_List__List*);
    structs_List__List* (*clone)(structs_List__List*);
    structs_List__List* (*emptyClone)(structs_List__List*, lang_types__Class*);
    structs_List__List* (*emptyClone_defaults)(structs_List__List*);
    void (*split)(structs_List__List*, lang_types__Closure, structs_List__List**, structs_List__List**);
    structs_List__List* (*shuffle)(structs_List__List*);
    void (*first)(structs_List__List*, uint8_t*);
    void (*last)(structs_List__List*, uint8_t*);
    lang_Numbers__Int (*lastIndex)(structs_List__List*);
    void (*reverse)(structs_List__List*);
    lang_types__Pointer (*toArray)(structs_List__List*);
    structs_List__List* (*map)(structs_List__List*, lang_types__Class*, lang_types__Closure);
    structs_List__List* (*filter)(structs_List__List*, lang_types__Closure);
    lang_String__String (*join_stringDefault)(structs_List__List*);
    lang_String__String (*join_string)(structs_List__List*, lang_String__String);
    lang_String__String (*join_char)(structs_List__List*, lang_String__Char);
};


struct ___structs_List_closure54_ctxClass {
    struct _lang_types__ClassClass __super__;
};


struct ___structs_List_closure57_ctxClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define __structs_List_closure54(f, copy, K, x) structs_List____structs_List_closure54((f), (void*) (copy), (void*) (K), (x))
#define __structs_List_closure54_thunk(x, __context__) structs_List____structs_List_closure54_thunk((x), (__context__))
#define __structs_List_closure57(f, copy, x) structs_List____structs_List_closure57((f), (void*) (copy), (x))
#define __structs_List_closure57_thunk(x, __context__) structs_List____structs_List_closure57_thunk((x), (__context__))
#define List structs_List__List
#define List_class() structs_List__List_class()
#define ListClass structs_List__ListClass
#define ListClass_class() structs_List__ListClass_class()
#define List_init(_this_) structs_List__List_init((void*) (_this_))
#define List_add(_this_, element) structs_List__List_add((void*) (_this_), (element))
#define List_add_withIndex(_this_, index, element) structs_List__List_add_withIndex((void*) (_this_), (index), (element))
#define List_addAll(_this_, list) structs_List__List_addAll((void*) (_this_), (void*) (list))
#define List_addAll_atStart(_this_, start, list) structs_List__List_addAll_atStart((void*) (_this_), (start), (void*) (list))
#define List_clear(_this_) structs_List__List_clear((void*) (_this_))
#define List_removeLast(_this_) structs_List__List_removeLast((void*) (_this_))
#define List_contains__quest(_this_, element) structs_List__List_contains__quest((void*) (_this_), (element))
#define List_replace(_this_, oldie, kiddo) structs_List__List_replace((void*) (_this_), (oldie), (kiddo))
#define List_get(_this_, __genericReturn11, index) structs_List__List_get((void*) (_this_), (__genericReturn11), (index))
#define List_indexOf(_this_, element) structs_List__List_indexOf((void*) (_this_), (element))
#define List_empty__quest(_this_) structs_List__List_empty__quest((void*) (_this_))
#define List_lastIndexOf(_this_, element) structs_List__List_lastIndexOf((void*) (_this_), (element))
#define List_removeAt(_this_, __genericReturn12, index) structs_List__List_removeAt((void*) (_this_), (__genericReturn12), (index))
#define List_remove(_this_, element) structs_List__List_remove((void*) (_this_), (element))
#define List_set(_this_, __genericReturn13, index, element) structs_List__List_set((void*) (_this_), (__genericReturn13), (index), (element))
#define List_size(_this_) structs_List__List_size((void*) (_this_))
#define List_iterator(_this_) (void*) structs_List__List_iterator((void*) (_this_))
#define List_clone(_this_) (void*) structs_List__List_clone((void*) (_this_))
#define List_emptyClone(_this_, K, K) (void*) structs_List__List_emptyClone((void*) (_this_), (K), (void*) (K))
#define List_emptyClone_defaults(_this_) (void*) structs_List__List_emptyClone_defaults((void*) (_this_))
#define List_split(_this_, f, list1, list2) structs_List__List_split((void*) (_this_), (f), (void*) (list1), (void*) (list2))
#define List_shuffle(_this_) (void*) structs_List__List_shuffle((void*) (_this_))
#define List_first(_this_, __genericReturn14) structs_List__List_first((void*) (_this_), (__genericReturn14))
#define List_last(_this_, __genericReturn15) structs_List__List_last((void*) (_this_), (__genericReturn15))
#define List_lastIndex(_this_) structs_List__List_lastIndex((void*) (_this_))
#define List_reverse(_this_) structs_List__List_reverse((void*) (_this_))
#define List_toArray(_this_) (void*) structs_List__List_toArray((void*) (_this_))
#define List_map(_this_, K, f) (void*) structs_List__List_map((void*) (_this_), (K), (f))
#define List_filter(_this_, f) (void*) structs_List__List_filter((void*) (_this_), (f))
#define List_join_stringDefault(_this_) structs_List__List_join_stringDefault((void*) (_this_))
#define List_join_string(_this_, str) structs_List__List_join_string((void*) (_this_), (str))
#define List_join_char(_this_, chr) structs_List__List_join_char((void*) (_this_), (chr))
#define List___defaults__(_this_) structs_List__List___defaults__((void*) (_this_))
#define List___load__() structs_List__List___load__()
#endif

#endif // ___structs_List___
