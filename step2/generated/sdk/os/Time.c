/* os/Time source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/Time.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>

#if defined(__WIN32__) || defined(__WIN64__)
void os_Time__SystemTime___load__() {
    lang_types__Class___load__();
}

os_Time__SystemTimeClass *os_Time__SystemTime_class(){
    static os_Time__SystemTimeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__SystemTime),
                    .size = sizeof(os_Time__SystemTime),
                    .name = "SystemTime",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__SystemTime___load__,
            },
        },
    };
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeT___load__() {
    lang_types__Class___load__();
}

os_Time__TimeTClass *os_Time__TimeT_class(){
    static os_Time__TimeTClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeT),
                    .size = sizeof(os_Time__TimeT),
                    .name = "TimeT",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__TimeT___load__,
            },
        },
    };
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeZone___load__() {
    lang_types__Class___load__();
}

os_Time__TimeZoneClass *os_Time__TimeZone_class(){
    static os_Time__TimeZoneClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeZone),
                    .size = sizeof(os_Time__TimeZone),
                    .name = "TimeZone",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__TimeZone___load__,
            },
        },
    };
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TMStruct___load__() {
    lang_types__Class___load__();
}

os_Time__TMStructClass *os_Time__TMStruct_class(){
    static os_Time__TMStructClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TMStruct),
                    .size = sizeof(os_Time__TMStruct),
                    .name = "TMStruct",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__TMStruct___load__,
            },
        },
    };
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeVal___load__() {
    lang_types__Class___load__();
}

os_Time__TimeValClass *os_Time__TimeVal_class(){
    static os_Time__TimeValClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeVal),
                    .size = sizeof(os_Time__TimeVal),
                    .name = "TimeVal",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__TimeVal___load__,
            },
        },
    };
    return &class;
}
#endif

void os_Time__Time_init(os_Time__Time* this) {
}

void os_Time__Time___defaults___impl(os_Time__Time* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Time__Time___defaults__(os_Time__Time* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Time__Time* os_Time__Time_new() {
    
    os_Time__Time* this = ((os_Time__Time*) (lang_types__Class_alloc__class((lang_types__Class*) os_Time__Time_class())));
    os_Time__Time___defaults__(this);
    os_Time__Time_init((os_Time__Time*) this);
    return this;
}
lang_Numbers__LLong os_Time__Time_microtime() {
    
    return ((lang_Numbers__LLong) (os_Time__Time_microsec())) + (((lang_Numbers__LLong) (os_Time__Time_sec()))) * 1000000;
}
lang_Numbers__UInt os_Time__Time_microsec() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wMilliseconds * 1000));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeVal tv;
    gettimeofday(&(tv), NULL);
    return ((lang_Numbers__UInt) (tv.tv_usec));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_sec() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wSecond));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = time(NULL);
    os_Time__TMStruct* val = localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_sec));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_min() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wMinute));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = time(NULL);
    os_Time__TMStruct* val = localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_min));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_hour() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wHour));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = time(NULL);
    os_Time__TMStruct* val = localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_hour));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
void os_Time__Time_sleepSec(lang_Numbers__Float duration) {
    
    os_Time__Time_sleepMicro(duration * 1000000);
}
void os_Time__Time_sleepMilli(lang_Numbers__UInt duration) {
    
    os_Time__Time_sleepMicro(duration * 1000);
}
void os_Time__Time_sleepMicro(lang_Numbers__UInt duration) {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    Sleep(duration / 1000);
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    usleep(duration);
    #endif
}
void os_Time__Time___load__() {
    lang_types__Class___load__();
    os_Time__Time_class()->__time_millisec_base = os_Time__Time___getrunTime__();
}
lang_Numbers__UInt os_Time__Time___getrunTime__() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    ((lang_Numbers__UInt) (timeGetTime())) - os_Time__Time_class()->__time_millisec_base;
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeVal tv;
    gettimeofday(&(tv), NULL);
    return ((lang_Numbers__UInt) (((tv.tv_usec / 1000 + tv.tv_sec * 1000) - os_Time__Time_class()->__time_millisec_base)));
    #endif
    return ((lang_Numbers__UInt) (-1));
}

os_Time__TimeClass *os_Time__Time_class(){
    static lang_types__Bool __done__ = false;
    static os_Time__TimeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__Time),
                    .size = sizeof(void*),
                    .name = "Time",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) os_Time__Time___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) os_Time__Time___load__,
            },
        },
        .new = os_Time__Time_new,
        .microtime = os_Time__Time_microtime,
        .microsec = os_Time__Time_microsec,
        .sec = os_Time__Time_sec,
        .min = os_Time__Time_min,
        .hour = os_Time__Time_hour,
        .sleepSec = os_Time__Time_sleepSec,
        .sleepMilli = os_Time__Time_sleepMilli,
        .sleepMicro = os_Time__Time_sleepMicro,
        .__getrunTime__ = os_Time__Time___getrunTime__,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
    }
    return &class;
}
void os_Time_load() {
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
        #if defined(__WIN32__) || defined(__WIN64__)
        os_Time__SystemTime___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeT___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeZone___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TMStruct___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeVal___load__();
        #endif
        os_Time__Time___load__();
    }
}

