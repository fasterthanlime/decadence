/* decadence header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___decadence_fwd___
#define ___decadence_fwd___

struct _decadence__Parser;
typedef struct _decadence__Parser decadence__Parser;
struct _decadence__ParserClass;
typedef struct _decadence__ParserClass decadence__ParserClass;

#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Memory-fwd.h>
decadence__ParserClass *decadence__Parser_class();
decadence__Parser* decadence__Parser_new();
void decadence__Parser_init(decadence__Parser* this);
void decadence__Parser_parse(decadence__Parser* this);
void decadence__Parser_parse_impl(decadence__Parser* this);
void gotLust(decadence__Parser* this);
void gotLust_impl(decadence__Parser* this);
void decadence__Parser___defaults__(decadence__Parser* this);
void decadence__Parser___defaults___impl(decadence__Parser* this);
void decadence__Parser___load__();
void decadence_load();
extern void decadenceParse(decadence__Parser* this);
lang_Numbers__Int main();

#endif // ___decadence_fwd___
