/* os/Time header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Time___
#define ___os_Time___

#include <sdk/os/Time-fwd.h>
#include <sdk/lang/types.h>

struct _os_Time__Time {
    struct _lang_types__Object __super__;
};


#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Time__SystemTimeClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeTClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeZoneClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TMStructClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
struct _os_Time__TimeValClass {
    struct _lang_types__ClassClass __super__;
};


#endif
struct _os_Time__TimeClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__UInt __time_millisec_base;
    os_Time__Time* (*new)();
    void (*init)(os_Time__Time*);
    lang_Numbers__LLong (*microtime)();
    lang_Numbers__UInt (*microsec)();
    lang_Numbers__UInt (*sec)();
    lang_Numbers__UInt (*min)();
    lang_Numbers__UInt (*hour)();
    void (*sleepSec)(lang_Numbers__Float);
    void (*sleepMilli)(lang_Numbers__UInt);
    void (*sleepMicro)(lang_Numbers__UInt);
    lang_Numbers__UInt (*__getrunTime__)();
};


#ifdef OOC_FROM_C
#define SystemTime os_Time__SystemTime
#define SystemTime_class() os_Time__SystemTime_class()
#define SystemTimeClass os_Time__SystemTimeClass
#define SystemTimeClass_class() os_Time__SystemTimeClass_class()
#define SystemTime___load__() os_Time__SystemTime___load__()
#define TimeT os_Time__TimeT
#define TimeT_class() os_Time__TimeT_class()
#define TimeTClass os_Time__TimeTClass
#define TimeTClass_class() os_Time__TimeTClass_class()
#define TimeT___load__() os_Time__TimeT___load__()
#define TimeZone os_Time__TimeZone
#define TimeZone_class() os_Time__TimeZone_class()
#define TimeZoneClass os_Time__TimeZoneClass
#define TimeZoneClass_class() os_Time__TimeZoneClass_class()
#define TimeZone___load__() os_Time__TimeZone___load__()
#define TMStruct os_Time__TMStruct
#define TMStruct_class() os_Time__TMStruct_class()
#define TMStructClass os_Time__TMStructClass
#define TMStructClass_class() os_Time__TMStructClass_class()
#define TMStruct___load__() os_Time__TMStruct___load__()
#define TimeVal os_Time__TimeVal
#define TimeVal_class() os_Time__TimeVal_class()
#define TimeValClass os_Time__TimeValClass
#define TimeValClass_class() os_Time__TimeValClass_class()
#define TimeVal___load__() os_Time__TimeVal___load__()
#define Time os_Time__Time
#define Time_class() os_Time__Time_class()
#define TimeClass os_Time__TimeClass
#define TimeClass_class() os_Time__TimeClass_class()
#define Time_new() (void*) os_Time__Time_new()
#define Time_init(_this_) os_Time__Time_init((void*) (_this_))
#define Time_microtime() os_Time__Time_microtime()
#define Time_microsec() os_Time__Time_microsec()
#define Time_sec() os_Time__Time_sec()
#define Time_min() os_Time__Time_min()
#define Time_hour() os_Time__Time_hour()
#define Time_sleepSec(duration) os_Time__Time_sleepSec((duration))
#define Time_sleepMilli(duration) os_Time__Time_sleepMilli((duration))
#define Time_sleepMicro(duration) os_Time__Time_sleepMicro((duration))
#define Time___defaults__(_this_) os_Time__Time___defaults__((void*) (_this_))
#define Time___load__() os_Time__Time___load__()
#define Time___getrunTime__() os_Time__Time___getrunTime__()
#endif

#endif // ___os_Time___
