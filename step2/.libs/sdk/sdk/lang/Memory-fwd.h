/* lang/Memory header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Memory_fwd___
#define ___lang_Memory_fwd___

#include <memory.h>
#if defined(__OOC_USE_GC__)
#include <gc/gc.h>
#endif

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
void lang_Memory_load();
#if !(defined(__OOC_USE_GC__))
lang_types__Pointer lang_Memory__gc_malloc(lang_Numbers__SizeT size);
#endif
#if defined(__OOC_USE_GC__)
lang_types__Pointer lang_Memory__gc_calloc(lang_Numbers__SizeT nmemb, lang_Numbers__SizeT size);
#endif

#endif // ___lang_Memory_fwd___
