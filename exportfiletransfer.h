typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct Cache.conflict Cache.conflict, *PCache.conflict;

struct Cache.conflict { // PlaceHolder Class Structure
};

typedef struct __program_vars __program_vars, *P__program_vars;

struct __program_vars {
    void * mh; // pointer to __mh_execute_header
    qword * NXArgcPtr; // pointer to argc
    char * * * NXArgvPtr; // pointer to argv
    char * * * environPtr; // pointer to environment
    char * * __prognamePtr; // pointer to program name
};

typedef qword Cache;

typedef qword Implementation;

typedef struct cfstringStruct cfstringStruct, *PcfstringStruct;

struct cfstringStruct {
    qword field0_0x0;
    qword field1_0x8;
    pointer field2_0x10;
    long field3_0x18;
};

typedef ulonglong uint64_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef struct _opaque_pthread_mutex_t _opaque_pthread_mutex_t, *P_opaque_pthread_mutex_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[56];
};

typedef struct _opaque_pthread_t _opaque_pthread_t, *P_opaque_pthread_t;

typedef struct __darwin_pthread_handler_rec __darwin_pthread_handler_rec, *P__darwin_pthread_handler_rec;

struct _opaque_pthread_t {
    long __sig;
    struct __darwin_pthread_handler_rec * __cleanup_stack;
    char __opaque[1168];
};

struct __darwin_pthread_handler_rec {
    void (* __routine)(void *);
    void * __arg;
    struct __darwin_pthread_handler_rec * __next;
};

typedef struct _opaque_pthread_mutexattr_t _opaque_pthread_mutexattr_t, *P_opaque_pthread_mutexattr_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

struct _opaque_pthread_mutexattr_t {
    long __sig;
    char __opaque[8];
};

typedef struct _opaque_pthread_t * __darwin_pthread_t;

typedef void * __darwin_va_list;

typedef long __darwin_time_t;

typedef ulong __darwin_size_t;

typedef struct vector<DeviceID,std::allocator<DeviceID>> vector<DeviceID,std::allocator<DeviceID>>, *Pvector<DeviceID,std::allocator<DeviceID>>;

struct vector<DeviceID,std::allocator<DeviceID>> { // PlaceHolder Class Structure
};

typedef struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode> pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>, *Ppair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>;

struct pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode> { // PlaceHolder Class Structure
};

typedef struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>> map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>, *Pmap<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>;

struct map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>> { // PlaceHolder Class Structure
};

typedef struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>> _Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>, *P_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>;

struct _Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>> { // PlaceHolder Class Structure
};

typedef struct auto_ptr<Repository> auto_ptr<Repository>, *Pauto_ptr<Repository>;

struct auto_ptr<Repository> { // PlaceHolder Class Structure
};

typedef struct map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>> map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>, *Pmap<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>;

struct map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>> { // PlaceHolder Class Structure
};

typedef __darwin_time_t time_t;

typedef ulong uintptr_t;

typedef __darwin_pthread_mutex_t pthread_mutex_t;

typedef struct method_list_t method_list_t, *Pmethod_list_t;

struct method_list_t {
    dword entsizeAndFlags;
    dword count;
};

typedef struct method_list_t_19_ method_list_t_19_, *Pmethod_list_t_19_;

typedef struct method_t method_t, *Pmethod_t;

struct method_t {
    string * name;
    string * types;
    void * imp;
};

struct method_list_t_19_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
};

typedef struct CGPoint CGPoint, *PCGPoint;

struct CGPoint {
    double field0_0x0;
    double field1_0x8;
};

typedef struct protocol_list_t protocol_list_t, *Pprotocol_list_t;

struct protocol_list_t {
    qword count;
};

typedef qword CLASS;

typedef struct class_t class_t, *Pclass_t;

typedef struct class_rw_t class_rw_t, *Pclass_rw_t;

typedef struct ivar_list_t ivar_list_t, *Pivar_list_t;

typedef struct objc_property_list objc_property_list, *Pobjc_property_list;

struct class_rw_t {
    qword flags;
    qword instanceStart;
    qword instanceSize;
    char * name;
    struct method_list_t * baseMethods;
    struct protocol_list_t * baseProtocols;
    struct ivar_list_t * ivars;
    qword weakIvarLayout;
    struct objc_property_list * baseProperties;
};

struct ivar_list_t {
    dword entsize;
    dword count;
};

struct objc_property_list {
    dword entsize;
    dword count;
};

struct class_t {
    struct class_t * isa;
    struct class_t * superclass;
    Cache cache;
    Implementation vtable;
    struct class_rw_t * data;
};

typedef struct CGRect CGRect, *PCGRect;

typedef struct CGSize CGSize, *PCGSize;

struct CGSize {
    double field0_0x0;
    double field1_0x8;
};

struct CGRect {
    struct CGPoint field0_0x0;
    struct CGSize field1_0x10;
};

typedef struct method_list_t_1_ method_list_t_1_, *Pmethod_list_t_1_;

struct method_list_t_1_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
};

typedef struct objc_property_list_6_ objc_property_list_6_, *Pobjc_property_list_6_;

typedef struct objc_property objc_property, *Pobjc_property;

struct objc_property {
    char * name;
};

struct objc_property_list_6_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
};

typedef struct method_list_t_5_ method_list_t_5_, *Pmethod_list_t_5_;

struct method_list_t_5_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
};

typedef struct ivar_list_t_3_ ivar_list_t_3_, *Pivar_list_t_3_;

typedef struct ivar_t ivar_t, *Pivar_t;

struct ivar_t {
    qword * offset;
    string * name;
    string * type;
    dword alignment;
    dword size;
};

struct ivar_list_t_3_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
};

typedef struct method_list_t_9_ method_list_t_9_, *Pmethod_list_t_9_;

struct method_list_t_9_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
};

typedef struct method_list_t_23_ method_list_t_23_, *Pmethod_list_t_23_;

struct method_list_t_23_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
};

typedef qword ID;

typedef struct method_list_t_51_ method_list_t_51_, *Pmethod_list_t_51_;

struct method_list_t_51_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
    struct method_t method36;
    struct method_t method37;
    struct method_t method38;
    struct method_t method39;
    struct method_t method40;
    struct method_t method41;
    struct method_t method42;
    struct method_t method43;
    struct method_t method44;
    struct method_t method45;
    struct method_t method46;
    struct method_t method47;
    struct method_t method48;
    struct method_t method49;
    struct method_t method50;
};

typedef struct objc_image_info objc_image_info, *Pobjc_image_info;

struct objc_image_info {
    dword version;
    dword flags;
};

typedef struct protocol_t protocol_t, *Pprotocol_t;

struct protocol_t {
    qword isa;
    string * name;
    struct protocol_list_t * protocols;
    struct method_list_t * instanceMethods;
    struct method_list_t * classMethods;
    struct method_list_t * optionalInstanceMethods;
    struct method_list_t * optionalClassMethods;
    struct objc_property_list * instanceProperties;
    qword unknown0;
    qword unknown1;
};

typedef struct objc_property_list_10_ objc_property_list_10_, *Pobjc_property_list_10_;

struct objc_property_list_10_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
    struct objc_property property6;
    struct objc_property property7;
    struct objc_property property8;
    struct objc_property property9;
};

typedef struct protocol_list_t_4_ protocol_list_t_4_, *Pprotocol_list_t_4_;

struct protocol_list_t_4_ {
    qword count;
    struct protocol_t * protocol0;
    struct protocol_t * protocol1;
    struct protocol_t * protocol2;
    struct protocol_t * protocol3;
};

typedef struct method_list_t_2_ method_list_t_2_, *Pmethod_list_t_2_;

struct method_list_t_2_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
};

typedef struct objc_property_list_3_ objc_property_list_3_, *Pobjc_property_list_3_;

struct objc_property_list_3_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
};

typedef struct method_list_t_10_ method_list_t_10_, *Pmethod_list_t_10_;

struct method_list_t_10_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
};

typedef struct ivar_list_t_14_ ivar_list_t_14_, *Pivar_list_t_14_;

struct ivar_list_t_14_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
    struct ivar_t var8;
    struct ivar_t var9;
    struct ivar_t var10;
    struct ivar_t var11;
    struct ivar_t var12;
    struct ivar_t var13;
};

typedef qword SEL;

typedef struct Repository Repository, *PRepository;

struct Repository {
    undefined4 * * field0_0x0;
};

typedef struct ivar_list_t_10_ ivar_list_t_10_, *Pivar_list_t_10_;

struct ivar_list_t_10_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
    struct ivar_t var8;
    struct ivar_t var9;
};

typedef struct objc_property_list_8_ objc_property_list_8_, *Pobjc_property_list_8_;

struct objc_property_list_8_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
    struct objc_property property6;
    struct objc_property property7;
};

typedef struct objc_property_list_11_ objc_property_list_11_, *Pobjc_property_list_11_;

struct objc_property_list_11_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
    struct objc_property property6;
    struct objc_property property7;
    struct objc_property property8;
    struct objc_property property9;
    struct objc_property property10;
};

typedef struct protocol_list_t_1_ protocol_list_t_1_, *Pprotocol_list_t_1_;

struct protocol_list_t_1_ {
    qword count;
    struct protocol_t * protocol0;
};

typedef struct objc_property_list_4_ objc_property_list_4_, *Pobjc_property_list_4_;

struct objc_property_list_4_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
};

typedef struct ivar_list_t_1_ ivar_list_t_1_, *Pivar_list_t_1_;

struct ivar_list_t_1_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
};

typedef struct method_list_t_7_ method_list_t_7_, *Pmethod_list_t_7_;

struct method_list_t_7_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
};

typedef struct ivar_list_t_9_ ivar_list_t_9_, *Pivar_list_t_9_;

struct ivar_list_t_9_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
    struct ivar_t var8;
};

typedef struct ivar_list_t_11_ ivar_list_t_11_, *Pivar_list_t_11_;

struct ivar_list_t_11_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
    struct ivar_t var2;
    struct ivar_t var3;
    struct ivar_t var4;
    struct ivar_t var5;
    struct ivar_t var6;
    struct ivar_t var7;
    struct ivar_t var8;
    struct ivar_t var9;
    struct ivar_t var10;
};

typedef struct method_list_t_28_ method_list_t_28_, *Pmethod_list_t_28_;

struct method_list_t_28_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
};

typedef struct method_list_t_36_ method_list_t_36_, *Pmethod_list_t_36_;

struct method_list_t_36_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
};

typedef struct method_list_t_16_ method_list_t_16_, *Pmethod_list_t_16_;

struct method_list_t_16_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
};

typedef struct objc_property_list_20_ objc_property_list_20_, *Pobjc_property_list_20_;

struct objc_property_list_20_ {
    dword entsize;
    dword count;
    struct objc_property property0;
    struct objc_property property1;
    struct objc_property property2;
    struct objc_property property3;
    struct objc_property property4;
    struct objc_property property5;
    struct objc_property property6;
    struct objc_property property7;
    struct objc_property property8;
    struct objc_property property9;
    struct objc_property property10;
    struct objc_property property11;
    struct objc_property property12;
    struct objc_property property13;
    struct objc_property property14;
    struct objc_property property15;
    struct objc_property property16;
    struct objc_property property17;
    struct objc_property property18;
    struct objc_property property19;
};

typedef struct protocol_list_t_2_ protocol_list_t_2_, *Pprotocol_list_t_2_;

struct protocol_list_t_2_ {
    qword count;
    struct protocol_t * protocol0;
    struct protocol_t * protocol1;
};

typedef struct method_list_t_4_ method_list_t_4_, *Pmethod_list_t_4_;

struct method_list_t_4_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
};

typedef struct ivar_list_t_2_ ivar_list_t_2_, *Pivar_list_t_2_;

struct ivar_list_t_2_ {
    dword entsize;
    dword count;
    struct ivar_t var0;
    struct ivar_t var1;
};

typedef struct objc_property_list_1_ objc_property_list_1_, *Pobjc_property_list_1_;

struct objc_property_list_1_ {
    dword entsize;
    dword count;
    struct objc_property property0;
};

typedef struct method_list_t_12_ method_list_t_12_, *Pmethod_list_t_12_;

struct method_list_t_12_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
};

typedef struct method_list_t_72_ method_list_t_72_, *Pmethod_list_t_72_;

struct method_list_t_72_ {
    dword entsizeAndFlags;
    dword count;
    struct method_t method0;
    struct method_t method1;
    struct method_t method2;
    struct method_t method3;
    struct method_t method4;
    struct method_t method5;
    struct method_t method6;
    struct method_t method7;
    struct method_t method8;
    struct method_t method9;
    struct method_t method10;
    struct method_t method11;
    struct method_t method12;
    struct method_t method13;
    struct method_t method14;
    struct method_t method15;
    struct method_t method16;
    struct method_t method17;
    struct method_t method18;
    struct method_t method19;
    struct method_t method20;
    struct method_t method21;
    struct method_t method22;
    struct method_t method23;
    struct method_t method24;
    struct method_t method25;
    struct method_t method26;
    struct method_t method27;
    struct method_t method28;
    struct method_t method29;
    struct method_t method30;
    struct method_t method31;
    struct method_t method32;
    struct method_t method33;
    struct method_t method34;
    struct method_t method35;
    struct method_t method36;
    struct method_t method37;
    struct method_t method38;
    struct method_t method39;
    struct method_t method40;
    struct method_t method41;
    struct method_t method42;
    struct method_t method43;
    struct method_t method44;
    struct method_t method45;
    struct method_t method46;
    struct method_t method47;
    struct method_t method48;
    struct method_t method49;
    struct method_t method50;
    struct method_t method51;
    struct method_t method52;
    struct method_t method53;
    struct method_t method54;
    struct method_t method55;
    struct method_t method56;
    struct method_t method57;
    struct method_t method58;
    struct method_t method59;
    struct method_t method60;
    struct method_t method61;
    struct method_t method62;
    struct method_t method63;
    struct method_t method64;
    struct method_t method65;
    struct method_t method66;
    struct method_t method67;
    struct method_t method68;
    struct method_t method69;
    struct method_t method70;
    struct method_t method71;
};

typedef struct _node _node, *P_node;

typedef struct _node hash_node;

struct _node {
    char * key;
    void * data;
    struct _node * next;
};

typedef struct hash_table hash_table, *Phash_table;

struct hash_table {
    int size;
    hash_node * * buckets;
};

typedef __darwin_size_t size_t;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char * tm_zone;
};

typedef uint uint32_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;

typedef __darwin_pthread_t pthread_t;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

typedef enum enum_4370 {
    _URC_NO_REASON=0,
    _URC_FOREIGN_EXCEPTION_CAUGHT=1,
    _URC_FATAL_PHASE2_ERROR=2,
    _URC_FATAL_PHASE1_ERROR=3,
    _URC_NORMAL_STOP=4,
    _URC_END_OF_STACK=5,
    _URC_HANDLER_FOUND=6,
    _URC_INSTALL_CONTEXT=7,
    _URC_CONTINUE_UNWIND=8
} enum_4370;

typedef enum enum_4370 _Unwind_Reason_Code;

struct _Unwind_Exception {
    uint64_t exception_class;
    void (* exception_cleanup)(_Unwind_Reason_Code, struct _Unwind_Exception *);
    uintptr_t private_1;
    uintptr_t private_2;
    uint32_t reserved[3];
};

typedef __darwin_va_list va_list;

typedef struct DeviceInfo DeviceInfo, *PDeviceInfo;

struct DeviceInfo { // PlaceHolder Structure
};

typedef struct NSMutableOrderedSet NSMutableOrderedSet, *PNSMutableOrderedSet;

struct NSMutableOrderedSet { // PlaceHolder Structure
};

typedef struct objc_ivar objc_ivar, *Pobjc_ivar;

struct objc_ivar { // PlaceHolder Structure
};

typedef struct LIBMTP_mtpdevice_struct LIBMTP_mtpdevice_struct, *PLIBMTP_mtpdevice_struct;

struct LIBMTP_mtpdevice_struct { // PlaceHolder Structure
};

typedef struct glue_class_ro_t glue_class_ro_t, *Pglue_class_ro_t;

struct glue_class_ro_t { // PlaceHolder Structure
};

typedef struct NSArray NSArray, *PNSArray;

struct NSArray { // PlaceHolder Structure
};

typedef struct NSDictionary NSDictionary, *PNSDictionary;

struct NSDictionary { // PlaceHolder Structure
};

typedef struct DeviceID DeviceID, *PDeviceID;

struct DeviceID { // PlaceHolder Structure
};

typedef struct objc_selector objc_selector, *Pobjc_selector;

struct objc_selector { // PlaceHolder Structure
};

typedef struct LIBMTP_file_struct LIBMTP_file_struct, *PLIBMTP_file_struct;

struct LIBMTP_file_struct { // PlaceHolder Structure
};

typedef struct NSOrderedSet NSOrderedSet, *PNSOrderedSet;

struct NSOrderedSet { // PlaceHolder Structure
};

typedef struct glue_swift_class_t glue_swift_class_t, *Pglue_swift_class_t;

struct glue_swift_class_t { // PlaceHolder Structure
};

typedef struct CacheNode CacheNode, *PCacheNode;

struct CacheNode { // PlaceHolder Structure
};

typedef struct objc_class objc_class, *Pobjc_class;

struct objc_class { // PlaceHolder Structure
};

typedef struct NSMutableArray NSMutableArray, *PNSMutableArray;

struct NSMutableArray { // PlaceHolder Structure
};

typedef struct Protocol Protocol, *PProtocol;

struct Protocol { // PlaceHolder Structure
};

typedef struct Resource Resource, *PResource;

struct Resource { // PlaceHolder Structure
};

typedef struct PThreadMutex PThreadMutex, *PPThreadMutex;

struct PThreadMutex { // PlaceHolder Structure
};

typedef struct patch_t patch_t, *Ppatch_t;

struct patch_t { // PlaceHolder Structure
};

typedef dword ...;

typedef struct NSMutableDictionary NSMutableDictionary, *PNSMutableDictionary;

struct NSMutableDictionary { // PlaceHolder Structure
};

typedef struct objc_object objc_object, *Pobjc_object;

struct objc_object { // PlaceHolder Structure
};

typedef struct MTPRepository MTPRepository, *PMTPRepository;

struct MTPRepository { // PlaceHolder Structure
};

typedef struct Storage Storage, *PStorage;

struct Storage { // PlaceHolder Structure
};

typedef dword Result;

typedef dword _Rb_tree_iterator;

typedef struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>> vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>, *Pvector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>;

struct vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>> { // PlaceHolder Structure
};

typedef struct pair pair, *Ppair;

struct pair { // PlaceHolder Structure
};

typedef struct _Rb_tree_node_base _Rb_tree_node_base, *P_Rb_tree_node_base;

struct _Rb_tree_node_base { // PlaceHolder Structure
};

typedef struct _Rb_tree_node _Rb_tree_node, *P_Rb_tree_node;

struct _Rb_tree_node { // PlaceHolder Structure
};

typedef struct _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>> _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>, *P_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>;

struct _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>> { // PlaceHolder Structure
};

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef struct _Rb_tree _Rb_tree, *P_Rb_tree;

struct _Rb_tree { // PlaceHolder Structure
};

typedef struct basic_string basic_string, *Pbasic_string;

struct basic_string { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct vector<Resource,std::allocator<Resource>> vector<Resource,std::allocator<Resource>>, *Pvector<Resource,std::allocator<Resource>>;

struct vector<Resource,std::allocator<Resource>> { // PlaceHolder Structure
};

typedef struct vector<Storage,std::allocator<Storage>> vector<Storage,std::allocator<Storage>>, *Pvector<Storage,std::allocator<Storage>>;

struct vector<Storage,std::allocator<Storage>> { // PlaceHolder Structure
};

typedef struct auto_ptr<DeviceInfo> auto_ptr<DeviceInfo>, *Pauto_ptr<DeviceInfo>;

struct auto_ptr<DeviceInfo> { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct x86_THREAD_STATE64 x86_THREAD_STATE64, *Px86_THREAD_STATE64;

struct x86_THREAD_STATE64 {
    qword rax;
    qword rbx;
    qword cx;
    qword rdx;
    qword rdi;
    qword rsi;
    qword rbp;
    qword rsp;
    qword r8;
    qword r9;
    qword r10;
    qword r11;
    qword r12;
    qword r13;
    qword r14;
    qword r15;
    qword rip;
    qword rflags;
    qword cs;
    qword fs;
    qword gs;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct x86_THREAD_STATE64 threadState;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off;
    dword rebase_size;
    dword bind_off;
    dword bind_size;
    dword weak_bind_off;
    dword weak_bind_size;
    dword lazy_bind_off;
    dword lazy_bind_size;
    dword export_off;
    dword export_size;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef struct rpath_command rpath_command, *Prpath_command;

struct rpath_command {
    dword cmd;
    dword cmdsize;
    struct lc_str path;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct version_min_command version_min_command, *Pversion_min_command;

struct version_min_command {
    dword cmd;
    dword cmdsize;
    dword version;
    dword sdk;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};




void entry(void);
void _main(void);
void MTPViewerAppDelegate::registerDistributedNotificationCenter(ID param_1,SEL param_2);
void MTPViewerAppDelegate::awakeFromNib(ID param_1,SEL param_2);
void MTPViewerAppDelegate::dealloc(ID param_1,SEL param_2);
void MTPViewerAppDelegate::createWindows(ID param_1,SEL param_2);
void MTPViewerAppDelegate::firstRunWindowControllerWindowWillClose:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::applicationDidFinishLaunching:(ID param_1,SEL param_2,ID param_3);
char MTPViewerAppDelegate::applicationShouldTerminateAfterLastWindowClosed:(ID param_1,SEL param_2,ID param_3);
unsigned long long MTPViewerAppDelegate::applicationShouldTerminate:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::registerWithKeystone(ID param_1,SEL param_2);
void MTPViewerAppDelegate::startBreakpad(ID param_1,SEL param_2);
void MTPViewerAppDelegate::createNewWindowFromAgent:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::closeOldWindowFromAgent:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::createNewWindow:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::closeAllWindows(ID param_1,SEL param_2);
void MTPViewerAppDelegate::closeOldWindow:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::tweakMenus(ID param_1,SEL param_2);
void MTPViewerAppDelegate::outlineWillClose:(ID param_1,SEL param_2,ID param_3);
void MTPViewerAppDelegate::registerDefaults(ID param_1,SEL param_2);
void MTPViewerAppDelegate::showHelp:(ID param_1,SEL param_2,ID param_3);
ID MTPViewerAppDelegate::aboutApplicationMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::hideMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::hideOthersMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::showAllMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::quitMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::newFolderMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::closeWindowMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::deleteMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::backMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::forwardMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::enclosingMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::openMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::minimizeMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::zoomMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::bringAllToFrontMenuItemTitle(ID param_1,SEL param_2);
ID MTPViewerAppDelegate::androidFileTransferHelpMenuItemTitle(ID param_1,SEL param_2);
void MTPViewerAppDelegate::.cxx_destruct(ID param_1,SEL param_2);
long ___clang_call_terminate(undefined8 param_1);
ID MTPOutlineController::initWithRepository:(ID param_1,SEL param_2,Repository *param_3);
ID MTPOutlineController::deviceIDForRepository(ID param_1,SEL param_2);
void MTPOutlineController::awakeFromNib(ID param_1,SEL param_2);
long long MTPOutlineController::outlineView:numberOfChildrenOfItem:(ID param_1,SEL param_2,ID param_3,ID param_4);
char MTPOutlineController::outlineView:isItemExpandable:(ID param_1,SEL param_2,ID param_3,ID param_4);
ID MTPOutlineController::outlineView:child:ofItem:(ID param_1,SEL param_2,ID param_3,long long param_4,ID param_5);
ID MTPOutlineController::outlineView:objectValueForTableColumn:byItem:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
unsigned long long MTPOutlineController::outlineView:validateDrop:proposedItem:proposedChildIndex:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long long param_6);
char MTPOutlineController::outlineView:acceptDrop:item:childIndex:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long long param_6);
void MTPOutlineController::writeItems:toPasteboard:(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6);
char MTPOutlineController::outlineView:writeItems:toPasteboard:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::outlineView:startPromiseFileCopy:dropDestination:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
ID MTPOutlineController::outlineView:namesOfPromisedFilesDroppedAtDestination:forDraggedItems:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::outlineView:setObjectValue:forTableColumn:byItem:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6);
void LocalizedInformativeTextForResult(Result param_1);
ID MTPOutlineController::outlineView:itemForPersistentObject:(ID param_1,SEL param_2,ID param_3,ID param_4);
ID MTPOutlineController::outlineView:persistentObjectForItem:(ID param_1,SEL param_2,ID param_3,ID param_4);
ID MTPOutlineController::newFilenameForExistingPath:targetDirectory:(ID param_1,SEL param_2,ID param_3,ID param_4);
void MTPOutlineController::copyLocalFile:toDeviceDirectory:statusController:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
int progress(ulonglong param_1,ulonglong param_2,void *param_3);
ID MTPOutlineController::contentsOfLocalDirectory:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::copyLocalFiles:toDeviceDirectory:statusController:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::preflightCopyLocalFiles:statusController:(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void MTPOutlineController::copyLocalFilesThread:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::criticalError:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::unlockDeviceError:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::copyDeviceFile:toLocalDirectory:statusController:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::copyDeviceFiles:toLocalDirectory:statusController:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::preflightCopyDeviceFiles:statusController:(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void MTPOutlineController::copyDeviceFilesThread:(ID param_1,SEL param_2,ID param_3);
char MTPOutlineController::canGoBack(ID param_1,SEL param_2);
char MTPOutlineController::canGoForward(ID param_1,SEL param_2);
void MTPOutlineController::setCurrentRoot:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::setCurrentRootArray:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::setCurrentRoot:storage:(ID param_1,SEL param_2,ID param_3,unsigned int param_4);
void MTPOutlineController::deletePaths:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::deleteAlertDidEnd:returnCode:contextInfo:(ID param_1,SEL param_2,ID param_3,long long param_4,void *param_5);
void MTPOutlineController::outlineView:willDisplayCell:forTableColumn:item:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6);
char MTPOutlineController::outlineView:shouldEditTableColumn:item:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5);
void MTPOutlineController::outlineViewItemDidCollapse:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::outlineViewItemDidExpand:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::outlineViewSelectionDidChange:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::outlineView:mouseDownInHeaderOfTableColumn:(ID param_1,SEL param_2,ID param_3,ID param_4);
void MTPOutlineController::outlineViewColumnDidResize:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::outlineView:didDragTableColumn:(ID param_1,SEL param_2,ID param_3,ID param_4);
void MTPOutlineController::outlineView:didClickTableColumn:(ID param_1,SEL param_2,ID param_3,ID param_4);
void MTPOutlineController::outlineView:itemsWereDraggedToTrash:(ID param_1,SEL param_2,ID param_3,ID param_4);
char MTPOutlineController::window:shouldPopUpDocumentPathMenu:(ID param_1,SEL param_2,ID param_3,ID param_4);
char MTPOutlineController::window:shouldDragDocumentWithEvent:from:withPasteboard:(ID param_1,SEL param_2,ID param_3,ID param_4,CGPoint param_5,ID param_6);
void MTPOutlineController::windowWillClose:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::refreshFromNode:(ID param_1,SEL param_2,ID param_3);
ID MTPOutlineController::getUniqueDeviceFilename:(ID param_1,SEL param_2,ID param_3);
ID MTPOutlineController::nodeForPath:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::showModalErrorMessage:statusController:informativeText:(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
void ___79-[MTPOutlineController_showModalErrorMessage:statusController:informativeText:]_block_invoke(long param_1);
void ___copy_helper_block_(undefined8 param_1,long param_2);
void ___destroy_helper_block_(long param_1);
void MTPOutlineController::updateBottomStatus(ID param_1,SEL param_2);
ID MTPOutlineController::friendlyNameOfNode:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::deleteSelected:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::changePathMenuItem:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::doubleAction:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::openNode:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::goUp:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::goBack:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::goForward:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::forwardBackControlClicked:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::createNewFolder:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::setSortDescriptors:(ID param_1,SEL param_2,ID param_3);
void MTPOutlineController::matrixButtonPressed:(ID param_1,SEL param_2,unsigned int param_3);
ID MTPOutlineController::deleteMenuItem(ID param_1,SEL param_2);
ID MTPOutlineController::newFolderMenuItem(ID param_1,SEL param_2);
ID MTPOutlineController::delegate(ID param_1,SEL param_2);
void MTPOutlineController::setDelegate:(ID param_1,SEL param_2,ID param_3);
ID MTPOutlineController::sortDescriptors(ID param_1,SEL param_2);
void MTPOutlineController::.cxx_destruct(ID param_1,SEL param_2);
ID MTPOutlineController::.cxx_construct(ID param_1,SEL param_2);
void __thiscall std::auto_ptr<Repository>::reset(auto_ptr<Repository> *this,Repository *param_1);
void __thiscall std::auto_ptr<DeviceInfo>::reset(auto_ptr<DeviceInfo> *this,DeviceInfo *param_1);
void __thiscall std::auto_ptr<DeviceInfo>::~auto_ptr(auto_ptr<DeviceInfo> *this);
void __thiscall DeviceInfo::~DeviceInfo(DeviceInfo *this);
void __thiscall std::vector<Storage,std::allocator<Storage>>::~vector(vector<Storage,std::allocator<Storage>> *this);
ID ImageAndTextCell::init(ID param_1,SEL param_2);
CGRect * ImageAndTextCell::imageRectForBounds:(CGRect *__return_storage_ptr__,ID param_1,SEL param_2,CGRect param_3);
CGRect * ImageAndTextCell::titleRectForBounds:(CGRect *__return_storage_ptr__,ID param_1,SEL param_2,CGRect param_3);
void ImageAndTextCell::editWithFrame:inView:editor:delegate:event:(ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,ID param_7);
void ImageAndTextCell::selectWithFrame:inView:editor:delegate:start:length:(ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5,ID param_6,long long param_7,long long param_8);
void ImageAndTextCell::drawWithFrame:inView:(ID param_1,SEL param_2,CGRect param_3,ID param_4);
CGSize ImageAndTextCell::cellSize(ID param_1,SEL param_2);
unsigned long long ImageAndTextCell::hitTestForEvent:inRect:ofView:(ID param_1,SEL param_2,ID param_3,CGRect param_4,ID param_5);
ID ImageAndTextCell::setUpFieldEditorAttributes:(ID param_1,SEL param_2,ID param_3);
ID ImageAndTextCell::image(ID param_1,SEL param_2);
void ImageAndTextCell::setImage:(ID param_1,SEL param_2,ID param_3);
void ImageAndTextCell::.cxx_destruct(ID param_1,SEL param_2);
ID MTPOutlineNode::initWithPath:repository:storageId:sortDescriptors:(ID param_1,SEL param_2,ID param_3,Repository *param_4,unsigned int param_5,ID param_6);
ID MTPOutlineNode::nodeWithPath:repository:storageId:sortDescriptors:(ID param_1,SEL param_2,ID param_3,Repository *param_4,unsigned int param_5,ID param_6);
void MTPOutlineNode::loadChildrenFromDevice(ID param_1,SEL param_2);
void MTPOutlineNode::loadFromDevice(ID param_1,SEL param_2);
void MTPOutlineNode::reloadFromDevice(ID param_1,SEL param_2);
void MTPOutlineNode::ensureLoaded(ID param_1,SEL param_2);
void MTPOutlineNode::ensureChildrenLoaded(ID param_1,SEL param_2);
void MTPOutlineNode::setSortDescriptors:(ID param_1,SEL param_2,ID param_3);
unsigned long long MTPOutlineNode::childCount(ID param_1,SEL param_2);
ID MTPOutlineNode::childAtIndex:(ID param_1,SEL param_2,long long param_3);
ID MTPOutlineNode::children(ID param_1,SEL param_2);
ID MTPOutlineNode::childWithName:(ID param_1,SEL param_2,ID param_3);
ID MTPOutlineNode::path(ID param_1,SEL param_2);
char MTPOutlineNode::isFolder(ID param_1,SEL param_2);
ID MTPOutlineNode::icon(ID param_1,SEL param_2);
ID MTPOutlineNode::name(ID param_1,SEL param_2);
ID MTPOutlineNode::lastModified(ID param_1,SEL param_2);
long long MTPOutlineNode::nodeSize(ID param_1,SEL param_2);
ID MTPOutlineNode::nodeSizeNumber(ID param_1,SEL param_2);
ID MTPOutlineNode::description(ID param_1,SEL param_2);
void MTPOutlineNode::deepDump(ID param_1,SEL param_2);
ID MTPOutlineNode::sortDescriptors(ID param_1,SEL param_2);
void MTPOutlineNode::.cxx_destruct(ID param_1,SEL param_2);
ID MTPOutlineNode::.cxx_construct(ID param_1,SEL param_2);
void __thiscall std::vector<Resource,std::allocator<Resource>>::~vector(vector<Resource,std::allocator<Resource>> *this);
void FileSizeHumanTransformer::load(ID param_1,SEL param_2);
CLASS FileSizeHumanTransformer::transformedValueClass(ID param_1,SEL param_2);
ID FileSizeHumanTransformer::transformedValue:(ID param_1,SEL param_2,ID param_3);
ID CopyStatusViewController::init(ID param_1,SEL param_2);
void CopyStatusViewController::addFile:size:(ID param_1,SEL param_2,ID param_3,long long param_4);
void CopyStatusViewController::skipFile:(ID param_1,SEL param_2,ID param_3);
void CopyStatusViewController::finishedFile:(long param_1,undefined8 param_2,undefined8 param_3);
long long CopyStatusViewController::fileSize:(ID param_1,SEL param_2,ID param_3);
char CopyStatusViewController::preflightComplete(ID param_1,SEL param_2);
void CopyStatusViewController::setPreflightComplete:(ID param_1,SEL param_2,char param_3);
ID CopyStatusViewController::bytesCopied(ID param_1,SEL param_2);
ID CopyStatusViewController::keyPathsForValuesAffectingBytesCopied(ID param_1,SEL param_2);
ID CopyStatusViewController::copying(ID param_1,SEL param_2);
ID CopyStatusViewController::keyPathsForValuesAffectingCopying(ID param_1,SEL param_2);
ID CopyStatusViewController::topProgressString(ID param_1,SEL param_2);
ID CopyStatusViewController::keyPathsForValuesAffectingTopProgressString(ID param_1,SEL param_2);
ID CopyStatusViewController::timeLeft(ID param_1,SEL param_2);
ID CopyStatusViewController::bottomProgressString(ID param_1,SEL param_2);
ID CopyStatusViewController::keyPathsForValuesAffectingBottomProgressString(ID param_1,SEL param_2);
void CopyStatusViewController::cancelButtonPressed:(ID param_1,SEL param_2,ID param_3);
char CopyStatusViewController::shouldReplaceFilename:(ID param_1,SEL param_2,ID param_3);
long long CopyStatusViewController::showPerFileQuestionFormat:informativeText:defaultButton:alternateButton:otherButton:filename:(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,ID param_8);
void ___121-[CopyStatusViewController_showPerFileQuestionFormat:informativeText:defaultButton:alternateButton:otherButton:filename:]_block_invoke(long param_1);
void ___copy_helper_block_(long param_1,long param_2);
void ___destroy_helper_block_(long param_1);
ID CopyStatusViewController::bytesToCopy(ID param_1,SEL param_2);
void CopyStatusViewController::setBytesToCopy:(ID param_1,SEL param_2,ID param_3);
long long CopyStatusViewController::filesCompletedBytesCopied(ID param_1,SEL param_2);
void CopyStatusViewController::setFilesCompletedBytesCopied:(ID param_1,SEL param_2,long long param_3);
ID CopyStatusViewController::fileInProgressBytesCopied(ID param_1,SEL param_2);
void CopyStatusViewController::setFileInProgressBytesCopied:(ID param_1,SEL param_2,ID param_3);
char CopyStatusViewController::shouldCancel(ID param_1,SEL param_2);
void CopyStatusViewController::setShouldCancel:(ID param_1,SEL param_2,char param_3);
ID CopyStatusViewController::destination(ID param_1,SEL param_2);
void CopyStatusViewController::setDestination:(ID param_1,SEL param_2,ID param_3);
char CopyStatusViewController::replaceAll(ID param_1,SEL param_2);
void CopyStatusViewController::setReplaceAll:(ID param_1,SEL param_2,char param_3);
void CopyStatusViewController::.cxx_destruct(ID param_1,SEL param_2);
ID StatusWindowController::sharedStatusWindowController(ID param_1,SEL param_2);
ID StatusWindowController::init(ID param_1,SEL param_2);
ID StatusWindowController::addCopyStatusForWindow:(ID param_1,SEL param_2,ID param_3);
void StatusWindowController::removeStatus:(ID param_1,SEL param_2,ID param_3);
void StatusWindowController::arrangeStatusViews(ID param_1,SEL param_2);
bool StatusWindowController::allowMoreOperations(long param_1);
ID StatusWindowController::windowTitle(ID param_1,SEL param_2);
void StatusWindowController::.cxx_destruct(ID param_1,SEL param_2);
ID DashedDateFormatter::stringForObjectValue:(ID param_1,SEL param_2,ID param_3);
ID MTPDeviceID::initWithVendorID:productID:locationID:(ID param_1,SEL param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5);
ID MTPDeviceID::description(ID param_1,SEL param_2);
ID MTPDeviceID::initWithDictionary:(ID param_1,SEL param_2,ID param_3);
ID MTPDeviceID::formatToDictionary(ID param_1,SEL param_2);
unsigned int MTPDeviceID::vendorID(ID param_1,SEL param_2);
unsigned int MTPDeviceID::productID(ID param_1,SEL param_2);
unsigned int MTPDeviceID::locationID(ID param_1,SEL param_2);
ID BundleInstaller::bundleName(ID param_1,SEL param_2);
ID BundleInstaller::bundleType(ID param_1,SEL param_2);
ID BundleInstaller::libraryDestinationPath(ID param_1,SEL param_2);
char BundleInstaller::shouldUpdateBundle(ID param_1,SEL param_2);
void BundleInstaller::didUpdateBundle(ID param_1,SEL param_2);
unsigned long long BundleInstaller::installBundle(ID param_1,SEL param_2);
char BundleInstaller::isVersion:higherThanVersion:(ID param_1,SEL param_2,ID param_3,ID param_4);
bool _parseVersion(long param_1,long param_2,long param_3,long param_4,long param_5);
ID BundleInstaller::installedPath(ID param_1,SEL param_2);
ID BundleInstaller::destinationPath(ID param_1,SEL param_2);
ID BundleInstaller::findInstalledBundle(ID param_1,SEL param_2);
void BundleInstaller::removeQuarantineFromDirectory:(ID param_1,SEL param_2,ID param_3);
bool BundleInstaller::installNewBundle(undefined8 param_1);
void AgentRunner::startAgent(ID param_1,SEL param_2);
ID AgentRunner::bundleName(ID param_1,SEL param_2);
ID AgentRunner::bundleType(ID param_1,SEL param_2);
ID AgentRunner::libraryDestinationPath(ID param_1,SEL param_2);
char AgentRunner::shouldUpdateBundle(ID param_1,SEL param_2);
void AgentRunner::registerInLoginItems(ID param_1,SEL param_2);
void _GetLogFileName(undefined8 param_1,undefined8 param_2);
void _ExecuteSyncOnMainThread(void);
void Utils::updateModifiedDate:toFile:(ID param_1,SEL param_2,ID param_3,ID param_4);
void Utils::updateCreatedDate:toFile:(ID param_1,SEL param_2,ID param_3,ID param_4);
ID CustomOutlineView::stripeColor(ID param_1,SEL param_2);
void CustomOutlineView::drawStripesInRect:(ID param_1,SEL param_2,CGRect param_3);
void CustomOutlineView::drawRect:(ID param_1,SEL param_2,CGRect param_3);
unsigned long long CustomOutlineView::draggingEntered:(ID param_1,SEL param_2,ID param_3);
unsigned long long CustomOutlineView::draggingUpdated:(ID param_1,SEL param_2,ID param_3);
ID CustomOutlineView::namesOfPromisedFilesDroppedAtDestination:(ID param_1,SEL param_2,ID param_3);
void CustomOutlineView::draggedImage:endedAt:operation:(ID param_1,SEL param_2,ID param_3,CGPoint param_4,unsigned long long param_5);
unsigned long long CustomOutlineView::draggingSourceOperationMaskForLocal:(ID param_1,SEL param_2,char param_3);
ID CustomOutlineView::menu(ID param_1,SEL param_2);
void CustomOutlineView::.cxx_destruct(ID param_1,SEL param_2);
ID FirstRunWindowController::initWithDelegate:(ID param_1,SEL param_2,ID param_3);
void FirstRunWindowController::windowDidLoad(ID param_1,SEL param_2);
ID FirstRunWindowController::buttonTitle(ID param_1,SEL param_2);
void FirstRunWindowController::windowWillClose:(ID param_1,SEL param_2,ID param_3);
ID FirstRunWindowController::welcomeTitleText(ID param_1,SEL param_2);
ID FirstRunWindowController::welcomeBodyText(ID param_1,SEL param_2);
void FirstRunWindowController::closeButtonClicked:(ID param_1,SEL param_2,ID param_3);
ID FirstRunWindowController::delegate(ID param_1,SEL param_2);
void FirstRunWindowController::setDelegate:(ID param_1,SEL param_2,ID param_3);
void FirstRunWindowController::.cxx_destruct(ID param_1,SEL param_2);
ID BorderlessWindow::initWithContentRect:styleMask:backing:defer:(ID param_1,SEL param_2,CGRect param_3,unsigned long long param_4,unsigned long long param_5,char param_6);
char BorderlessWindow::canBecomeKeyWindow(ID param_1,SEL param_2);
void RecessedButtonMatrix::awakeFromNib(ID param_1,SEL param_2);
void RecessedButtonMatrix::performLayout(ID param_1,SEL param_2);
void RecessedButtonMatrix::setFrameSize:(ID param_1,SEL param_2,CGSize param_3);
void RecessedButtonMatrix::buttonPressed:(ID param_1,SEL param_2,ID param_3);
void RecessedButtonMatrix::addButton:identifier:(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void RecessedButtonMatrix::selectButtonWithIdentifier:(ID param_1,SEL param_2,unsigned long long param_3);
void RecessedButtonMatrix::delegate(long param_1);
void RecessedButtonMatrix::setDelegate:(ID param_1,SEL param_2,ID param_3);
void RecessedButtonMatrix::.cxx_destruct(ID param_1,SEL param_2);
map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>* __thiscall std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::operator[](map<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,CacheNode,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,basic_string *param_1);
void __thiscall std::vector<Resource,std::allocator<Resource>>::push_back(vector<Resource,std::allocator<Resource>> *this,Resource *param_1);
long __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::erase(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,basic_string *param_1);
void __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::erase(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_iterator param_1,_Rb_tree_iterator param_2);
void __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_destroy_node(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_node *param_1);
void __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_erase(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_node *param_1);
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>* __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::lower_bound(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,basic_string *param_1);
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>* __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::upper_bound(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,basic_string *param_1);
void __thiscall std::vector<Resource,std::allocator<Resource>>::_M_insert_aux(vector<Resource,std::allocator<Resource>> *this,__normal_iterator param_1,Resource *param_2);
Resource *std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<Resource*,Resource*>(Resource *param_1,Resource *param_2,Resource *param_3);
void __thiscall std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>::pair(pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>*this,basic_string *param_1,CacheNode *param_2);
_Rb_tree_node_base * __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_insert_unique(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_iterator param_1,pair *param_2);
undefined8 __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_insert(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3);
undefined  [16] __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_insert_unique(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,pair *param_1);
long __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_create_node(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,pair *param_1);
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>* __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::find(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,basic_string *param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>::~vector(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>*this);
void __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_Rb_tree(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree *param_1);
undefined4 * __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::_M_copy(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree_node *param_1,_Rb_tree_node *param_2);
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>* __thiscall std::_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>::operator=(_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,CacheNode>>>*this,_Rb_tree *param_1);
undefined8 _InitLog(char *param_1,char *param_2,undefined4 param_3);
void setupStderrFileDescriptor(void);
void _trace(uint param_1);
void __thiscall PThreadMutex::~PThreadMutex(PThreadMutex *this);
void __GLOBAL__I_a(void);
void __thiscall MTPRepository::MTPRepository(MTPRepository *this,DeviceID *param_1);
void __thiscall MTPRepository::MTPRepository(MTPRepository *this,DeviceID *param_1);
void __thiscall MTPRepository::~MTPRepository(MTPRepository *this);
void __thiscall MTPRepository::~MTPRepository(MTPRepository *this);
void __thiscall MTPRepository::~MTPRepository(MTPRepository *this);
undefined8 __thiscall MTPRepository::GetDeviceInfo(MTPRepository *this,DeviceInfo *param_1);
MTPRepository * __thiscall MTPRepository::GetDeviceID(MTPRepository *this);
undefined8 __thiscall MTPRepository::Load(MTPRepository *this);
void MTPRepository::mtpDumpFileInfo(LIBMTP_file_struct *param_1);
undefined4 MTPRepository::ListFolder(uint param_1,char *param_2,vector *param_3);
int MTPRepository::mtpSendFile(LIBMTP_mtpdevice_struct *param_1,char *param_2,char *param_3,ulonglong param_4,uint param_5,uint param_6,uint *param_7,_func_int_ulonglong_ulonglong_void_ptr *param_8,void *param_9);
undefined4 MTPRepository::mtpGetFile(LIBMTP_mtpdevice_struct *param_1,uint param_2,char *param_3,_func_int_ulonglong_ulonglong_void_ptr *param_4,void *param_5);
void __thiscall MTPRepository::Dump(MTPRepository *this);
char MTPRepository::mtpFindFileType(char *param_1);
long __thiscall std::vector<Storage,std::allocator<Storage>>::insert(vector<Storage,std::allocator<Storage>> *this,__normal_iterator param_1,Storage *param_2);
void __thiscall std::vector<Storage,std::allocator<Storage>>::push_back(vector<Storage,std::allocator<Storage>> *this,Storage *param_1);
map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>* __thiscall std::map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::operator[](map<unsigned_int,Cache*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,uint *param_1);
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>* __thiscall std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::find(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,uint *param_1);
_Rb_tree_node_base * __thiscall std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::_M_insert_unique(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,_Rb_tree_iterator param_1,pair *param_2);
long __thiscall std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::_M_insert(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2,pair *param_3);
void __thiscall std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::_M_insert_unique(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,pair *param_1);
void __thiscall std::vector<Storage,std::allocator<Storage>>::_M_insert_aux(vector<Storage,std::allocator<Storage>> *this,__normal_iterator param_1,Storage *param_2);
Storage * std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<Storage*,Storage*>(Storage *param_1,Storage *param_2,Storage *param_3);
void __thiscall std::vector<Storage,std::allocator<Storage>>::_M_erase_at_end(vector<Storage,std::allocator<Storage>> *this,Storage *param_1);
void __thiscall std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>::_M_erase(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,Cache*>,std::_Select1st<std::pair<unsigned_int_const,Cache*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Cache*>>>*this,_Rb_tree_node *param_1);
void TokenizeString(vector *param_1,char *param_2,char param_3);
void SplitPath(char *param_1,basic_string *param_2,basic_string *param_3);
void AppendPath(basic_string *param_1,char *param_2);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>::push_back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>*this,basic_string *param_1);
void __thiscall std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>::_M_insert_aux(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>*this,__normal_iterator param_1,basic_string *param_2);
basic_string *std::__copy_backward<false,std::random_access_iterator_tag>::__copy_b<std::basic_string<char,std::char_traits<char>,std::allocator<char>>*,std::basic_string<char,std::char_traits<char>,std::allocator<char>>*>(basic_string *param_1,basic_string *param_2,basic_string *param_3);
MTPRepository * MTPFactory::CreateRepository(DeviceID *param_1);
void MTPFactory::Init(void);
ulong MTPFactory::GetConnectedDeviceIDs(vector *param_1);
void __thiscall std::vector<DeviceID,std::allocator<DeviceID>>::push_back(vector<DeviceID,std::allocator<DeviceID>> *this,DeviceID *param_1);
void __thiscall std::vector<DeviceID,std::allocator<DeviceID>>::_M_insert_aux(vector<DeviceID,std::allocator<DeviceID>> *this,__normal_iterator param_1,DeviceID *param_2);
void __ARCLite__load(void);
void add_image_hook_swiftV1(mach_header *param_1,long param_2);
undefined8 __arclite_NSUndoManagerProxy_isKindOfClass(objc_object *param_1,objc_selector *param_2,objc_class *param_3);
void replaceMethod(objc_class *param_1,objc_selector *param_2,_func_objc_object_ptr_objc_object_objc_selector_... *param_3,_func_objc_object_ptr_objc_object_objc_selector_... *param_4);
void __arclite_NSManagedObject_init(objc_object *param_1,objc_selector *param_2);
void __arclite_NSManagedObject_allocWithEntity(objc_object *param_1,objc_selector *param_2,objc_object *param_3);
int __arclite_NSManagedObject_allocBatch(objc_object *param_1,objc_selector *param_2,objc_object **param_3,objc_object *param_4,uint param_5);
undefined8 __arclite_NSKKMS_fastIndexForKnownKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3);
undefined8 __arclite_NSKKMS_indexForKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3);
undefined8 __arclite_NSKKsD_objectForKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3);
void __arclite_NSKKsD_removeObjectForKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3);
void __arclite_NSKKsD_setObject_forKey(objc_object *param_1,objc_selector *param_2,objc_object *param_3,objc_object *param_4);
void __arclite_NSKKsD_addEntriesFromDictionary(objc_object *param_1,objc_selector *param_2,NSDictionary *param_3);
objc_object * fixStringForCoreData(objc_object *param_1);
undefined8 cxxConstruct(objc_object *param_1);
void arclite_uninitialized_function(void);
objc_class * __arclite_objc_readClassPair(objc_class *param_1,objc_image_info *param_2);
void __arclite_objc_allocateClassPair(glue_swift_class_t *param_1,char *param_2,ulong param_3);
objc_object * __arclite_object_getIndexedIvars(objc_object *param_1);
long __arclite_objc_getClass(char *param_1);
long __arclite_objc_getMetaClass(char *param_1);
long __arclite_objc_getRequiredClass(char *param_1);
long __arclite_objc_lookUpClass(char *param_1);
long __arclite_objc_getProtocol(char *param_1);
void __arclite_class_getName(objc_class *param_1);
void __arclite_protocol_getName(Protocol *param_1);
long __arclite_objc_copyClassNamesForImage(void *param_1,uint *param_2);
void patch_lazy_pointers(mach_header *param_1,patch_t *param_2,ulong param_3);
char * demangledName(char *param_1,bool param_2);
uint scanMangledField(char **param_1,char *param_2,char **param_3,int *param_4);
char * copySwiftV1MangledName(char *param_1,bool param_2);
void * allocateMaybeSwift(glue_swift_class_t *param_1,ulong param_2);
void transcribeMethods(objc_class *param_1,glue_class_ro_t *param_2);
void transcribeProtocols(objc_class *param_1,glue_class_ro_t *param_2);
void transcribeProperties(objc_class *param_1,glue_class_ro_t *param_2);
void initialize_imp(objc_object *param_1,objc_selector *param_2);
void __arclite_NSArray_objectAtIndexedSubscript(NSArray *param_1,objc_selector *param_2,ulong param_3);
void __arclite_NSMutableArray_setObject_atIndexedSubscript(NSMutableArray *param_1,objc_selector *param_2,objc_object *param_3,ulong param_4);
void __arclite_NSDictionary_objectForKeyedSubscript(NSDictionary *param_1,objc_selector *param_2,objc_object *param_3);
void __arclite_NSMutableDictionary__setObject_forKeyedSubscript(NSMutableDictionary *param_1,objc_selector *param_2,objc_object *param_3,objc_object param_4);
void __arclite_NSOrderedSet_objectAtIndexedSubscript(NSOrderedSet *param_1,objc_selector *param_2,ulong param_3);
void __arclite_NSMutableOrderedSet_setObject_atIndexedSubscript(NSMutableOrderedSet *param_1,objc_selector *param_2,objc_object *param_3,ulong param_4);
void add_image_hook_ARC(mach_header *param_1,long param_2);
void add_image_hook_GC(mach_header *param_1,long param_2);
void __arclite_objc_autoreleasePoolPush(void);
void __arclite_objc_autoreleasePoolPop(void *param_1);
long __arclite_object_setInstanceVariable(objc_object *param_1,char *param_2,void *param_3);
void __arclite_object_setIvar(objc_object *param_1,objc_ivar *param_2,objc_object *param_3);
void * __arclite_object_copy(objc_object *param_1,ulong param_2);
void __arclite_objc_retain(objc_object *param_1);
void __arclite_objc_retainBlock(objc_object *param_1);
void __arclite_objc_release(objc_object *param_1);
void __arclite_objc_autorelease(objc_object *param_1);
void __arclite_objc_retainAutorelease(objc_object *param_1);
void __arclite_objc_autoreleaseReturnValue(objc_object *param_1);
void __arclite_objc_retainAutoreleaseReturnValue(objc_object *param_1);
void __arclite_objc_retainAutoreleasedReturnValue(objc_object *param_1);
void __arclite_objc_storeStrong(objc_object **param_1,objc_object *param_2);
void __stubs::_LIBMTP_Clear_Errorstack(void);
void __stubs::_LIBMTP_Create_Folder(void);
void __stubs::_LIBMTP_Delete_Object(void);
void __stubs::_LIBMTP_Detect_Raw_Devices(void);
void __stubs::_LIBMTP_Dump_Errorstack(void);
void __stubs::_LIBMTP_Get_Deviceversion(void);
void __stubs::_LIBMTP_Get_File_To_File(void);
void __stubs::_LIBMTP_Get_Files_And_Folders(void);
void __stubs::_LIBMTP_Get_Filetype_Description(void);
void __stubs::_LIBMTP_Get_Manufacturername(void);
void __stubs::_LIBMTP_Get_Modelname(void);
void __stubs::_LIBMTP_Get_Serialnumber(void);
void __stubs::_LIBMTP_Get_Storage(void);
void __stubs::_LIBMTP_Init(void);
void __stubs::_LIBMTP_Open_Raw_Device_Uncached(void);
void __stubs::_LIBMTP_Release_Device(void);
void __stubs::_LIBMTP_Send_File_From_File(void);
void __stubs::_LIBMTP_Set_Device_Timeout(void);
void __stubs::_LIBMTP_Set_File_Name(void);
void __stubs::_LIBMTP_Set_Folder_Name(void);
void __stubs::_LIBMTP_Set_Load_Cache_On_Demand(void);
void __stubs::_LIBMTP_destroy_file_t(void);
void __stubs::_LIBMTP_destroy_folder_t(void);
void __stubs::_LIBMTP_new_file_t(void);
void __stubs::_LIBMTP_new_folder_t(void);
void __stubs::_BreakpadAddLogFile(void);
void __stubs::_BreakpadCreate(void);
void __stubs::_BreakpadRelease(void);
void __stubs::_NSDivideRect(void);
void __stubs::_NSFileTypeForHFSTypeCode(void);
void __stubs::_NSLog(void);
void __stubs::_NSMouseInRect(void);
void __stubs::_NSSearchPathForDirectoriesInDomains(void);
void __stubs::_NSStringFromSelector(void);
void __stubs::_class_addMethod(void);
void __stubs::_class_addProperty(void);
void __stubs::_class_addProtocol(void);
void __stubs::_class_getInstanceMethod(void);
void __stubs::_class_getInstanceSize(void);
void __stubs::_class_getInstanceVariable(void);
void __stubs::_class_getIvarLayout(void);
void __stubs::_class_getSuperclass(void);
void __stubs::_class_isMetaClass(void);
void __stubs::_class_respondsToSelector(void);
void __stubs::_ivar_getName(void);
void __stubs::_ivar_getOffset(void);
void __stubs::_method_setImplementation(void);
void __stubs::_objc_autoreleasePoolPop(void);
void __stubs::_objc_autoreleasePoolPush(void);
void __stubs::_objc_autoreleaseReturnValue(void);
void __stubs::_objc_collectingEnabled(void);
void __stubs::_objc_constructInstance(void);
void __stubs::_objc_destroyWeak(void);
void __stubs::_objc_enumerationMutation(void);
void __stubs::_objc_getClass(void);
void __stubs::_objc_getMetaClass(void);
void __stubs::_objc_getProperty(void);
void __stubs::_objc_getProtocol(void);
void __stubs::_objc_getRequiredClass(void);
void __stubs::_objc_initializeClassPair(void);
void __stubs::_objc_loadWeakRetained(void);
void __stubs::_objc_lookUpClass(void);
void __stubs::_objc_msgSendSuper2(void);
void __stubs::_objc_msgSendSuper2_stret(void);
void __stubs::_objc_msgSend_stret(void);
void __stubs::_objc_registerClassPair(void);
void __stubs::_objc_retainAutorelease(void);
void __stubs::_objc_retainAutoreleaseReturnValue(void);
void __stubs::_objc_retainAutoreleasedReturnValue(void);
void __stubs::_objc_setProperty(void);
void __stubs::_objc_storeStrong(void);
void __stubs::_objc_storeWeak(void);
void __stubs::_object_getClass(void);
void __stubs::_object_getIvar(void);
void __stubs::_object_setIvar(void);
void __stubs::_property_copyAttributeList(void);
void __stubs::_protocol_getMethodDescription(void);
void __stubs::_sel_getUid(void);
void __stubs::__ZNKSs7compareEPKc(void);
void __stubs::__ZNKSs7compareERKSs(void);
void __stubs::__ZNSs12_M_leak_hardEv(void);
void __stubs::__ZNSs4_Rep10_M_destroyERKSaIcE(void);
void __stubs::__ZNSs6appendEPKcm(void);
void __stubs::__ZNSs6assignEPKcm(void);
void __stubs::__ZNSs6assignERKSs(void);
void __stubs::__ZNSsC1EPKcRKSaIcE(void);
void __stubs::__ZNSsC1EPKcmRKSaIcE(void);
void __stubs::__ZNSsC1ERKSs(void);
void __stubs::__ZSt17__throw_bad_allocv(void);
void __stubs::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(void);
void __stubs::__ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void);
void __stubs::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(void);
void __stubs::__ZSt20__throw_length_errorPKc(void);
void __stubs::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_(void);
void __stubs::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(void);
void __stubs::__ZSt9terminatev(void);
void __stubs::__ZdlPv(void);
void __stubs::__Znwm(void);
void __stubs::___cxa_begin_catch(void);
void __stubs::___cxa_rethrow(void);
void __stubs::__Block_copy(void);
void __stubs::__Block_object_assign(void *param_1,void *param_2,int param_3);
void __stubs::__Block_object_dispose(void *param_1,int param_2);
void __stubs::__Unwind_Resume(_Unwind_Exception *exception_object);
void __stubs::___cxa_atexit(void);
void __stubs::___stack_chk_fail(void);
void __stubs::__dyld_register_func_for_add_image(void);
int __stubs::_asprintf(char **param_1,char *param_2,...);
char * __stubs::_basename(char *param_1);
void __stubs::_bzero(void *param_1,size_t param_2);
void * __stubs::_calloc(size_t param_1,size_t param_2);
void __stubs::_ceil(void);
char * __stubs::_dirname(char *param_1);
void __stubs::_dispatch_sync(void);
void __stubs::_dlclose(void);
void __stubs::_dlopen(void);
void __stubs::_dlsym(void);
int __stubs::_dup2(int param_1,int param_2);
void __stubs::_exit(int param_1);
int __stubs::_fclose(FILE *param_1);
int __stubs::_fileno(FILE *param_1);
FILE * __stubs::_fopen(char *param_1,char *param_2);
int __stubs::_fprintf(FILE *param_1,char *param_2,...);
void __stubs::_free(void *param_1);
hash_table * __stubs::_hash_create(int size);
void * __stubs::_hash_search(hash_table *table,char *key,void *datum,replace_func *replace_func);
tm * __stubs::_localtime(time_t *param_1);
void * __stubs::_malloc(size_t param_1);
int __stubs::_memcmp(void *param_1,void *param_2,size_t param_3);
void * __stubs::_memcpy(void *param_1,void *param_2,size_t param_3);
int __stubs::_pthread_mutex_destroy(pthread_mutex_t *param_1);
int __stubs::_pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2);
int __stubs::_pthread_mutex_lock(pthread_mutex_t *param_1);
int __stubs::_pthread_mutex_unlock(pthread_mutex_t *param_1);
int __stubs::_pthread_mutexattr_init(pthread_mutexattr_t *param_1);
int __stubs::_pthread_mutexattr_settype(pthread_mutexattr_t *param_1,int param_2);
pthread_t __stubs::_pthread_self(void);
int __stubs::_remove(char *param_1);
int __stubs::_removexattr(char *path,char *name,int options);
int __stubs::_rename(char *param_1,char *param_2);
char * __stubs::_rindex(char *param_1,int param_2);
uint __stubs::_sleep(uint param_1);
int __stubs::_snprintf(char *param_1,size_t param_2,char *param_3,...);
int __stubs::_sprintf(char *param_1,char *param_2,...);
void __stubs::_stat$INODE64(void);
int __stubs::_strcasecmp(char *param_1,char *param_2);
char * __stubs::_strchr(char *param_1,int param_2);
int __stubs::_strcmp(char *param_1,char *param_2);
char * __stubs::_strdup(char *param_1);
size_t __stubs::_strlen(char *param_1);
int __stubs::_strncmp(char *param_1,char *param_2,size_t param_3);
char * __stubs::_strncpy(char *param_1,char *param_2,size_t param_3);
time_t __stubs::_time(time_t *param_1);
int __stubs::_vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4);
void __stubs::_CFArrayGetCount(void);
void __stubs::_CFArrayGetValueAtIndex(void);
void __stubs::_CFRelease(void);
void __stubs::_NSApplicationMain(void);
void __stubs::_NSGetAlertPanel(void);
void __stubs::_NSRectFill(void);
void __stubs::_NSReleaseAlertPanel(void);
void __stubs::_FSFindFolder(void);
void __stubs::_FSRefMakePath(void);
void __stubs::_LSSharedFileListCopySnapshot(void);
void __stubs::_LSSharedFileListCreate(void);
void __stubs::_LSSharedFileListInsertItemURL(void);
void __stubs::_LSSharedFileListItemRemove(void);
void __stubs::_LSSharedFileListItemResolve(void);
void FUN_10001c4f0(void);
void __stub_helper::_LIBMTP_Clear_Errorstack(void);
void __stub_helper::_LIBMTP_Create_Folder(void);
void __stub_helper::_LIBMTP_Delete_Object(void);
void __stub_helper::_LIBMTP_Detect_Raw_Devices(void);
void __stub_helper::_LIBMTP_Dump_Errorstack(void);
void __stub_helper::_LIBMTP_Get_Deviceversion(void);
void __stub_helper::_LIBMTP_Get_File_To_File(void);
void __stub_helper::_LIBMTP_Get_Files_And_Folders(void);
void __stub_helper::_LIBMTP_Get_Filetype_Description(void);
void __stub_helper::_LIBMTP_Get_Manufacturername(void);
void __stub_helper::_LIBMTP_Get_Modelname(void);
void __stub_helper::_LIBMTP_Get_Serialnumber(void);
void __stub_helper::_LIBMTP_Get_Storage(void);
void __stub_helper::_LIBMTP_Init(void);
void __stub_helper::_LIBMTP_Open_Raw_Device_Uncached(void);
void __stub_helper::_LIBMTP_Release_Device(void);
void __stub_helper::_LIBMTP_Send_File_From_File(void);
void __stub_helper::_LIBMTP_Set_Device_Timeout(void);
void __stub_helper::_LIBMTP_Set_File_Name(void);
void __stub_helper::_LIBMTP_Set_Folder_Name(void);
void __stub_helper::_LIBMTP_Set_Load_Cache_On_Demand(void);
void __stub_helper::_LIBMTP_destroy_file_t(void);
void __stub_helper::_LIBMTP_destroy_folder_t(void);
void __stub_helper::_LIBMTP_new_file_t(void);
void __stub_helper::_LIBMTP_new_folder_t(void);
void __stub_helper::_BreakpadAddLogFile(void);
void __stub_helper::_BreakpadCreate(void);
void __stub_helper::_BreakpadRelease(void);
void __stub_helper::_NSDivideRect(void);
void __stub_helper::_NSFileTypeForHFSTypeCode(void);
void __stub_helper::_NSLog(void);
void __stub_helper::_NSMouseInRect(void);
void __stub_helper::_NSSearchPathForDirectoriesInDomains(void);
void __stub_helper::_NSStringFromSelector(void);
void __stub_helper::_class_addMethod(void);
void __stub_helper::_class_addProperty(void);
void __stub_helper::_class_addProtocol(void);
void __stub_helper::_class_getInstanceMethod(void);
void __stub_helper::_class_getInstanceSize(void);
void __stub_helper::_class_getInstanceVariable(void);
void __stub_helper::_class_getIvarLayout(void);
void __stub_helper::_class_getSuperclass(void);
void __stub_helper::_class_isMetaClass(void);
void __stub_helper::_class_respondsToSelector(void);
void __stub_helper::_ivar_getName(void);
void __stub_helper::_ivar_getOffset(void);
void __stub_helper::_method_setImplementation(void);
void __stub_helper::_objc_autoreleasePoolPop(void);
void __stub_helper::_objc_autoreleasePoolPush(void);
void __stub_helper::_objc_autoreleaseReturnValue(void);
void __stub_helper::_objc_collectingEnabled(void);
void __stub_helper::_objc_constructInstance(void);
void __stub_helper::_objc_destroyWeak(void);
void __stub_helper::_objc_enumerationMutation(void);
void __stub_helper::_objc_getClass(void);
void __stub_helper::_objc_getMetaClass(void);
void __stub_helper::_objc_getProperty(void);
void __stub_helper::_objc_getProtocol(void);
void __stub_helper::_objc_getRequiredClass(void);
void __stub_helper::_objc_initializeClassPair(void);
void __stub_helper::_objc_loadWeakRetained(void);
void __stub_helper::_objc_lookUpClass(void);
void __stub_helper::_objc_msgSendSuper2(void);
void __stub_helper::_objc_msgSendSuper2_stret(void);
void __stub_helper::_objc_msgSend_stret(void);
void __stub_helper::_objc_registerClassPair(void);
void __stub_helper::_objc_retainAutorelease(void);
void __stub_helper::_objc_retainAutoreleaseReturnValue(void);
void __stub_helper::_objc_retainAutoreleasedReturnValue(void);
void __stub_helper::_objc_setProperty(void);
void __stub_helper::_objc_storeStrong(void);
void __stub_helper::_objc_storeWeak(void);
void __stub_helper::_object_getClass(void);
void __stub_helper::_object_getIvar(void);
void __stub_helper::_object_setIvar(void);
void __stub_helper::_property_copyAttributeList(void);
void __stub_helper::_protocol_getMethodDescription(void);
void __stub_helper::_sel_getUid(void);
void __stub_helper::__ZNKSs7compareEPKc(void);
void __stub_helper::__ZNKSs7compareERKSs(void);
void __stub_helper::__ZNSs12_M_leak_hardEv(void);
void __stub_helper::__ZNSs4_Rep10_M_destroyERKSaIcE(void);
void __stub_helper::__ZNSs6appendEPKcm(void);
void __stub_helper::__ZNSs6assignEPKcm(void);
void __stub_helper::__ZNSs6assignERKSs(void);
void __stub_helper::__ZNSsC1EPKcRKSaIcE(void);
void __stub_helper::__ZNSsC1EPKcmRKSaIcE(void);
void __stub_helper::__ZNSsC1ERKSs(void);
void __stub_helper::__ZSt17__throw_bad_allocv(void);
void __stub_helper::__ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(void);
void __stub_helper::__ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base(void);
void __stub_helper::__ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(void);
void __stub_helper::__ZSt20__throw_length_errorPKc(void);
void __stub_helper::__ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_(void);
void __stub_helper::__ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(void);
void __stub_helper::__ZSt9terminatev(void);
void __stub_helper::___cxa_begin_catch(void);
void __stub_helper::___cxa_rethrow(void);
void __stub_helper::__Block_copy(void);
void __stub_helper::__Block_object_assign(void *param_1,void *param_2,int param_3);
void __stub_helper::__Block_object_dispose(void *param_1,int param_2);
void __stub_helper::__Unwind_Resume(_Unwind_Exception *exception_object);
void __stub_helper::___cxa_atexit(void);
void __stub_helper::___stack_chk_fail(void);
void __stub_helper::__dyld_register_func_for_add_image(void);
int __stub_helper::_asprintf(char **param_1,char *param_2,...);
char * __stub_helper::_basename(char *param_1);
void __stub_helper::_bzero(void *param_1,size_t param_2);
void * __stub_helper::_calloc(size_t param_1,size_t param_2);
void __stub_helper::_ceil(void);
char * __stub_helper::_dirname(char *param_1);
void __stub_helper::_dispatch_sync(void);
void __stub_helper::_dlclose(void);
void __stub_helper::_dlopen(void);
void __stub_helper::_dlsym(void);
int __stub_helper::_dup2(int param_1,int param_2);
void __stub_helper::_exit(int param_1);
int __stub_helper::_fclose(FILE *param_1);
int __stub_helper::_fileno(FILE *param_1);
FILE * __stub_helper::_fopen(char *param_1,char *param_2);
int __stub_helper::_fprintf(FILE *param_1,char *param_2,...);
void __stub_helper::_free(void *param_1);
hash_table * __stub_helper::_hash_create(int size);
void * __stub_helper::_hash_search(hash_table *table,char *key,void *datum,replace_func *replace_func);
tm * __stub_helper::_localtime(time_t *param_1);
void * __stub_helper::_malloc(size_t param_1);
int __stub_helper::_memcmp(void *param_1,void *param_2,size_t param_3);
void * __stub_helper::_memcpy(void *param_1,void *param_2,size_t param_3);
int __stub_helper::_pthread_mutex_destroy(pthread_mutex_t *param_1);
int __stub_helper::_pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2);
int __stub_helper::_pthread_mutex_lock(pthread_mutex_t *param_1);
int __stub_helper::_pthread_mutex_unlock(pthread_mutex_t *param_1);
int __stub_helper::_pthread_mutexattr_init(pthread_mutexattr_t *param_1);
int __stub_helper::_pthread_mutexattr_settype(pthread_mutexattr_t *param_1,int param_2);
pthread_t __stub_helper::_pthread_self(void);
int __stub_helper::_remove(char *param_1);
int __stub_helper::_removexattr(char *path,char *name,int options);
int __stub_helper::_rename(char *param_1,char *param_2);
char * __stub_helper::_rindex(char *param_1,int param_2);
uint __stub_helper::_sleep(uint param_1);
int __stub_helper::_snprintf(char *param_1,size_t param_2,char *param_3,...);
int __stub_helper::_sprintf(char *param_1,char *param_2,...);
void __stub_helper::_stat$INODE64(void);
int __stub_helper::_strcasecmp(char *param_1,char *param_2);
char * __stub_helper::_strchr(char *param_1,int param_2);
int __stub_helper::_strcmp(char *param_1,char *param_2);
char * __stub_helper::_strdup(char *param_1);
size_t __stub_helper::_strlen(char *param_1);
int __stub_helper::_strncmp(char *param_1,char *param_2,size_t param_3);
char * __stub_helper::_strncpy(char *param_1,char *param_2,size_t param_3);
time_t __stub_helper::_time(time_t *param_1);
int __stub_helper::_vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4);
void __stub_helper::_CFArrayGetCount(void);
void __stub_helper::_CFArrayGetValueAtIndex(void);
void __stub_helper::_CFRelease(void);
void __stub_helper::_NSApplicationMain(void);
void __stub_helper::_NSGetAlertPanel(void);
void __stub_helper::_NSRectFill(void);
void __stub_helper::_NSReleaseAlertPanel(void);
void __stub_helper::_FSFindFolder(void);
void __stub_helper::_FSRefMakePath(void);
void __stub_helper::_LSSharedFileListCopySnapshot(void);
void __stub_helper::_LSSharedFileListCreate(void);
void __stub_helper::_LSSharedFileListInsertItemURL(void);
void __stub_helper::_LSSharedFileListItemRemove(void);
void __stub_helper::_LSSharedFileListItemResolve(void);
undefined compare(char * param_1);
undefined compare(basic_string * param_1);
undefined _M_leak_hard(void);
undefined _M_destroy(allocator * param_1);
undefined append(char * param_1, ulong param_2);
undefined assign(char * param_1, ulong param_2);
undefined assign(basic_string * param_1);
undefined basic_string(char * param_1, allocator * param_2);
undefined basic_string(char * param_1, ulong param_2, allocator * param_3);
undefined basic_string(basic_string * param_1);
undefined __throw_bad_alloc(void);
undefined _Rb_tree_decrement(_Rb_tree_node_base * param_1);
undefined _Rb_tree_increment(_Rb_tree_node_base * param_1);
undefined _Rb_tree_increment(_Rb_tree_node_base * param_1);
undefined __throw_length_error(char * param_1);
undefined _Rb_tree_rebalance_for_erase(_Rb_tree_node_base * param_1, _Rb_tree_node_base * param_2);
undefined _Rb_tree_insert_and_rebalance(bool param_1, _Rb_tree_node_base * param_2, _Rb_tree_node_base * param_3, _Rb_tree_node_base * param_4);
undefined terminate(void);
void operator.delete(void * param_1);
void * operator.new(ulong param_1);
undefined ___stack_chk_fail();
void _exit(int param_1);

