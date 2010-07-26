/* lang/Numbers header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Numbers___
#define ___lang_Numbers___

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types.h>

struct _lang_Numbers__Range {
    lang_Numbers__Int min;
    lang_Numbers__Int max;
};

struct _lang_Numbers__LLongClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String (*toString)(lang_Numbers__LLong);
    lang_String__String (*toHexString)(lang_Numbers__LLong);
    lang_types__Bool (*odd__quest)(lang_Numbers__LLong);
    lang_types__Bool (*even__quest)(lang_Numbers__LLong);
    lang_types__Bool (*divisor__quest)(lang_Numbers__LLong, lang_Numbers__Int);
    lang_types__Bool (*in__quest)(lang_Numbers__LLong, lang_Numbers__Range);
};


struct _lang_Numbers__LongClass {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__IntClass {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__ShortClass {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__ULLongClass {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__ULongClass {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__UIntClass {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__UShortClass {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__Int8Class {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__Int16Class {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__Int32Class {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__Int64Class {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__UInt8Class {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__UInt16Class {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__UInt32Class {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__UInt64Class {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__OctetClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_Numbers__SizeTClass {
    struct _lang_Numbers__ULLongClass __super__;
};


struct _lang_Numbers__SSizeTClass {
    struct _lang_Numbers__LLongClass __super__;
};


struct _lang_Numbers__LDoubleClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String (*toString)(lang_Numbers__LDouble);
    lang_Numbers__LDouble (*abs)(lang_Numbers__LDouble);
};


struct _lang_Numbers__FloatClass {
    struct _lang_Numbers__LDoubleClass __super__;
};


struct _lang_Numbers__DoubleClass {
    struct _lang_Numbers__LDoubleClass __super__;
};


struct _lang_Numbers__RangeClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Range (*new)(lang_Numbers__Int, lang_Numbers__Int);
    lang_Numbers__Int (*reduce)(lang_Numbers__Range, lang_types__Closure);
};


#ifdef OOC_FROM_C
#define LLong lang_Numbers__LLong
#define LLong_class() lang_Numbers__LLong_class()
#define LLongClass lang_Numbers__LLongClass
#define LLongClass_class() lang_Numbers__LLongClass_class()
#define LLong_toString(_this_) lang_Numbers__LLong_toString((void*) (_this_))
#define LLong_toHexString(_this_) lang_Numbers__LLong_toHexString((void*) (_this_))
#define LLong_odd__quest(_this_) lang_Numbers__LLong_odd__quest((void*) (_this_))
#define LLong_even__quest(_this_) lang_Numbers__LLong_even__quest((void*) (_this_))
#define LLong_divisor__quest(_this_, divisor) lang_Numbers__LLong_divisor__quest((void*) (_this_), (divisor))
#define LLong_in__quest(_this_, range) lang_Numbers__LLong_in__quest((void*) (_this_), (range))
#define LLong___load__() lang_Numbers__LLong___load__()
#define Long lang_Numbers__Long
#define Long_class() lang_Numbers__Long_class()
#define LongClass lang_Numbers__LongClass
#define LongClass_class() lang_Numbers__LongClass_class()
#define Long___load__() lang_Numbers__Long___load__()
#define Int lang_Numbers__Int
#define Int_class() lang_Numbers__Int_class()
#define IntClass lang_Numbers__IntClass
#define IntClass_class() lang_Numbers__IntClass_class()
#define Int___load__() lang_Numbers__Int___load__()
#define Short lang_Numbers__Short
#define Short_class() lang_Numbers__Short_class()
#define ShortClass lang_Numbers__ShortClass
#define ShortClass_class() lang_Numbers__ShortClass_class()
#define Short___load__() lang_Numbers__Short___load__()
#define ULLong lang_Numbers__ULLong
#define ULLong_class() lang_Numbers__ULLong_class()
#define ULLongClass lang_Numbers__ULLongClass
#define ULLongClass_class() lang_Numbers__ULLongClass_class()
#define ULLong_toString(_this_) lang_Numbers__ULLong_toString((void*) (_this_))
#define ULLong_in__quest(_this_, range) lang_Numbers__ULLong_in__quest((void*) (_this_), (range))
#define ULLong___load__() lang_Numbers__ULLong___load__()
#define ULong lang_Numbers__ULong
#define ULong_class() lang_Numbers__ULong_class()
#define ULongClass lang_Numbers__ULongClass
#define ULongClass_class() lang_Numbers__ULongClass_class()
#define ULong___load__() lang_Numbers__ULong___load__()
#define UInt lang_Numbers__UInt
#define UInt_class() lang_Numbers__UInt_class()
#define UIntClass lang_Numbers__UIntClass
#define UIntClass_class() lang_Numbers__UIntClass_class()
#define UInt___load__() lang_Numbers__UInt___load__()
#define UShort lang_Numbers__UShort
#define UShort_class() lang_Numbers__UShort_class()
#define UShortClass lang_Numbers__UShortClass
#define UShortClass_class() lang_Numbers__UShortClass_class()
#define UShort___load__() lang_Numbers__UShort___load__()
#define Int8 lang_Numbers__Int8
#define Int8_class() lang_Numbers__Int8_class()
#define Int8Class lang_Numbers__Int8Class
#define Int8Class_class() lang_Numbers__Int8Class_class()
#define Int8___load__() lang_Numbers__Int8___load__()
#define Int16 lang_Numbers__Int16
#define Int16_class() lang_Numbers__Int16_class()
#define Int16Class lang_Numbers__Int16Class
#define Int16Class_class() lang_Numbers__Int16Class_class()
#define Int16___load__() lang_Numbers__Int16___load__()
#define Int32 lang_Numbers__Int32
#define Int32_class() lang_Numbers__Int32_class()
#define Int32Class lang_Numbers__Int32Class
#define Int32Class_class() lang_Numbers__Int32Class_class()
#define Int32___load__() lang_Numbers__Int32___load__()
#define Int64 lang_Numbers__Int64
#define Int64_class() lang_Numbers__Int64_class()
#define Int64Class lang_Numbers__Int64Class
#define Int64Class_class() lang_Numbers__Int64Class_class()
#define Int64___load__() lang_Numbers__Int64___load__()
#define UInt8 lang_Numbers__UInt8
#define UInt8_class() lang_Numbers__UInt8_class()
#define UInt8Class lang_Numbers__UInt8Class
#define UInt8Class_class() lang_Numbers__UInt8Class_class()
#define UInt8___load__() lang_Numbers__UInt8___load__()
#define UInt16 lang_Numbers__UInt16
#define UInt16_class() lang_Numbers__UInt16_class()
#define UInt16Class lang_Numbers__UInt16Class
#define UInt16Class_class() lang_Numbers__UInt16Class_class()
#define UInt16___load__() lang_Numbers__UInt16___load__()
#define UInt32 lang_Numbers__UInt32
#define UInt32_class() lang_Numbers__UInt32_class()
#define UInt32Class lang_Numbers__UInt32Class
#define UInt32Class_class() lang_Numbers__UInt32Class_class()
#define UInt32___load__() lang_Numbers__UInt32___load__()
#define UInt64 lang_Numbers__UInt64
#define UInt64_class() lang_Numbers__UInt64_class()
#define UInt64Class lang_Numbers__UInt64Class
#define UInt64Class_class() lang_Numbers__UInt64Class_class()
#define UInt64___load__() lang_Numbers__UInt64___load__()
#define Octet lang_Numbers__Octet
#define Octet_class() lang_Numbers__Octet_class()
#define OctetClass lang_Numbers__OctetClass
#define OctetClass_class() lang_Numbers__OctetClass_class()
#define Octet___load__() lang_Numbers__Octet___load__()
#define SizeT lang_Numbers__SizeT
#define SizeT_class() lang_Numbers__SizeT_class()
#define SizeTClass lang_Numbers__SizeTClass
#define SizeTClass_class() lang_Numbers__SizeTClass_class()
#define SizeT___load__() lang_Numbers__SizeT___load__()
#define SSizeT lang_Numbers__SSizeT
#define SSizeT_class() lang_Numbers__SSizeT_class()
#define SSizeTClass lang_Numbers__SSizeTClass
#define SSizeTClass_class() lang_Numbers__SSizeTClass_class()
#define SSizeT___load__() lang_Numbers__SSizeT___load__()
#define LDouble lang_Numbers__LDouble
#define LDouble_class() lang_Numbers__LDouble_class()
#define LDoubleClass lang_Numbers__LDoubleClass
#define LDoubleClass_class() lang_Numbers__LDoubleClass_class()
#define LDouble_toString(_this_) lang_Numbers__LDouble_toString((void*) (_this_))
#define LDouble_abs(_this_) lang_Numbers__LDouble_abs((void*) (_this_))
#define LDouble___load__() lang_Numbers__LDouble___load__()
#define Float lang_Numbers__Float
#define Float_class() lang_Numbers__Float_class()
#define FloatClass lang_Numbers__FloatClass
#define FloatClass_class() lang_Numbers__FloatClass_class()
#define Float___load__() lang_Numbers__Float___load__()
#define Double lang_Numbers__Double
#define Double_class() lang_Numbers__Double_class()
#define DoubleClass lang_Numbers__DoubleClass
#define DoubleClass_class() lang_Numbers__DoubleClass_class()
#define Double___load__() lang_Numbers__Double___load__()
#define Range lang_Numbers__Range
#define Range_class() lang_Numbers__Range_class()
#define RangeClass lang_Numbers__RangeClass
#define RangeClass_class() lang_Numbers__RangeClass_class()
#define Range_new(min, max) lang_Numbers__Range_new((min), (max))
#define Range_reduce(_this_, f) lang_Numbers__Range_reduce((void*) (_this_), (f))
#define Range___load__() lang_Numbers__Range___load__()
#endif

#endif // ___lang_Numbers___
