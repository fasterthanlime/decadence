/* lang/Exception header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Exception_fwd___
#define ___lang_Exception_fwd___

struct _lang_Exception__Exception;
typedef struct _lang_Exception__Exception lang_Exception__Exception;
struct _lang_Exception__ExceptionClass;
typedef struct _lang_Exception__ExceptionClass lang_Exception__ExceptionClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
lang_Exception__ExceptionClass *lang_Exception__Exception_class();
lang_Exception__Exception* lang_Exception__Exception_new_originMsg(lang_types__Class* origin, lang_String__String msg);
void lang_Exception__Exception_init_originMsg(lang_Exception__Exception* this, lang_types__Class* origin, lang_String__String msg);
lang_Exception__Exception* lang_Exception__Exception_new_noOrigin(lang_String__String msg);
void lang_Exception__Exception_init_noOrigin(lang_Exception__Exception* this, lang_String__String msg);
void lang_Exception__Exception_crash(lang_Exception__Exception* this);
void lang_Exception__Exception_crash_impl(lang_Exception__Exception* this);
lang_String__String lang_Exception__Exception_getMessage(lang_Exception__Exception* this);
lang_String__String lang_Exception__Exception_getMessage_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_print(lang_Exception__Exception* this);
void lang_Exception__Exception_print_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_throw(lang_Exception__Exception* this);
void lang_Exception__Exception_throw_impl(lang_Exception__Exception* this);
void lang_Exception__Exception___defaults__(lang_Exception__Exception* this);
void lang_Exception__Exception___defaults___impl(lang_Exception__Exception* this);
void lang_Exception__Exception___load__();
void lang_Exception_load();

#endif // ___lang_Exception_fwd___
