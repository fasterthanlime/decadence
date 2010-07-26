/* lang/Numbers source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Numbers.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/IO.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Memory.h>


lang_String__String lang_Numbers__LLong_toString(lang_Numbers__LLong this) {
    return lang_String__String_format("%lld", this);
}

lang_String__String lang_Numbers__LLong_toHexString(lang_Numbers__LLong this) {
    return lang_String__String_format("%llx", this);
}

lang_types__Bool lang_Numbers__LLong_odd__quest(lang_Numbers__LLong this) {
    return this % 2 == (lang_Numbers__LLong) 1;
}

lang_types__Bool lang_Numbers__LLong_even__quest(lang_Numbers__LLong this) {
    return this % 2 == (lang_Numbers__LLong) 0;
}

lang_types__Bool lang_Numbers__LLong_divisor__quest(lang_Numbers__LLong this, lang_Numbers__Int divisor) {
    return this % divisor == (lang_Numbers__LLong) 0;
}

lang_types__Bool lang_Numbers__LLong_in__quest(lang_Numbers__LLong this, lang_Numbers__Range range) {
    return this >= (lang_Numbers__LLong) range.min && this < (lang_Numbers__LLong) range.max;
}
void lang_Numbers__LLong___load__() {
    lang_types__Class___load__();
}

lang_Numbers__LLongClass *lang_Numbers__LLong_class(){
    static lang_Numbers__LLongClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__LLong),
                    .size = sizeof(lang_Numbers__LLong),
                    .name = "LLong",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Numbers__LLong___load__,
            },
        },
    };
    return &class;
}
void lang_Numbers__Long___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__LongClass *lang_Numbers__Long_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__LongClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Long),
                        .size = sizeof(lang_Numbers__Long),
                        .name = "Long",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Long___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Int___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__IntClass *lang_Numbers__Int_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__IntClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int),
                        .size = sizeof(lang_Numbers__Int),
                        .name = "Int",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Int___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Short___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__ShortClass *lang_Numbers__Short_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__ShortClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Short),
                        .size = sizeof(lang_Numbers__Short),
                        .name = "Short",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Short___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}

lang_String__String lang_Numbers__ULLong_toString(lang_Numbers__ULLong this) {
    return lang_String__String_format("%llu", this);
}

lang_types__Bool lang_Numbers__ULLong_in__quest(lang_Numbers__ULLong this, lang_Numbers__Range range) {
    return this >= (lang_Numbers__ULLong) range.min && this < (lang_Numbers__ULLong) range.max;
}
void lang_Numbers__ULLong___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__ULLongClass *lang_Numbers__ULLong_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__ULLongClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__ULLong),
                        .size = sizeof(lang_Numbers__ULLong),
                        .name = "ULLong",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__ULLong___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__ULong___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__ULongClass *lang_Numbers__ULong_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__ULongClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__ULong),
                            .size = sizeof(lang_Numbers__ULong),
                            .name = "ULong",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__ULong___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UInt___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UIntClass *lang_Numbers__UInt_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UIntClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt),
                            .size = sizeof(lang_Numbers__UInt),
                            .name = "UInt",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UInt___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UShort___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UShortClass *lang_Numbers__UShort_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UShortClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UShort),
                            .size = sizeof(lang_Numbers__UShort),
                            .name = "UShort",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UShort___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Int8___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int8Class *lang_Numbers__Int8_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__Int8Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int8),
                        .size = sizeof(lang_Numbers__Int8),
                        .name = "Int8",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Int8___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Int16___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int16Class *lang_Numbers__Int16_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__Int16Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int16),
                        .size = sizeof(lang_Numbers__Int16),
                        .name = "Int16",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Int16___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Int32___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int32Class *lang_Numbers__Int32_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__Int32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int32),
                        .size = sizeof(lang_Numbers__Int32),
                        .name = "Int32",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Int32___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Int64___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int64Class *lang_Numbers__Int64_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__Int64Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int64),
                        .size = sizeof(lang_Numbers__Int64),
                        .name = "Int64",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Int64___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UInt8___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt8Class *lang_Numbers__UInt8_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UInt8Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt8),
                            .size = sizeof(lang_Numbers__UInt8),
                            .name = "UInt8",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UInt8___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UInt16___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt16Class *lang_Numbers__UInt16_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UInt16Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt16),
                            .size = sizeof(lang_Numbers__UInt16),
                            .name = "UInt16",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UInt16___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UInt32___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt32Class *lang_Numbers__UInt32_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UInt32Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt32),
                            .size = sizeof(lang_Numbers__UInt32),
                            .name = "UInt32",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UInt32___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__UInt64___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt64Class *lang_Numbers__UInt64_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__UInt64Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt64),
                            .size = sizeof(lang_Numbers__UInt64),
                            .name = "UInt64",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__UInt64___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Octet___load__() {
    lang_types__Class___load__();
}

lang_Numbers__OctetClass *lang_Numbers__Octet_class(){
    static lang_Numbers__OctetClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__Octet),
                    .size = sizeof(lang_Numbers__Octet),
                    .name = "Octet",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Numbers__Octet___load__,
            },
        },
    };
    return &class;
}
void lang_Numbers__SizeT___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__SizeTClass *lang_Numbers__SizeT_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__SizeTClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__SizeT),
                            .size = sizeof(lang_Numbers__SizeT),
                            .name = "SizeT",
                        },
                        .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                        .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                        .__load__ = (void (*)()) lang_Numbers__SizeT___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__SSizeT___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__SSizeTClass *lang_Numbers__SSizeT_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__SSizeTClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__SSizeT),
                        .size = sizeof(lang_Numbers__SSizeT),
                        .name = "SSizeT",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__SSizeT___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
    }
    return &class;
}

lang_String__String lang_Numbers__LDouble_toString(lang_Numbers__LDouble this) {
    lang_String__String str = GC_MALLOC(64);
    sprintf(str, "%.2Lf", this);
    return str;
}

lang_Numbers__LDouble lang_Numbers__LDouble_abs(lang_Numbers__LDouble this) {
    return this < (lang_Numbers__LDouble) 0 ? -this : this;
}
void lang_Numbers__LDouble___load__() {
    lang_types__Class___load__();
}

lang_Numbers__LDoubleClass *lang_Numbers__LDouble_class(){
    static lang_Numbers__LDoubleClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__LDouble),
                    .size = sizeof(lang_Numbers__LDouble),
                    .name = "LDouble",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Numbers__LDouble___load__,
            },
        },
    };
    return &class;
}
void lang_Numbers__Float___load__() {
    lang_Numbers__LDouble___load__();
}

lang_Numbers__FloatClass *lang_Numbers__Float_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__FloatClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Float),
                        .size = sizeof(lang_Numbers__Float),
                        .name = "Float",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Float___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LDouble_class();
        __done__ = true;
    }
    return &class;
}
void lang_Numbers__Double___load__() {
    lang_Numbers__LDouble___load__();
}

lang_Numbers__DoubleClass *lang_Numbers__Double_class(){
    static lang_types__Bool __done__ = false;
    static lang_Numbers__DoubleClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Double),
                        .size = sizeof(lang_Numbers__Double),
                        .name = "Double",
                    },
                    .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                    .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                    .__load__ = (void (*)()) lang_Numbers__Double___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LDouble_class();
        __done__ = true;
    }
    return &class;
}

lang_Numbers__Int lang_Numbers__Range_reduce(lang_Numbers__Range this, lang_types__Closure f) {
    lang_Numbers__Int acc = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(this.min, this.min + 1, f.context);
    
    {
        lang_Numbers__Int i;
        for (i = this.min + 2; i < this.max; i++) {
            acc = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(acc, i, f.context);
        }
    }
    return acc;
}
lang_Numbers__Range lang_Numbers__Range_new(lang_Numbers__Int min, lang_Numbers__Int max) {
    
    lang_Numbers__Range this;
    this.min = min;
    this.max = max;
    return this;
}
void lang_Numbers__Range___load__() {
    lang_types__Class___load__();
}

lang_Numbers__RangeClass *lang_Numbers__Range_class(){
    static lang_Numbers__RangeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__Range),
                    .size = sizeof(lang_Numbers__Range),
                    .name = "Range",
                },
                .__defaults__ = (void (*)(lang_types__Object*)) lang_types__Class___defaults___impl,
                .__destroy__ = (void (*)(lang_types__Object*)) lang_types__Object___destroy___impl,
                .__load__ = (void (*)()) lang_Numbers__Range___load__,
            },
        },
    };
    return &class;
}
lang_Numbers__Int lang_Numbers__INT_MAX;
lang_Numbers__Int lang_Numbers__INT_MIN;
void lang_Numbers_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_types_load();
        lang_Iterators_load();
        lang_String_load();
        lang_Exception_load();
        lang_IO_load();
        lang_System_load();
        lang_Memory_load();
        lang_Numbers__LLong___load__();
        lang_Numbers__Long___load__();
        lang_Numbers__Int___load__();
        lang_Numbers__Short___load__();
        lang_Numbers__ULLong___load__();
        lang_Numbers__ULong___load__();
        lang_Numbers__UInt___load__();
        lang_Numbers__UShort___load__();
        lang_Numbers__Int8___load__();
        lang_Numbers__Int16___load__();
        lang_Numbers__Int32___load__();
        lang_Numbers__Int64___load__();
        lang_Numbers__UInt8___load__();
        lang_Numbers__UInt16___load__();
        lang_Numbers__UInt32___load__();
        lang_Numbers__UInt64___load__();
        lang_Numbers__Octet___load__();
        lang_Numbers__SizeT___load__();
        lang_Numbers__SSizeT___load__();
        lang_Numbers__LDouble___load__();
        lang_Numbers__Float___load__();
        lang_Numbers__Double___load__();
        lang_Numbers__Range___load__();
        lang_Numbers__INT_MAX = 2147483647;
        lang_Numbers__INT_MIN = -lang_Numbers__INT_MAX - 1;
    }
}

