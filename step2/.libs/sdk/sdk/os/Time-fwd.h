/* os/Time header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Time_fwd___
#define ___os_Time_fwd___

#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <unistd.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <sys/time.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <time.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if !(defined(__linux__))
#include <unistd.h>
#endif
#if !(defined(__linux__))
#include <sys/time.h>
#endif
#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
typedef SYSTEMTIME os_Time__SystemTime;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
typedef time_t os_Time__TimeT;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
typedef struct timezone os_Time__TimeZone;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
typedef struct tm os_Time__TMStruct;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
typedef struct timeval os_Time__TimeVal;
#endif
struct _os_Time__Time;
typedef struct _os_Time__Time os_Time__Time;
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Time__SystemTimeClass;
typedef struct _os_Time__SystemTimeClass os_Time__SystemTimeClass;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeTClass;
typedef struct _os_Time__TimeTClass os_Time__TimeTClass;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeZoneClass;
typedef struct _os_Time__TimeZoneClass os_Time__TimeZoneClass;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TMStructClass;
typedef struct _os_Time__TMStructClass os_Time__TMStructClass;
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeValClass;
typedef struct _os_Time__TimeValClass os_Time__TimeValClass;
#endif
struct _os_Time__TimeClass;
typedef struct _os_Time__TimeClass os_Time__TimeClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
os_Time__SystemTimeClass *os_Time__SystemTime_class();
void os_Time__SystemTime___load__();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
os_Time__TimeTClass *os_Time__TimeT_class();
void os_Time__TimeT___load__();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
os_Time__TimeZoneClass *os_Time__TimeZone_class();
void os_Time__TimeZone___load__();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
os_Time__TMStructClass *os_Time__TMStruct_class();
void os_Time__TMStruct___load__();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
os_Time__TimeValClass *os_Time__TimeVal_class();
void os_Time__TimeVal___load__();
#endif
os_Time__TimeClass *os_Time__Time_class();
os_Time__Time* os_Time__Time_new();
void os_Time__Time_init(os_Time__Time* this);
lang_Numbers__LLong os_Time__Time_microtime();
lang_Numbers__UInt os_Time__Time_microsec();
lang_Numbers__UInt os_Time__Time_sec();
lang_Numbers__UInt os_Time__Time_min();
lang_Numbers__UInt os_Time__Time_hour();
void os_Time__Time_sleepSec(lang_Numbers__Float duration);
void os_Time__Time_sleepMilli(lang_Numbers__UInt duration);
void os_Time__Time_sleepMicro(lang_Numbers__UInt duration);
void os_Time__Time___defaults__(os_Time__Time* this);
void os_Time__Time___defaults___impl(os_Time__Time* this);
void os_Time__Time___load__();
lang_Numbers__UInt os_Time__Time___getrunTime__();
void os_Time_load();
#if !(defined(__WIN32__) || defined(__WIN64__))
extern os_Time__TimeT time(os_Time__TimeT* );
#endif

#endif // ___os_Time_fwd___
