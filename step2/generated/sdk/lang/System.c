/* lang/System source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/System.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/Memory.h>

void lang_System__VaList___load__() {
    lang_types__Class___load__();
}

lang_System__VaListClass *lang_System__VaList_class(){
    static lang_System__VaListClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_System__VaList),
                    .size = sizeof(lang_System__VaList),
                    .name = "VaList",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_System__VaList___load__,
            },
        },
    };
    return &class;
}
void lang_System_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Numbers_load();
        lang_types_load();
        lang_Iterators_load();
        lang_String_load();
        lang_Exception_load();
        lang_IO_load();
        lang_Memory_load();
        lang_System__VaList___load__();
    }
}

