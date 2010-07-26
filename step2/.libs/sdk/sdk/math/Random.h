/* math/Random header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___math_Random___
#define ___math_Random___

#include <sdk/math/Random-fwd.h>
#include <sdk/lang/types.h>

struct _math_Random__Random {
    struct _lang_types__Object __super__;
};


struct _math_Random__RandomClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__LLong state;
    math_Random__Random* (*new)();
    void (*init)(math_Random__Random*);
    lang_Numbers__Int (*random)();
    lang_Numbers__Int (*randInt)(lang_Numbers__Int, lang_Numbers__Int);
    lang_Numbers__Int (*randInt_exclude)(lang_Numbers__Int, lang_Numbers__Int, structs_List__List*);
    lang_Numbers__Int (*randRange)(lang_Numbers__Int, lang_Numbers__Int);
    lang_Numbers__Int (*randRange_exclude)(lang_Numbers__Int, lang_Numbers__Int, structs_List__List*);
    void (*choice)(uint8_t*, lang_types__Class*, structs_List__List*);
    lang_Numbers__Int (*exclude)(lang_Numbers__Int, lang_Numbers__Int, structs_List__List*, lang_types__Closure);
    lang_Numbers__Int (*fastRandom)();
    lang_Numbers__Int (*fastRandInt)(lang_Numbers__Int, lang_Numbers__Int);
    lang_Numbers__Int (*fastRandInt_exclude)(lang_Numbers__Int, lang_Numbers__Int, structs_List__List*);
    lang_Numbers__Int (*fastRandRange)(lang_Numbers__Int, lang_Numbers__Int);
    lang_Numbers__Int (*fastRandRange_exclude)(lang_Numbers__Int, lang_Numbers__Int, structs_List__List*);
};


#ifdef OOC_FROM_C
#define Random math_Random__Random
#define Random_class() math_Random__Random_class()
#define RandomClass math_Random__RandomClass
#define RandomClass_class() math_Random__RandomClass_class()
#define Random_new() (void*) math_Random__Random_new()
#define Random_init(_this_) math_Random__Random_init((void*) (_this_))
#define Random_random() math_Random__Random_random()
#define Random_randInt(start, end) math_Random__Random_randInt((start), (end))
#define Random_randInt_exclude(start, end, ex) math_Random__Random_randInt_exclude((start), (end), (void*) (ex))
#define Random_randRange(start, end) math_Random__Random_randRange((start), (end))
#define Random_randRange_exclude(start, end, ex) math_Random__Random_randRange_exclude((start), (end), (void*) (ex))
#define Random_choice(__genericReturn21, T, l) math_Random__Random_choice((__genericReturn21), (T), (void*) (l))
#define Random_exclude(start, end, ex, f) math_Random__Random_exclude((start), (end), (void*) (ex), (f))
#define Random_fastRandom() math_Random__Random_fastRandom()
#define Random_fastRandInt(start, end) math_Random__Random_fastRandInt((start), (end))
#define Random_fastRandInt_exclude(start, end, ex) math_Random__Random_fastRandInt_exclude((start), (end), (void*) (ex))
#define Random_fastRandRange(start, end) math_Random__Random_fastRandRange((start), (end))
#define Random_fastRandRange_exclude(start, end, ex) math_Random__Random_fastRandRange_exclude((start), (end), (void*) (ex))
#define Random___defaults__(_this_) math_Random__Random___defaults__((void*) (_this_))
#define Random___load__() math_Random__Random___load__()
#endif

#endif // ___math_Random___
