/* math/Random header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___math_Random_fwd___
#define ___math_Random_fwd___

struct _math_Random__Random;
typedef struct _math_Random__Random math_Random__Random;
struct _math_Random__RandomClass;
typedef struct _math_Random__RandomClass math_Random__RandomClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/os/Time-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/structs/List-fwd.h>

#ifndef __FUNC___Int_Int_Int__DEFINE
#define __FUNC___Int_Int_Int__DEFINE

typedef lang_Numbers__Int (*__FUNC___Int_Int_Int)(lang_Numbers__Int, lang_Numbers__Int, void*);

#endif

math_Random__RandomClass *math_Random__Random_class();
math_Random__Random* math_Random__Random_new();
void math_Random__Random_init(math_Random__Random* this);
lang_Numbers__Int math_Random__Random_random();
lang_Numbers__Int math_Random__Random_randInt(lang_Numbers__Int start, lang_Numbers__Int end);
lang_Numbers__Int math_Random__Random_randInt_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex);
lang_Numbers__Int math_Random__Random_randRange(lang_Numbers__Int start, lang_Numbers__Int end);
lang_Numbers__Int math_Random__Random_randRange_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex);
void math_Random__Random_choice(uint8_t* __genericReturn21, lang_types__Class* T, structs_List__List* l);
lang_Numbers__Int math_Random__Random_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex, lang_types__Closure f);
lang_Numbers__Int math_Random__Random_fastRandom();
lang_Numbers__Int math_Random__Random_fastRandInt(lang_Numbers__Int start, lang_Numbers__Int end);
lang_Numbers__Int math_Random__Random_fastRandInt_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex);
lang_Numbers__Int math_Random__Random_fastRandRange(lang_Numbers__Int start, lang_Numbers__Int end);
lang_Numbers__Int math_Random__Random_fastRandRange_exclude(lang_Numbers__Int start, lang_Numbers__Int end, structs_List__List* ex);
void math_Random__Random___defaults__(math_Random__Random* this);
void math_Random__Random___defaults___impl(math_Random__Random* this);
void math_Random__Random___load__();
void math_Random_load();

#endif // ___math_Random_fwd___
