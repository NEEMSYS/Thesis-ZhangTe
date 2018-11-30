#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/bin/../lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 38 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 48 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 41 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern int memcmp(const void *arg_0x7fb94cd5f250, const void *arg_0x7fb94cd5f550, size_t arg_0x7fb94cd5f810);
extern void *memcpy(void *arg_0x7fb94cd5e110, const void *arg_0x7fb94cd5e410, size_t arg_0x7fb94cd5e6d0);
extern void *memmove(void *arg_0x7fb94cd5c020, const void *arg_0x7fb94cd5c320, size_t arg_0x7fb94cd5c5e0);
extern void *memset(void *arg_0x7fb94cd5b020, int arg_0x7fb94cd5b2a0, size_t arg_0x7fb94cd5b560);



extern char *strcpy(char *arg_0x7fb94cd572b0, const char *arg_0x7fb94cd575b0);

extern size_t strlen(const char *arg_0x7fb94cd55c40);



extern char *strncpy(char *arg_0x7fb94cd50020, const char *arg_0x7fb94cd50320, size_t arg_0x7fb94cd505e0);










extern void *memset(void *arg_0x7fb94cd43060, int arg_0x7fb94cd432e0, size_t arg_0x7fb94cd435a0);
# 62 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
#line 59
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;






#line 66
typedef struct __nesc_unnamed4243 {
  long int quot;
  long int rem;
} ldiv_t;
# 122 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x7fb94cd04170);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x7fb94ccff480);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 212
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 265
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "../../tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "../../tos/types/TinyError.h"
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ETIMEOUT = 12, 
  ELAST = 12
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 47 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/intrinsics.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );


typedef unsigned int __istate_t;
# 164 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
#line 183
extern volatile unsigned char ME2 __asm ("__""ME2");
#line 195
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 267
extern volatile unsigned char P1OUT __asm ("__""P1OUT");

extern volatile unsigned char P1DIR __asm ("__""P1DIR");

extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");

extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");

extern volatile unsigned char P2SEL __asm ("__""P2SEL");










extern volatile unsigned char P3OUT __asm ("__""P3OUT");

extern volatile unsigned char P3DIR __asm ("__""P3DIR");

extern volatile unsigned char P3SEL __asm ("__""P3SEL");




extern volatile unsigned char P4OUT __asm ("__""P4OUT");

extern volatile unsigned char P4DIR __asm ("__""P4DIR");

extern volatile unsigned char P4SEL __asm ("__""P4SEL");










extern volatile unsigned char P5OUT __asm ("__""P5OUT");

extern volatile unsigned char P5DIR __asm ("__""P5DIR");

extern volatile unsigned char P5SEL __asm ("__""P5SEL");




extern volatile unsigned char P6OUT __asm ("__""P6OUT");

extern volatile unsigned char P6DIR __asm ("__""P6DIR");

extern volatile unsigned char P6SEL __asm ("__""P6SEL");
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 441
extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");
#line 595
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
#line 720
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
#line 734
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
#line 849
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
#line 1021
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 354 "../../tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 389
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 444
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 459
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 8 "../../tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4251 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
#line 36
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 36
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 36
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 37
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 37
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 79
enum __nesc_unnamed4252 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 89
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 54 "../../tos/system/SchedulerBasicP.nc"
volatile uint8_t watch_task_id = 0;
# 35 "../../tools/tinyos/c/blip/lib6lowpan/6lowpan.h"
enum __nesc_unnamed4253 {
  LOWMSG_MESH_LEN = 5, 
  LOWMSG_BCAST_LEN = 2, 
  LOWMSG_FRAG1_LEN = 4, 
  LOWMSG_FRAGN_LEN = 5
};

enum __nesc_unnamed4254 {
  INET_MTU = 1280, 
  LIB6LOWPAN_MAX_LEN = 100, 
  LOWPAN_LINK_MTU = 109, 




  FRAG_EXPIRE_TIME = 4096
};




enum __nesc_unnamed4255 {
  LOWPAN_NALP_PATTERN = 0x0, 
  LOWPAN_MESH_PATTERN = 0x2, 
  LOWPAN_FRAG1_PATTERN = 0x18, 
  LOWPAN_FRAGN_PATTERN = 0x1c, 
  LOWPAN_BCAST_PATTERN = 0x50, 
  LOWPAN_IPV6_PATTERN = 0x41
};

enum __nesc_unnamed4256 {
  LOWPAN_MESH_V_MASK = 0x20, 
  LOWPAN_MESH_F_MASK = 0x10, 
  LOWPAN_MESH_HOPS_MASK = 0x0f
};




enum __nesc_unnamed4257 {
  LOWPAN_DISPATCH_BYTE_MASK = 0xe0, 
  LOWPAN_DISPATCH_BYTE_VAL = 0x60, 

  LOWPAN_IPHC_TF_MASK = 0x18, 
  LOWPAN_IPHC_TF_NONE = 0x18, 
  LOWPAN_IPHC_TF_ECN_DSCP = 0x10, 
  LOWPAN_IPHC_TF_ECN_FL = 0x08, 
  LOWPAN_IPHC_TF_ECN_DSCP_FL = 0x00, 

  LOWPAN_IPHC_NH_MASK = 0x04, 
  LOWPAN_IPHC_NH_INLINE = 0, 

  LOWPAN_IPHC_HLIM_MASK = 0x03, 
  LOWPAN_IPHC_HLIM_NONE = 0x00, 
  LOWPAN_IPHC_HLIM_1 = 0x01, 
  LOWPAN_IPHC_HLIM_64 = 0x02, 
  LOWPAN_IPHC_HLIM_255 = 0x03, 

  LOWPAN_IPHC_CID_MASK = 0x80, 
  LOWPAN_IPHC_CID_PRESENT = 0x80, 

  LOWPAN_IPHC_SAM_SHIFT = 4, 
  LOWPAN_IPHC_M = 0x08, 
  LOWPAN_IPHC_DAM_SHIFT = 0, 

  LOWPAN_IPHC_AC_CONTEXT = 0x04, 
  LOWPAN_IPHC_AM_MASK = 0x3, 
  LOWPAN_IPHC_AM_128 = 0x0, 
  LOWPAN_IPHC_AM_64 = 0x1, 
  LOWPAN_IPHC_AM_16 = 0x2, 
  LOWPAN_IPHC_AM_0 = 0x3, 

  LOWPAN_IPHC_AM_M = 0x08, 
  LOWPAN_IPHC_AM_M_128 = 0x0, 
  LOWPAN_IPHC_AM_M_48 = 0x1, 
  LOWPAN_IPHC_AM_M_32 = 0x2, 
  LOWPAN_IPHC_AM_M_8 = 0x3
};




enum __nesc_unnamed4258 {
  LOWPAN_NHC_IPV6_MASK = 0xf0, 
  LOWPAN_NHC_IPV6_PATTERN = 0xe0, 

  LOWPAN_NHC_EID_SHIFT = 0x1, 
  LOWPAN_NHC_EID_MASK = 0xe, 
  LOWPAN_NHC_EID_HOP = 0x0 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_ROUTING = 0x1 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_FRAG = 0x2 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_DEST = 0x3 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_MOBILE = 0x4 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_IPV6 = 0x7 << LOWPAN_NHC_EID_SHIFT, 

  LOWPAN_NHC_NH = 0x1, 

  LOWPAN_NHC_UDP_MASK = 0xf8, 
  LOWPAN_NHC_UDP_PATTERN = 0xf0, 

  LOWPAN_NHC_UDP_CKSUM = 0x4, 

  LOWPAN_NHC_UDP_PORT_MASK = 0x3, 
  LOWPAN_NHC_UDP_PORT_FULL = 0x0, 
  LOWPAN_NHC_UDP_PORT_SRC_FULL = 0x1, 
  LOWPAN_NHC_UDP_PORT_DST_FULL = 0x2, 
  LOWPAN_NHC_UDP_PORT_SHORT = 0x3
};
# 39 "../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4259 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4260 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4261 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4262 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 43 "../../tos/types/Leds.h"
enum __nesc_unnamed4263 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "../../tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;



  nx_uint16_t maxRetries;
  nx_uint16_t retryDelay;
} __attribute__((packed)) 
cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4264 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 112 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FSMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4265 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "../../tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4266 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4267 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "../../tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4268 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4269 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4270 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 59 "../../tos/platforms/telosa/platform_message.h"
#line 56
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 61
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 65
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[112];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 27 "../../tos/lib/net/blip/IPDispatch.h"
enum __nesc_unnamed4271 {
  N_RECONSTRUCTIONS = 3, 
  N_CONCURRENT_SENDS = 3, 
  N_FRAGMENTS = 12
};

struct send_info {
  void *upper_data;
  uint8_t link_fragments;
  uint8_t link_transmissions;
  uint8_t link_fragment_attempts;
  bool failed;
  uint8_t _refcount;
};

struct send_entry {
  struct send_info *info;
  message_t *msg;
};
# 24 "../../tools/tinyos/c/blip/lib6lowpan/nwbyte.h"
uint32_t ntohl(uint32_t i);
# 40 "../../tos/types/IeeeEui64.h"
enum __nesc_unnamed4272 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "../../tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4273 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4274 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4275 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4276 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 7 "../../tools/tinyos/c/blip/lib6lowpan/iovec.h"
struct ip_iovec {
  uint8_t *iov_base;
  size_t iov_len;
  struct ip_iovec *iov_next;
};

int iov_read(struct ip_iovec *iov, int offset, int len, uint8_t *buf);
int iov_len(struct ip_iovec *iov);
# 42 "../../tools/tinyos/c/blip/lib6lowpan/ip.h"
struct in6_addr {

  union __nesc_unnamed4277 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct sockaddr_in6 {
  uint16_t sin6_port;
  struct in6_addr sin6_addr;
};









struct ip6_hdr {
  union __nesc_unnamed4278 {
    struct ip6_hdrctl {
      uint32_t ip6_un1_flow;
      uint16_t ip6_un1_plen;
      uint8_t ip6_un1_nxt;
      uint8_t ip6_un1_hlim;
    } ip6_un1;
    uint8_t ip6_un2_vfc;
  } ip6_ctlun;
  struct in6_addr ip6_src;
  struct in6_addr ip6_dst;
} __attribute((packed)) ;
#line 110
struct ip6_ext {
  uint8_t ip6e_nxt;
  uint8_t ip6e_len;
};

struct tlv_hdr {
  uint8_t type;
  uint8_t len;
};



enum __nesc_unnamed4279 {
  IANA_ICMP = 58, 
  IANA_UDP = 17, 
  IANA_TCP = 6, 




  IPV6_HOP = 0, 
  IPV6_IPV6 = 41, 
  IPV6_ROUTING = 43, 
  IPV6_FRAG = 44, 
  IPV6_AUTH = 51, 
  IPV6_SEC = 50, 
  IPV6_NONEXT = 59, 
  IPV6_DEST = 60, 
  IPV6_MOBILITY = 135, 

  IPV6_TLV_PAD1 = 0, 
  IPV6_TLV_PADN = 1
};




struct in6_iid {
  uint8_t data[8];
};




struct icmp6_hdr {
  uint8_t type;
  uint8_t code;
  uint16_t cksum;
};

enum __nesc_unnamed4280 {
  ICMP_TYPE_ECHO_DEST_UNREACH = 1, 
  ICMP_TYPE_ECHO_PKT_TOO_BIG = 2, 
  ICMP_TYPE_ECHO_TIME_EXCEEDED = 3, 
  ICMP_TYPE_ECHO_PARAM_PROBLEM = 4, 
  ICMP_TYPE_ECHO_REQUEST = 128, 
  ICMP_TYPE_ECHO_REPLY = 129, 
  ICMP_TYPE_ROUTER_SOL = 133, 
  ICMP_TYPE_ROUTER_ADV = 134, 
  ICMP_TYPE_NEIGHBOR_SOL = 135, 
  ICMP_TYPE_NEIGHBOR_ADV = 136, 
  ICMP_TYPE_RPL_CONTROL = 155, 
  ICMP_NEIGHBOR_HOPLIMIT = 255, 

  ICMP_CODE_HOPLIMIT_EXCEEDED = 0, 
  ICMP_CODE_ASSEMBLY_EXCEEDED = 1
};




struct udp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint16_t len;
  uint16_t chksum;
};




enum __nesc_unnamed4281 {
  TCP_FLAG_FIN = 0x1, 
  TCP_FLAG_SYN = 0x2, 
  TCP_FLAG_RST = 0x4, 
  TCP_FLAG_PSH = 0x8, 
  TCP_FLAG_ACK = 0x10, 
  TCP_FLAG_URG = 0x20, 
  TCP_FLAG_ECE = 0x40, 
  TCP_FLAG_CWR = 0x80
};

struct tcp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint32_t seqno;
  uint32_t ackno;
  uint8_t offset;
  uint8_t flags;
  uint16_t window;
  uint16_t chksum;
  uint16_t urgent;
};







struct ip6_metadata {
  ieee154_addr_t sender;

  uint8_t lqi;
  uint8_t rssi;
};
#line 244
struct ip6_packet {
  int ip6_inputif;
  struct ip_iovec *ip6_data;
  struct ip6_hdr ip6_hdr;
};






void inet_pton6(char *addr, struct in6_addr *dest);
int inet_ntop6(struct in6_addr *addr, char *buf, int cnt);
# 38 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.h"
uint8_t *ip_memcpy(uint8_t *dst0, const uint8_t *src0, uint16_t len);


uint16_t ieee154_hashaddr(ieee154_addr_t *addr);




struct packed_lowmsg {
  uint8_t headers;
  uint8_t len;
  uint8_t *data;
};

struct lowpan_reconstruct {
  uint16_t r_tag;
  uint16_t r_source_key;
  uint16_t r_size;
  uint8_t *r_buf;
  uint16_t r_bytes_rcvd;

  uint8_t r_timeout;
  uint16_t *r_app_len;
  uint8_t *r_transport_header;
  struct ip6_metadata r_meta;
};

struct lowpan_ctx {
  uint16_t tag;
  uint16_t offset;
};


enum __nesc_unnamed4282 {
  LOWMSG_MESH_HDR = 1 << 0, 
  LOWMSG_BCAST_HDR = 1 << 1, 
  LOWMSG_FRAG1_HDR = 1 << 2, 
  LOWMSG_FRAGN_HDR = 1 << 3, 
  LOWMSG_NALP = 1 << 4, 
  LOWMSG_IPNH_HDR = 1 << 5, 
  LOWMSG_IPV6 = 1 << 6
};
#line 187
enum __nesc_unnamed4283 {
  T_FAILED1 = 0, 
  T_FAILED2 = 1, 
  T_UNUSED = 2, 
  T_ACTIVE = 3, 
  T_ZOMBIE = 4
};
# 59 "../../tos/lib/net/blip/BlipStatistics.h"
#line 40
typedef nx_struct __nesc_unnamed4284 {
  nx_uint16_t sent;
  nx_uint16_t forwarded;
  nx_uint8_t rx_drop;
  nx_uint8_t tx_drop;
  nx_uint8_t fw_drop;
  nx_uint8_t rx_total;
  nx_uint8_t encfail;
} __attribute__((packed)) 
#line 59
ip_statistics_t;







#line 62
typedef nx_struct __nesc_unnamed4285 {
  nx_uint8_t hop_limit;
  nx_uint16_t parent;
  nx_uint16_t parent_metric;
  nx_uint16_t parent_etx;
} __attribute__((packed)) route_statistics_t;










#line 69
typedef nx_struct __nesc_unnamed4286 {
  nx_uint8_t sol_rx;
  nx_uint8_t sol_tx;
  nx_uint8_t adv_rx;
  nx_uint8_t adv_tx;
  nx_uint8_t echo_rx;
  nx_uint8_t echo_tx;
  nx_uint8_t unk_rx;
  nx_uint16_t rx;
} __attribute__((packed)) icmp_statistics_t;






#line 81
typedef nx_struct __nesc_unnamed4287 {
  nx_uint16_t sent;
  nx_uint16_t rcvd;
  nx_uint16_t cksum;
} __attribute__((packed)) udp_statistics_t;
# 38 "UDPReport.h"
nx_struct udp_report {
  nx_uint16_t seqno;
  nx_uint16_t sender;
  ip_statistics_t ip;
  udp_statistics_t udp;
  icmp_statistics_t icmp;
  route_statistics_t route;
} __attribute__((packed));
# 41 "../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4288 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4289 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4290 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4291 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 6 "../../tos/lib/net/blip/iprouting.h"
enum __nesc_unnamed4292 {
  ROUTE_INVAL_KEY = -1
};





enum __nesc_unnamed4293 {
  ROUTE_IFACE_ALL = 0, 
  ROUTE_IFACE_154 = 1, 
  ROUTE_IFACE_PPP = 2
};

enum __nesc_unnamed4294 {
  ROUTE_DROP_NOROUTE, 
  ROUTE_DROP_HLIM
};

typedef int route_key_t;

struct route_entry {
  int valid : 1;
  route_key_t key;
  struct in6_addr prefix;
  uint8_t prefixlen;
  struct in6_addr next_hop;
  uint8_t ifindex;
};
# 40 "/usr/bin/../lib/gcc/msp430/4.6.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 102
typedef __gnuc_va_list va_list;
# 50 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdio.h" 3
int __attribute((format(printf, 3, 4))) snprintf(char *buf, size_t size, const char *fmt, ...);
# 25 "../../tos/lib/net/blip/icmp/icmp6.h"
enum __nesc_unnamed4295 {
  ICMP_EXT_TYPE_PREFIX = 3, 
  ICMP_EXT_TYPE_BEACON = 17
};
#line 42
enum __nesc_unnamed4296 {

  TRICKLE_PERIOD = 16384L, 

  TRICKLE_JITTER = TRICKLE_PERIOD, 


  TRICKLE_MAX = TRICKLE_PERIOD << 5
};



struct icmpv6_header_t {
  uint8_t type;
  uint8_t code;
  nx_uint16_t checksum;
} __attribute((packed)) ;







#line 60
typedef nx_struct icmp6_echo_hdr {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint16_t ident;
  nx_uint16_t seqno;
} __attribute__((packed)) icmp_echo_hdr_t;
#line 78
#line 68
typedef nx_struct radv {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint8_t hlim;
  nx_uint8_t flags;
  nx_uint16_t lifetime;
  nx_uint32_t reachable_time;
  nx_uint32_t retrans_time;
  nx_uint8_t options[0];
} __attribute__((packed)) radv_t;






#line 80
typedef nx_struct rsol {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint32_t reserved;
} __attribute__((packed)) rsol_t;










#line 87
typedef nx_struct rpfx {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint8_t pfx_len;
  nx_uint8_t flags;
  nx_uint32_t valid_lifetime;
  nx_uint32_t preferred_lifetime;
  nx_uint32_t reserved;
  nx_uint8_t prefix[16];
} __attribute__((packed)) pfx_t;







#line 98
typedef nx_struct __nesc_unnamed4297 {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint16_t metric;
  nx_uint16_t seqno;
  nx_uint8_t pad[2];
} __attribute__((packed)) rqual_t;

struct icmp_stats {
  uint16_t seq;
  uint8_t ttl;
  uint32_t rtt;
};
# 17 "../../tos/lib/net/blip/neighbor_discovery.h"
enum __nesc_unnamed4298 {
  ICMPV6_CODE_RS = 0x00, 
  ICMPV6_CODE_RA = 0x00, 
  ICMPV6_CODE_NS = 0x00, 
  ICMPV6_CODE_NA = 0x00
};

enum __nesc_unnamed4299 {
  ND6_OPT_SLLAO = 1, 
  ND6_OPT_TLLAO = 2, 
  ND6_OPT_PREFIX = 3, 
  ND6_OPT_REDIRECT_HEADER = 4, 
  ND6_OPT_MTU = 5
};

enum __nesc_unnamed4300 {
  RA_FLAG_MANAGED_ADDR_CONF = 0, 
  RA_FLAG_OTHER_CONF = 0
};

struct nd_router_solicitation_t {
  struct icmpv6_header_t icmpv6;
  nx_uint32_t reserved;
};

struct nd_router_advertisement_t {
  struct icmpv6_header_t icmpv6;
  uint8_t hop_limit;
  uint8_t flags_reserved;
  nx_uint16_t router_lifetime;
  nx_uint32_t reachable_time;
  nx_uint32_t retransmit_time;
};

struct nd_neighbor_solicitation_t {
  struct icmpv6_header_t icmpv6;
  nx_uint32_t reserved;
  struct in6_addr target_address;
};

struct nd_neighbor_advertisement_t {
  struct icmpv6_header_t icmpv6;
  uint8_t flags;
  uint8_t reserved1;
  nx_uint16_t reserved2;
  struct in6_addr target_address;
};

enum __nesc_unnamed4301 {
  ND6_RADV_M_SHIFT = 7, 
  ND6_RADV_O_SHIFT = 6, 

  ND6_RADV_M_MASK = 0x80, 
  ND6_RADV_O_MASK = 0x40, 

  ND6_NADV_R_SHIFT = 7, 
  ND6_NADV_S_SHIFT = 6, 
  ND6_NADV_O_SHIFT = 5, 

  ND6_NADV_R_MASK = 0x80, 
  ND6_NADV_S_MASK = 0x40, 
  ND6_NADV_O_MASK = 0x20
};


struct nd_option_slla_t {
  uint8_t type;
  uint8_t option_length;
  ieee154_laddr_t ll_addr;
};


struct nd_option_prefix_info_t {
  uint8_t type;
  uint8_t option_length;
  uint8_t prefix_length;
  uint8_t flags_reserved;
  nx_uint32_t valid_lifetime;
  nx_uint32_t preferred_lifetime;
  uint32_t reserved2;
  struct in6_addr prefix;
};

enum __nesc_unnamed4302 {
  ND6_OPT_PREFIX_L_SHIFT = 7, 
  ND6_OPT_PREFIX_A_SHIFT = 6, 

  ND6_OPT_PREFIX_L_MASK = 0x80, 
  ND6_OPT_PREFIX_A_MASK = 0x40
};

struct nd_option_redirected_header_t {
  uint8_t type;
  uint8_t option_length;
  uint16_t reserved;
  uint32_t reserved2;
};


struct nd_option_mtu_t {
  uint8_t type;
  uint8_t option_length;
  uint16_t reserved;
  nx_uint32_t mtu;
};

enum __nesc_unnamed4303 {
  PREFIX_TABLE_SZ = 10
};

struct nd_prefix_t {
  bool valid;
  uint8_t length;
  uint8_t flags;
  uint32_t valid_lifetime;
  uint32_t preferred_lifetime;
  struct in6_addr prefix;
};

enum __nesc_unnamed4304 {
  IP6_INFINITE_LIFETIME = 0xFFFFFFFF, 

  MAX_RTR_SOLICITATIONS = 3, 
  RTR_SOLICITATION_INTERVAL = 10 * 1024U, 
  MAX_RTR_SOLICITATION_INTERVAL = 60 * 1024U, 

  RTR_LIFETIME = 0xFFFF
};
# 29 "../../tos/platforms/epic/chips/ds2411/PlatformIeeeEui64.h"
enum __nesc_unnamed4305 {
  IEEE_EUI64_COMPANY_ID_0 = 0x00, 
  IEEE_EUI64_COMPANY_ID_1 = 0x12, 
  IEEE_EUI64_COMPANY_ID_2 = 0x6d, 
  IEEE_EUI64_SERIAL_ID_0 = 'E', 
  IEEE_EUI64_SERIAL_ID_1 = 'P'
};
# 6 "../../tos/chips/ds2411/ds2411.h"
enum __nesc_unnamed4306 {
  DS2411_SERIAL_LENGTH = 6, 
  DS2411_DATA_LENGTH = 8
};








#line 11
typedef union ds241_serial_t {
  uint8_t data[DS2411_DATA_LENGTH];
  struct  {
    uint8_t family_code;
    uint8_t serial[DS2411_SERIAL_LENGTH];
    uint8_t crc;
  } ;
} ds2411_serial_t;
# 56 "../../tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4307 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4308 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4309 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4310 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4311 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4312 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4313 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4314 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4315 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4316 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4317 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4318 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4319 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4320 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4321 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4322 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4323 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4324 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 33 "../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 36 "../../tools/tinyos/c/blip/lib6lowpan/in_cksum.h"
uint16_t msg_cksum(const struct ip6_hdr *iph, 
struct ip_iovec *data, 
uint8_t nxt_hdr);
# 36 "../../tools/tinyos/c/blip/lib6lowpan/ip_malloc.h"
typedef uint16_t bndrt_t;

void ip_malloc_init();
void *ip_malloc(uint16_t sz);
void ip_free(void *ptr);
# 31 "../../tos/lib/net/blip/table.h"
#line 27
typedef struct __nesc_unnamed4325 {
  void *data;
  uint16_t elt_len;
  uint16_t n_elts;
} table_t;

void table_init(table_t *table, void *data, uint16_t elt_len, uint16_t n_elts);

void table_map(table_t *table, void (*fn)(void *arg_0x7fb94b616150));
# 43 "../../tos/chips/cc2420/CC2420TimeSyncMessage.h"
typedef nx_uint32_t timesync_radio_t;





#line 45
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
} __attribute__((packed)) timesync_footer_t;
# 47 "../../tos/chips/cc2420/lpl/DefaultLpl.h"
#line 42
typedef enum __nesc_unnamed4326 {
  S_LPL_NOT_SENDING, 
  S_LPL_FIRST_MESSAGE, 
  S_LPL_SENDING, 
  S_LPL_CLEAN_UP
} lpl_sendstate_t;
# 25 "../../tos/lib/net/blip/shell/Shell.h"
enum __nesc_unnamed4327 {
  MAX_REPLY_LEN = 128
};
typedef TMilli TCPEchoP__StatusTimer__precision_tag;
typedef ip_statistics_t TCPEchoP__IPStats__stat_str;
typedef udp_statistics_t TCPEchoP__UDPStats__stat_str;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4328 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef struct in6_iid IPForwardingEngineP__Pool__t;
typedef TMilli IPNeighborDiscoveryP__RSTimer__precision_tag;
typedef TMicro OneWireMasterP__BusyWait__precision_tag;
typedef uint16_t OneWireMasterP__BusyWait__size_type;
typedef TMicro /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag;
typedef uint16_t /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type;
typedef TMicro /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag;
typedef /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__precision_tag;
typedef uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type;
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4329 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4330 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4331 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4332 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4333 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4334 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef struct send_info IPDispatchP__SendInfoPool__t;
typedef ip_statistics_t IPDispatchP__BlipStatistics__stat_str;
typedef struct send_entry *IPDispatchP__SendQueue__t;
typedef TMilli IPDispatchP__ExpireTimer__precision_tag;
typedef message_t IPDispatchP__FragPool__t;
typedef struct send_entry IPDispatchP__SendEntryPool__t;
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4335 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4336 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
enum CC2420TinyosNetworkC____nesc_unnamed4337 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 0U
};
typedef TMilli DefaultLplP__OffTimer__precision_tag;
typedef TMilli DefaultLplP__SendDoneTimer__precision_tag;
typedef TMilli PowerCycleP__OnTimer__precision_tag;
typedef TMilli PacketLinkP__DelayTimer__precision_tag;
typedef message_t /*IPDispatchC.FragPool*/PoolC__0__pool_t;
typedef /*IPDispatchC.FragPool*/PoolC__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t;
typedef /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t;
typedef struct send_entry /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t;
typedef /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t;
typedef /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t;
typedef struct send_entry */*IPDispatchC.QueueC*/QueueC__0__queue_t;
typedef /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__t;
typedef struct send_info /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t;
typedef /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t;
typedef /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t;
typedef struct in6_iid /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC*/PoolC__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t;
typedef /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t;
typedef udp_statistics_t UdpP__BlipStatistics__stat_str;
typedef TMilli TcpP__Timer__precision_tag;
typedef TMilli UDPShellP__Uptime__precision_tag;
typedef uint32_t UDPShellP__Uptime__size_type;
typedef TMilli ICMPPingP__PingTimer__precision_tag;
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb94c70f8b0);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb94c70f8b0);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 73
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 91
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 79 "../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb94c816450);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb94c816450);
# 57 "../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 117
static uint8_t LedsP__Leds__get(void );
# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
#line 53
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
#line 99
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__getRaw(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__getRaw(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );









static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__getRaw(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
# 42 "../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );
static bool /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__get(void );


static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );


static bool /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__get(void );


static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );
static bool /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__get(void );


static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void TCPEchoP__StatusTimer__fired(void );
# 60 "../../tos/interfaces/Boot.nc"
static void TCPEchoP__Boot__booted(void );
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
static void TCPEchoP__Status__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 113 "../../tos/interfaces/SplitControl.nc"
static void TCPEchoP__RadioControl__startDone(error_t error);
#line 138
static void TCPEchoP__RadioControl__stopDone(error_t error);
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
static void TCPEchoP__Echo__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static void TCPEchoP__TcpEcho__connectDone(error_t e);
#line 16
static bool TCPEchoP__TcpEcho__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);
#line 34
static void TCPEchoP__TcpEcho__recv(void *payload, uint16_t len);
#line 47
static void TCPEchoP__TcpEcho__closed(error_t e);




static void TCPEchoP__TcpEcho__acked(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0);
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0);
# 92 "../../tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0);
# 64 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0, 
# 64 "../../tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0, 
# 73 "../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__SubIP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t IPProtocolsP__IP__send(
# 14 "../../tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x7fb94c087a30, 
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void IPProtocolsP__IP__default__recv(
# 14 "../../tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x7fb94c087a30, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__default__approve(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 28 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__default__initiate(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 13 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__default__linkResult(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 39 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__default__send(
# 28 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c056510, 
# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);







static void IPForwardingEngineP__IPForward__recv(
# 28 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c056510, 
# 28 "../../tos/lib/net/blip/interfaces/IPForward.nc"
struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta);
#line 22
static void IPForwardingEngineP__IPForward__sendDone(
# 28 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c056510, 
# 22 "../../tos/lib/net/blip/interfaces/IPForward.nc"
struct send_info *status);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );
# 43 "../../tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPForwardingEngineP__IPAddress__changed(bool valid);
# 18 "../../tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 10
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t IPForwardingEngineP__IP__send(struct ip6_packet *msg);
# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 28 "../../tos/lib/net/blip/interfaces/IPLower.nc"
static void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPNeighborDiscoveryP__IP_NS__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPNeighborDiscoveryP__IPAddress__changed(bool valid);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPNeighborDiscoveryP__IP_RS__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 21 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static void IPNeighborDiscoveryP__NeighborDiscovery__setPrefix(struct in6_addr *newprefix, uint8_t length, 
uint32_t valid_lifetime, uint32_t preferred_lifetime);
#line 11
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr);




static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPNeighborDiscoveryP__IP_NA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void IPNeighborDiscoveryP__IP_RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 83 "../../tos/lib/timer/Timer.nc"
static void IPNeighborDiscoveryP__RSTimer__fired(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void IPNeighborDiscoveryP__send_rs_task__runTask(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t IPNeighborDiscoveryP__StdControl__start(void );
# 29 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 44
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);










static bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);
# 20 "../../tos/lib/net/blip/interfaces/SetIPAddress.nc"
static error_t IPAddressP__SetIPAddress__setAddress(struct in6_addr *addr);
# 55 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
static void Ieee154AddressP__CC2420Config__syncDone(error_t error);
# 5 "../../tos/interfaces/Ieee154Address.nc"
static ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );

static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t Ieee154AddressP__Init__init(void );
# 48 "../../tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64P__LocalIeeeEui64__getId(void );
# 13 "../../tos/chips/ds2411/ReadId48.nc"
static error_t Ds2411P__ReadId48__read(uint8_t *id);
# 10 "../../tos/lib/onewire/OneWireReadWrite.nc"
static error_t OneWireMasterP__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 66 "../../tos/lib/timer/BusyWait.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type dt);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeOutput(void );
#line 41
static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__clr(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t Ds2411PowerControlC__StdControl__start(void );









static error_t Ds2411PowerControlC__StdControl__stop(void );
# 93 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 54
static error_t CC2420ControlP__CC2420Config__sync(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__fired(void );
# 63 "../../tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDone__runTask(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
#line 102
static void CC2420ControlP__SyncResource__granted(void );
# 71 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__sync__runTask(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420ControlP__RssiResource__granted(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 66
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__clr(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "../../tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 47
static void HplMsp430InterruptP__Port10__disable(void );
#line 67
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "../../tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "../../tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 88 "../../tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 81
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 62 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 82 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 51 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 71 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x7fb94bb51d10, 
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb50c00, 
# 55 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb50c00, 
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 97 "../../tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 88 "../../tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 128 "../../tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb4f9f0);
# 62 "../../tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 71 "../../tos/interfaces/State.nc"
static uint8_t StateImplP__State__getState(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0);
# 56 "../../tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0);
# 66 "../../tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0, 
# 66 "../../tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0);
# 45 "../../tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0, 
# 45 "../../tos/interfaces/State.nc"
uint8_t reqState);





static void StateImplP__State__forceState(
# 67 "../../tos/system/StateImplP.nc"
uint8_t arg_0x7fb94bad59c0, 
# 51 "../../tos/interfaces/State.nc"
uint8_t reqState);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba47110);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba47110);
# 76 "../../tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45060, 
# 65 "../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 88
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45060, 
# 81 "../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba43110);
# 45 "../../tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 197
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 153
static void HplMsp430Usart0P__Usart__enableSpi(void );
#line 168
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P__Usart__rx(void );
#line 192
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d8cd0, 
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d8cd0);
# 39 "../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d7b80);
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b8976b0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b8976b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b894980);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b894980);
# 56 "../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 90 "../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 7 "../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 55 "../../tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__ICMP_IP__send(
# 50 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x7fb94b6a1590, 
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void ICMPCoreP__ICMP_IP__default__recv(
# 50 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x7fb94b6a1590, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPCoreP__IPAddress__changed(bool valid);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__default__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 23
static void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__send(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__default__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 100 "../../tos/interfaces/Leds.nc"
static void NoLedsC__Leds__led2Toggle(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__SplitControl__start(void );
# 34 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void IPDispatchP__BlipStatistics__clear(void );
#line 29
static void IPDispatchP__BlipStatistics__get(IPDispatchP__BlipStatistics__stat_str *stats);
# 113 "../../tos/interfaces/SplitControl.nc"
static void IPDispatchP__RadioControl__startDone(error_t error);
#line 138
static void IPDispatchP__RadioControl__stopDone(error_t error);
# 18 "../../tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 62 "../../tos/interfaces/Init.nc"
static error_t IPDispatchP__Init__init(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__fired(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void IPDispatchP__sendTask__runTask(void );
# 100 "../../tos/interfaces/Send.nc"
static void IPDispatchP__Ieee154Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



IPDispatchP__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
#line 130
static error_t CC2420CsmaP__SplitControl__stop(void );
# 66 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
#line 81
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
# 73 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
# 75 "../../tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 76 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420CsmaP__Resource__granted(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420CsmaP__sendDone_task__runTask(void );
#line 75
static void CC2420CsmaP__stopDone_task__runTask(void );
#line 75
static void CC2420CsmaP__startDone_task__runTask(void );
# 66 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool CC2420TransmitP__EnergyIndicator__isReceiving(void );
# 61 "../../tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 78 "../../tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffTimer__fired(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 51 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);






static error_t CC2420TransmitP__Send__resend(bool useCca);
# 24 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420TransmitP__SpiResource__granted(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 55 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
# 55 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 62 "../../tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool CC2420ReceiveP__PacketIndicator__isReceiving(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
# 64 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg);










static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
#line 72
static uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(
#line 66
message_t * msg);
#line 78
static void CC2420PacketP__PacketTimeStamp32khz__set(
#line 73
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "../../tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t CC2420PacketP__Acks__requestAck(
#line 53
message_t * msg);
#line 71
static error_t CC2420PacketP__Acks__noAck(
#line 65
message_t * msg);
#line 85
static bool CC2420PacketP__Acks__wasAcked(
#line 80
message_t * msg);
# 82 "../../tos/lib/timer/Counter.nc"
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 100 "../../tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 75
static error_t UniqueSendP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 62 "../../tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "../../tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void CC2420TinyosNetworkP__grantTask__runTask(void );
# 100 "../../tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__default__sendDone(
#line 96
message_t * msg, 



error_t error);
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420TinyosNetworkP__Resource__release(
# 46 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7fb94afdd600);
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__default__granted(
# 46 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7fb94afdd600);
# 75 "../../tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__BareSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 65 "../../tos/interfaces/Packet.nc"
static void CC2420TinyosNetworkP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void );
#line 94
static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
# 53 "../../tos/interfaces/ResourceQueue.nc"
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DefaultLplP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "../../tos/interfaces/Send.nc"
static void DefaultLplP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void DefaultLplP__send__runTask(void );
# 95 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void DefaultLplP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 83 "../../tos/lib/timer/Timer.nc"
static void DefaultLplP__OffTimer__fired(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t DefaultLplP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 65 "../../tos/interfaces/LowPowerListening.nc"
static void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(
#line 62
message_t * msg, 


uint16_t intervalMs);





static uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(
#line 68
message_t * msg);
#line 57
static uint16_t DefaultLplP__LowPowerListening__getLocalWakeupInterval(void );
#line 52
static void DefaultLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 73 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void DefaultLplP__Resend__sendDone(message_t * p_msg, error_t error);
# 62 "../../tos/interfaces/Init.nc"
static error_t DefaultLplP__Init__init(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void DefaultLplP__SubControl__startDone(error_t error);
#line 138
static void DefaultLplP__SubControl__stopDone(error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void DefaultLplP__startRadio__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void DefaultLplP__SendDoneTimer__fired(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void DefaultLplP__resend__runTask(void );
# 55 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
static void DefaultLplP__PowerCycle__detected(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void DefaultLplP__stopRadio__runTask(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t PowerCycleP__SplitControl__start(void );
#line 130
static error_t PowerCycleP__SplitControl__stop(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void PowerCycleP__startRadio__runTask(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void PowerCycleP__SubControl__startDone(error_t error);
#line 138
static void PowerCycleP__SubControl__stopDone(error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void PowerCycleP__getCca__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void PowerCycleP__OnTimer__fired(void );
# 48 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
static uint16_t PowerCycleP__PowerCycle__getSleepInterval(void );
#line 43
static void PowerCycleP__PowerCycle__setSleepInterval(uint16_t sleepIntervalMs);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void PowerCycleP__stopRadio__runTask(void );
# 7 "../../tos/interfaces/SystemLowPowerListening.nc"
static uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void );
# 100 "../../tos/interfaces/Send.nc"
static void PacketLinkP__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void PacketLinkP__send__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void PacketLinkP__DelayTimer__fired(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t PacketLinkP__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 65 "../../tos/interfaces/PacketLink.nc"
static uint16_t PacketLinkP__PacketLink__getRetryDelay(
#line 62
message_t * msg);
#line 46
static void PacketLinkP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t PacketLinkP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool PacketLinkP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 8 "../../tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * 


/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(
#line 85
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * 


/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(
#line 85
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );
#line 97
static error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(
#line 93
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  newVal);
#line 72
static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 88
static 
#line 86
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );
#line 65
static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * 


/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(
#line 85
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t IPStackControlP__SplitControl__start(void );








static void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SubSplitControl__stopDone(error_t error);
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPStackControlP__IPAddress__changed(bool valid);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__default__start(void );









static error_t IPStackControlP__RoutingControl__default__stop(void );
#line 95
static error_t IPStackControlP__StdControl__default__start(void );
# 14 "../../tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * 


/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 89
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(
#line 85
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "../../tos/interfaces/Init.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
# 34 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UdpP__BlipStatistics__clear(void );
#line 29
static void UdpP__BlipStatistics__get(UdpP__BlipStatistics__stat_str *stats);
# 62 "../../tos/interfaces/Init.nc"
static error_t UdpP__Init__init(void );
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void UdpP__IPAddress__changed(bool valid);
# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
static error_t UdpP__UDP__sendto(
# 13 "../../tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x7fb94ad4a660, 
# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UdpP__UDP__bind(
# 13 "../../tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x7fb94ad4a660, 
# 12 "../../tos/lib/net/blip/interfaces/UDP.nc"
uint16_t port);








static error_t UdpP__UDP__sendtov(
# 13 "../../tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x7fb94ad4a660, 
# 21 "../../tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, 
struct ip_iovec *iov);






static void UdpP__UDP__default__recvfrom(
# 13 "../../tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x7fb94ad4a660, 
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void UdpP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 83 "../../tos/lib/timer/Timer.nc"
static void TcpP__Timer__fired(void );
# 32 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static error_t TcpP__Tcp__send(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 32 "../../tos/lib/net/blip/interfaces/Tcp.nc"
void *payload, uint16_t len);
#line 26
static void TcpP__Tcp__default__connectDone(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
error_t e);
#line 9
static error_t TcpP__Tcp__bind(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 9 "../../tos/lib/net/blip/interfaces/Tcp.nc"
uint16_t port);






static bool TcpP__Tcp__default__accept(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 16 "../../tos/lib/net/blip/interfaces/Tcp.nc"
struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);
#line 34
static void TcpP__Tcp__default__recv(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 34 "../../tos/lib/net/blip/interfaces/Tcp.nc"
void *payload, uint16_t len);




static error_t TcpP__Tcp__close(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0);
# 47 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static void TcpP__Tcp__default__closed(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 47 "../../tos/lib/net/blip/interfaces/Tcp.nc"
error_t e);




static void TcpP__Tcp__default__acked(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0);
# 60 "../../tos/interfaces/Boot.nc"
static void TcpP__Boot__booted(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t TcpP__Init__init(void );
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void TcpP__IPAddress__changed(bool valid);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void TcpP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 60 "../../tos/interfaces/Boot.nc"
static void HttpdP__Boot__booted(void );
# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static void HttpdP__Tcp__connectDone(error_t e);
#line 16
static bool HttpdP__Tcp__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);
#line 34
static void HttpdP__Tcp__recv(void *payload, uint16_t len);
#line 47
static void HttpdP__Tcp__closed(error_t e);




static void HttpdP__Tcp__acked(void );
# 60 "../../tos/interfaces/Boot.nc"
static void UDPShellP__Boot__booted(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void UDPShellP__Uptime__overflow(void );
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
static void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 11 "../../tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__default__eval(
# 42 "../../tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x7fb94ab40c40, 
# 11 "../../tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "../../tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__default__getCommandName(
# 43 "../../tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x7fb94ab3d800);
# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
static void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPPingP__IPAddress__changed(bool valid);
# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__default__pingDone(
# 35 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x7fb94aaca190, 
# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__default__pingReply(
# 35 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x7fb94aaca190, 
# 8 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
#line 6
static error_t ICMPPingP__ICMPPing__ping(
# 35 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x7fb94aaca190, 
# 6 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *target, uint16_t period, uint16_t n);
# 83 "../../tos/lib/timer/Timer.nc"
static void ICMPPingP__PingTimer__fired(void );
# 60 "../../tos/interfaces/Boot.nc"
static void StaticIPAddressTosIdP__Boot__booted(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4338 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb94c70f8b0);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb94c70f8b0);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "../../tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb94c816450);
# 79 "../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 63 "../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4339 {

  SchedulerBasicP__NUM_TASKS = 23U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 99
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 126
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 154
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 176
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 42 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );
static bool LedsP__Led0__get(void );


static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );


static bool LedsP__Led1__get(void );


static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );
static bool LedsP__Led2__get(void );


static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 84
static inline void LedsP__Leds__led0Toggle(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );




static inline uint8_t LedsP__Leds__get(void );
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 57
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );

static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );

static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 56
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void );
static inline uint8_t /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__get(void );


static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );


static inline uint8_t /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__get(void );


static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );

static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
static inline uint8_t /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__get(void );


static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 73
static bool /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__get(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void );
static inline bool /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__get(void );


static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 73
static bool /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__get(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );


static inline bool /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__get(void );


static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 73
static bool /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__get(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );
static inline bool /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__get(void );


static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 64 "../../tos/lib/timer/Timer.nc"
static void TCPEchoP__StatusTimer__startPeriodic(uint32_t dt);
# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
static error_t TCPEchoP__Status__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t TCPEchoP__Status__bind(uint16_t port);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t TCPEchoP__RadioControl__start(void );
# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
static error_t TCPEchoP__Echo__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t TCPEchoP__Echo__bind(uint16_t port);
# 34 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void TCPEchoP__IPStats__clear(void );
#line 29
static void TCPEchoP__IPStats__get(TCPEchoP__IPStats__stat_str *stats);
# 67 "../../tos/interfaces/Leds.nc"
static void TCPEchoP__Leds__led0Toggle(void );
#line 100
static void TCPEchoP__Leds__led2Toggle(void );
# 32 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static error_t TCPEchoP__TcpEcho__send(void *payload, uint16_t len);
#line 9
static error_t TCPEchoP__TcpEcho__bind(uint16_t port);
# 29 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void TCPEchoP__UDPStats__get(TCPEchoP__UDPStats__stat_str *stats);
# 64 "TCPEchoP.nc"
bool TCPEchoP__timerStarted;
nx_struct udp_report TCPEchoP__stats;
struct sockaddr_in6 TCPEchoP__route_dest;







static inline void TCPEchoP__Boot__booted(void );
#line 94
static inline void TCPEchoP__RadioControl__startDone(error_t e);



static inline void TCPEchoP__RadioControl__stopDone(error_t e);



static inline void TCPEchoP__Status__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);



static inline void TCPEchoP__Echo__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);




enum TCPEchoP____nesc_unnamed4340 {
  TCPEchoP__STATUS_SIZE = sizeof(ip_statistics_t ) + sizeof(udp_statistics_t )
};


static inline void TCPEchoP__StatusTimer__fired(void );
#line 139
char TCPEchoP__tcp_buf[150];

static inline bool TCPEchoP__TcpEcho__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);




static inline void TCPEchoP__TcpEcho__connectDone(error_t e);


static inline void TCPEchoP__TcpEcho__recv(void *payload, uint16_t len);



static inline void TCPEchoP__TcpEcho__closed(error_t e);



static inline void TCPEchoP__TcpEcho__acked(void );
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4341 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "../../tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4342 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 5, 
  TransformAlarmC__0__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4343 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb94c11b3f0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4344 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4345 {

  VirtualizeTimerC__0__NUM_TIMERS = 11U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4346 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg);
# 14 "../../tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__IP__recv(
# 14 "../../tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x7fb94c087a30, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 24 "../../tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta);
#line 54
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg);
#line 74
static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta);
# 28 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__approve(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 28 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 13
static bool IPForwardingEngineP__ForwardingEvents__initiate(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 13 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__linkResult(
# 22 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c05fbf0, 
# 39 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__send(
# 28 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x7fb94c056510, 
# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
IPForwardingEngineP__Pool__t * 


IPForwardingEngineP__Pool__get(void );
#line 89
static error_t IPForwardingEngineP__Pool__put(
#line 85
IPForwardingEngineP__Pool__t * newVal);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t IPForwardingEngineP__defaultRouteAddedTask__postTask(void );
# 43 "../../tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void );
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 44 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr);





static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr);
# 14 "../../tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 95 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
enum IPForwardingEngineP____nesc_unnamed4347 {
#line 95
  IPForwardingEngineP__defaultRouteAddedTask = 2U
};
#line 95
typedef int IPForwardingEngineP____nesc_sillytask_defaultRouteAddedTask[IPForwardingEngineP__defaultRouteAddedTask];
#line 48
struct route_entry IPForwardingEngineP__routing_table[20];

route_key_t IPForwardingEngineP__last_key = 1;





static inline int IPForwardingEngineP__alloc_key(void );
#line 68
static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen);
#line 95
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void );



static inline route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex);
#line 154
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits);
#line 184
static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt);










static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt);
#line 255
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta);
#line 328
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status);
#line 372
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info);

static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data);



static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);

static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void );


static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid);
# 28 "../../tos/lib/net/blip/interfaces/IPForward.nc"
static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status);
# 5 "../../tos/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void );

static ieee154_laddr_t IPNeighborDiscoveryP__Ieee154Address__getExtAddr(void );
# 18 "../../tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 29 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr);




static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t IPNeighborDiscoveryP__IP_RS__send(struct ip6_packet *msg);
#line 17
static error_t IPNeighborDiscoveryP__IP_NA__send(struct ip6_packet *msg);
# 73 "../../tos/lib/timer/Timer.nc"
static void IPNeighborDiscoveryP__RSTimer__startOneShot(uint32_t dt);




static void IPNeighborDiscoveryP__RSTimer__stop(void );
# 18 "../../tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *IPNeighborDiscoveryP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 10
static route_key_t IPNeighborDiscoveryP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t IPNeighborDiscoveryP__send_rs_task__postTask(void );
# 194 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
enum IPNeighborDiscoveryP____nesc_unnamed4348 {
#line 194
  IPNeighborDiscoveryP__send_rs_task = 3U
};
#line 194
typedef int IPNeighborDiscoveryP____nesc_sillytask_send_rs_task[IPNeighborDiscoveryP__send_rs_task];
#line 60
struct in6_addr IPNeighborDiscoveryP__ALL_ROUTERS_ADDR;


struct in6_addr IPNeighborDiscoveryP__prefix;
uint8_t IPNeighborDiscoveryP__prefix_length = 0;
uint32_t IPNeighborDiscoveryP__prefix_valid_lifetime = 0;
uint32_t IPNeighborDiscoveryP__prefix_preferred_lifetime = 0;
bool IPNeighborDiscoveryP__prefix_exists = FALSE;

uint16_t IPNeighborDiscoveryP__rs_transmission_count = 0;

static inline error_t IPNeighborDiscoveryP__StdControl__start(void );
#line 92
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx);










static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx);










static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr);
#line 152
static void IPNeighborDiscoveryP__NeighborDiscovery__setPrefix(struct in6_addr *newprefix, 
uint8_t length, uint32_t valid_lifetime, uint32_t preferred_lifetime);
#line 180
static inline uint8_t IPNeighborDiscoveryP__add_sllao(uint8_t *data);
#line 194
static inline void IPNeighborDiscoveryP__send_rs_task__runTask(void );
#line 233
static inline void IPNeighborDiscoveryP__send_ra(ieee154_laddr_t *ll_addr);
#line 312
static inline void IPNeighborDiscoveryP__RSTimer__fired(void );
#line 326
static inline void IPNeighborDiscoveryP__IP_NS__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 402
static inline void IPNeighborDiscoveryP__IP_NA__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);


static inline void IPNeighborDiscoveryP__IP_RS__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 452
static inline void IPNeighborDiscoveryP__IP_RA__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 570
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, 
struct ip6_packet *msg, 
void *ptr);
#line 604
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta);



static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);




static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid);
# 7 "../../tos/interfaces/Ieee154Address.nc"
static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void );
# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPAddressP__IPAddress__changed(bool valid);
# 39 "../../tos/lib/net/blip/IPAddressP.nc"
bool IPAddressP__m_valid_addr = FALSE;
#line 39
bool IPAddressP__m_short_addr = FALSE;
struct in6_addr IPAddressP__m_addr;

static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 63
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 90
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 129
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);







static inline error_t IPAddressP__SetIPAddress__setAddress(struct in6_addr *addr);
# 48 "../../tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void );
# 14 "../../tos/chips/cc2420/Ieee154AddressP.nc"
ieee154_saddr_t Ieee154AddressP__m_saddr;
ieee154_panid_t Ieee154AddressP__m_panid;

static inline error_t Ieee154AddressP__Init__init(void );





static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );


static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 54
static inline void Ieee154AddressP__CC2420Config__syncDone(error_t err);
# 13 "../../tos/chips/ds2411/ReadId48.nc"
static error_t LocalIeeeEui64P__ReadId48__read(uint8_t *id);
# 13 "../../tos/chips/ds2411/LocalIeeeEui64P.nc"
ieee_eui64_t LocalIeeeEui64P__eui = { { 0x00 } };

bool LocalIeeeEui64P__have_id = FALSE;

static ieee_eui64_t LocalIeeeEui64P__LocalIeeeEui64__getId(void );
# 10 "../../tos/lib/onewire/OneWireReadWrite.nc"
static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t Ds2411P__PowerControl__start(void );









static error_t Ds2411P__PowerControl__stop(void );
# 19 "../../tos/chips/ds2411/Ds2411P.nc"
bool Ds2411P__haveId = FALSE;
ds2411_serial_t Ds2411P__ds2411id;



static inline bool Ds2411P__ds2411_check_crc(const ds2411_serial_t *id);
#line 41
static inline error_t Ds2411P__readId(void );
#line 62
static inline error_t Ds2411P__ReadId48__read(uint8_t *id);
# 66 "../../tos/lib/timer/BusyWait.nc"
static void OneWireMasterP__BusyWait__wait(OneWireMasterP__BusyWait__size_type dt);
# 44 "../../tos/interfaces/GeneralIO.nc"
static void OneWireMasterP__Pin__makeInput(void );
#line 43
static bool OneWireMasterP__Pin__get(void );


static void OneWireMasterP__Pin__makeOutput(void );
#line 41
static void OneWireMasterP__Pin__clr(void );
# 27 "../../tos/lib/onewire/OneWireMasterP.nc"
#line 20
typedef enum OneWireMasterP____nesc_unnamed4349 {
  OneWireMasterP__DELAY_5US = 5, 
  OneWireMasterP__RESET_LOW_TIME = 560, 
  OneWireMasterP__DELAY_60US = 60, 
  OneWireMasterP__PRESENCE_DETECT_LOW_TIME = 240, 
  OneWireMasterP__PRESENCE_RESET_HIGH_TIME = 480, 
  OneWireMasterP__SLOT_TIME = 65
} OneWireMasterP__onewiretimes_t;






static inline bool OneWireMasterP__reset(void );
#line 52
static inline void OneWireMasterP__writeOne(void );






static inline void OneWireMasterP__writeZero(void );






static inline bool OneWireMasterP__readBit(void );










static inline void OneWireMasterP__writeByte(uint8_t c);
#line 89
static inline uint8_t OneWireMasterP__readByte(void );










static inline error_t OneWireMasterP__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
# 64 "../../tos/lib/timer/Counter.nc"
static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void );
# 59 "../../tos/lib/timer/BusyWaitCounterC.nc"
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4350 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};

static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt);
#line 85
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void );
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
#line 64
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeInput(void );






static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeOutput(void );
#line 73
static bool /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__get(void );
#line 53
static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__clr(void );
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__clr(void );

static inline bool /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeInput(void );

static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeOutput(void );
# 19 "../../tos/chips/ds2411/Ds2411PowerControlC.nc"
static inline error_t Ds2411PowerControlC__StdControl__start(void );



static inline error_t Ds2411PowerControlC__StdControl__stop(void );
# 55 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
# 48 "../../tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
# 66 "../../tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "../../tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 63 "../../tos/interfaces/Read.nc"
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t CC2420ControlP__syncDone__postTask(void );
# 55 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 120
static error_t CC2420ControlP__SyncResource__release(void );
#line 88
static error_t CC2420ControlP__SyncResource__request(void );
# 76 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 56
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "../../tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420ControlP__RssiResource__release(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 125 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4351 {
#line 125
  CC2420ControlP__sync = 4U
};
#line 125
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4352 {
#line 126
  CC2420ControlP__syncDone = 5U
};
#line 126
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
#line 90
#line 84
typedef enum CC2420ControlP____nesc_unnamed4353 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxctrl(void );





static inline error_t CC2420ControlP__Init__init(void );
#line 188
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 216
static error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 268
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 298
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
#line 323
static inline error_t CC2420ControlP__CC2420Config__sync(void );
#line 355
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
#line 382
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
#line 413
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
#line 431
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 465
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
#line 496
static void CC2420ControlP__writeMdmctrl0(void );
#line 515
static void CC2420ControlP__writeId(void );
#line 533
static inline void CC2420ControlP__writeTxctrl(void );
#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__1____nesc_unnamed4354 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type ) + 0, 



  TransformCounterC__1__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "../../tos/lib/timer/Counter.nc"
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "../../tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1____nesc_unnamed4355 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__get(void );
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__makeInput(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__clr(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__makeOutput(void );
# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__GeneralIO__get(void );
# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__HplGeneralIO__get(void );
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__GeneralIO__get(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__clr(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__makeOutput(void );
# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__get(void );
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__makeInput(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__clr(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__makeOutput(void );
# 73 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "../../tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 92
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );



static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "../../tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 76 "../../tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 65
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb53a00, 
# 71 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "../../tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "../../tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7fb94bb54660);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4356 {
#line 88
  CC2420SpiP__grant = 6U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4357 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4358 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "../../tos/system/StateImplP.nc"
uint8_t StateImplP__state[7U];

enum StateImplP____nesc_unnamed4359 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 111
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);









static uint8_t StateImplP__State__getState(uint8_t id);
# 88 "../../tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45060, 
# 81 "../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba43110);
# 180 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 97 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 88 "../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 128 "../../tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
# 81 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba45e70);
# 102 "../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fb94ba4ee10);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4360 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 7U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4361 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 172
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
#line 205
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 244
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 99
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0012)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0010)))  ;
#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P__Usart__disableUart(void );
#line 238
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
# 90 "../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d8cd0, 
# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d8cd0);
# 39 "../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fb94b8d7b80);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4362 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b8976b0);
# 61 "../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b8976b0);
# 65 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b894980);
# 59 "../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b894980);
# 79 "../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fb94b898450);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4363 {
#line 75
  ArbiterP__0__grantedTask = 8U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4364 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4365 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4366 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 63 "../../tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 94
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 120
static inline am_addr_t ActiveMessageAddressC__amAddress(void );
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__ICMP_IP__recv(
# 50 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x7fb94b6a1590, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__IP__send(struct ip6_packet *msg);
# 59 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 122
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt);
#line 149
static inline void ICMPCoreP__IPAddress__changed(bool valid);

static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg);





static void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);









static inline void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
static void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);









static inline void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__send(struct ip6_packet *msg);





static void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__recv(
# 35 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x7fb94b6a3c00, 
# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 52 "../../tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 63 "../../tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void IPDispatchP__SplitControl__startDone(error_t error);
#line 138
static void IPDispatchP__SplitControl__stopDone(error_t error);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendInfoPool__t * 


IPDispatchP__SendInfoPool__get(void );
#line 89
static error_t IPDispatchP__SendInfoPool__put(
#line 85
IPDispatchP__SendInfoPool__t * newVal);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__RadioControl__start(void );
#line 130
static error_t IPDispatchP__RadioControl__stop(void );
# 28 "../../tos/lib/net/blip/interfaces/IPLower.nc"
static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta);
#line 22
static void IPDispatchP__IPLower__sendDone(struct send_info *status);
# 8 "../../tos/lib/net/blip/interfaces/ReadLqi.nc"
static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg);
#line 6
static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg);
# 65 "../../tos/interfaces/LowPowerListening.nc"
static void IPDispatchP__LowPowerListening__setRemoteWakeupInterval(
#line 62
message_t * msg, 


uint16_t intervalMs);
#line 57
static uint16_t IPDispatchP__LowPowerListening__getLocalWakeupInterval(void );
#line 52
static void IPDispatchP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);
# 80 "../../tos/interfaces/Queue.nc"
static 
#line 78
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__head(void );
#line 97
static error_t IPDispatchP__SendQueue__enqueue(
#line 93
IPDispatchP__SendQueue__t  newVal);
#line 88
static 
#line 86
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__dequeue(void );
#line 50
static bool IPDispatchP__SendQueue__empty(void );
# 64 "../../tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t IPDispatchP__sendTask__postTask(void );
# 17 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__FragPool__t * 


IPDispatchP__FragPool__get(void );
#line 89
static error_t IPDispatchP__FragPool__put(
#line 85
IPDispatchP__FragPool__t * newVal);
# 100 "../../tos/interfaces/Leds.nc"
static void IPDispatchP__Leds__led2Toggle(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t IPDispatchP__Ieee154Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

IPDispatchP__Ieee154Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 65 "../../tos/interfaces/Packet.nc"
static void IPDispatchP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t IPDispatchP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void );
#line 94
static void IPDispatchP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 46 "../../tos/interfaces/PacketLink.nc"
static void IPDispatchP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t IPDispatchP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool IPDispatchP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 97 "../../tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendEntryPool__t * 


IPDispatchP__SendEntryPool__get(void );
#line 89
static error_t IPDispatchP__SendEntryPool__put(
#line 85
IPDispatchP__SendEntryPool__t * newVal);
# 438 "../../tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4367 {
#line 438
  IPDispatchP__sendTask = 9U
};
#line 438
typedef int IPDispatchP____nesc_sillytask_sendTask[IPDispatchP__sendTask];
#line 80
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context);



static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id);
# 15 "../../tools/tinyos/c/blip/lib6lowpan/internal.h"
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
static uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
static inline int IPDispatchP__pack_nhc_udp(uint8_t **dest, 
size_t *dlen, 
struct ip6_packet *packet, 
int offset);
static inline int IPDispatchP__pack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t *type, 
struct ip6_packet *packet, 
int offset);
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t *dlen, struct ip6_packet *packet);
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);


static inline int IPDispatchP__unpack_ieee154_hdr(uint8_t **buf, 
size_t *len, 
struct ieee154_frame_addr *frame);
static inline int IPDispatchP__unpack_context(uint8_t dispatch, 
int *contexts, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_nh(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
static int IPDispatchP__unpack_address(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len, 
ieee154_addr_t *frame, 
ieee154_panid_t pan, 
uint8_t *stateful);
static inline int IPDispatchP__unpack_multicast(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_nhc_udp(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t **nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
static inline int IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t **buf, 
size_t *len);
# 14 "../../tools/tinyos/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
#line 46
static inline int IPDispatchP__unpack_ieee154_hdr(uint8_t **buf, 
size_t *len, 
struct ieee154_frame_addr *frame);
# 6 "../../tools/tinyos/c/blip/lib6lowpan/ieee154_header.h"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, 
size_t cnt, 
struct ieee154_frame_addr *frame);

static inline int IPDispatchP__unpack_ieee154_hdr(uint8_t **buf, 
size_t *len, 
struct ieee154_frame_addr *frame);
# 64 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui);
#line 77
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
#line 110
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, 
struct ip6_hdr *hdr, 
uint8_t *dispatch);
#line 143
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 155
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, 
struct ip6_hdr *hdr, 
uint8_t *dispatch);
#line 182
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, 
struct in6_addr *addr, 
int context_match_len, 
ieee154_addr_t *l2addr, 
ieee154_panid_t pan, 
uint8_t *flags);
#line 265
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
#line 295
static inline int IPDispatchP__pack_nhc_udp(uint8_t **dest, 
size_t *dlen, 
struct ip6_packet *packet, 
int offset);
#line 325
static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset);
#line 364
static inline int IPDispatchP__pack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t *type, 
struct ip6_packet *packet, 
int offset);
#line 424
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t *dlen, struct ip6_packet *packet);
#line 448
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
#line 507
static inline int IPDispatchP__unpack_context(uint8_t dispatch, 
int *contexts, 
uint8_t **buf, 
size_t *len);
#line 525
static inline int IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
#line 568
static inline int IPDispatchP__unpack_nh(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
#line 583
static inline int IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
#line 624
static int IPDispatchP__unpack_address(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len, 
ieee154_addr_t *frame, 
ieee154_panid_t pan, 
uint8_t *stateful);
#line 709
static inline int IPDispatchP__unpack_multicast(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len);
#line 755
static inline int IPDispatchP__unpack_nhc_udp(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
#line 825
static inline int IPDispatchP__unpack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t **nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len);
#line 918
static inline int IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t **buf, 
size_t *len);
#line 973
static inline int IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t **buf, 
size_t *len, 
uint8_t *recalculate_checksum, 
uint16_t *unpacked_len);
# 48 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg);
#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg);
#line 112
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers);
#line 161
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg);


static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg);
#line 253
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size);
#line 270
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag);
#line 299
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size);
#line 319
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag);
#line 335
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size);
# 14 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, 
size_t len);
#line 127
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 153
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx);
# 96 "../../tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4368 {
  IPDispatchP__S_RUNNING, 
  IPDispatchP__S_STOPPED, 
  IPDispatchP__S_STOPPING
};
uint8_t IPDispatchP__state = IPDispatchP__S_STOPPED;
bool IPDispatchP__radioBusy;
bool IPDispatchP__ack_required = TRUE;
uint8_t IPDispatchP__current_local_label = 0;
ip_statistics_t IPDispatchP__stats;
#line 118
table_t IPDispatchP__recon_cache;



struct lowpan_reconstruct IPDispatchP__recon_data[N_RECONSTRUCTIONS];





static inline void IPDispatchP__reconstruct_clear(void *ent);






static inline struct send_info *IPDispatchP__getSendInfo(void );
#line 147
static void IPDispatchP__SENDINFO_DECR(struct send_info *si);





static inline error_t IPDispatchP__SplitControl__start(void );
#line 169
static inline void IPDispatchP__RadioControl__startDone(error_t error);
#line 184
static inline void IPDispatchP__RadioControl__stopDone(error_t error);



static inline error_t IPDispatchP__Init__init(void );
#line 205
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon);
#line 250
static inline void IPDispatchP__reconstruct_age(void *elt);
#line 286
static inline void IPDispatchP__ExpireTimer__fired(void );
#line 301
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag);
#line 331
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, 
void *msg_payload, 
uint8_t len);
#line 438
static inline void IPDispatchP__sendTask__runTask(void );
#line 491
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data);
#line 600
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error);
#line 642
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics);
#line 660
static inline void IPDispatchP__BlipStatistics__clear(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void CC2420CsmaP__SplitControl__startDone(error_t error);
#line 138
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
# 95 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
#line 81
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
#line 66
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
# 51 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
# 100 "../../tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t CC2420CsmaP__Random__rand16(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
#line 90
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
#line 51
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
#line 63
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420CsmaP__Resource__release(void );
#line 88
static error_t CC2420CsmaP__Resource__request(void );
# 66 "../../tos/interfaces/State.nc"
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
#line 45
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t CC2420CsmaP__sendDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__stopDone_task__postTask(void );
#line 67
static error_t CC2420CsmaP__startDone_task__postTask(void );
# 74 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP____nesc_unnamed4369 {
#line 74
  CC2420CsmaP__startDone_task = 10U
};
#line 74
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4370 {
#line 75
  CC2420CsmaP__stopDone_task = 11U
};
#line 75
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4371 {
#line 76
  CC2420CsmaP__sendDone_task = 12U
};
#line 76
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
#line 58
enum CC2420CsmaP____nesc_unnamed4372 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
#line 96
static error_t CC2420CsmaP__SplitControl__stop(void );
#line 122
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
#line 182
static inline void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 205
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void );
#line 257
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
# 81 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void CC2420TransmitP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420TransmitP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "../../tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
#line 66
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
# 55 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 73 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
# 31 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "../../tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
# 58 "../../tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
#line 53
message_t * msg);
#line 50
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
#line 46
message_t * msg);
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420TransmitP__SpiResource__release(void );
#line 97
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TransmitP__SpiResource__request(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "../../tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 82 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 99 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 89
typedef enum CC2420TransmitP____nesc_unnamed4373 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4374 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
#line 120
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
static inline error_t CC2420TransmitP__resend(bool cca);
static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static error_t CC2420TransmitP__StdControl__stop(void );
#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);



static inline error_t CC2420TransmitP__Send__resend(bool useCca);
#line 227
static inline bool CC2420TransmitP__EnergyIndicator__isReceiving(void );
#line 243
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 377
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 389
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
#line 416
static inline void CC2420TransmitP__SpiResource__granted(void );
#line 454
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 486
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
#line 547
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
#line 578
static inline error_t CC2420TransmitP__resend(bool cca);
#line 743
static void CC2420TransmitP__attemptSend(void );
#line 788
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
#line 825
static void CC2420TransmitP__loadTXFIFO(void );
#line 850
static void CC2420TransmitP__signalDone(error_t err);
# 43 "../../tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 93 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
#line 117
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
#line 112
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
#line 66
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
static void CC2420ReceiveP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void CC2420ReceiveP__PacketTimeStamp__set(
#line 73
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
# 43 "../../tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 63 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420ReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 120 "../../tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "../../tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 148 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4375 {
#line 148
  CC2420ReceiveP__receiveDone_task = 13U
};
#line 148
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 89
#line 81
typedef enum CC2420ReceiveP____nesc_unnamed4376 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4377 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
#line 137
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
#line 171
static error_t CC2420ReceiveP__StdControl__stop(void );
#line 186
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );






static inline bool CC2420ReceiveP__PacketIndicator__isReceiving(void );









static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 513
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 530
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 668
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 709
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
#line 733
static void CC2420ReceiveP__flush(void );
#line 759
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
#line 813
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
# 65 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP__Acks__requestAck(message_t *p_msg);




static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg);




static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg);





static inline int CC2420PacketP__getAddressLength(int type);








static inline uint8_t * CC2420PacketP__getNetwork(message_t * msg);
#line 111
static inline int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg);



static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg);



static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg);
#line 137
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
#line 152
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
#line 171
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 100
static void UniqueSendP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
# 56 "../../tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "../../tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4378 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 104
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "../../tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4379 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4380 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t  *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 112
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 138
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 165
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg);
#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 75 "../../tos/interfaces/Send.nc"
static error_t CC2420TinyosNetworkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
# 75 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg);
# 100 "../../tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 53 "../../tos/interfaces/ResourceQueue.nc"
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
#line 70
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 102 "../../tos/interfaces/Resource.nc"
static void CC2420TinyosNetworkP__Resource__granted(
# 46 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
uint8_t arg_0x7fb94afdd600);
# 100 "../../tos/interfaces/Send.nc"
static void CC2420TinyosNetworkP__BareSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 184 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
enum CC2420TinyosNetworkP____nesc_unnamed4381 {
#line 184
  CC2420TinyosNetworkP__grantTask = 14U
};
#line 184
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
#line 68
enum CC2420TinyosNetworkP____nesc_unnamed4382 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 0U
};




#line 73
enum CC2420TinyosNetworkP____nesc_unnamed4383 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
#line 78
uint8_t CC2420TinyosNetworkP__next_owner;
#line 103
static inline void CC2420TinyosNetworkP__BarePacket__clear(message_t *msg);



static inline uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(message_t *msg);




static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void );







static inline error_t CC2420TinyosNetworkP__BareSend__send(message_t *msg, uint8_t len);
#line 139
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 184
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
#line 233
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
#line 251
static inline message_t *CC2420TinyosNetworkP__ActiveReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__ActiveSend__default__sendDone(message_t *msg, error_t error);


static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
# 49 "../../tos/system/FcfsResourceQueueC.nc"
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4384 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[0];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t DefaultLplP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP__send__postTask(void );
# 66 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
static void DefaultLplP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
#line 60
static void DefaultLplP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
# 7 "../../tos/interfaces/SystemLowPowerListening.nc"
static uint16_t DefaultLplP__SystemLowPowerListening__getDelayAfterReceive(void );
# 73 "../../tos/lib/timer/Timer.nc"
static void DefaultLplP__OffTimer__startOneShot(uint32_t dt);




static void DefaultLplP__OffTimer__stop(void );
# 100 "../../tos/interfaces/Send.nc"
static void DefaultLplP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 71 "../../tos/interfaces/State.nc"
static uint8_t DefaultLplP__SendState__getState(void );
#line 56
static void DefaultLplP__SendState__toIdle(void );
#line 45
static error_t DefaultLplP__SendState__requestState(uint8_t reqState);





static void DefaultLplP__SendState__forceState(uint8_t reqState);
# 52 "../../tos/interfaces/Random.nc"
static uint16_t DefaultLplP__Random__rand16(void );
# 58 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static error_t DefaultLplP__Resend__resend(bool useCca);
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t DefaultLplP__SubControl__start(void );
#line 130
static error_t DefaultLplP__SubControl__stop(void );
# 78 "../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DefaultLplP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_header_t * DefaultLplP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * DefaultLplP__CC2420PacketBody__getMetadata(message_t * msg);
# 71 "../../tos/interfaces/State.nc"
static uint8_t DefaultLplP__RadioPowerState__getState(void );
#line 51
static void DefaultLplP__RadioPowerState__forceState(uint8_t reqState);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP__startRadio__postTask(void );
# 92 "../../tos/lib/timer/Timer.nc"
static bool DefaultLplP__SendDoneTimer__isRunning(void );
#line 73
static void DefaultLplP__SendDoneTimer__startOneShot(uint32_t dt);




static void DefaultLplP__SendDoneTimer__stop(void );
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t DefaultLplP__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 71
static error_t DefaultLplP__PacketAcknowledgements__noAck(
#line 65
message_t * msg);
#line 85
static bool DefaultLplP__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 71 "../../tos/interfaces/State.nc"
static uint8_t DefaultLplP__SplitControlState__getState(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP__resend__postTask(void );
# 48 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
static uint16_t DefaultLplP__PowerCycle__getSleepInterval(void );
#line 43
static void DefaultLplP__PowerCycle__setSleepInterval(uint16_t sleepIntervalMs);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t DefaultLplP__stopRadio__postTask(void );
# 109 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
enum DefaultLplP____nesc_unnamed4385 {
#line 109
  DefaultLplP__send = 15U
};
#line 109
typedef int DefaultLplP____nesc_sillytask_send[DefaultLplP__send];
enum DefaultLplP____nesc_unnamed4386 {
#line 110
  DefaultLplP__resend = 16U
};
#line 110
typedef int DefaultLplP____nesc_sillytask_resend[DefaultLplP__resend];
enum DefaultLplP____nesc_unnamed4387 {
#line 111
  DefaultLplP__startRadio = 17U
};
#line 111
typedef int DefaultLplP____nesc_sillytask_startRadio[DefaultLplP__startRadio];
enum DefaultLplP____nesc_unnamed4388 {
#line 112
  DefaultLplP__stopRadio = 18U
};
#line 112
typedef int DefaultLplP____nesc_sillytask_stopRadio[DefaultLplP__stopRadio];
#line 78
message_t *DefaultLplP__currentSendMsg;


uint8_t DefaultLplP__currentSendLen;


bool DefaultLplP__dutyCycling;




enum DefaultLplP____nesc_unnamed4389 {
  DefaultLplP__S_OFF, 
  DefaultLplP__S_TURNING_ON, 
  DefaultLplP__S_ON, 
  DefaultLplP__S_TURNING_OFF
};




enum DefaultLplP____nesc_unnamed4390 {
  DefaultLplP__S_IDLE, 
  DefaultLplP__S_SENDING
};

enum DefaultLplP____nesc_unnamed4391 {
  DefaultLplP__ONE_MESSAGE = 0
};







static void DefaultLplP__initializeSend(void );
static inline void DefaultLplP__startOffTimer(void );


static inline error_t DefaultLplP__Init__init(void );
#line 132
static inline void DefaultLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs);






static inline uint16_t DefaultLplP__LowPowerListening__getLocalWakeupInterval(void );









static inline void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, 
uint16_t intervalMs);






static inline uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(message_t *msg);
#line 169
static error_t DefaultLplP__Send__send(message_t *msg, uint8_t len);
#line 219
static inline void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t *msg);







static inline void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t *msg);







static inline void DefaultLplP__RadioBackoff__requestCca(message_t *msg);








static inline void DefaultLplP__PowerCycle__detected(void );
#line 256
static inline void DefaultLplP__SubControl__startDone(error_t error);










static inline void DefaultLplP__SubControl__stopDone(error_t error);
#line 283
static inline void DefaultLplP__SubSend__sendDone(message_t *msg, error_t error);
#line 320
static inline message_t *DefaultLplP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);





static inline void DefaultLplP__OffTimer__fired(void );
#line 344
static inline void DefaultLplP__SendDoneTimer__fired(void );
#line 358
static inline void DefaultLplP__Resend__sendDone(message_t *p_msg, error_t error);





static inline void DefaultLplP__send__runTask(void );





static inline void DefaultLplP__resend__runTask(void );





static inline void DefaultLplP__startRadio__runTask(void );





static inline void DefaultLplP__stopRadio__runTask(void );








static void DefaultLplP__initializeSend(void );
#line 410
static inline void DefaultLplP__startOffTimer(void );
# 113 "../../tos/interfaces/SplitControl.nc"
static void PowerCycleP__SplitControl__startDone(error_t error);
#line 138
static void PowerCycleP__SplitControl__stopDone(error_t error);
# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool PowerCycleP__EnergyIndicator__isReceiving(void );
# 61 "../../tos/interfaces/State.nc"
static bool PowerCycleP__SendState__isIdle(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP__startRadio__postTask(void );
# 104 "../../tos/interfaces/SplitControl.nc"
static error_t PowerCycleP__SubControl__start(void );
#line 130
static error_t PowerCycleP__SubControl__stop(void );
# 71 "../../tos/interfaces/State.nc"
static uint8_t PowerCycleP__RadioPowerState__getState(void );
#line 51
static void PowerCycleP__RadioPowerState__forceState(uint8_t reqState);
# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
static bool PowerCycleP__PacketIndicator__isReceiving(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP__getCca__postTask(void );
# 66 "../../tos/interfaces/State.nc"
static bool PowerCycleP__SplitControlState__isState(uint8_t myState);
#line 51
static void PowerCycleP__SplitControlState__forceState(uint8_t reqState);
# 73 "../../tos/lib/timer/Timer.nc"
static void PowerCycleP__OnTimer__startOneShot(uint32_t dt);
# 55 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
static void PowerCycleP__PowerCycle__detected(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t PowerCycleP__stopRadio__postTask(void );
# 95 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
enum PowerCycleP____nesc_unnamed4392 {
#line 95
  PowerCycleP__stopRadio = 19U
};
#line 95
typedef int PowerCycleP____nesc_sillytask_stopRadio[PowerCycleP__stopRadio];
enum PowerCycleP____nesc_unnamed4393 {
#line 96
  PowerCycleP__startRadio = 20U
};
#line 96
typedef int PowerCycleP____nesc_sillytask_startRadio[PowerCycleP__startRadio];
enum PowerCycleP____nesc_unnamed4394 {
#line 97
  PowerCycleP__getCca = 21U
};
#line 97
typedef int PowerCycleP____nesc_sillytask_getCca[PowerCycleP__getCca];
#line 78
uint16_t PowerCycleP__sleepInterval = 512;


uint16_t PowerCycleP__ccaChecks;




enum PowerCycleP____nesc_unnamed4395 {
  PowerCycleP__S_OFF, 
  PowerCycleP__S_TURNING_ON, 
  PowerCycleP__S_ON, 
  PowerCycleP__S_TURNING_OFF
};







static bool PowerCycleP__finishSplitControlRequests(void );
static inline bool PowerCycleP__isDutyCycling(void );






static inline void PowerCycleP__PowerCycle__setSleepInterval(uint16_t sleepIntervalMs);
#line 129
static inline uint16_t PowerCycleP__PowerCycle__getSleepInterval(void );





static inline error_t PowerCycleP__SplitControl__start(void );
#line 160
static inline error_t PowerCycleP__SplitControl__stop(void );
#line 177
static inline void PowerCycleP__OnTimer__fired(void );
#line 196
static inline void PowerCycleP__SubControl__startDone(error_t error);
#line 208
static inline void PowerCycleP__SubControl__stopDone(error_t error);
#line 223
static inline void PowerCycleP__stopRadio__runTask(void );








static inline void PowerCycleP__startRadio__runTask(void );







static inline void PowerCycleP__getCca__runTask(void );
#line 278
static inline bool PowerCycleP__isDutyCycling(void );







static bool PowerCycleP__finishSplitControlRequests(void );
# 11 "../../tos/system/SystemLowPowerListeningP.nc"
uint16_t SystemLowPowerListeningP__delayAfterReceive = 100;





static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void );
# 75 "../../tos/interfaces/Send.nc"
static error_t PacketLinkP__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t PacketLinkP__send__postTask(void );
# 73 "../../tos/lib/timer/Timer.nc"
static void PacketLinkP__DelayTimer__startOneShot(uint32_t dt);




static void PacketLinkP__DelayTimer__stop(void );
# 100 "../../tos/interfaces/Send.nc"
static void PacketLinkP__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 71 "../../tos/interfaces/State.nc"
static uint8_t PacketLinkP__SendState__getState(void );
#line 56
static void PacketLinkP__SendState__toIdle(void );
#line 45
static error_t PacketLinkP__SendState__requestState(uint8_t reqState);
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static cc2420_metadata_t * PacketLinkP__CC2420PacketBody__getMetadata(message_t * msg);
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
static error_t PacketLinkP__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool PacketLinkP__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 77 "../../tos/chips/cc2420/link/PacketLinkP.nc"
enum PacketLinkP____nesc_unnamed4396 {
#line 77
  PacketLinkP__send = 22U
};
#line 77
typedef int PacketLinkP____nesc_sillytask_send[PacketLinkP__send];
#line 58
message_t *PacketLinkP__currentSendMsg;


uint8_t PacketLinkP__currentSendLen;


uint16_t PacketLinkP__totalRetries;





enum PacketLinkP____nesc_unnamed4397 {
  PacketLinkP__S_IDLE, 
  PacketLinkP__S_SENDING
};




static void PacketLinkP__signalDone(error_t error);









static inline void PacketLinkP__PacketLink__setRetries(message_t *msg, uint16_t maxRetries);








static inline void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);






static inline uint16_t PacketLinkP__PacketLink__getRetries(message_t *msg);






static inline uint16_t PacketLinkP__PacketLink__getRetryDelay(message_t *msg);






static inline bool PacketLinkP__PacketLink__wasDelivered(message_t *msg);
#line 130
static inline error_t PacketLinkP__Send__send(message_t *msg, uint8_t len);
#line 171
static inline void PacketLinkP__SubSend__sendDone(message_t *msg, error_t error);
#line 202
static inline void PacketLinkP__DelayTimer__fired(void );






static inline void PacketLinkP__send__runTask(void );










static void PacketLinkP__signalDone(error_t error);
# 64 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
static int8_t CC2420ReadLqiC__CC2420Packet__getRssi(message_t *p_msg);







static uint8_t CC2420ReadLqiC__CC2420Packet__getLqi(message_t *p_msg);
# 12 "../../tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg);



static inline uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__index;
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t * /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[12];
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[12];

static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
#line 88
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index;
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t * /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[12];
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[12];

static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
#line 88
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal);
# 48 "../../tos/system/QueueC.nc"
/*IPDispatchC.QueueC*/QueueC__0__queue_t  /*IPDispatchC.QueueC*/QueueC__0__queue[12];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__head = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
uint8_t /*IPDispatchC.QueueC*/QueueC__0__size = 0;

static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );







static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );



static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void );
#line 89
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 101
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index;
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t * /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[3];
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[3];

static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
#line 88
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal);
# 113 "../../tos/interfaces/SplitControl.nc"
static void IPStackControlP__SplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SplitControl__stopDone(error_t error);
#line 104
static error_t IPStackControlP__SubSplitControl__start(void );
# 95 "../../tos/interfaces/StdControl.nc"
static error_t IPStackControlP__NeighborDiscoveryControl__start(void );
# 34 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 95 "../../tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__start(void );









static error_t IPStackControlP__RoutingControl__stop(void );
#line 95
static error_t IPStackControlP__StdControl__start(void );
# 23 "../../tos/lib/net/blip/IPStackControlP.nc"
bool IPStackControlP__blip_started = FALSE;

static inline error_t IPStackControlP__SplitControl__start(void );




static inline void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 64
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error);






static inline void IPStackControlP__IPAddress__changed(bool valid);







static inline error_t IPStackControlP__StdControl__default__start(void );

static inline error_t IPStackControlP__RoutingControl__default__start(void );
static inline error_t IPStackControlP__RoutingControl__default__stop(void );
# 30 "../../tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type);
# 60 "../../tos/system/PoolP.nc"
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;
uint8_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index;
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t * /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[3];
/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[3];

static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void );
#line 88
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal);
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr);
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
static void UdpP__UDP__recvfrom(
# 13 "../../tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x7fb94ad4a660, 
# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t UdpP__IP__send(struct ip6_packet *msg);
# 23 "../../tos/lib/net/blip/UdpP.nc"
enum UdpP____nesc_unnamed4398 {
  UdpP__N_CLIENTS = 3U
};


uint16_t UdpP__local_ports[UdpP__N_CLIENTS];

enum UdpP____nesc_unnamed4399 {
  UdpP__LOCAL_PORT_START = 51024U, 
  UdpP__LOCAL_PORT_STOP = 54999U
};
uint16_t UdpP__last_localport = UdpP__LOCAL_PORT_START;

static inline uint16_t UdpP__alloc_lport(uint8_t clnt);
#line 54
static inline error_t UdpP__Init__init(void );





static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port);
#line 72
static inline void UdpP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 126
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, 
void *payload, 
uint16_t len);







static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov);
#line 180
static inline void UdpP__BlipStatistics__clear(void );





static inline void UdpP__BlipStatistics__get(udp_statistics_t *buf);





static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta);

static inline void UdpP__IPAddress__changed(bool global_valid);
# 64 "../../tos/lib/timer/Timer.nc"
static void TcpP__Timer__startPeriodic(uint32_t dt);
# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static void TcpP__Tcp__connectDone(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
error_t e);
#line 16
static bool TcpP__Tcp__accept(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 16 "../../tos/lib/net/blip/interfaces/Tcp.nc"
struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);
#line 34
static void TcpP__Tcp__recv(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 34 "../../tos/lib/net/blip/interfaces/Tcp.nc"
void *payload, uint16_t len);
#line 47
static void TcpP__Tcp__closed(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0, 
# 47 "../../tos/lib/net/blip/interfaces/Tcp.nc"
error_t e);




static void TcpP__Tcp__acked(
# 12 "../../tos/lib/net/blip/TcpP.nc"
uint8_t arg_0x7fb94acf38f0);
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool TcpP__IPAddress__setSource(struct ip6_hdr *hdr);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t TcpP__IP__send(struct ip6_packet *msg);
# 23 "../../tos/lib/net/blip/TcpP.nc"
enum TcpP____nesc_unnamed4400 {
  TcpP__N_CLIENTS = 2U
};
# 53 "../../tools/tinyos/c/blip/libtcp/tcplib.h"
#line 41
typedef enum TcpP____nesc_unnamed4401 {
  TcpP__TCP_CLOSED = 0, 
  TcpP__TCP_LISTEN, 
  TcpP__TCP_SYN_RCVD, 
  TcpP__TCP_SYN_SENT, 
  TcpP__TCP_ESTABLISHED, 
  TcpP__TCP_CLOSE_WAIT, 
  TcpP__TCP_LAST_ACK, 
  TcpP__TCP_FIN_WAIT_1, 
  TcpP__TCP_FIN_WAIT_2, 
  TcpP__TCP_CLOSING, 
  TcpP__TCP_TIME_WAIT
} TcpP__tcplib_sock_state_t;

enum TcpP____nesc_unnamed4402 {
  TcpP__TCP_ACKPENDING = 0x3, 
  TcpP__TCP_DUPACKS = 0x3c, 
  TcpP__TCP_DUPACKS_OFF = 2, 
  TcpP__TCP_CONNECTDONE = 0x40, 
  TcpP__TCP_ACKSENT = 0x80
};

enum TcpP____nesc_unnamed4403 {

  TcpP__TCPLIB_TIMEWAIT_LEN = 1, 
  TcpP__TCPLIB_2MSL = 4, 

  TcpP__TCPLIB_GIVEUP = 6
};





struct TcpP__tcplib_sock {
  uint8_t flags;


  struct sockaddr_in6 l_ep;
  struct sockaddr_in6 r_ep;


  TcpP__tcplib_sock_state_t state;

  void *tx_buf;
  int tx_buf_len;




  uint16_t mss;

  uint16_t my_wind;


  uint16_t r_wind;
  uint16_t cwnd;
  uint16_t ssthresh;


  uint32_t seqno;

  uint32_t ackno;

  struct TcpP____nesc_unnamed4404 {
    int8_t retx;
  } timer;


  uint16_t retxcnt;





  struct TcpP__tcplib_sock *next;
};
#line 134
static inline struct TcpP__tcplib_sock *TcpP__tcplib_accept(struct TcpP__tcplib_sock *conn, 
struct sockaddr_in6 *from);


static void TcpP__tcplib_send_out(struct ip6_packet *pkt, struct tcp_hdr *tcph);







static inline int TcpP__tcplib_process(struct ip6_hdr *ip_packet, void *payload);




static inline int TcpP__tcplib_timer_process(void );









static int TcpP__tcplib_init_sock(struct TcpP__tcplib_sock *sock);


static inline int TcpP__tcplib_bind(struct TcpP__tcplib_sock *sock, 
struct sockaddr_in6 *addr);
#line 179
static inline int TcpP__tcplib_send(struct TcpP__tcplib_sock *sock, 
void *data, int len);

static int TcpP__tcplib_close(struct TcpP__tcplib_sock *sock);
# 28 "../../tos/lib/net/blip/TcpP.nc"
struct TcpP__tcplib_sock TcpP__socks[TcpP__N_CLIENTS];

static int TcpP__find_client(struct TcpP__tcplib_sock *conn);







static inline void TcpP__tcplib_extern_connectdone(struct TcpP__tcplib_sock *sock, int error);





static inline void TcpP__tcplib_extern_recv(struct TcpP__tcplib_sock *sock, void *data, int len);





static inline void TcpP__tcplib_extern_closed(struct TcpP__tcplib_sock *sock);



static void TcpP__tcplib_extern_closedone(struct TcpP__tcplib_sock *sock);






static inline void TcpP__tcplib_extern_acked(struct TcpP__tcplib_sock *sock);
# 29 "../../tools/tinyos/c/blip/libtcp/circ.c"
struct TcpP__circ_buf {
  uint8_t *data_start;
  uint8_t *data_head;
  uint16_t data_len;
  uint32_t head_seqno;
};

static inline int TcpP__circ_buf_init(void *data, int len, uint32_t seqno);
#line 48
static inline uint32_t TcpP__circ_get_seqno(void *buf);









static void TcpP__get_ptr_off_1(struct TcpP__circ_buf *b, uint32_t sseqno, int len, 
uint8_t **writeptr, int *w_len);
#line 79
static inline int TcpP__circ_shorten_head(void *buf, uint32_t seqno);
#line 92
static inline int TcpP__circ_buf_read(void *buf, uint32_t sseqno, 
uint8_t *data, int len);
#line 112
static inline int TcpP__circ_buf_write(char *buf, uint32_t sseqno, 
uint8_t *data, int len);
# 27 "../../tools/tinyos/c/blip/libtcp/circ.h"
static inline int TcpP__circ_buf_init(void *data, int len, uint32_t seqno);


static inline int TcpP__circ_buf_write(char *buf, uint32_t sseqno, 
uint8_t *data, int len);


static inline int TcpP__circ_buf_read(void *buf, uint32_t sseqno, 
uint8_t *data, int len);


static inline int TcpP__circ_shorten_head(void *buf, uint32_t seqno);






static inline uint32_t TcpP__circ_get_seqno(void *buf);
# 41 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static struct TcpP__tcplib_sock *TcpP__conns = (void *)0;
#line 55
static __inline void TcpP__conn_add_once(struct TcpP__tcplib_sock *sock);
#line 67
inline static int TcpP__isInaddrAny(struct in6_addr *addr);
#line 101
inline static struct TcpP__tcplib_sock *TcpP__conn_lookup(struct ip6_hdr *iph, 
struct tcp_hdr *tcph);
#line 120
inline static int TcpP__conn_checkport(uint16_t port);









static inline struct tcp_hdr *TcpP__find_tcp_hdr(struct ip6_packet *msg);






static struct ip6_packet *TcpP__get_ipmsg(int plen);
#line 157
static void TcpP____tcplib_send(struct TcpP__tcplib_sock *sock, 
struct ip6_packet *msg);
#line 179
static void TcpP__tcplib_send_ack(struct TcpP__tcplib_sock *sock, int fin_seqno, uint8_t flags);
#line 199
static void TcpP__tcplib_send_rst(struct ip6_hdr *iph, struct tcp_hdr *tcph);
#line 227
static int TcpP__tcplib_output(struct TcpP__tcplib_sock *sock, uint32_t sseqno);
#line 263
static int TcpP__tcplib_init_sock(struct TcpP__tcplib_sock *sock);
#line 277
inline static int TcpP__receive_data(struct TcpP__tcplib_sock *sock, struct tcp_hdr *tcph, int len);
#line 291
static void TcpP__reset_ssthresh(struct TcpP__tcplib_sock *conn);






static inline int TcpP__tcplib_process(struct ip6_hdr *iph, void *payload);
#line 571
static inline int TcpP__tcplib_bind(struct TcpP__tcplib_sock *sock, 
struct sockaddr_in6 *addr);
#line 617
static inline int TcpP__tcplib_send(struct TcpP__tcplib_sock *sock, void *data, int len);
#line 641
static inline void TcpP__tcplib_retx_expire(struct TcpP__tcplib_sock *sock);
#line 708
static int TcpP__tcplib_close(struct TcpP__tcplib_sock *sock);
#line 735
static inline int TcpP__tcplib_timer_process(void );
# 69 "../../tos/lib/net/blip/TcpP.nc"
struct TcpP__tcplib_sock TcpP__socks[2U];

static inline struct TcpP__tcplib_sock *TcpP__tcplib_accept(struct TcpP__tcplib_sock *conn, 
struct sockaddr_in6 *from);
#line 85
static void TcpP__tcplib_send_out(struct ip6_packet *msg, struct tcp_hdr *tcph);






static inline error_t TcpP__Init__init(void );







static inline void TcpP__Boot__booted(void );



static inline void TcpP__Timer__fired(void );



static inline void TcpP__IP__recv(struct ip6_hdr *iph, 
void *payload, size_t len, 
struct ip6_metadata *meta);






static error_t TcpP__Tcp__bind(uint8_t client, uint16_t port);
#line 134
static error_t TcpP__Tcp__send(uint8_t client, void *payload, uint16_t len);




static error_t TcpP__Tcp__close(uint8_t client);










static inline void TcpP__IPAddress__changed(bool valid);

static inline bool TcpP__Tcp__default__accept(uint8_t cid, struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);



static inline void TcpP__Tcp__default__connectDone(uint8_t cid, error_t e);
static inline void TcpP__Tcp__default__recv(uint8_t cid, void *payload, uint16_t len);
static inline void TcpP__Tcp__default__closed(uint8_t cid, error_t e);
static inline void TcpP__Tcp__default__acked(uint8_t cid);
# 32 "../../tos/lib/net/blip/interfaces/Tcp.nc"
static error_t HttpdP__Tcp__send(void *payload, uint16_t len);
#line 9
static error_t HttpdP__Tcp__bind(uint16_t port);
#line 39
static error_t HttpdP__Tcp__close(void );
# 100 "../../tos/interfaces/Leds.nc"
static void HttpdP__Leds__led2Toggle(void );
#line 117
static uint8_t HttpdP__Leds__get(void );
# 10 "HttpdP.nc"
static char *HttpdP__http_okay = "HTTP/1.0 200 OK\r\n\r\n";
static int HttpdP__http_okay_len = 19;

enum HttpdP____nesc_unnamed4405 {
  HttpdP__S_IDLE, 
  HttpdP__S_CONNECTED, 
  HttpdP__S_REQUEST_PRE, 
  HttpdP__S_REQUEST, 
  HttpdP__S_HEADER, 
  HttpdP__S_BODY
};

enum HttpdP____nesc_unnamed4406 {
  HttpdP__HTTP_GET, 
  HttpdP__HTTP_POST
};

static inline void HttpdP__process_request(int verb, char *request, int len);
#line 55
int HttpdP__http_state;
int HttpdP__req_verb;
char HttpdP__request_buf[150];
#line 57
char *HttpdP__request;
char HttpdP__tcp_buf[100];

static inline void HttpdP__Boot__booted(void );




static inline bool HttpdP__Tcp__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len);









static inline void HttpdP__Tcp__connectDone(error_t e);


static inline void HttpdP__Tcp__recv(void *payload, uint16_t len);
#line 142
static inline void HttpdP__Tcp__closed(error_t e);






static inline void HttpdP__Tcp__acked(void );
# 64 "../../tos/lib/timer/Counter.nc"
static UDPShellP__Uptime__size_type UDPShellP__Uptime__get(void );
# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPShellP__UDP__bind(uint16_t port);
# 11 "../../tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__eval(
# 42 "../../tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x7fb94ab40c40, 
# 11 "../../tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "../../tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__getCommandName(
# 43 "../../tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x7fb94ab3d800);
# 6 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n);
# 60 "../../tos/lib/net/blip/shell/UDPShellP.nc"
struct sockaddr_in6 UDPShellP__session_endpoint;
uint32_t UDPShellP__boot_time;
uint64_t UDPShellP__uptime;

enum UDPShellP____nesc_unnamed4407 {
  UDPShellP__N_EXTERNAL = 0U
};


enum UDPShellP____nesc_unnamed4408 {
  UDPShellP__N_BUILTINS = 5, 

  UDPShellP__N_ARGS = 10, 
  UDPShellP__CMD_HELP = 0, 
  UDPShellP__CMD_ECHO = 1, 
  UDPShellP__CMD_PING6 = 2, 
  UDPShellP__CMD_TRACERT6 = 3, 

  UDPShellP__CMD_NO_CMD = 0xfe, 
  UDPShellP__CMDNAMSIZ = 10
};

struct UDPShellP__cmd_name {
  uint8_t c_len;
  char c_name[UDPShellP__CMDNAMSIZ];
};
struct UDPShellP__cmd_builtin {
  void (*action)(int arg_0x7fb94ab2e420, char **arg_0x7fb94ab2e720);
};

struct UDPShellP__cmd_name UDPShellP__externals[UDPShellP__N_EXTERNAL];


static inline void UDPShellP__Boot__booted(void );
#line 113
char UDPShellP__reply_buf[MAX_REPLY_LEN];
char *UDPShellP__help_str = "sdsh-0.9\tbuiltins: [help, echo, ping6, uptime, ident]\n";
const char *UDPShellP__ping_fmt = " icmp_seq=%i ttl=%i time=%i ms\n";
const char *UDPShellP__ping_summary = "%i packets transmitted, %i received\n";
char *UDPShellP__ident_string = "\t[app: "
"TCPEchoC""]\n\t[user: ""tete""]\n\t[host: ""tete-PC"
"]\n\t[time: ""0x5c014057L""]\n";


static inline void UDPShellP__action_help(int argc, char **argv);
#line 162
static void UDPShellP__action_echo(int argc, char **argv);
#line 180
static void UDPShellP__action_ping6(int argc, char **argv);








static void UDPShellP__action_uptime(int argc, char **argv);
#line 201
static inline void UDPShellP__action_ident(int argc, char **argv);




struct UDPShellP__cmd_name UDPShellP__builtins[UDPShellP__N_BUILTINS] = { { 4, "help" }, 
{ 4, "echo" }, 
{ 5, "ping6" }, 
{ 6, "uptime" }, 
{ 5, "ident" } };
struct UDPShellP__cmd_builtin UDPShellP__builtin_actions[UDPShellP__N_BUILTINS] = { { UDPShellP__action_help }, 
{ UDPShellP__action_echo }, 
{ UDPShellP__action_ping6 }, 
{ UDPShellP__action_uptime }, 
{ UDPShellP__action_ident } };




static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc);
#line 239
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db);









static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 275
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);










static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);






static inline void UDPShellP__Uptime__overflow(void );





static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv);


static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id);
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg);
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr);
# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__pingDone(
# 35 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x7fb94aaca190, 
# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__pingReply(
# 35 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x7fb94aaca190, 
# 8 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t ICMPPingP__PingTimer__getNow(void );
#line 92
static bool ICMPPingP__PingTimer__isRunning(void );
#line 64
static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt);
#line 78
static void ICMPPingP__PingTimer__stop(void );
# 43 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
uint16_t ICMPPingP__ping_seq;
#line 43
uint16_t ICMPPingP__ping_n;
#line 43
uint16_t ICMPPingP__ping_rcv;
#line 43
uint16_t ICMPPingP__ping_ident;
struct in6_addr ICMPPingP__ping_dest;

static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno);
#line 84
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n);










static inline void ICMPPingP__PingTimer__fired(void );
#line 109
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 125
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats);


static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m);



static inline void ICMPPingP__IPAddress__changed(bool global_valid);
# 20 "../../tos/lib/net/blip/interfaces/SetIPAddress.nc"
static error_t StaticIPAddressTosIdP__SetIPAddress__setAddress(struct in6_addr *addr);
# 21 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static void StaticIPAddressTosIdP__NeighborDiscovery__setPrefix(struct in6_addr *newprefix, uint8_t length, 
uint32_t valid_lifetime, uint32_t preferred_lifetime);
# 55 "../../tos/lib/net/blip/StaticIPAddressTosIdP.nc"
static inline void StaticIPAddressTosIdP__Boot__booted(void );
# 408 "../../tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 85 "../../tos/lib/timer/BusyWaitCounterC.nc"
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void ){
#line 82
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow();
#line 82
}
#line 82
# 64 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void )
{
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow();
}

# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fb94c70f8b0){
#line 39
  switch (arg_0x7fb94c70f8b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fb94c70f8b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4409 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4410 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4411 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 91
}
#line 91
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 293 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__Uptime__overflow(void )
#line 293
{
  /* atomic removed: atomic calls only */
  UDPShellP__uptime += 0xffffffff;
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  UDPShellP__Uptime__overflow();
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__0__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 177 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__1__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4412 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 99 "../../tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "../../tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 130 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 70 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70
# 195 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 195
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 61 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "../../tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 186 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 186
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 190
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "../../tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../tos/lib/timer/TransformAlarmC.nc"
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
}

#line 157
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(), dt);
}

# 66 "../../tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 137 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
#line 137
{
  return (cc2420_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 135 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 65 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
#line 73
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 803 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__releaseSpiResource(void )
#line 803
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set();
#line 40
}
#line 40
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__clr();
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr();
#line 41
}
#line 41
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 219 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

# 58 "../../tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_ntoh_int8(const void * source)
#line 303
{
#line 303
  return __nesc_ntoh_uint8(source);
}

# 152 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
#line 152
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 210
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

# 50 "../../tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc"
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 177 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

# 78 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 109 "../../tos/lib/timer/Alarm.nc"
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 259 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

#line 280
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 280
{
  unsigned char *__nesc_temp47;
  unsigned char *__nesc_temp46;
#line 281
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 283
  {
    time32 = CC2420TransmitP__getTime32(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
        if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

            (__nesc_temp46 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp46, __nesc_ntoh_uint32(__nesc_temp46) - time32));
            CC2420TransmitP__CSN__clr();
            CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP__CSN__set();

            (__nesc_temp47 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp47, __nesc_ntoh_uint32(__nesc_temp47) + time32));
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__abortSpiRelease = TRUE;
          }
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__BackoffTimer__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
            CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
          }
        else 
#line 326
          {
            CC2420TransmitP__signalDone(SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();
              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }



        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;








            if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                if (CC2420TransmitP__m_msg) {
                  CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                  }
              }
#line 370
            break;
          }
      }
  }
}

# 61 "../../tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 73 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 73
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 73
}
#line 73
# 95 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 91
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4413 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64







inline static bool /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 65 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4414 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 382 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 330 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & 0x40) {
      return TRUE;
    }
  return FALSE;
}

# 192 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 341 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~0x40;
}

# 197 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 386 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P__Usart__rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 118 "../../tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "../../tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 95 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 377 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 377
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 151 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
# 124 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fb94b894980){
#line 65
  switch (arg_0x7fb94b894980) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fb94b894980);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 175 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x7fb94ba45e70){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fb94ba45e70) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x7fb94ba45e70);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 116 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 130 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 102 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "../../tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 88 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 188 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 188
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
#line 210
{
  CC2420CsmaP__Resource__request();
}

# 56 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 56
  CC2420CsmaP__CC2420Power__startVRegDone();
#line 56
}
#line 56
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__set();
#line 40
}
#line 40
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
#line 53
}
#line 53
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__clr();
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__clr();
#line 41
}
#line 41
# 431 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupTimer__fired(void )
#line 431
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 498 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffTimer__fired(void )
#line 498
{
  /* atomic removed: atomic calls only */
#line 499
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffTimer__fired();
#line 78
  CC2420ControlP__StartupTimer__fired();
#line 78
}
#line 78
# 162 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "../../tos/lib/timer/Alarm.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 70 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4415 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 89 "../../tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t DefaultLplP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 251 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 251
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

# 66 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 190 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
#line 190
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(backoffTime);
}

# 66 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void DefaultLplP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime){
#line 66
  CC2420CsmaP__RadioBackoff__setCongestionBackoff(backoffTime);
#line 66
}
#line 66
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * DefaultLplP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 227 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t *msg)
#line 227
{

  if (__nesc_ntoh_uint16(
#line 228
  DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata)
   > DefaultLplP__ONE_MESSAGE) {
      DefaultLplP__RadioBackoff__setCongestionBackoff(DefaultLplP__Random__rand16()
       % (0x3 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);
    }
}

# 88 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  DefaultLplP__RadioBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 230 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
#line 230
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

# 88 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
#line 88
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
#line 88
}
#line 88
# 97 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "../../tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 172 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
#line 172
{
#line 172
  return FALSE;
}

# 128 "../../tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x7fb94ba45e70){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x7fb94ba45e70) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x7fb94ba45e70);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 112 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
#line 112
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

# 128 "../../tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 176 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 176
{
  return &msp430_spi_default_config;
}

# 39 "../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x7fb94ba43110){
#line 39
  union __nesc_unnamed4313 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x7fb94ba43110);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 168 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fb94b894980){
#line 59
  switch (arg_0x7fb94b894980) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7fb94b894980);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7fb94b8976b0){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7fb94b8976b0);
#line 61
}
#line 61
# 93 "../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 174 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 174
{
#line 174
  return FAIL;
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x7fb94ba45e70){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x7fb94ba45e70) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x7fb94ba45e70);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 104 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
#line 104
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

# 97 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 207 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

#line 143
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

# 65 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 238 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 0x40;
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420TransmitP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 210 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fb94b8976b0){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7fb94b8976b0);
#line 53
}
#line 53
# 77 "../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 173 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x7fb94ba45e70){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fb94ba45e70) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x7fb94ba45e70);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 108 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4416 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4417 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4418 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 91
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 91
}
#line 91
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4419 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "../../tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r |= 1 << 1;
}

#line 37
static inline  void TOSH_SET_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r |= 1 << 3;
}

#line 88
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r |= 1 << 4;
}

#line 37
static inline  void TOSH_CLR_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r &= ~(1 << 4);
}

# 11 "../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
  __nop();
#line 12
  __nop();
}

# 89 "../../tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001D");

#line 89
  r |= 1 << 7;
}

#line 88
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001E");

#line 88
  r |= 1 << 4;
}

#line 89
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001E");

#line 89
  r |= 1 << 7;
}

#line 37
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x001A");

#line 37
  r |= 1 << 3;
}

#line 36
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x001A");

#line 36
  r |= 1 << 1;
}

# 27 "../../tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC__uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TAR;

#line 8
  while (TAR - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TAR;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "../../tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "../../tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t PacketLinkP__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PacketLinkP__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 75 "../../tos/interfaces/Send.nc"
inline static error_t PacketLinkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = DefaultLplP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 59 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static error_t PacketLinkP__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = CC2420PacketP__Acks__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * PacketLinkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 104 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline uint16_t PacketLinkP__PacketLink__getRetries(message_t *msg)
#line 104
{
  return __nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->maxRetries.nxdata);
}

#line 209
static inline void PacketLinkP__send__runTask(void )
#line 209
{
  if (PacketLinkP__PacketLink__getRetries(PacketLinkP__currentSendMsg) > 0) {
      PacketLinkP__PacketAcknowledgements__requestAck(PacketLinkP__currentSendMsg);
    }

  if (PacketLinkP__SubSend__send(PacketLinkP__currentSendMsg, PacketLinkP__currentSendLen) != SUCCESS) {
      PacketLinkP__send__postTask();
    }
}

# 45 "../../tos/interfaces/State.nc"
inline static error_t DefaultLplP__SendState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(5U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
#line 71
inline static uint8_t DefaultLplP__RadioPowerState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(3U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 157 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(message_t *msg)
#line 157
{
  return __nesc_ntoh_uint16(DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata);
}

# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * DefaultLplP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 70 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg)
#line 70
{
  unsigned char *__nesc_temp49;

#line 71
  (__nesc_temp49 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp49, __nesc_ntoh_leuint16(__nesc_temp49) & ~(1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 71 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static error_t DefaultLplP__PacketAcknowledgements__noAck(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420PacketP__Acks__noAck(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
#line 59
inline static error_t DefaultLplP__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = CC2420PacketP__Acks__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 64 "../../tos/lib/timer/Counter.nc"
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void DefaultLplP__SendDoneTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(6U, dt);
#line 73
}
#line 73
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t PowerCycleP__stopRadio__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__stopRadio);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 126 "../../tos/system/StateImplP.nc"
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "../../tos/interfaces/State.nc"
inline static bool PowerCycleP__SendState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(5U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 17 "../../tos/system/SystemLowPowerListeningP.nc"
static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void )
#line 17
{
#line 17
  return SystemLowPowerListeningP__delayAfterReceive;
}

# 7 "../../tos/interfaces/SystemLowPowerListening.nc"
inline static uint16_t DefaultLplP__SystemLowPowerListening__getDelayAfterReceive(void ){
#line 7
  unsigned int __nesc_result;
#line 7

#line 7
  __nesc_result = SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 410 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__startOffTimer(void )
#line 410
{
  DefaultLplP__OffTimer__startOneShot(DefaultLplP__SystemLowPowerListening__getDelayAfterReceive());
}

#line 244
static inline void DefaultLplP__PowerCycle__detected(void )
#line 244
{






  DefaultLplP__startOffTimer();
}

# 55 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static void PowerCycleP__PowerCycle__detected(void ){
#line 55
  DefaultLplP__PowerCycle__detected();
#line 55
}
#line 55
# 227 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline bool CC2420TransmitP__EnergyIndicator__isReceiving(void )
#line 227
{
  return !CC2420TransmitP__CCA__get();
}

# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
inline static bool PowerCycleP__EnergyIndicator__isReceiving(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420TransmitP__EnergyIndicator__isReceiving();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 202 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__PacketIndicator__isReceiving(void )
#line 202
{
  bool receiving;

  /* atomic removed: atomic calls only */
#line 204
  {
    receiving = CC2420ReceiveP__receivingPacket;
  }
  return receiving;
}

# 43 "../../tos/chips/cc2420/interfaces/ReceiveIndicator.nc"
inline static bool PowerCycleP__PacketIndicator__isReceiving(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420ReceiveP__PacketIndicator__isReceiving();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t PowerCycleP__startRadio__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__startRadio);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 66 "../../tos/interfaces/State.nc"
inline static bool PowerCycleP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(4U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 278 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline bool PowerCycleP__isDutyCycling(void )
#line 278
{
  return PowerCycleP__sleepInterval > 0 && PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON);
}

#line 240
static inline void PowerCycleP__getCca__runTask(void )
#line 240
{
  uint8_t detects = 0;

#line 242
  if (PowerCycleP__isDutyCycling()) {

      PowerCycleP__ccaChecks++;
      if (PowerCycleP__ccaChecks == 1) {

          PowerCycleP__startRadio__postTask();
          return;
        }

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 251
        {
          for (; PowerCycleP__ccaChecks < 400 && PowerCycleP__SendState__isIdle(); PowerCycleP__ccaChecks++) {
              if (PowerCycleP__PacketIndicator__isReceiving()) {
                  PowerCycleP__PowerCycle__detected();
                  {
#line 255
                    __nesc_atomic_end(__nesc_atomic); 
#line 255
                    return;
                  }
                }
              if (PowerCycleP__EnergyIndicator__isReceiving()) {
                  detects++;
                  if (detects > 3) {
                      PowerCycleP__PowerCycle__detected();
                      {
#line 262
                        __nesc_atomic_end(__nesc_atomic); 
#line 262
                        return;
                      }
                    }
                }
            }
        }
#line 267
        __nesc_atomic_end(__nesc_atomic); }

      if (PowerCycleP__SendState__isIdle()) {
          PowerCycleP__stopRadio__postTask();
        }
    }
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t PowerCycleP__SubControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 232 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__startRadio__runTask(void )
#line 232
{
  error_t startResult = PowerCycleP__SubControl__start();

  if (startResult != SUCCESS && startResult != EALREADY) {
      PowerCycleP__startRadio__postTask();
    }
}

# 45 "../../tos/interfaces/State.nc"
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(1U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "../../tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
#line 66
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__start(dt);
#line 66
}
#line 66
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
#line 48
}
#line 48
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__set();
}

# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__set();
#line 40
}
#line 40
# 204 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 207
            FAIL;

            {
#line 207
              __nesc_atomic_end(__nesc_atomic); 
#line 207
              return __nesc_temp;
            }
          }
        }
#line 209
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 130 "../../tos/interfaces/SplitControl.nc"
inline static error_t PowerCycleP__SubControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420CsmaP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 223 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__stopRadio__runTask(void )
#line 223
{
  error_t error = PowerCycleP__SubControl__stop();

#line 225
  if (error != SUCCESS) {

      PowerCycleP__finishSplitControlRequests();
      PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
    }
}

# 67 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 99 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
#line 99
}
#line 99
# 135 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "../../tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 102 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

# 52 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port10__clear();
#line 52
}
#line 52
# 94 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__disable(void )
#line 94
{
#line 94
  P1IE &= ~(1 << 0);
}

# 47 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port10__disable();
#line 47
}
#line 47
# 69 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "../../tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
#line 53
}
#line 53
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__clr();
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__clr();
#line 41
}
#line 41
# 98 "TCPEchoP.nc"
static inline void TCPEchoP__RadioControl__stopDone(error_t e)
#line 98
{
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__stopDone(error_t error){
#line 138
  TCPEchoP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 64 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error)
#line 64
{
  if (error == SUCCESS) {
      IPStackControlP__blip_started = FALSE;
    }
  IPStackControlP__SplitControl__stopDone(error);
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__stopDone(error_t error){
#line 138
  IPStackControlP__SubSplitControl__stopDone(error);
#line 138
}
#line 138
# 184 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__stopDone(error_t error)
#line 184
{
  IPDispatchP__SplitControl__stopDone(error);
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void PowerCycleP__SplitControl__stopDone(error_t error){
#line 138
  IPDispatchP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 94 "TCPEchoP.nc"
static inline void TCPEchoP__RadioControl__startDone(error_t e)
#line 94
{
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__startDone(error_t error){
#line 113
  TCPEchoP__RadioControl__startDone(error);
#line 113
}
#line 113
# 81 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__RoutingControl__default__start(void )
#line 81
{
#line 81
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__RoutingControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 63 "../../tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr)
#line 63
{
  *addr = IPAddressP__m_addr;
  return IPAddressP__m_valid_addr;
}

# 34 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 71 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline error_t IPNeighborDiscoveryP__StdControl__start(void )
#line 71
{

  inet_pton6("ff02::2", &IPNeighborDiscoveryP__ALL_ROUTERS_ADDR);

  memset(&IPNeighborDiscoveryP__prefix, 0, sizeof(struct in6_addr ));







  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__NeighborDiscoveryControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPNeighborDiscoveryP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 79 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__StdControl__default__start(void )
#line 79
{
#line 79
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 30 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__startDone(error_t error)
#line 30
{
  if (error == SUCCESS) {
      IPStackControlP__blip_started = TRUE;
      IPStackControlP__StdControl__start();
    }

  IPStackControlP__NeighborDiscoveryControl__start();








  {
    struct in6_addr addr;

    if (IPStackControlP__IPAddress__getGlobalAddr(&addr)) {
        IPStackControlP__RoutingControl__start();
      }
  }


  IPStackControlP__SplitControl__startDone(error);
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__startDone(error_t error){
#line 113
  IPStackControlP__SubSplitControl__startDone(error);
#line 113
}
#line 113
# 64 "../../tos/lib/timer/Timer.nc"
inline static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(8U, dt);
#line 64
}
#line 64
# 63 "../../tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void )
#line 63
{
}

# 100 "../../tos/interfaces/Leds.nc"
inline static void IPDispatchP__Leds__led2Toggle(void ){
#line 100
  NoLedsC__Leds__led2Toggle();
#line 100
}
#line 100
# 71 "../../tos/interfaces/State.nc"
inline static uint8_t PowerCycleP__RadioPowerState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(3U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 107 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__PowerCycle__setSleepInterval(uint16_t sleepIntervalMs)
#line 107
{
  if (!PowerCycleP__sleepInterval && sleepIntervalMs) {

      PowerCycleP__stopRadio__postTask();
    }

  PowerCycleP__sleepInterval = sleepIntervalMs;

  if (PowerCycleP__sleepInterval == 0 && PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON)) {




      if (PowerCycleP__RadioPowerState__getState() == PowerCycleP__S_OFF) {
          PowerCycleP__SubControl__start();
        }
    }
}

# 43 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static void DefaultLplP__PowerCycle__setSleepInterval(uint16_t sleepIntervalMs){
#line 43
  PowerCycleP__PowerCycle__setSleepInterval(sleepIntervalMs);
#line 43
}
#line 43
# 132 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs)
#line 132
{
  DefaultLplP__PowerCycle__setSleepInterval(intervalMs);
}

# 52 "../../tos/interfaces/LowPowerListening.nc"
inline static void IPDispatchP__LowPowerListening__setLocalWakeupInterval(uint16_t intervalMs){
#line 52
  DefaultLplP__LowPowerListening__setLocalWakeupInterval(intervalMs);
#line 52
}
#line 52
# 169 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__startDone(error_t error)
#line 169
{

  IPDispatchP__LowPowerListening__setLocalWakeupInterval(512);


  if (error == SUCCESS) {
      IPDispatchP__Leds__led2Toggle();
      IPDispatchP__ExpireTimer__startPeriodic(FRAG_EXPIRE_TIME);
      IPDispatchP__state = IPDispatchP__S_RUNNING;
      IPDispatchP__radioBusy = FALSE;
    }

  IPDispatchP__SplitControl__startDone(error);
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void PowerCycleP__SplitControl__startDone(error_t error){
#line 113
  IPDispatchP__RadioControl__startDone(error);
#line 113
}
#line 113
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP__stopRadio__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__stopRadio);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 130 "../../tos/interfaces/SplitControl.nc"
inline static error_t DefaultLplP__SubControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420CsmaP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 71 "../../tos/interfaces/State.nc"
inline static uint8_t DefaultLplP__SendState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(5U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 382 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__stopRadio__runTask(void )
#line 382
{
  if (DefaultLplP__SendState__getState() == S_LPL_NOT_SENDING) {
      if (DefaultLplP__SubControl__stop() != SUCCESS) {
          DefaultLplP__stopRadio__postTask();
        }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP__startRadio__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__startRadio);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t DefaultLplP__SubControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420CsmaP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 376 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__startRadio__runTask(void )
#line 376
{
  if (DefaultLplP__SubControl__start() != SUCCESS) {
      DefaultLplP__startRadio__postTask();
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP__resend__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__resend);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 578 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__resend(bool cca)
#line 578
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 580
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 582
            ECANCEL;

            {
#line 582
              __nesc_atomic_end(__nesc_atomic); 
#line 582
              return __nesc_temp;
            }
          }
        }
#line 585
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 586
            FAIL;

            {
#line 586
              __nesc_atomic_end(__nesc_atomic); 
#line 586
              return __nesc_temp;
            }
          }
        }
#line 589
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_state = cca ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_BEGIN_TRANSMIT;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 592
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__m_cca) {
      CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
    }
  else {
#line 598
    if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
        CC2420TransmitP__attemptSend();
      }
    }
  return SUCCESS;
}

#line 196
static inline error_t CC2420TransmitP__Send__resend(bool useCca)
#line 196
{
  return CC2420TransmitP__resend(useCca);
}

# 58 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t DefaultLplP__Resend__resend(bool useCca){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = CC2420TransmitP__Send__resend(useCca);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 370 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__resend__runTask(void )
#line 370
{
  if (DefaultLplP__Resend__resend(TRUE) != SUCCESS) {
      DefaultLplP__resend__postTask();
    }
}

# 243 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 243
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

# 60 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 182 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
#line 182
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(backoffTime);
}

# 60 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void DefaultLplP__RadioBackoff__setInitialBackoff(uint16_t backoffTime){
#line 60
  CC2420CsmaP__RadioBackoff__setInitialBackoff(backoffTime);
#line 60
}
#line 60
# 219 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t *msg)
#line 219
{

  if (__nesc_ntoh_uint16(
#line 220
  DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata)
   > DefaultLplP__ONE_MESSAGE) {
      DefaultLplP__RadioBackoff__setInitialBackoff(DefaultLplP__Random__rand16()
       % (0x4 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);
    }
}

# 81 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
#line 81
  DefaultLplP__RadioBackoff__requestInitialBackoff(msg);
#line 81
}
#line 81
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t DefaultLplP__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 547 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
#line 547
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 548
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 550
            ECANCEL;

            {
#line 550
              __nesc_atomic_end(__nesc_atomic); 
#line 550
              return __nesc_temp;
            }
          }
        }
#line 553
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 554
            FAIL;

            {
#line 554
              __nesc_atomic_end(__nesc_atomic); 
#line 554
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
#line 564
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

#line 192
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
#line 192
{
  return CC2420TransmitP__send(p_msg, useCca);
}

# 51 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 235 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__RadioBackoff__requestCca(message_t *msg)
#line 235
{
}

# 95 "../../tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
#line 95
  DefaultLplP__RadioBackoff__requestCca(msg);
#line 95
}
#line 95
# 111 "../../tos/system/StateImplP.nc"
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP__state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "../../tos/interfaces/State.nc"
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(1U, reqState);
#line 51
}
#line 51
#line 66
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = StateImplP__State__isState(1U, myState);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
#line 42
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 122 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
#line 122
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
#line 124
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 129
            FAIL;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
#line 132
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp44 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp45 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t DefaultLplP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 364 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__send__runTask(void )
#line 364
{
  if (DefaultLplP__SubSend__send(DefaultLplP__currentSendMsg, DefaultLplP__currentSendLen) != SUCCESS) {
      DefaultLplP__send__postTask();
    }
}

# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 76 "../../tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 76
  unsigned char __nesc_result;
#line 76

#line 76
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 76

#line 76
  return __nesc_result;
#line 76
}
#line 76
# 45 "../../tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 61 "../../tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 214 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 82 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 361 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      HplMsp430Usart0P__IFG1 &= ~0x40;
      HplMsp430Usart0P__IE1 |= 0x40;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }
}

# 180 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 233 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
#line 233
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

#line 257
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
#line 257
{
  CC2420TinyosNetworkP__Resource__release(client);
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x7fb94afdd600){
#line 102
    CC2420TinyosNetworkP__Resource__default__granted(arg_0x7fb94afdd600);
#line 102
}
#line 102
# 68 "../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

#line 72
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
#line 75
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
#line 76
            id;

            {
#line 76
              __nesc_atomic_end(__nesc_atomic); 
#line 76
              return __nesc_temp;
            }
          }
        }
#line 78
      {
        unsigned char __nesc_temp = 
#line 78
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
#line 78
          __nesc_atomic_end(__nesc_atomic); 
#line 78
          return __nesc_temp;
        }
      }
    }
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      unsigned char __nesc_temp = 
#line 61
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
#line 61
        __nesc_atomic_end(__nesc_atomic); 
#line 61
        return __nesc_temp;
      }
    }
#line 63
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "../../tos/interfaces/ResourceQueue.nc"
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 184 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
#line 184
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
#line 195
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 139 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
#line 139
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 142
  return hdr;
}

# 48 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg)
#line 48
{
  uint8_t len = 0;






  if (lowmsg->headers & LOWMSG_FRAG1_HDR) {
    len += LOWMSG_FRAG1_LEN;
    }
#line 58
  if (lowmsg->headers & LOWMSG_FRAGN_HDR) {
    len += LOWMSG_FRAGN_LEN;
    }
#line 60
  return lowmsg->data + len;
}

# 111 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int8_t CC2420PacketP__CC2420Packet__getRssi(message_t *p_msg)
#line 111
{
  return __nesc_ntoh_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->rssi.nxdata);
}

# 64 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static int8_t CC2420ReadLqiC__CC2420Packet__getRssi(message_t *p_msg){
#line 64
  signed char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420PacketP__CC2420Packet__getRssi(p_msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 16 "../../tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readRssi(message_t *msg)
#line 16
{
  return CC2420ReadLqiC__CC2420Packet__getRssi(msg);
}

# 8 "../../tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readRssi(message_t *msg){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = CC2420ReadLqiC__ReadLqi__readRssi(msg);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 115 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline uint8_t CC2420PacketP__CC2420Packet__getLqi(message_t *p_msg)
#line 115
{
  return __nesc_ntoh_uint8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->lqi.nxdata);
}

# 72 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420ReadLqiC__CC2420Packet__getLqi(message_t *p_msg){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = CC2420PacketP__CC2420Packet__getLqi(p_msg);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 12 "../../tos/lib/net/blip/platform/CC2420ReadLqiC.nc"
static inline uint8_t CC2420ReadLqiC__ReadLqi__readLqi(message_t *msg)
#line 12
{
  return CC2420ReadLqiC__CC2420Packet__getLqi(msg);
}

# 6 "../../tos/lib/net/blip/interfaces/ReadLqi.nc"
inline static uint8_t IPDispatchP__ReadLqi__readLqi(message_t *msg){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = CC2420ReadLqiC__ReadLqi__readLqi(msg);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 164 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg)
#line 164
{
  return msg->headers & LOWMSG_FRAGN_HDR;
}

#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg)
#line 68
{
  uint16_t headers = 0;
  uint8_t *buf = lowmsg->data;
  int16_t len = lowmsg->len;

#line 72
  if (buf == (void *)0) {
#line 72
    return headers;
    }
  if (len > 0 && (*buf >> 6) == LOWPAN_NALP_PATTERN) {
      return LOWMSG_NALP;
    }
#line 96
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAG1_PATTERN) {
      headers |= LOWMSG_FRAG1_HDR;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (len > 0 && (*buf >> 3) == LOWPAN_FRAGN_PATTERN) {
      headers |= LOWMSG_FRAGN_HDR;
      buf += LOWMSG_FRAGN_LEN;
      len -= LOWMSG_FRAGN_LEN;
    }
  return headers;
}

# 127 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 128
{
  struct packed_lowmsg msg;
  uint8_t *buf;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 135
    return -1;
    }
  if (!IPDispatchP__hasFragNHeader(&msg)) {
      return -2;
    }

  buf = IPDispatchP__getLowpanPayload(&msg);
  len -= buf - pkt;

  if (recon->r_size < recon->r_bytes_rcvd + len) {
#line 144
    return -3;
    }

  memcpy(recon->r_buf + recon->r_bytes_rcvd, buf, len);
  recon->r_bytes_rcvd += len;

  return 0;
}

# 161 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg)
#line 161
{
  return msg->headers & LOWMSG_FRAG1_HDR;
}

# 301 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag)
#line 301
{
  struct lowpan_reconstruct *ret = (void *)0;
  int i;

  for (i = 0; i < N_RECONSTRUCTIONS; i++) {
      struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)&IPDispatchP__recon_data[i];

      if (recon->r_tag == tag && 
      recon->r_source_key == key) {

          if (recon->r_timeout > T_UNUSED) {
              recon->r_timeout = T_ACTIVE;
              ret = recon;
              goto done;
            }
          else {
#line 316
            if (recon->r_timeout < T_UNUSED) {


                ret = (void *)0;
                goto done;
              }
            }
        }
#line 323
      if (recon->r_timeout == T_UNUSED) {
        ret = recon;
        }
    }
#line 326
  done: 
    return ret;
}

# 270 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag)
#line 270
{
  uint8_t *buf = msg->data;

#line 272
  if (buf == (void *)0 || tag == (void *)0) {
#line 272
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 278
    return 1;
    }
#line 279
  buf += 2;

  *tag = (((uint16_t )* (uint16_t *)buf >> 8) | ((uint16_t )* (uint16_t *)buf << 8)) & 0xffff;
  return 0;
}

# 46 "../../tools/tinyos/c/blip/lib6lowpan/ieee154_header.c"
static inline int IPDispatchP__unpack_ieee154_hdr(uint8_t **buf, 
size_t *len, 
struct ieee154_frame_addr *frame)
#line 48
{
  uint16_t fcf;

  if (*len < IEEE154_MIN_HDR_SZ) {
#line 51
    return -1;
    }
  fcf = ((uint16_t )(*buf)[2] << 8) | (*buf)[1];

  frame->ieee_dstpan = ((uint16_t )(*buf)[5] << 8) | (*buf)[4];
  frame->ieee_src.ieee_mode = (fcf >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  frame->ieee_dst.ieee_mode = (fcf >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;

  *buf += IEEE154_MIN_HDR_SZ;
#line 59
  *len -= IEEE154_MIN_HDR_SZ;

  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
      if (*len < 2) {
#line 62
        return -1;
        }
#line 63
      memcpy(& frame->ieee_dst.ieee_addr.saddr, *buf, 2);
      *buf += 2;
#line 64
      *len -= 2;
    }
  else {
#line 65
    if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_EXT) {
        if (*len < 8) {
#line 66
          return -1;
          }
#line 67
        memcpy(& frame->ieee_dst.ieee_addr.laddr, *buf, 8);
        *buf += 8;
#line 68
        *len -= 8;
      }
    }
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
      if (*len < 2) {
#line 72
        return -1;
        }
#line 73
      memcpy(& frame->ieee_src.ieee_addr.saddr, *buf, 2);
      *buf += 2;
#line 74
      *len -= 2;
    }
  else {
#line 75
    if (frame->ieee_src.ieee_mode == IEEE154_ADDR_EXT) {
        if (*len < 8) {
#line 76
          return -1;
          }
#line 77
        memcpy(& frame->ieee_src.ieee_addr.laddr, *buf, 8);
        *buf += 8;
#line 78
        *len -= 8;
      }
    }
#line 80
  return 0;
}

# 331 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, 
void *msg_payload, 
uint8_t len)
#line 333
{
  struct packed_lowmsg lowmsg;
  struct ieee154_frame_addr frame_address;
  uint8_t *buf = msg_payload;
  size_t buflen = len;
  int ret;

  ;


  ret = IPDispatchP__unpack_ieee154_hdr(&buf, &buflen, &frame_address);

  if (ret < 0) {

      goto fail;
    }


  lowmsg.data = buf;
  lowmsg.len = buflen;
  lowmsg.headers = IPDispatchP__getHeaderBitmap(&lowmsg);
  if (lowmsg.headers == LOWMSG_NALP) {
      goto fail;
    }

  if (IPDispatchP__hasFrag1Header(&lowmsg) || IPDispatchP__hasFragNHeader(&lowmsg)) {

      int rv;
      struct lowpan_reconstruct *recon;
      uint16_t tag;
#line 362
      uint16_t source_key;

      source_key = ieee154_hashaddr(& frame_address.ieee_src);
      IPDispatchP__getFragDgramTag(&lowmsg, &tag);
      recon = IPDispatchP__get_reconstruct(source_key, tag);
      if (!recon) {
          goto fail;
        }



      memcpy(& recon->r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon->r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon->r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      if (IPDispatchP__hasFrag1Header(&lowmsg)) {


          if (recon->r_buf != (void *)0) {
#line 381
            goto fail;
            }
#line 382
          rv = IPDispatchP__lowpan_recon_start(&frame_address, recon, buf, buflen);
        }
      else 
#line 383
        {


          if (recon->r_buf == (void *)0) {
#line 386
            goto fail;
            }
#line 387
          rv = IPDispatchP__lowpan_recon_add(recon, buf, buflen);
        }

      if (rv < 0) {
          recon->r_timeout = T_FAILED1;
          goto fail;
        }
      else 
#line 393
        {

          recon->r_timeout = T_ACTIVE;
          recon->r_source_key = source_key;
          recon->r_tag = tag;
        }

      if (recon->r_size == recon->r_bytes_rcvd) {
          IPDispatchP__deliver(recon);
        }
    }
  else {

      int rv;
      struct lowpan_reconstruct recon;


      memcpy(& recon.r_meta.sender, & frame_address.ieee_src, 
      sizeof(ieee154_addr_t ));
      recon.r_meta.lqi = IPDispatchP__ReadLqi__readLqi(msg);
      recon.r_meta.rssi = IPDispatchP__ReadLqi__readRssi(msg);

      buf = IPDispatchP__getLowpanPayload(&lowmsg);
      if ((rv = IPDispatchP__lowpan_recon_start(&frame_address, &recon, buf, buflen)) < 0) {
          goto fail;
        }

      if (recon.r_size == recon.r_bytes_rcvd) {
          IPDispatchP__deliver(&recon);
        }
      else 
#line 422
        {

          ip_free(recon.r_buf);
        }
    }
  goto done;
  fail: 
    ;
  done: 
    return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = IPDispatchP__Ieee154Receive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 251 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__ActiveReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 251
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__ActiveReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 81 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline int CC2420PacketP__getAddressLength(int type)
#line 81
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

static inline uint8_t * CC2420PacketP__getNetwork(message_t * msg)
#line 90
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (unsigned short )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

#line 119
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t * p_msg)
#line 119
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
#line 124
      *CC2420PacketP__getNetwork(p_msg);

      {
#line 124
        __nesc_atomic_end(__nesc_atomic); 
#line 124
        return __nesc_temp;
      }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "../../tos/chips/cc2420/interfaces/CC2420Packet.nc"
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t * p_msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 158 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);


  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }



  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
#line 170
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * DefaultLplP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 320 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline message_t *DefaultLplP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 321
{
  DefaultLplP__startOffTimer();
  return DefaultLplP__Receive__receive(msg, payload, len);
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = DefaultLplP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 138 "../../tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 138
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }
}

#line 192
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 192
{
  return msg;
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 112 "../../tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 112
{
  int i;

#line 114
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 121
                    TRUE;

                    {
#line 121
                      __nesc_atomic_end(__nesc_atomic); 
#line 121
                      return __nesc_temp;
                    }
                  }
                }
#line 124
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 165 "../../tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline uint16_t UniqueReceiveP__getSourceKey(message_t * msg)
#line 165
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
#line 169
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

#line 86
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 87
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
#line 94
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 78 "../../tos/interfaces/Receive.nc"
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 298 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
#line 298
{
  return CC2420ControlP__m_ext_addr;
}

# 66 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
#line 66
  struct ieee_eui64 __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
#line 71
  unsigned int __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 355 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
#line 355
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      unsigned char __nesc_temp = 
#line 356
      CC2420ControlP__addressRecognition;

      {
#line 356
        __nesc_atomic_end(__nesc_atomic); 
#line 356
        return __nesc_temp;
      }
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
}

# 93 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 824 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
#line 824
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
#line 836
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

#line 838
        ext_addr = (ieee_eui64_t * )& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
#line 840
      {

        return FALSE;
      }
    }
}

# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 676 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 676
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
#line 701
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 704
    CC2420ReceiveP__receivingPacket = FALSE;
#line 704
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 253 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size)
#line 253
{
  uint8_t *buf = msg->data;
  uint8_t s[2];

#line 256
  if (buf == (void *)0 || size == (void *)0) {
#line 256
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 262
    return 1;
    }
  s[0] = *buf & 0x7;
  buf++;
  s[1] = *buf;
  *size = ((uint16_t )s[0] << 8) | s[1];
  return 0;
}

# 755 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__unpack_nhc_udp(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len)
#line 761
{
  struct udp_hdr *udp = (struct udp_hdr *)*dest;

  if (*dlen < sizeof(struct udp_hdr )) {
#line 764
    return -2;
    }
#line 765
  *dest += sizeof(struct udp_hdr );
#line 765
  *dlen -= sizeof(struct udp_hdr );

  *nxt_hdr = IANA_UDP;


  udp->len = 0;

  udp->chksum = 0;


  switch (dispatch & LOWPAN_NHC_UDP_PORT_MASK) {
      case LOWPAN_NHC_UDP_PORT_FULL: 
        if (*len < 4) {
#line 777
          return -1;
          }
#line 778
      udp->srcport = (((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) << 8) | ((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )(((*buf)[2] << 8) | (*buf)[3]) << 8) | ((uint16_t )(((*buf)[2] << 8) | (*buf)[3]) >> 8)) & 0xffff;
      *buf += 4;
#line 780
      *len -= 4;
      break;
      case LOWPAN_NHC_UDP_PORT_SRC_FULL: 
        if (*len < 3) {
#line 783
          return -1;
          }
#line 784
      udp->srcport = (((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) << 8) | ((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((0xF0 << 8) | (*buf)[2]) << 8) | ((uint16_t )((0xF0 << 8) | (*buf)[2]) >> 8)) & 0xffff;
      *buf += 3;
#line 786
      *len -= 3;
      break;
      case LOWPAN_NHC_UDP_PORT_DST_FULL: 
        if (*len < 3) {
#line 789
          return -1;
          }
#line 790
      udp->srcport = (((uint16_t )((0xF0 << 8) | (*buf)[0]) << 8) | ((uint16_t )((0xF0 << 8) | (*buf)[0]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )(((*buf)[1] << 8) | (*buf)[2]) << 8) | ((uint16_t )(((*buf)[1] << 8) | (*buf)[2]) >> 8)) & 0xffff;
      *buf += 3;
#line 792
      *len -= 3;
      break;
      case LOWPAN_NHC_UDP_PORT_SHORT: 
        if (*len < 1) {
#line 795
          return -1;
          }
#line 796
      udp->srcport = (((uint16_t )(0xF0B0 | ((*buf)[0] >> 4)) << 8) | ((uint16_t )(0xF0B0 | ((*buf)[0] >> 4)) >> 8)) & 0xffff;
      udp->dstport = 0xF0B0 | ((*buf)[0] & 0xf);
      udp->dstport = (((uint16_t )udp->dstport << 8) | ((uint16_t )udp->dstport >> 8)) & 0xffff;
      *buf += 1;
#line 799
      *len -= 1;
      break;
    }

  if (!(dispatch & LOWPAN_NHC_UDP_CKSUM)) {
      if (*len < 2) {
#line 804
        return -1;
        }
#line 805
      udp->chksum = (((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) << 8) | ((uint16_t )(((*buf)[0] << 8) | (*buf)[1]) >> 8)) & 0xffff;
      *buf += 2;
#line 806
      *len -= 2;
    }



  recon->r_app_len = & udp->len;

  return 0;
}










static inline int IPDispatchP__unpack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t **nxt_hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len)
#line 830
{

  struct ip6_ext *ext = (struct ip6_ext *)*dest;
  uint8_t length;
#line 833
  uint8_t extra;

  if (*dlen < sizeof(struct ip6_ext )) {
#line 835
    return -2;
    }
#line 836
  *dest += sizeof(struct ip6_ext );
#line 836
  *dlen -= sizeof(struct ip6_ext );




  switch (dispatch & LOWPAN_NHC_EID_MASK) {
      case LOWPAN_NHC_EID_HOP: * *nxt_hdr = IPV6_HOP;
#line 842
      break;
      case LOWPAN_NHC_EID_ROUTING: * *nxt_hdr = IPV6_ROUTING;
#line 843
      break;
      case LOWPAN_NHC_EID_FRAG: * *nxt_hdr = IPV6_FRAG;
#line 844
      break;
      case LOWPAN_NHC_EID_DEST: * *nxt_hdr = IPV6_DEST;
#line 845
      break;
      case LOWPAN_NHC_EID_MOBILE: * *nxt_hdr = IPV6_MOBILITY;
#line 846
      break;
      case LOWPAN_NHC_EID_IPV6: 

        * *nxt_hdr = IPV6_IPV6;
#line 849
      break;
      default: 
        return -3;
    }


  if (!(dispatch & LOWPAN_NHC_NH)) {
      if (*len < 1) {
#line 856
        return -1;
        }
#line 857
      ext->ip6e_nxt = (*buf)[0];
      *buf += 1;
#line 858
      *len -= 1;
    }


  if (*len < 1) {
#line 862
    return -1;
    }
#line 863
  length = (*buf)[0];
  *buf += 1;
#line 864
  *len -= 1;




  extra = (8 - (length + 2) % 8) % 8;


  if (*dlen < length + extra) {
#line 872
    return -2;
    }
#line 873
  if (*len < length) {
#line 873
    return -1;
    }
#line 874
  memcpy(*dest, *buf, length);
  *dest += length;
#line 875
  *dlen -= length;
  *buf += length;
#line 876
  *len -= length;


  if (* *nxt_hdr == IPV6_HOP || * *nxt_hdr == IPV6_DEST) {
      if (extra == 1) {

          (*dest)[0] = IPV6_TLV_PAD1;
          *dest += 1;
#line 883
          *dlen -= 1;
        }
      else {
#line 884
        if (extra > 1) {
            (*dest)[0] = IPV6_TLV_PADN;
            (*dest)[1] = extra - 2;
            *dest += extra;
#line 887
            *dlen -= extra;
          }
        }
    }
#line 890
  ext->ip6e_len = (length + 2 + extra) / 8 - 1;



  *nxt_hdr = & ext->ip6e_nxt;

  if (dispatch & LOWPAN_NHC_NH) {


      return 1;
    }

  return 0;
}

#line 918
static inline int IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, 
size_t *dlen, 
uint8_t *nxt_hdr, 
uint8_t **buf, 
size_t *len)
#line 923
{
  int has_nhc = 1;
  uint8_t dispatch;
  int ret;

  do {
      recon->r_transport_header = *dest;

      if (*len < 1) {
#line 931
        return -1;
        }
#line 932
      dispatch = (*buf)[0];
      *buf += 1;
#line 933
      *len -= 1;

      if ((dispatch & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
          ret = IPDispatchP__unpack_nhc_ipv6_ext(dest, dlen, &nxt_hdr, dispatch, buf, len);
          if (ret < 0) {
#line 937
            return ret;
            }
          if (ret == 0) {

              has_nhc = 0;
            }
        }
      else {
#line 944
        if ((dispatch & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {
            ret = IPDispatchP__unpack_nhc_udp(recon, dest, dlen, nxt_hdr, dispatch, buf, len);
            if (ret < 0) {
#line 946
              return ret;
              }

            has_nhc = 0;
          }
        else {
            has_nhc = 0;
          }
        }
    }
  while (
#line 954
  has_nhc);

  return 0;
}

#line 709
static inline int IPDispatchP__unpack_multicast(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len)
#line 713
{
  memset(addr->in6_u.u6_addr8, 0, 16);

  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {
      int amount;

#line 718
      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_M_128: 
            if (*len < 16) {
#line 720
              return -1;
              }
#line 721
          memcpy(addr->in6_u.u6_addr8, *buf, 16);
          *buf += 16;
#line 722
          *len -= 16;
          return 0;
          case LOWPAN_IPHC_AM_M_48: 
            amount = 5;
          goto copy;
          case LOWPAN_IPHC_AM_M_32: 
            amount = 3;
          copy: 
            if (*len < amount + 1) {
#line 730
              return -1;
              }
#line 731
          addr->in6_u.u6_addr8[0] = 0xff;
          addr->in6_u.u6_addr8[1] = *buf[0];
          memcpy(&addr->in6_u.u6_addr8[16 - amount], *buf + 1, amount);
          *buf += amount + 1;
#line 734
          *len -= amount + 1;
          return 0;
          case LOWPAN_IPHC_AM_M_8: 
            if (*len < 1) {
#line 737
              return -1;
              }
#line 738
          addr->in6_u.u6_addr16[0] = (((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff;
          addr->in6_u.u6_addr8[15] = (*buf)[0];
          *buf += 1;
#line 740
          *len -= 1;
          return 0;
        }
    }
  else 
#line 743
    {
    }


  return -2;
}

#line 583
static inline int IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len)
#line 586
{
  switch (dispatch & LOWPAN_IPHC_HLIM_MASK) {
      case LOWPAN_IPHC_HLIM_1: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;
      break;
      case LOWPAN_IPHC_HLIM_64: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 64;
      break;
      case LOWPAN_IPHC_HLIM_255: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 255;
      break;
      default: 
        if (*len < 1) {
#line 598
          return -1;
          }
#line 599
      hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = (*buf)[0];
      *buf += 1;
#line 600
      *len -= 1;
    }
  return 0;
}

#line 568
static inline int IPDispatchP__unpack_nh(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len)
#line 571
{
  if ((dispatch & LOWPAN_IPHC_NH_MASK) == LOWPAN_IPHC_NH_INLINE) {
      if (*len < 1) {
#line 573
        return -1;
        }
#line 574
      hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt = * *buf;
      *buf += 1;
#line 575
      *len -= 1;
    }
  return 0;
}

#line 525
static inline int IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, 
uint8_t dispatch, 
uint8_t **buf, 
size_t *len)
#line 528
{
  uint8_t fl[3] = { 0, 0, 0 };
  uint8_t tc = 0;

  switch (dispatch & LOWPAN_IPHC_TF_MASK) {
      case LOWPAN_IPHC_TF_ECN_DSCP: 
        if (*len < 1) {
#line 534
          return -1;
          }
#line 535
      tc = ((*buf)[0] >> 6) & 0xff;
      tc |= ((*buf)[0] << 2) & 0xff;
      *buf += 1;
#line 537
      *len -= 1;
      break;
      case LOWPAN_IPHC_TF_ECN_FL: 
        if (*len < 3) {
#line 540
          return -1;
          }
#line 541
      tc = ((*buf)[0] >> 6) & 0xff;
      fl[2] = (*buf)[0] & 0x0f;
      fl[1] = (*buf)[1];
      fl[0] = (*buf)[2];
      *buf += 3;
#line 545
      *len -= 3;
      break;
      case LOWPAN_IPHC_TF_ECN_DSCP_FL: 
        if (*len < 4) {
#line 548
          return -1;
          }
#line 549
      tc = ((*buf)[0] >> 6) & 0xff;
      tc |= ((*buf)[0] << 2) & 0xff;
      fl[2] = (*buf)[1] & 0x0f;
      fl[1] = (*buf)[2];
      fl[0] = (*buf)[3];
      *buf += 4;
#line 554
      *len -= 4;
      break;
    }

  hdr->ip6_ctlun.ip6_un1.ip6_un1_flow = ntohl((((((uint32_t )0x6 << 28) | ((uint32_t )tc << 20)) | ((uint32_t )fl[2] << 16)) | ((uint32_t )fl[1] << 8)) | fl[0]);



  return 0;
}

#line 507
static inline int IPDispatchP__unpack_context(uint8_t dispatch, 
int *contexts, 
uint8_t **buf, 
size_t *len)
#line 510
{
  if ((dispatch & LOWPAN_IPHC_CID_MASK) == LOWPAN_IPHC_CID_PRESENT) {
      if (*len < 1) {
#line 512
        return -1;
        }
#line 513
      contexts[0] = (* *buf >> 4) & 0xf;
      contexts[1] = * *buf & 0xf;
      *buf += 1;
#line 515
      *len -= 1;
    }
  return 0;
}

#line 973
static inline int IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t **buf, 
size_t *len, 
uint8_t *recalculate_checksum, 
uint16_t *unpacked_len)
#line 978
{
  uint8_t dispatch[2];
  int contexts[2] = { 0, 0 };
  uint8_t *dest = recon->r_buf;
  size_t dlen = recon->r_size;
  struct ip6_hdr *hdr = (struct ip6_hdr *)dest;
  int ret;

  *recalculate_checksum = 0;

  if (*len < 2) {
#line 988
    return -1;
    }
#line 989
  dispatch[0] = (*buf)[0];
  dispatch[1] = (*buf)[1];
  *buf += 2;
#line 991
  *len -= 2;

  if (dlen < sizeof(struct ip6_hdr )) {
#line 993
    return -2;
    }
#line 994
  dest += sizeof(struct ip6_hdr );
#line 994
  dlen -= sizeof(struct ip6_hdr );

  if ((dispatch[0] & LOWPAN_DISPATCH_BYTE_MASK) != LOWPAN_DISPATCH_BYTE_VAL) {
      return -3;
    }

  ret = IPDispatchP__unpack_context(dispatch[1], contexts, buf, len);
  if (ret < 0) {
#line 1001
    return ret;
    }

  ret = IPDispatchP__unpack_tcfl(hdr, dispatch[0], buf, len);
  if (ret < 0) {
#line 1005
    return ret;
    }
#line 1006
  ret = IPDispatchP__unpack_nh(hdr, dispatch[0], buf, len);
  if (ret < 0) {
#line 1007
    return ret;
    }
#line 1008
  ret = IPDispatchP__unpack_hlim(hdr, dispatch[0], buf, len);
  if (ret < 0) {
#line 1009
    return ret;
    }

  ret = IPDispatchP__unpack_address(& hdr->ip6_src, 
  dispatch[1] >> LOWPAN_IPHC_SAM_SHIFT, 
  contexts[0], 
  buf, 
  len, 
  & frame->ieee_src, 
  frame->ieee_dstpan, 
  recalculate_checksum);
  if (ret < 0) {
#line 1020
    return ret;
    }

  if (dispatch[1] & LOWPAN_IPHC_M) {
      ret = IPDispatchP__unpack_multicast(& hdr->ip6_dst, 
      dispatch[1] >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf, 
      len);
    }
  else 
#line 1029
    {
      ret = IPDispatchP__unpack_address(& hdr->ip6_dst, 
      dispatch[1] >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf, 
      len, 
      & frame->ieee_dst, 
      frame->ieee_dstpan, 
      recalculate_checksum);
    }
  if (ret < 0) {
#line 1039
    return ret;
    }



  if (dispatch[0] & LOWPAN_IPHC_NH_MASK) {
      ret = IPDispatchP__unpack_nhc_chain(recon, 
      &dest, 
      &dlen, 
      & hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt, 
      buf, 
      len);
      if (ret < 0) {
#line 1051
        return ret;
        }
    }

  if (dlen < *len) {
#line 1055
    return -2;
    }
#line 1056
  memcpy(dest, *buf, *len);
  dest += *len;
#line 1057
  dlen -= *len;
  buf += *len;
#line 1058
  *len = 0;


  *unpacked_len = dest - recon->r_buf;

  return 0;
}

# 34 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 104 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx)
#line 105
{
  struct in6_addr me;

#line 107
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 107
    return 0;
    }
#line 108
  if (context == 0) {
      memcpy(ctx->in6_u.u6_addr8, me.in6_u.u6_addr8, 8);
      return 64;
    }
  else 
#line 111
    {
      return 0;
    }
}

# 18 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx){
#line 18
  int __nesc_result;
#line 18

#line 18
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__getContext(context, ctx);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 80 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context)
#line 80
{
  return IPDispatchP__NeighborDiscovery__getContext(context, addr);
}

# 372 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 373
{
  return TRUE;
}

# 28 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__approve(uint8_t arg_0x7fb94c05fbf0, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
    __nesc_result = IPForwardingEngineP__ForwardingEvents__default__approve(arg_0x7fb94c05fbf0, pkt, next_hop);
#line 28

#line 28
  return __nesc_result;
#line 28
}
#line 28
# 14 "../../tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPForwardingEngineP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 233 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__send_ra(ieee154_laddr_t *ll_addr)
#line 233
{
}

#line 408
static inline void IPNeighborDiscoveryP__IP_RS__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 411
{

  struct nd_option_slla_t *sllao;
  uint8_t *cur = (uint8_t *)packet;
  uint8_t type;
  uint8_t olen;

  ;
#line 418
  ;

  if (len <= sizeof(struct nd_router_solicitation_t )) {

      return;
    }


  cur += sizeof(struct nd_router_solicitation_t );
  len -= sizeof(struct nd_router_solicitation_t );

  while (TRUE) {
      if (len < 2) {
#line 430
        return;
        }

      type = *cur;
      olen = *(cur + 1) << 3;

      if (len < olen) {
#line 436
        return;
        }
      if (type == ND6_OPT_SLLAO) {
#line 438
        break;
        }
      cur += olen;
      len -= olen;
    }


  sllao = (struct nd_option_slla_t *)cur;



  IPNeighborDiscoveryP__send_ra(& sllao->ll_addr);
}

# 50 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(uint8_t arg_0x7fb94b6a3c00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94b6a3c00) {
#line 23
    case ICMPV6_CODE_RS:
#line 23
      IPNeighborDiscoveryP__IP_RS__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(arg_0x7fb94b6a3c00, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(icmph->code, iph, packet, len, meta);
}

# 164 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void IPNeighborDiscoveryP__RSTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t IPForwardingEngineP__defaultRouteAddedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPForwardingEngineP__defaultRouteAddedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 56 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline int IPForwardingEngineP__alloc_key(void )
#line 56
{
  int i;
  int key;

#line 59
  retry: 
    key = IPForwardingEngineP__last_key++;
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid && IPForwardingEngineP__routing_table[i].key == key) {
        goto retry;
        }
    }
#line 65
  return key;
}

static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen)
#line 68
{
  int i;

  if (IPForwardingEngineP__routing_table[20 - 1].valid) {
#line 71
    return (void *)0;
    }
  for (i = 0; i < 20; i++) {


      if (! IPForwardingEngineP__routing_table[i].valid) {
#line 76
        goto init_entry;
        }
      else {
        if (IPForwardingEngineP__routing_table[i].prefixlen >= pfxlen) {
#line 79
          continue;
          }
        }


      memmove((void *)&IPForwardingEngineP__routing_table[i + 1], (void *)&IPForwardingEngineP__routing_table[i], 
      sizeof(struct route_entry ) * (20 - i - 1));
      goto init_entry;
    }
  return (void *)0;
  init_entry: 
    IPForwardingEngineP__routing_table[i].valid = 1;
  IPForwardingEngineP__routing_table[i].key = IPForwardingEngineP__alloc_key();
  return &IPForwardingEngineP__routing_table[i];
}





static inline route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex)
#line 102
{
  struct route_entry *entry;

  if (prefix_len_bits % 8 != 0 || prefix_len_bits > 128) {
#line 105
    return ROUTE_INVAL_KEY;
    }
#line 106
  entry = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
  if (entry == (void *)0 || entry->prefixlen != prefix_len_bits) {



      entry = IPForwardingEngineP__alloc_entry(prefix_len_bits);


      if (prefix_len_bits == 0) {
          IPForwardingEngineP__defaultRouteAddedTask__postTask();
        }
    }
  if (entry == (void *)0) {
    return ROUTE_INVAL_KEY;
    }
  entry->prefixlen = prefix_len_bits;
  entry->ifindex = ifindex;
  if (prefix_len_bits >= 8) {
    memcpy(& entry->prefix, prefix, prefix_len_bits / 8);
    }
#line 125
  if (next_hop) {
    memcpy(& entry->next_hop, next_hop, sizeof(struct in6_addr ));
    }
#line 127
  return entry->key;
}

# 10 "../../tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t IPNeighborDiscoveryP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10








inline static struct route_entry *IPNeighborDiscoveryP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits){
#line 18
  struct route_entry *__nesc_result;
#line 18

#line 18
  __nesc_result = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 452 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IP_RA__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 455
{

  struct nd_router_advertisement_t *ra;
  uint8_t *cur = (uint8_t *)packet;
  uint8_t type;
  uint8_t olen;

  ;
#line 462
  ;

  if (len < sizeof(struct nd_router_advertisement_t )) {
#line 464
    return;
    }
#line 465
  ra = (struct nd_router_advertisement_t *)packet;






  if (__nesc_ntoh_uint16(ra->router_lifetime.nxdata) != 0) {
    }


  if (__nesc_ntoh_uint32(ra->reachable_time.nxdata) != 0) {
    }





  cur += sizeof(struct nd_router_advertisement_t );
  len -= sizeof(struct nd_router_advertisement_t );


  while (TRUE) {
      if (len < 2) {
#line 488
        break;
        }

      type = *cur;
      olen = *(cur + 1) << 3;

      if (len < olen) {
#line 494
        return;
        }
      switch (type) {
          case ND6_OPT_SLLAO: {
              struct route_entry *entry;


              entry = IPNeighborDiscoveryP__ForwardingTable__lookupRoute((void *)0, 0);

              if (entry == (void *)0) {


                  IPNeighborDiscoveryP__ForwardingTable__addRoute((void *)0, 
                  0, 
                  & hdr->ip6_src, 
                  ROUTE_IFACE_154);
                }

              break;
            }

          case ND6_OPT_PREFIX: {
              struct nd_option_prefix_info_t *pio;
              uint8_t A;

#line 518
              pio = (struct nd_option_prefix_info_t *)cur;

              ;
#line 520
              ;




              A = (pio->flags_reserved & ND6_OPT_PREFIX_A_MASK) >> 
              ND6_OPT_PREFIX_A_SHIFT;

              if (A && pio->prefix_length > 0) {
                  IPNeighborDiscoveryP__NeighborDiscovery__setPrefix(& pio->prefix, pio->prefix_length, __nesc_ntoh_uint32(
                  pio->valid_lifetime.nxdata), __nesc_ntoh_uint32(pio->preferred_lifetime.nxdata));
                }
#line 546
              break;
            }

          case ND6_OPT_MTU: 

            break;

          default: 

            break;
        }

      cur += olen;
      len -= olen;
    }

  IPNeighborDiscoveryP__RSTimer__stop();
}

# 50 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(uint8_t arg_0x7fb94b6a3c00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94b6a3c00) {
#line 23
    case ICMPV6_CODE_RA:
#line 23
      IPNeighborDiscoveryP__IP_RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(arg_0x7fb94b6a3c00, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(icmph->code, iph, packet, len, meta);
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(136, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__send(msg);
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPNeighborDiscoveryP__IP_NA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__send(ICMPV6_CODE_NA, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 29 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 326 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IP_NS__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 329
{

  struct nd_neighbor_solicitation_t *ns;
  uint8_t *cur = (uint8_t *)packet;
  uint8_t type;
  uint8_t olen;

  ns = (struct nd_neighbor_solicitation_t *)packet;

  if (len < sizeof(struct nd_neighbor_solicitation_t )) {

      return;
    }



  cur += sizeof(struct nd_neighbor_solicitation_t );
  len -= sizeof(struct nd_neighbor_solicitation_t );

  if (len > 1) {

      type = *cur;
      olen = *(cur + 1) << 3;

      if (len >= olen && type == ND6_OPT_SLLAO) {
          struct nd_option_slla_t *sllao = (struct nd_option_slla_t *)cur;

        }
    }





  {
    struct nd_neighbor_advertisement_t na;

    struct ip6_packet pkt;
    struct ip_iovec v[1];

    uint8_t data[120];
    uint16_t length = 0;

#line 371
    cur = data;

    na.icmpv6.type = ICMP_TYPE_NEIGHBOR_ADV;
    na.icmpv6.code = ICMPV6_CODE_NS;
    __nesc_hton_uint16(na.icmpv6.checksum.nxdata, 0);
    na.flags = 0;
    na.flags |= 1 << ND6_NADV_R_SHIFT;
    na.flags |= 1 << ND6_NADV_S_SHIFT;
    na.flags |= 1 << ND6_NADV_O_SHIFT;
    na.reserved1 = 0;
    __nesc_hton_uint16(na.reserved2.nxdata, 0);
    ip_memcpy((uint8_t *)& na.target_address, (uint8_t *)& ns->target_address, 
    sizeof(struct in6_addr ));
    ip_memcpy(cur, (uint8_t *)&na, sizeof(struct nd_neighbor_advertisement_t ));
#line 384
    cur += sizeof(struct nd_neighbor_advertisement_t );
#line 384
    length += sizeof(struct nd_neighbor_advertisement_t );
#line 384
    ;

    v[0].iov_base = data;
    v[0].iov_len = length;
    v[0].iov_next = (void *)0;

    pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
    pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

    pkt.ip6_data = &v[0];

    ip_memcpy((uint8_t *)& pkt.ip6_hdr.ip6_dst, (uint8_t *)& hdr->ip6_src, 
    sizeof(struct in6_addr ));
    IPNeighborDiscoveryP__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);
    IPNeighborDiscoveryP__IP_NA__send(&pkt);
  }
}

# 50 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__recv(uint8_t arg_0x7fb94b6a3c00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94b6a3c00) {
#line 23
    case ICMPV6_CODE_NS:
#line 23
      IPNeighborDiscoveryP__IP_NS__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__default__recv(arg_0x7fb94b6a3c00, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__IP__recv(icmph->code, iph, packet, len, meta);
}

# 402 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IP_NA__recv(struct ip6_hdr *hdr, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 405
{
}

# 50 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__recv(uint8_t arg_0x7fb94b6a3c00, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94b6a3c00) {
#line 23
    case ICMPV6_CODE_NA:
#line 23
      IPNeighborDiscoveryP__IP_NA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__default__recv(arg_0x7fb94b6a3c00, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__IP__recv(icmph->code, iph, packet, len, meta);
}

# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(2U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 275 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats)
#line 275
{
  int len;

#line 277
  len = inet_ntop6(source, UDPShellP__reply_buf, MAX_REPLY_LEN);
  if (len > 0) {
      len += snprintf(UDPShellP__reply_buf + len - 1, MAX_REPLY_LEN - len + 1, UDPShellP__ping_fmt, 
      stats->seq, stats->ttl, stats->rtt);
      UDPShellP__reply_buf[len] = '\0';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, len);
    }
}

# 125 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats)
#line 126
{
}

# 8 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingReply(uint8_t arg_0x7fb94aaca190, struct in6_addr *source, struct icmp_stats *stats){
#line 8
  switch (arg_0x7fb94aaca190) {
#line 8
    case 0U:
#line 8
      UDPShellP__ICMPPing__pingReply(source, stats);
#line 8
      break;
#line 8
    default:
#line 8
      ICMPPingP__ICMPPing__default__pingReply(arg_0x7fb94aaca190, source, stats);
#line 8
      break;
#line 8
    }
#line 8
}
#line 8
# 189 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "../../tos/lib/timer/Timer.nc"
inline static uint32_t ICMPPingP__PingTimer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(10U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 109 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 112
{
  icmp_echo_hdr_t *req = (icmp_echo_hdr_t *)packet;
  nx_uint32_t *sendTime = (nx_uint32_t *)(req + 1);
  struct icmp_stats p_stat;

  p_stat.seq = __nesc_ntoh_uint16(req->seqno.nxdata);
  p_stat.ttl = iph->ip6_ctlun.ip6_un1.ip6_un1_hlim;
  p_stat.rtt = ICMPPingP__PingTimer__getNow() - __nesc_ntoh_uint32((*sendTime).nxdata);
  ICMPPingP__ICMPPing__pingReply(__nesc_ntoh_uint16(req->ident.nxdata), & iph->ip6_src, &p_stat);
  ICMPPingP__ping_rcv++;
}

# 151 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 152
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void ICMPCoreP__ICMP_IP__recv(uint8_t arg_0x7fb94b6a1590, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94b6a1590) {
#line 23
    case ICMP_TYPE_ECHO_REPLY:
#line 23
      ICMPPingP__IP_ECHO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 133:
#line 23
      /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 134:
#line 23
      /*IPNeighborDiscoveryC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 135:
#line 23
      /*IPNeighborDiscoveryC.ICMP_NS.ICMPCodeDispatchP*/ICMPCodeDispatchP__2__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 136:
#line 23
      /*IPNeighborDiscoveryC.ICMP_NA.ICMPCodeDispatchP*/ICMPCodeDispatchP__3__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      ICMPCoreP__ICMP_IP__default__recv(arg_0x7fb94b6a1590, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 59 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 62
{
  struct ip6_hdr *hdr = iph;
  struct ip6_packet reply;
  struct ip_iovec v;
  struct icmp6_hdr *req = (struct icmp6_hdr *)packet;
  uint16_t my_cksum;
#line 67
  uint16_t rx_cksum = (((uint16_t )req->cksum >> 8) | ((uint16_t )req->cksum << 8)) & 0xffff;




  req->cksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;
  my_cksum = msg_cksum(iph, &v, IANA_ICMP);



  ;
#line 80
  ;
  switch (req->type) {
      case ICMP_TYPE_ECHO_DEST_UNREACH: ;
#line 82
      ;
#line 82
      break;
      case ICMP_TYPE_ECHO_PKT_TOO_BIG: ;
#line 83
      ;
#line 83
      break;
      case ICMP_TYPE_ECHO_TIME_EXCEEDED: ;
#line 84
      ;
#line 84
      break;
      case ICMP_TYPE_ECHO_PARAM_PROBLEM: ;
#line 85
      ;
#line 85
      break;
      case ICMP_TYPE_ECHO_REQUEST: ;
#line 86
      ;
#line 86
      break;
      case ICMP_TYPE_ECHO_REPLY: ;
#line 87
      ;
#line 87
      break;
      case ICMP_TYPE_ROUTER_SOL: ;
#line 88
      ;
#line 88
      break;
      case ICMP_TYPE_ROUTER_ADV: ;
#line 89
      ;
#line 89
      break;
      case ICMP_TYPE_NEIGHBOR_SOL: ;
#line 90
      ;
#line 90
      break;
      case ICMP_TYPE_NEIGHBOR_ADV: ;
#line 91
      ;
#line 91
      break;
      case ICMP_TYPE_RPL_CONTROL: ;
#line 92
      ;
#line 92
      break;
      default: ;
#line 93
      ;
#line 93
      break;
    }

  if (my_cksum != rx_cksum) {
      ;
#line 97
      ;
      return;
    }

  switch (req->type) {
      case ICMP_TYPE_ECHO_REQUEST: 
        req->type = ICMP_TYPE_ECHO_REPLY;

      memset(&reply, 0, sizeof reply);
      memcpy(reply.ip6_hdr.ip6_dst.in6_u.u6_addr8, hdr->ip6_src.in6_u.u6_addr8, 16);
      ICMPCoreP__IPAddress__setSource(& reply.ip6_hdr);

      reply.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      reply.ip6_data = &v;

      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;
      ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, &reply);
      break;

      default: 
        ICMPCoreP__ICMP_IP__recv(req->type, iph, packet, len, meta);
    }
}

# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t TCPEchoP__Echo__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(0U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 107 "TCPEchoP.nc"
static inline void TCPEchoP__Echo__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 108
{
  ;
  TCPEchoP__Echo__sendto(from, data, len);
}

#line 102
static inline void TCPEchoP__Status__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 103
{
}

# 299 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv)
#line 299
{
  return (void *)0;
}

# 11 "../../tos/lib/net/blip/shell/ShellCommand.nc"
inline static char *UDPShellP__ShellCommand__eval(uint8_t arg_0x7fb94ab40c40, int argc, char **argv){
#line 11
  char *__nesc_result;
#line 11

#line 11
    __nesc_result = UDPShellP__ShellCommand__default__eval(arg_0x7fb94ab40c40, argc, argv);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 220 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc)
#line 220
{
  int inArg = 0;

#line 222
  *argc = 0;
  while (len > 0 && *argc < UDPShellP__N_ARGS) {
      if ((((*cmd == ' ' || *cmd == '\n') || *cmd == '\t') || *cmd == '\0') || len == 1) {
          if (inArg) {
              *argc = *argc + 1;
              inArg = 0;
              *cmd = '\0';
            }
        }
      else {
#line 230
        if (!inArg) {
            argv[*argc] = cmd;
            inArg = 1;
          }
        }
#line 234
      cmd++;
      len--;
    }
}











static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 250
{
  char *argv[UDPShellP__N_ARGS];
  int argc;
#line 252
  int cmd;

  memcpy(&UDPShellP__session_endpoint, from, sizeof(struct sockaddr_in6 ));
  UDPShellP__init_argv((char *)data, len, argv, &argc);

  if (argc > 0) {
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_BUILTINS, UDPShellP__builtins);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          UDPShellP__builtin_actions[cmd].action(argc, argv);
          return;
        }
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_EXTERNAL, UDPShellP__externals);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          char *reply = UDPShellP__ShellCommand__eval(cmd, argc, argv);

#line 266
          if (reply != (void *)0) {
            UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, reply, strlen(reply));
            }
#line 268
          return;
        }
      cmd = snprintf(UDPShellP__reply_buf, MAX_REPLY_LEN, "sdsh: %s: command not found\n", argv[0]);
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, cmd);
    }
}

# 192 "../../tos/lib/net/blip/UdpP.nc"
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, 
void *payload, 
uint16_t len, 
struct ip6_metadata *meta)
#line 195
{
}

# 29 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static void UdpP__UDP__recvfrom(uint8_t arg_0x7fb94ad4a660, struct sockaddr_in6 *src, void *payload, uint16_t len, struct ip6_metadata *meta){
#line 29
  switch (arg_0x7fb94ad4a660) {
#line 29
    case 0U:
#line 29
      TCPEchoP__Echo__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 1U:
#line 29
      TCPEchoP__Status__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 2U:
#line 29
      UDPShellP__UDP__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    default:
#line 29
      UdpP__UDP__default__recvfrom(arg_0x7fb94ad4a660, src, payload, len, meta);
#line 29
      break;
#line 29
    }
#line 29
}
#line 29
# 72 "../../tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 75
{
  uint8_t i;
  struct sockaddr_in6 addr;
  struct udp_hdr *udph = (struct udp_hdr *)packet;
  uint16_t my_cksum;
#line 79
  uint16_t rx_cksum = (((uint16_t )udph->chksum >> 8) | ((uint16_t )udph->chksum << 8)) & 0xffff;
  struct ip_iovec v;

  ;
#line 82
  ;



  for (i = 0; i < UdpP__N_CLIENTS; i++) 
    if (UdpP__local_ports[i] == udph->dstport) {
      break;
      }
  if (i == UdpP__N_CLIENTS) {

      return;
    }
  memcpy(& addr.sin6_addr, & iph->ip6_src, 16);
  addr.sin6_port = udph->srcport;

  udph->chksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;

  my_cksum = msg_cksum(iph, &v, IANA_UDP);
  ;
#line 103
  ;
  if (rx_cksum != my_cksum) {
      ;
      ;
#line 106
      ;

      ;
#line 108
      ;


      return;
    }

  ;
  UdpP__UDP__recvfrom(i, &addr, (void *)(udph + 1), len - sizeof(struct udp_hdr ), meta);
}

# 50 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__tcplib_extern_closed(struct TcpP__tcplib_sock *sock)
#line 50
{
  TcpP__tcplib_close(sock);
}

# 147 "TCPEchoP.nc"
static inline void TCPEchoP__TcpEcho__connectDone(error_t e)
#line 147
{
}

# 76 "HttpdP.nc"
static inline void HttpdP__Tcp__connectDone(error_t e)
#line 76
{
}

# 157 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Tcp__default__connectDone(uint8_t cid, error_t e)
#line 157
{
}

# 26 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static void TcpP__Tcp__connectDone(uint8_t arg_0x7fb94acf38f0, error_t e){
#line 26
  switch (arg_0x7fb94acf38f0) {
#line 26
    case 0U:
#line 26
      TCPEchoP__TcpEcho__connectDone(e);
#line 26
      break;
#line 26
    case 1U:
#line 26
      HttpdP__Tcp__connectDone(e);
#line 26
      break;
#line 26
    default:
#line 26
      TcpP__Tcp__default__connectDone(arg_0x7fb94acf38f0, e);
#line 26
      break;
#line 26
    }
#line 26
}
#line 26
# 38 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__tcplib_extern_connectdone(struct TcpP__tcplib_sock *sock, int error)
#line 38
{
  int cid = TcpP__find_client(sock);

#line 40
  if (cid < TcpP__N_CLIENTS) {
    TcpP__Tcp__connectDone(cid, error ? FAIL : SUCCESS);
    }
}

# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle();
#line 58
}
#line 58
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
#line 42
}
#line 42
# 114 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "../../tos/interfaces/Leds.nc"
inline static void TCPEchoP__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 32 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static error_t TCPEchoP__TcpEcho__send(void *payload, uint16_t len){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = TcpP__Tcp__send(0U, payload, len);
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 150 "TCPEchoP.nc"
static inline void TCPEchoP__TcpEcho__recv(void *payload, uint16_t len)
#line 150
{
  if (TCPEchoP__TcpEcho__send(payload, len) != SUCCESS) {
    TCPEchoP__Leds__led2Toggle();
    }
}

# 39 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static error_t HttpdP__Tcp__close(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = TcpP__Tcp__close(1U);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
#line 32
inline static error_t HttpdP__Tcp__send(void *payload, uint16_t len){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = TcpP__Tcp__send(1U, payload, len);
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )48U & (0x01 << 6);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__get(void )
#line 51
{
#line 51
  return /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led2__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )48U & (0x01 << 5);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__get(void )
#line 51
{
#line 51
  return /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led1__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )48U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__get(void )
#line 51
{
#line 51
  return /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led0__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 119 "../../tos/system/LedsP.nc"
static inline uint8_t LedsP__Leds__get(void )
#line 119
{
  uint8_t rval;

#line 121
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      rval = 0;
      if (!LedsP__Led0__get()) {
          rval |= LEDS_LED0;
        }
      if (!LedsP__Led1__get()) {
          rval |= LEDS_LED1;
        }
      if (!LedsP__Led2__get()) {
          rval |= LEDS_LED2;
        }
    }
#line 132
    __nesc_atomic_end(__nesc_atomic); }
  return rval;
}

# 117 "../../tos/interfaces/Leds.nc"
inline static uint8_t HttpdP__Leds__get(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = LedsP__Leds__get();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 27 "HttpdP.nc"
static inline void HttpdP__process_request(int verb, char *request, int len)
#line 27
{
  char reply[24];

#line 29
  memcpy(reply, "led0: 0 led1: 0 led2: 0\n", 24);

  ;
#line 31
  ;






  if (
#line 33
  len >= 10 && 
  request[0] == '/' && 
  request[1] == 'r' && 
  request[2] == 'e' && 
  request[3] == 'a' && 
  request[4] == 'd' && 
  request[5] == '/') {


      if (
#line 40
      request[6] == 'l' && 
      request[7] == 'e' && 
      request[8] == 'd' && 
      request[9] == 's') {
          uint8_t bitmap = HttpdP__Leds__get();

#line 45
          HttpdP__Tcp__send(HttpdP__http_okay, HttpdP__http_okay_len);
          if (bitmap & 1) {
#line 46
            reply[6] = '1';
            }
#line 47
          if (bitmap & 2) {
#line 47
            reply[14] = '1';
            }
#line 48
          if (bitmap & 4) {
#line 48
            reply[22] = '1';
            }
#line 49
          HttpdP__Tcp__send(reply, 24);
        }
    }
  HttpdP__Tcp__close();
}

#line 79
static inline void HttpdP__Tcp__recv(void *payload, uint16_t len)
#line 79
{
  static int crlf_pos;
  char *msg = payload;

#line 82
  switch (HttpdP__http_state) {
      case HttpdP__S_CONNECTED: 
        crlf_pos = 0;
      HttpdP__request = HttpdP__request_buf;
      if (len < 3) {
          HttpdP__Tcp__close();
          return;
        }
      if (msg[0] == 'G') {
          HttpdP__req_verb = HttpdP__HTTP_GET;
          msg += 3;
          len -= 3;
        }
      HttpdP__http_state = HttpdP__S_REQUEST_PRE;
      case HttpdP__S_REQUEST_PRE: 
        while (len > 0 && *msg == ' ') {
            len--;
#line 98
            msg++;
          }
      if (len == 0) {
#line 100
        break;
        }
#line 101
      HttpdP__http_state = HttpdP__S_REQUEST;
      case HttpdP__S_REQUEST: 
        while (len > 0 && *msg != ' ') {
            * HttpdP__request++ = * msg++;
            len--;
          }
      if (len == 0) {
#line 107
        break;
        }
#line 108
      * HttpdP__request++ = '\0';
      HttpdP__http_state = HttpdP__S_HEADER;
      case HttpdP__S_HEADER: 
        while (len > 0) {
            switch (crlf_pos) {
                case 0: 
                  case 2: 
                    if (*msg == '\r') {
#line 115
                      crlf_pos++;
                      }
                    else {
#line 116
                      if (*msg == '\n') {
#line 116
                        crlf_pos += 2;
                        }
                      else {
#line 117
                        crlf_pos = 0;
                        }
                      }
#line 118
                break;
                case 1: 
                  case 3: 
                    if (*msg == '\n') {
#line 121
                      crlf_pos++;
                      }
                    else {
#line 122
                      crlf_pos = 0;
                      }
#line 123
                break;
              }
            len--;
#line 125
            msg++;

            if (crlf_pos == 4) {
                HttpdP__http_state = HttpdP__S_BODY;
                HttpdP__process_request(HttpdP__req_verb, HttpdP__request_buf, HttpdP__request - HttpdP__request_buf - 1);
                break;
              }
          }
      if (crlf_pos < 4) {
#line 133
        break;
        }
      case HttpdP__S_BODY: 

        default: 
          HttpdP__Tcp__close();
    }
}

# 158 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Tcp__default__recv(uint8_t cid, void *payload, uint16_t len)
#line 158
{
}

# 34 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static void TcpP__Tcp__recv(uint8_t arg_0x7fb94acf38f0, void *payload, uint16_t len){
#line 34
  switch (arg_0x7fb94acf38f0) {
#line 34
    case 0U:
#line 34
      TCPEchoP__TcpEcho__recv(payload, len);
#line 34
      break;
#line 34
    case 1U:
#line 34
      HttpdP__Tcp__recv(payload, len);
#line 34
      break;
#line 34
    default:
#line 34
      TcpP__Tcp__default__recv(arg_0x7fb94acf38f0, payload, len);
#line 34
      break;
#line 34
    }
#line 34
}
#line 34
# 44 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__tcplib_extern_recv(struct TcpP__tcplib_sock *sock, void *data, int len)
#line 44
{
  int cid = TcpP__find_client(sock);

#line 46
  if (cid < TcpP__N_CLIENTS) {
    TcpP__Tcp__recv(cid, data, len);
    }
}

# 277 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
inline static int TcpP__receive_data(struct TcpP__tcplib_sock *sock, struct tcp_hdr *tcph, int len)
#line 277
{
  uint8_t *ptr;
  int payload_len;

  ptr = (uint8_t *)tcph + tcph->offset / 4;
  payload_len = len - tcph->offset / 4;
  sock->ackno = ntohl(tcph->seqno) + payload_len;

  if (payload_len > 0) {
      TcpP__tcplib_extern_recv(sock, ptr, payload_len);
    }
  return payload_len;
}

# 48 "../../tools/tinyos/c/blip/libtcp/circ.c"
static inline uint32_t TcpP__circ_get_seqno(void *buf)
#line 48
{
  struct TcpP__circ_buf *b = (struct TcpP__circ_buf *)buf;

#line 50
  return b->head_seqno;
}

# 158 "TCPEchoP.nc"
static inline void TCPEchoP__TcpEcho__acked(void )
#line 158
{
}

# 149 "HttpdP.nc"
static inline void HttpdP__Tcp__acked(void )
#line 149
{
}

# 160 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Tcp__default__acked(uint8_t cid)
#line 160
{
}

# 52 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static void TcpP__Tcp__acked(uint8_t arg_0x7fb94acf38f0){
#line 52
  switch (arg_0x7fb94acf38f0) {
#line 52
    case 0U:
#line 52
      TCPEchoP__TcpEcho__acked();
#line 52
      break;
#line 52
    case 1U:
#line 52
      HttpdP__Tcp__acked();
#line 52
      break;
#line 52
    default:
#line 52
      TcpP__Tcp__default__acked(arg_0x7fb94acf38f0);
#line 52
      break;
#line 52
    }
#line 52
}
#line 52
# 61 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__tcplib_extern_acked(struct TcpP__tcplib_sock *sock)
#line 61
{
  int cid = TcpP__find_client(sock);

#line 63
  if (cid < TcpP__N_CLIENTS) {
    TcpP__Tcp__acked(cid);
    }
}

# 79 "../../tools/tinyos/c/blip/libtcp/circ.c"
static inline int TcpP__circ_shorten_head(void *buf, uint32_t seqno)
#line 79
{
  struct TcpP__circ_buf *b = (struct TcpP__circ_buf *)buf;
  int offset = seqno - b->head_seqno;

  b->head_seqno = seqno;
  b->data_head += offset;

  while (b->data_head > b->data_start + b->data_len) 
    b->data_head -= b->data_len;

  return 0;
}

#line 36
static inline int TcpP__circ_buf_init(void *data, int len, uint32_t seqno)
#line 36
{
  struct TcpP__circ_buf *b = (struct TcpP__circ_buf *)data;

  if (len < sizeof(struct TcpP__circ_buf )) {
    return -1;
    }
  b->data_head = b->data_start = (uint8_t *)(b + 1);
  b->data_len = len - sizeof(struct TcpP__circ_buf );
  b->head_seqno = seqno;
  return 0;
}

# 55 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static __inline void TcpP__conn_add_once(struct TcpP__tcplib_sock *sock)
#line 55
{
  struct TcpP__tcplib_sock *iter;

  for (iter = TcpP__conns; iter != (void *)0; iter = iter->next) {
      if (iter == sock) {
#line 59
        break;
        }
    }
#line 61
  if (iter == (void *)0) {
      sock->next = TcpP__conns;
      TcpP__conns = sock;
    }
}

# 141 "TCPEchoP.nc"
static inline bool TCPEchoP__TcpEcho__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len)
#line 142
{
  *tx_buf = TCPEchoP__tcp_buf;
  *tx_buf_len = 150;
  return TRUE;
}

# 65 "HttpdP.nc"
static inline bool HttpdP__Tcp__accept(struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len)
#line 66
{
  if (HttpdP__http_state == HttpdP__S_IDLE) {
      HttpdP__http_state = HttpdP__S_CONNECTED;
      *tx_buf = HttpdP__tcp_buf;
      *tx_buf_len = 100;
      return TRUE;
    }
  ;
#line 73
  ;
  return FALSE;
}

# 152 "../../tos/lib/net/blip/TcpP.nc"
static inline bool TcpP__Tcp__default__accept(uint8_t cid, struct sockaddr_in6 *from, 
void **tx_buf, int *tx_buf_len)
#line 153
{
  return FALSE;
}

# 16 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static bool TcpP__Tcp__accept(uint8_t arg_0x7fb94acf38f0, struct sockaddr_in6 *from, void **tx_buf, int *tx_buf_len){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  switch (arg_0x7fb94acf38f0) {
#line 16
    case 0U:
#line 16
      __nesc_result = TCPEchoP__TcpEcho__accept(from, tx_buf, tx_buf_len);
#line 16
      break;
#line 16
    case 1U:
#line 16
      __nesc_result = HttpdP__Tcp__accept(from, tx_buf, tx_buf_len);
#line 16
      break;
#line 16
    default:
#line 16
      __nesc_result = TcpP__Tcp__default__accept(arg_0x7fb94acf38f0, from, tx_buf, tx_buf_len);
#line 16
      break;
#line 16
    }
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 71 "../../tos/lib/net/blip/TcpP.nc"
static inline struct TcpP__tcplib_sock *TcpP__tcplib_accept(struct TcpP__tcplib_sock *conn, 
struct sockaddr_in6 *from)
#line 72
{
  int cid = TcpP__find_client(conn);

  ;
#line 75
  ;

  if (cid == TcpP__N_CLIENTS) {
#line 77
    return (void *)0;
    }
#line 78
  if (TcpP__Tcp__accept(cid, from, & conn->tx_buf, & conn->tx_buf_len)) {
      if (conn->tx_buf == (void *)0) {
#line 79
        return (void *)0;
        }
#line 80
      return conn;
    }
  return (void *)0;
}

# 67 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
inline static int TcpP__isInaddrAny(struct in6_addr *addr)
#line 67
{
  int i;

#line 69
  for (i = 0; i < 8; i++) 
    if (addr->in6_u.u6_addr16[i] != 0) {
#line 70
      break;
      }
#line 71
  if (i != 8) {
#line 71
    return 0;
    }
#line 72
  return 1;
}

#line 101
inline static struct TcpP__tcplib_sock *TcpP__conn_lookup(struct ip6_hdr *iph, 
struct tcp_hdr *tcph)
#line 102
{
  struct TcpP__tcplib_sock *iter;


  for (iter = TcpP__conns; iter != (void *)0; iter = iter->next) {

      ;
#line 108
      ;


      if ((
#line 109
      memcmp(iph->ip6_dst.in6_u.u6_addr8, iter->l_ep.sin6_addr.in6_u.u6_addr8, 16) == 0 || 
      TcpP__isInaddrAny(& iter->l_ep.sin6_addr)) && 
      tcph->dstport == iter->l_ep.sin6_port && (
      iter->r_ep.sin6_port == 0 || (
      memcmp(& iph->ip6_src, & iter->r_ep.sin6_addr, 16) == 0 && 
      tcph->srcport == iter->r_ep.sin6_port))) {
        return iter;
        }
    }
#line 117
  return (void *)0;
}

#line 298
static inline int TcpP__tcplib_process(struct ip6_hdr *iph, void *payload)
#line 298
{
  int rc = 0;
  struct tcp_hdr *tcph;
  struct TcpP__tcplib_sock *this_conn;

  int len = ((((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr );
  int payload_len;
  uint32_t hdr_seqno;
#line 305
  uint32_t hdr_ackno;
  int connect_done = 0;

  tcph = (struct tcp_hdr *)payload;
  payload_len = len - sizeof(struct ip6_hdr ) - tcph->offset / 4;


  this_conn = TcpP__conn_lookup(iph, tcph);

  if (this_conn != (void *)0) {
      hdr_seqno = ntohl(tcph->seqno);
      hdr_ackno = ntohl(tcph->ackno);

      if (tcph->flags & TCP_FLAG_RST) {


          ;
#line 321
          ;

          TcpP__tcplib_extern_closedone(this_conn);

          return 0;
        }



      this_conn->r_wind = (((uint16_t )tcph->window >> 8) | ((uint16_t )tcph->window << 8)) & 0xffff;
      ;
#line 331
      ;

      switch (this_conn->state) {
          case TcpP__TCP_LAST_ACK: 
            if (tcph->flags & TCP_FLAG_ACK && 
            hdr_ackno == this_conn->seqno + 1) {

                this_conn->state = TcpP__TCP_CLOSED;
                TcpP__tcplib_extern_closedone(this_conn);
                break;
              }
          case TcpP__TCP_FIN_WAIT_1: 
            ;
#line 343
          ;
          if (tcph->flags & TCP_FLAG_ACK && 
          hdr_ackno == this_conn->seqno + 1) {
              if (tcph->flags & TCP_FLAG_FIN) {
                  this_conn->seqno++;
                  this_conn->state = TcpP__TCP_TIME_WAIT;



                  this_conn->timer.retx = TcpP__TCPLIB_TIMEWAIT_LEN;
                }
              else 
#line 353
                {
                  this_conn->timer.retx = TcpP__TCPLIB_2MSL;
                  this_conn->state = TcpP__TCP_FIN_WAIT_2;
                }
            }

          goto ESTABLISHED;
          case TcpP__TCP_FIN_WAIT_2: 
            if (tcph->flags & TCP_FLAG_FIN) {
                this_conn->seqno++;
                this_conn->state = TcpP__TCP_TIME_WAIT;

                this_conn->timer.retx = TcpP__TCPLIB_TIMEWAIT_LEN;
                TcpP__tcplib_send_ack(this_conn, 0, TCP_FLAG_ACK);
              }
          break;

          case TcpP__TCP_SYN_SENT: 
            if (tcph->flags & (TCP_FLAG_SYN | TCP_FLAG_ACK)) {


                this_conn->state = TcpP__TCP_ESTABLISHED;
                this_conn->ackno = hdr_seqno + 1;
                connect_done = 1;


                goto ESTABLISHED;
              }
            else {
#line 380
              if (tcph->flags & TCP_FLAG_SYN) {

                  this_conn->state = TcpP__TCP_SYN_RCVD;
                  connect_done = 1;
                }
              else 
#line 384
                {
                  ;
#line 385
                  ;

                  TcpP__tcplib_send_rst(iph, tcph);
                  break;
                }
              }
#line 390
          case TcpP__TCP_SYN_RCVD: 
            case TcpP__TCP_LISTEN: 

              if (tcph->flags & TCP_FLAG_SYN) {
                  struct TcpP__tcplib_sock *new_sock;

                  if (this_conn->state == TcpP__TCP_LISTEN) {
                      memcpy(& this_conn->r_ep.sin6_addr, & iph->ip6_src, 16);
                      this_conn->r_ep.sin6_port = tcph->srcport;
                      new_sock = TcpP__tcplib_accept(this_conn, & this_conn->r_ep);
                      if (new_sock != this_conn) {
                          memset(this_conn->r_ep.sin6_addr.in6_u.u6_addr8, 0, 16);
                          this_conn->r_ep.sin6_port = 0;
                          if (new_sock != (void *)0) {
                              memcpy(& new_sock->r_ep.sin6_addr, & iph->ip6_src, 16);
                              new_sock->r_ep.sin6_port = tcph->srcport;
                              TcpP__conn_add_once(new_sock);
                            }
                        }
                      if (new_sock == (void *)0) {
                          TcpP__tcplib_send_rst(iph, tcph);
                          break;
                        }
                      memcpy(& new_sock->l_ep.sin6_addr, & iph->ip6_dst, 16);
                      new_sock->l_ep.sin6_port = tcph->dstport;

                      new_sock->ackno = hdr_seqno + 1;
                      TcpP__circ_buf_init(new_sock->tx_buf, new_sock->tx_buf_len, 
                      0xcafebabe + 1);
                    }
                  else 
#line 419
                    {

                      new_sock = this_conn;
                    }

                  if (new_sock != (void *)0) {
                      new_sock->seqno = 0xcafebabe + 1;
                      new_sock->state = TcpP__TCP_SYN_RCVD;
                      TcpP__tcplib_send_ack(new_sock, 0, TCP_FLAG_ACK | TCP_FLAG_SYN);
                      new_sock->seqno++;
                    }
                  else 
#line 429
                    {
                      memset(& this_conn->r_ep, 0, sizeof(struct sockaddr_in6 ));
                    }
                }
              else {
#line 432
                if (this_conn->state == TcpP__TCP_LISTEN) {
                    TcpP__tcplib_send_rst(iph, tcph);
                    break;
                  }
                }
          if (tcph->flags & TCP_FLAG_ACK) {
              this_conn->state = TcpP__TCP_ESTABLISHED;
            }



          case TcpP__TCP_CLOSE_WAIT: 
            case TcpP__TCP_ESTABLISHED: 
              ESTABLISHED: 


                if (this_conn->state == TcpP__TCP_ESTABLISHED || this_conn->state == TcpP__TCP_FIN_WAIT_1) {
                    if (payload_len > 0) {
                        if ((this_conn->flags & TcpP__TCP_ACKPENDING) == TcpP__TCP_ACKPENDING) {
                          }

                        this_conn->flags++;
                      }



                    ;
#line 458
                    ;
                    ;
#line 459
                    ;



                    if (hdr_ackno > TcpP__circ_get_seqno(this_conn->tx_buf)) {


                        if (this_conn->cwnd <= this_conn->ssthresh) {

                            this_conn->cwnd += this_conn->mss;
                          }
                        else {

                            this_conn->cwnd += this_conn->mss * this_conn->mss / this_conn->cwnd;
                          }



                        this_conn->flags &= ~TcpP__TCP_DUPACKS;

                        TcpP__circ_shorten_head(this_conn->tx_buf, hdr_ackno);


                        if (this_conn->seqno == hdr_ackno) {
                            TcpP__tcplib_extern_acked(this_conn);
                          }
                      }
                    else {
#line 485
                      if (this_conn->seqno > TcpP__circ_get_seqno(this_conn->tx_buf)) {





                          this_conn->flags += 1 << TcpP__TCP_DUPACKS_OFF;



                          if (((this_conn->flags & TcpP__TCP_DUPACKS) >> TcpP__TCP_DUPACKS_OFF) == 2) {
                              this_conn->flags &= ~TcpP__TCP_DUPACKS;
                              ;
#line 497
                              ;





                              TcpP__reset_ssthresh(this_conn);
                              TcpP__tcplib_output(this_conn, TcpP__circ_get_seqno(this_conn->tx_buf));
                              this_conn->timer.retx = 6;
                            }
                        }
                      }

                    if (hdr_seqno != this_conn->ackno) {
                        ;
#line 511
                        ;
                        if (hdr_seqno > this_conn->ackno + this_conn->my_wind || 
                        hdr_seqno < this_conn->ackno - this_conn->my_wind) {

                            TcpP__tcplib_send_rst(iph, tcph);
                          }
                        else 
#line 516
                          {
                            TcpP__tcplib_send_ack(this_conn, 0, TCP_FLAG_ACK);
                            this_conn->flags |= TcpP__TCP_ACKSENT;
                          }
                      }
                    else 
#line 520
                      {
                        ;
#line 521
                        ;

                        if (TcpP__receive_data(this_conn, tcph, len - sizeof(struct ip6_hdr )) > 0 && 
                        this_conn->flags & TcpP__TCP_ACKSENT) {
                            this_conn->flags &= ~TcpP__TCP_ACKSENT;
                            TcpP__tcplib_send_ack(this_conn, 0, TCP_FLAG_ACK);
                          }
                      }


                    if (this_conn->timer.retx == 0) {
                      this_conn->timer.retx = 6;
                      }
                  }
          if (connect_done && !(this_conn->flags & TcpP__TCP_CONNECTDONE)) {
              this_conn->flags |= TcpP__TCP_CONNECTDONE;
              TcpP__tcplib_extern_connectdone(this_conn, 0);
            }

          case TcpP__TCP_TIME_WAIT: 

            if ((
#line 541
            payload_len > 0 && (this_conn->flags & TcpP__TCP_ACKPENDING) >= 1)
             || tcph->flags & TCP_FLAG_FIN) {
                TcpP__tcplib_send_ack(this_conn, payload_len == 0 && tcph->flags & TCP_FLAG_FIN, TCP_FLAG_ACK);



                if (
#line 545
                this_conn->state == TcpP__TCP_ESTABLISHED
                 && tcph->flags & TCP_FLAG_FIN
                 && hdr_seqno == this_conn->ackno) {
                    this_conn->state = TcpP__TCP_CLOSE_WAIT;
                    TcpP__tcplib_extern_closed(this_conn);
                  }
              }
          break;
          case TcpP__TCP_CLOSED: 
            default: 
              rc = -1;
        }
    }
  else 
    {


      ;
#line 562
      ;
      TcpP__tcplib_send_rst(iph, tcph);
    }

  return rc;
}

# 108 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__IP__recv(struct ip6_hdr *iph, 
void *payload, size_t len, 
struct ip6_metadata *meta)
#line 110
{

  ;
#line 112
  ;
  TcpP__tcplib_process(iph, payload);
}

# 74 "../../tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta)
#line 77
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void IPProtocolsP__IP__recv(uint8_t arg_0x7fb94c087a30, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x7fb94c087a30) {
#line 23
    case IANA_TCP:
#line 23
      TcpP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case IANA_UDP:
#line 23
      UdpP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case IANA_ICMP:
#line 23
      ICMPCoreP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      IPProtocolsP__IP__default__recv(arg_0x7fb94c087a30, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 14 "../../tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPProtocolsP__IPPacket__findHeader(struct ip_iovec *payload, uint8_t first_type, uint8_t *search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketC__IPPacket__findHeader(payload, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 24 "../../tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta)
#line 27
{
  int payload_off;
  uint8_t nxt_hdr;
  struct ip_iovec v = { 
  .iov_base = payload, 
  .iov_len = len, 
  .iov_next = (void *)0 };





  nxt_hdr = IPV6_FRAG;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);
  if (payload_off >= 0 && ((uint16_t *)((uint8_t *)payload + payload_off))[1] != 0) {
    return;
    }

  nxt_hdr = 0xff;
  payload_off = IPProtocolsP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);

  if (payload_off >= 0) {
      IPProtocolsP__IP__recv(nxt_hdr, iph, (uint8_t *)payload + payload_off, 
      len - payload_off, meta);
    }
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPProtocolsP__SubIP__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 44 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 389 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 390
{
}

# 23 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPForwardingEngineP__IPRaw__default__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 255 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta)
#line 256
{
  struct ip6_packet pkt;
  struct in6_addr *next_hop;
  size_t len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  uint8_t next_hop_ifindex;
  struct ip_iovec v = { 
  .iov_next = (void *)0, 
  .iov_base = payload, 
  .iov_len = len };



  IPForwardingEngineP__IPRaw__recv(iph, payload, len, meta);

  if (IPForwardingEngineP__IPAddress__isLocalAddress(& iph->ip6_dst)) {


      IPForwardingEngineP__IP__recv(iph, payload, len, meta);
    }
  else 
#line 274
    {

      uint8_t nxt_hdr = IPV6_ROUTING;
      int header_off = IPForwardingEngineP__IPPacket__findHeader(&v, iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, &nxt_hdr);

#line 278
      if (! -- iph->ip6_ctlun.ip6_un1.ip6_un1_hlim) {


          return;
        }

      if (header_off >= 0) {




          return;
        }
      else 
#line 290
        {

          struct route_entry *next_hop_entry = 
          IPForwardingEngineP__ForwardingTable__lookupRoute(iph->ip6_dst.in6_u.u6_addr8, 
          128);

#line 295
          if (next_hop_entry == (void *)0) {



              return;
            }
          next_hop = & next_hop_entry->next_hop;
          next_hop_ifindex = next_hop_entry->ifindex;
        }

      memcpy(& pkt.ip6_hdr, iph, sizeof(struct ip6_hdr ));
      pkt.ip6_data = &v;
      pkt.ip6_inputif = ifindex;




      if (!IPForwardingEngineP__ForwardingEvents__approve(next_hop_ifindex, &pkt, next_hop)) {
        return;
        }
      ;
#line 315
      ;
      ;
#line 316
      ;
      ;
#line 317
      ;
      ;
#line 318
      ;
      ;
#line 319
      ;
      ;
#line 320
      ;
      ;
#line 321
      ;
      ;
#line 322
      ;

      IPForwardingEngineP__do_send(next_hop_ifindex, next_hop, &pkt);
    }
}

# 28 "../../tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPForwardingEngineP__IPForward__recv(ROUTE_IFACE_154, iph, payload, meta);
#line 28
}
#line 28
# 604 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, 
void *payload, 
struct ip6_metadata *meta)
#line 606
{
  IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
}

# 28 "../../tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPNeighborDiscoveryP__IPLower__recv(iph, payload, meta);
#line 28
}
#line 28
# 26 "../../tos/chips/cc2420/Ieee154AddressP.nc"
static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void )
#line 26
{
  return Ieee154AddressP__m_saddr;
}

# 6 "../../tos/interfaces/Ieee154Address.nc"
inline static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void ){
#line 6
  unsigned int __nesc_result;
#line 6

#line 6
  __nesc_result = Ieee154AddressP__Ieee154Address__getShortAddr();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6

inline static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void ){
#line 7
  struct ieee_eui64 __nesc_result;
#line 7

#line 7
  __nesc_result = Ieee154AddressP__Ieee154Address__getExtAddr();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 48 "../../tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64P__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 24 "../../tos/chips/ds2411/Ds2411P.nc"
static inline bool Ds2411P__ds2411_check_crc(const ds2411_serial_t *id)
#line 24
{
  uint8_t crc = 0;
  uint8_t idx;

#line 27
  for (idx = 0; idx < DS2411_DATA_LENGTH; idx++) {
      uint8_t i;

#line 29
      crc = crc ^ id->data[idx];
      for (i = 0; i < 8; i++) {
          if (crc & 0x01) {
              crc = (crc >> 1) ^ 0x8C;
            }
          else 
#line 33
            {
              crc >>= 1;
            }
        }
    }
  return crc == 0;
}

# 23 "../../tos/chips/ds2411/Ds2411PowerControlC.nc"
static inline error_t Ds2411PowerControlC__StdControl__stop(void )
#line 23
{
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t Ds2411P__PowerControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Ds2411PowerControlC__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 66 "../../tos/lib/timer/BusyWait.nc"
inline static void OneWireMasterP__BusyWait__wait(OneWireMasterP__BusyWait__size_type dt){
#line 66
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(dt);
#line 66
}
#line 66
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )40U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool OneWireMasterP__Pin__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )42U &= ~(0x01 << 4);
}

# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput();
#line 78
}
#line 78
# 52 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterP__Pin__makeInput(void ){
#line 44
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )42U |= 0x01 << 4;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterP__Pin__makeOutput(void ){
#line 46
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__makeOutput();
#line 46
}
#line 46
# 66 "../../tos/lib/onewire/OneWireMasterP.nc"
static inline bool OneWireMasterP__readBit(void )
#line 66
{
  bool bit;

#line 68
  OneWireMasterP__Pin__makeOutput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_5US);
  OneWireMasterP__Pin__makeInput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_5US);
  bit = OneWireMasterP__Pin__get();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__SLOT_TIME);
  return bit;
}

#line 89
static inline uint8_t OneWireMasterP__readByte(void )
#line 89
{
  uint8_t i;
#line 90
  uint8_t c = 0;

#line 91
  for (i = 0; i < 8; i++) {
      c >>= 1;
      if (OneWireMasterP__readBit()) {
          c |= 0x80;
        }
    }
  return c;
}

#line 59
static inline void OneWireMasterP__writeZero(void )
#line 59
{
  OneWireMasterP__Pin__makeOutput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_60US);
  OneWireMasterP__Pin__makeInput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_5US);
}

#line 52
static inline void OneWireMasterP__writeOne(void )
#line 52
{
  OneWireMasterP__Pin__makeOutput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_5US);
  OneWireMasterP__Pin__makeInput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__SLOT_TIME);
}

#line 77
static inline void OneWireMasterP__writeByte(uint8_t c)
#line 77
{
  uint8_t j;

#line 79
  for (j = 0; j < 8; j++) {
      if (c & 0x01) {
          OneWireMasterP__writeOne();
        }
      else 
#line 82
        {
          OneWireMasterP__writeZero();
        }
      c >>= 1;
    }
}

# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )41U &= ~(0x01 << 4);
}

# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr();
#line 53
}
#line 53
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__HplGeneralIO__clr();
}

# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void OneWireMasterP__Pin__clr(void ){
#line 41
  /*HplDs2411C.MspGpio*/Msp430GpioC__3__GeneralIO__clr();
#line 41
}
#line 41
# 34 "../../tos/lib/onewire/OneWireMasterP.nc"
static inline bool OneWireMasterP__reset(void )
#line 34
{
  uint16_t i;

#line 36
  OneWireMasterP__Pin__makeInput();
  OneWireMasterP__Pin__clr();
  OneWireMasterP__Pin__makeOutput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__RESET_LOW_TIME);
  OneWireMasterP__Pin__makeInput();
  OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_60US);

  for (i = 0; 
  i < OneWireMasterP__PRESENCE_DETECT_LOW_TIME; 
  i += OneWireMasterP__DELAY_5US, OneWireMasterP__BusyWait__wait(OneWireMasterP__DELAY_5US)) {
      if (!OneWireMasterP__Pin__get()) {
#line 46
        break;
        }
    }
#line 48
  OneWireMasterP__BusyWait__wait(OneWireMasterP__PRESENCE_RESET_HIGH_TIME - OneWireMasterP__DELAY_60US);
  return i < OneWireMasterP__PRESENCE_DETECT_LOW_TIME;
}

#line 100
static inline error_t OneWireMasterP__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len)
#line 100
{
  error_t e = SUCCESS;

#line 102
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 102
    {
      if (OneWireMasterP__reset()) {
          uint8_t i;

#line 105
          OneWireMasterP__writeByte(cmd);
          for (i = 0; i < len; i++) {
              buf[i] = OneWireMasterP__readByte();
            }
        }
      else 
#line 109
        {
          e = EOFF;
        }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  return e;
}

# 10 "../../tos/lib/onewire/OneWireReadWrite.nc"
inline static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = OneWireMasterP__OneWire__read(cmd, buf, len);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 19 "../../tos/chips/ds2411/Ds2411PowerControlC.nc"
static inline error_t Ds2411PowerControlC__StdControl__start(void )
#line 19
{
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t Ds2411P__PowerControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Ds2411PowerControlC__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 41 "../../tos/chips/ds2411/Ds2411P.nc"
static inline error_t Ds2411P__readId(void )
#line 41
{
  error_t e;

  e = Ds2411P__PowerControl__start();
  if (e != SUCCESS) {
#line 45
    return FAIL;
    }
  e = Ds2411P__OneWire__read(0x33, 
  Ds2411P__ds2411id.data, 
  DS2411_DATA_LENGTH);
  Ds2411P__PowerControl__stop();

  if (e == SUCCESS) {
      if (Ds2411P__ds2411_check_crc(&Ds2411P__ds2411id)) {
          Ds2411P__haveId = TRUE;
        }
      else 
#line 55
        {
          e = EINVAL;
        }
    }
  return e;
}

static inline error_t Ds2411P__ReadId48__read(uint8_t *id)
#line 62
{
  error_t e = SUCCESS;

#line 64
  if (!Ds2411P__haveId) {
      e = Ds2411P__readId();
    }
  if (Ds2411P__haveId) {
      memcpy(id, Ds2411P__ds2411id.serial, DS2411_SERIAL_LENGTH);
    }
  return e;
}

# 13 "../../tos/chips/ds2411/ReadId48.nc"
inline static error_t LocalIeeeEui64P__ReadId48__read(uint8_t *id){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = Ds2411P__ReadId48__read(id);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void )
{




  if (0) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )368U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )368U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )368U;
    }
}

# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void )
{
  return /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get();
}

# 64 "../../tos/lib/timer/Counter.nc"
inline static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 9 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static error_t TCPEchoP__TcpEcho__bind(uint16_t port){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = TcpP__Tcp__bind(0U, port);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 4;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__toggle();
#line 58
}
#line 58
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__toggle();
}

# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__toggle();
#line 42
}
#line 42
# 84 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "../../tos/interfaces/Leds.nc"
inline static void TCPEchoP__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 154 "TCPEchoP.nc"
static inline void TCPEchoP__TcpEcho__closed(error_t e)
#line 154
{
  TCPEchoP__Leds__led0Toggle();
  TCPEchoP__TcpEcho__bind(7);
}

# 9 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static error_t HttpdP__Tcp__bind(uint16_t port){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = TcpP__Tcp__bind(1U, port);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 100 "../../tos/interfaces/Leds.nc"
inline static void HttpdP__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 142 "HttpdP.nc"
static inline void HttpdP__Tcp__closed(error_t e)
#line 142
{
  HttpdP__Leds__led2Toggle();

  HttpdP__Tcp__bind(80);
  HttpdP__http_state = HttpdP__S_IDLE;
}

# 159 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Tcp__default__closed(uint8_t cid, error_t e)
#line 159
{
}

# 47 "../../tos/lib/net/blip/interfaces/Tcp.nc"
inline static void TcpP__Tcp__closed(uint8_t arg_0x7fb94acf38f0, error_t e){
#line 47
  switch (arg_0x7fb94acf38f0) {
#line 47
    case 0U:
#line 47
      TCPEchoP__TcpEcho__closed(e);
#line 47
      break;
#line 47
    case 1U:
#line 47
      HttpdP__Tcp__closed(e);
#line 47
      break;
#line 47
    default:
#line 47
      TcpP__Tcp__default__closed(arg_0x7fb94acf38f0, e);
#line 47
      break;
#line 47
    }
#line 47
}
#line 47
# 120 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
inline static int TcpP__conn_checkport(uint16_t port)
#line 120
{
  struct TcpP__tcplib_sock *iter;

  for (iter = TcpP__conns; iter != (void *)0; iter = iter->next) {
      if (iter->l_ep.sin6_port == port) {
        return -1;
        }
    }
#line 127
  return 0;
}

#line 571
static inline int TcpP__tcplib_bind(struct TcpP__tcplib_sock *sock, 
struct sockaddr_in6 *addr)
#line 572
{


  if (TcpP__conn_checkport(addr->sin6_port)) {
    return -1;
    }
  memcpy(& sock->l_ep, addr, sizeof(struct sockaddr_in6 ));

  sock->state = TcpP__TCP_LISTEN;
  return 0;
}

#line 130
static inline struct tcp_hdr *TcpP__find_tcp_hdr(struct ip6_packet *msg)
#line 130
{
  if (msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_TCP) {
      return (struct tcp_hdr *)msg->ip6_data->iov_base;
    }
  return (void *)0;
}

# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool TcpP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t TcpP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_TCP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 376 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 377
{
  return TRUE;
}

# 13 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__initiate(uint8_t arg_0x7fb94c05fbf0, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
    __nesc_result = IPForwardingEngineP__ForwardingEvents__default__initiate(arg_0x7fb94c05fbf0, pkt, next_hop);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 383 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data)
#line 385
{
  return SUCCESS;
}

# 18 "../../tos/lib/net/blip/interfaces/IPForward.nc"
inline static error_t IPForwardingEngineP__IPForward__send(uint8_t arg_0x7fb94c056510, struct in6_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  switch (arg_0x7fb94c056510) {
#line 18
    case ROUTE_IFACE_154:
#line 18
      __nesc_result = IPNeighborDiscoveryP__IPForward__send(next_hop, msg, data);
#line 18
      break;
#line 18
    default:
#line 18
      __nesc_result = IPForwardingEngineP__IPForward__default__send(arg_0x7fb94c056510, next_hop, msg, data);
#line 18
      break;
#line 18
    }
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 129 "../../tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr)
#line 129
{
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) || (
  addr->in6_u.u6_addr8[0] == 0xff && (
  addr->in6_u.u6_addr8[1] & 0x0f) <= 2)) {
    return TRUE;
    }
#line 134
  return FALSE;
}

# 50 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = IPAddressP__IPAddress__isLLAddress(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 195 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt)
#line 195
{
  struct route_entry *next_hop_entry = 
  IPForwardingEngineP__ForwardingTable__lookupRoute(pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8, 128);






  if (IPForwardingEngineP__IPAddress__isLocalAddress(& pkt->ip6_hdr.ip6_dst) && 
  pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {


      return FAIL;
    }
  else {
#line 209
    if (IPForwardingEngineP__IPAddress__isLLAddress(& pkt->ip6_hdr.ip6_dst) && (
    !next_hop_entry || next_hop_entry->prefixlen < 128)) {
#line 225
        pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;

        if (pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
            return IPForwardingEngineP__do_send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt);
          }
        else 
#line 229
          {
            return IPForwardingEngineP__IPForward__send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt, (void *)0);
          }
      }
    else {
#line 232
      if (next_hop_entry) {



          if (!IPForwardingEngineP__ForwardingEvents__initiate(next_hop_entry->ifindex, pkt, 
          & next_hop_entry->next_hop)) {
            return FAIL;
            }
          return IPForwardingEngineP__do_send(next_hop_entry->ifindex, & next_hop_entry->next_hop, pkt);
        }
      }
    }
#line 243
  ;
#line 243
  ;
  ;
#line 244
  ;
  ;
#line 245
  ;
  ;
#line 246
  ;

  return FAIL;
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPForwardingEngineP__IP__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 88 "../../tos/system/PoolP.nc"
static inline /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t */*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *rval = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index];

#line 91
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index] = (void *)0;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free--;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index++;
      if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index == 3) {
          /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static IPForwardingEngineP__Pool__t * IPForwardingEngineP__Pool__get(void ){
#line 97
  struct in6_iid *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 23 "../../tos/chips/cc2420/Ieee154AddressP.nc"
static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void )
#line 23
{
  return Ieee154AddressP__m_panid;
}

# 5 "../../tos/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void ){
#line 5
  unsigned int __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t IPDispatchP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPDispatchP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay)
#line 97
{
  __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->retryDelay.nxdata, retryDelay);
}

# 53 "../../tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  PacketLinkP__PacketLink__setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
# 88 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__PacketLink__setRetries(message_t *msg, uint16_t maxRetries)
#line 88
{
  __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->maxRetries.nxdata, maxRetries);
}

# 46 "../../tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  PacketLinkP__PacketLink__setRetries(msg, maxRetries);
#line 46
}
#line 46
# 89 "../../tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendEntryPool__put(IPDispatchP__SendEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPDispatchP__FragPool__put(IPDispatchP__FragPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 73 "../../tos/system/QueueC.nc"
static inline void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void )
#line 73
{
}

#line 65
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 65
{
  return 12;
}

#line 61
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void )
#line 61
{
  return /*IPDispatchC.QueueC*/QueueC__0__size;
}

#line 101
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal)
#line 101
{
  if (/*IPDispatchC.QueueC*/QueueC__0__Queue__size() < /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__tail] = newVal;
      /*IPDispatchC.QueueC*/QueueC__0__tail++;
      if (/*IPDispatchC.QueueC*/QueueC__0__tail == 12) {
#line 106
        /*IPDispatchC.QueueC*/QueueC__0__tail = 0;
        }
#line 107
      /*IPDispatchC.QueueC*/QueueC__0__size++;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 97 "../../tos/interfaces/Queue.nc"
inline static error_t IPDispatchP__SendQueue__enqueue(IPDispatchP__SendQueue__t  newVal){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 94 "../../tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  CC2420TinyosNetworkP__BarePacket__setPayloadLength(msg, len);
#line 94
}
#line 94
# 117 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__BarePacket__maxPayloadLength(void )
#line 117
{
  return 112 + sizeof(cc2420_header_t );
}

# 106 "../../tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = CC2420TinyosNetworkP__BarePacket__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 125 "../../tos/interfaces/Send.nc"
inline static void * IPDispatchP__Ieee154Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = CC2420TinyosNetworkP__BareSend__getPayload(msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 335 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size)
#line 335
{
  uint8_t *buf = msg->data;

#line 337
  if (buf == (void *)0) {
#line 337
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 343
    return 1;
    }
#line 344
  buf += 4;
  *buf = size;
  return 0;
}

#line 319
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag)
#line 319
{
  uint8_t *buf = msg->data;

#line 321
  if (buf == (void *)0) {
#line 321
    return 1;
    }




  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 328
    return 1;
    }
#line 329
  buf += 2;

  buf[0] = tag >> 8;
  buf[1] = tag & 0xff;
  return 0;
}

#line 299
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size)
#line 299
{
  uint8_t *buf = msg->data;

#line 301
  if (buf == (void *)0) {
#line 301
    return 1;
    }



  if ((*buf >> 3) != LOWPAN_FRAG1_PATTERN && (
  *buf >> 3) != LOWPAN_FRAGN_PATTERN) {
#line 307
    return 1;
    }
#line 308
  size = size & 0x7ff;


  *buf &= 0xf8;
  *buf |= size >> 8;
  buf[1] = size & 0xff;


  return 0;
}

#line 112
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers)
#line 112
{
  uint8_t *buf = packed->data;
  uint16_t len = packed->len;

#line 115
  if (packed == (void *)0) {
#line 115
    return 1;
    }
#line 116
  if (buf == (void *)0) {
#line 116
    return 1;
    }
#line 117
  packed->headers = 0;
#line 134
  if (headers & LOWMSG_FRAG1_HDR) {
      if (len < LOWMSG_FRAG1_LEN) {
#line 135
        return 1;
        }
#line 136
      packed->headers |= LOWMSG_FRAG1_HDR;
      *buf = LOWPAN_FRAG1_PATTERN << 3;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (headers & LOWMSG_FRAGN_HDR) {
      if (len < LOWMSG_FRAGN_LEN) {
#line 142
        return 1;
        }
#line 143
      packed->headers |= LOWMSG_FRAGN_HDR;
      *buf = LOWPAN_FRAGN_PATTERN << 3;
    }
  return 0;
}

# 295 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__pack_nhc_udp(uint8_t **dest, 
size_t *dlen, 
struct ip6_packet *packet, 
int offset)
#line 298
{
  struct udp_hdr udp;

  if (*dlen < 7) {
#line 301
    return -1;
    }
  if (iov_read(packet->ip6_data, offset, sizeof(struct udp_hdr ), (void *)&udp) != 
  sizeof(struct udp_hdr )) {
      return -1;
    }

  (*dest)[0] = LOWPAN_NHC_UDP_PATTERN | LOWPAN_NHC_UDP_PORT_FULL;
  memcpy(*dest + 1, & udp.srcport, 4);
  memcpy(*dest + 5, & udp.chksum, 2);
  *dest += 7;
#line 311
  *dlen -= 7;

  return sizeof(struct udp_hdr );
}










static inline uint8_t IPDispatchP____ipnh_real_length(uint8_t type, struct ip_iovec *pkt, int offset)
#line 325
{
  int start_offset = offset;
#line 326
  int end_offset = offset + 2;
  struct ip6_ext ext;
  struct tlv_hdr tlv;

#line 329
  if (iov_read(pkt, offset, 2, (void *)&ext) != 2) {
    return 0;
    }



  if (type != IPV6_HOP && type != IPV6_DEST) {
    return (ext.ip6e_len + 1) * 8;
    }
  offset += 2;
  for (; ; ) {
      if (offset >= (ext.ip6e_len + 1) * 8 + start_offset) {
#line 340
        break;
        }
#line 341
      if (iov_read(pkt, offset, 2, (void *)&tlv) != 2) {
        return -1;
        }
      if (tlv.type == IPV6_TLV_PAD1) {
          offset += 1;
        }
      else 
#line 346
        {
          offset += 2 + tlv.len;
          if (tlv.type != IPV6_TLV_PADN) {
              end_offset = offset;
            }
        }
    }


  if (offset - start_offset != (ext.ip6e_len + 1) * 8) {
      return 0;
    }



  return end_offset - start_offset;
}

static inline int IPDispatchP__pack_nhc_ipv6_ext(uint8_t **dest, 
size_t *dlen, 
uint8_t *type, 
struct ip6_packet *packet, 
int offset)
#line 368
{
  struct ip6_ext ext;
  uint8_t real_len;


  if (iov_read(packet->ip6_data, offset, 2, (void *)&ext) != 2) {
      return -1;
    }

  if (ext.ip6e_len > *dlen) {
#line 377
    return -1;
    }
  (*dest)[0] = LOWPAN_NHC_IPV6_PATTERN;
  switch (*type) {
      case IPV6_HOP: (*dest)[0] |= LOWPAN_NHC_EID_HOP;
#line 381
      break;
      case IPV6_ROUTING: (*dest)[0] |= LOWPAN_NHC_EID_ROUTING;
#line 382
      break;
      case IPV6_FRAG: (*dest)[0] |= LOWPAN_NHC_EID_FRAG;
#line 383
      break;
      case IPV6_DEST: (*dest)[0] |= LOWPAN_NHC_EID_DEST;
#line 384
      break;
      case IPV6_MOBILITY: (*dest)[0] |= LOWPAN_NHC_EID_MOBILE;
#line 385
      break;
      default: return -1;
    }

  real_len = IPDispatchP____ipnh_real_length(*type, packet->ip6_data, offset);
  if (real_len == 0) {
#line 390
    return -1;
    }


  *type = ext.ip6e_nxt;


  if ((((((
#line 395
  ext.ip6e_nxt == IPV6_HOP || ext.ip6e_nxt == IPV6_ROUTING) || 
  ext.ip6e_nxt == IPV6_FRAG) || ext.ip6e_nxt == IPV6_DEST) || 
  ext.ip6e_nxt == IPV6_MOBILITY) || ext.ip6e_nxt == IPV6_IPV6) || 
  ext.ip6e_nxt == IANA_UDP) {
      (*dest)[0] |= LOWPAN_NHC_NH;
    }
  else 
#line 400
    {

      *dest += 1;
#line 402
      *dlen -= 1;
      (*dest)[0] = ext.ip6e_nxt;
    }
  *dest += 1;
#line 405
  *dlen -= 1;





  (*dest)[0] = real_len - 2;
  *dest += 1;
#line 412
  *dlen -= 1;


  if (iov_read(packet->ip6_data, offset + 2, real_len - 2, *dest) != real_len - 2) {
    return -1;
    }
#line 417
  *dest += real_len - 2;
#line 417
  *dlen -= real_len - 2;



  return (ext.ip6e_len + 1) * 8;
}

static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t *dlen, struct ip6_packet *packet)
#line 424
{
  uint8_t nxt = packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  int offset = 0;
#line 426
  int rv;



  while (((((nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) {
      rv = IPDispatchP__pack_nhc_ipv6_ext(dest, dlen, &nxt, packet, offset);
      if (rv < 0) {
#line 433
        return -1;
        }

      offset += rv;
    }

  if (nxt == IANA_UDP) {
      rv = IPDispatchP__pack_nhc_udp(dest, dlen, packet, offset);
      if (rv < 0) {
#line 441
        return -1;
        }
      offset += rv;
    }
  return offset;
}

#line 265
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags)
#line 265
{

  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff) && 
  IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 120) == 0) {
      *flags |= LOWPAN_IPHC_AM_M_8;
      *buf = addr->in6_u.u6_addr8[15];
      return buf + 1;
    }
  else {
#line 273
    if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 104) == 0) {
        *flags |= LOWPAN_IPHC_AM_M_32;
        *buf = addr->in6_u.u6_addr8[1];
        memcpy(buf + 1, &addr->in6_u.u6_addr8[13], 3);
        return buf + 4;
      }
    else {
#line 278
      if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 88) == 0) {
          *flags |= LOWPAN_IPHC_AM_M_48;
          *buf = addr->in6_u.u6_addr8[1];
          memcpy(buf + 1, &addr->in6_u.u6_addr8[11], 5);
          return buf + 6;
        }
      else 
#line 283
        {
          *flags += LOWPAN_IPHC_AM_M_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

# 17 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx){
#line 17
  int __nesc_result;
#line 17

#line 17
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__matchContext(addr, ctx);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 84 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id)
#line 84
{
  return IPDispatchP__NeighborDiscovery__matchContext(addr, ctx_id);
}

# 155 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, 
struct ip6_hdr *hdr, 
uint8_t *dispatch)
#line 157
{
  if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 1) {
      *dispatch |= LOWPAN_IPHC_HLIM_1;
    }
  else {
#line 160
    if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 64) {
        *dispatch |= LOWPAN_IPHC_HLIM_64;
      }
    else {
#line 162
      if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 255) {
          *dispatch |= LOWPAN_IPHC_HLIM_255;
        }
      else 
#line 164
        {
          *dispatch |= LOWPAN_IPHC_HLIM_NONE;
          * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim;
        }
      }
    }
#line 168
  return buf;
}

#line 143
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 143
{
  uint8_t nxt = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;

  if ((((((
#line 145
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) || 
  nxt == IANA_UDP) {
      *dispatch |= LOWPAN_IPHC_NH_MASK;
    }
  else 
#line 149
    {
      * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;
    }
  return buf;
}

#line 110
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, 
struct ip6_hdr *hdr, 
uint8_t *dispatch)
#line 112
{
  uint32_t flow = ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) & 0x000fffff;
  uint8_t tc = (ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) >> 20) & 0xff;

#line 115
  if (flow == 0 && tc == 0) {

      *dispatch |= LOWPAN_IPHC_TF_NONE;
    }
  else {
#line 118
    if (flow == 0) {
        *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP;
        *buf = (tc >> 2) & 0xff;
        *buf |= (tc << 6) & 0xff;
        buf++;
      }
    else {
#line 123
      if ((tc & 0x3) == tc) {
          *dispatch |= LOWPAN_IPHC_TF_ECN_FL;
          *buf = (tc << 6) & 0xff;
          *buf |= (flow >> 16) & 0x0f;
          *(buf + 1) = (flow >> 8) & 0xff;
          *(buf + 2) = flow & 0xff;
          buf += 3;
        }
      else 
#line 130
        {
          *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP_FL;
          *buf = (tc >> 2) & 0xff;
          *buf |= (tc << 6) & 0xff;

          *(buf + 1) = (flow >> 16) & 0x0f;
          *(buf + 2) = (flow >> 8) & 0xff;
          *(buf + 3) = flow & 0xff;
          buf += 4;
        }
      }
    }
#line 140
  return buf;
}

#line 448
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 450
{
  uint8_t *dispatch;
#line 451
  uint8_t temp_dispatch;
#line 451
  uint8_t ctx_match_length;

  if ((packet->ip6_hdr.ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
      return (void *)0;
    }
#line 469
  dispatch = buf;
  *dispatch = LOWPAN_DISPATCH_BYTE_VAL;
  *(dispatch + 1) = 0;
  buf += 2;

  buf = IPDispatchP__pack_tcfl(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_nh(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_hlim(buf, & packet->ip6_hdr, dispatch);


  ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_src, 
  &temp_dispatch);
  temp_dispatch = 0;
  buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_src, ctx_match_length, 
  & frame->ieee_src, frame->ieee_dstpan, &temp_dispatch);
  *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_SAM_SHIFT;

  if (packet->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {

      ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_dst, 
      &temp_dispatch);
      temp_dispatch = 0;
      buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_dst, ctx_match_length, 
      & frame->ieee_dst, frame->ieee_dstpan, &temp_dispatch);
      *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_DAM_SHIFT;
    }
  else 
#line 494
    {

      buf = IPDispatchP__pack_multicast(buf, & packet->ip6_hdr.ip6_dst, &temp_dispatch);
      *(dispatch + 1) |= (temp_dispatch << LOWPAN_IPHC_DAM_SHIFT) | 
      LOWPAN_IPHC_AM_M;
    }

  return buf;
}

# 153 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx)
#line 156
{
  uint8_t *buf;
#line 157
  uint8_t *lowpan_buf;
#line 157
  uint8_t *ieee_buf = frag;
  uint16_t extra_payload;


  buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);
  if (ctx->offset == 0) {
      int offset = 0;
      size_t buflen;








      buf = IPDispatchP__lowpan_pack_headers(packet, frame, buf, len - (buf - frag));
      if (!buf) {
#line 174
        return -1;
        }

      buflen = len - (buf - ieee_buf);
      offset = IPDispatchP__pack_nhc_chain(&buf, &buflen, packet);
      if (offset < 0) {
#line 179
        return -2;
        }


      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) - offset;


      if (extra_payload > len - (buf - ieee_buf)) {
          struct packed_lowmsg lowmsg;

#line 188
          memmove(lowpan_buf + LOWMSG_FRAG1_LEN, 
          lowpan_buf, 
          buf - lowpan_buf);

          lowmsg.data = lowpan_buf;
          lowmsg.len = LOWMSG_FRAG1_LEN;
          lowmsg.headers = 0;
          IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAG1_HDR);
          IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ));
          IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag);

          lowpan_buf += LOWMSG_FRAG1_LEN;
          buf += LOWMSG_FRAG1_LEN;

          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }


      if (iov_read(packet->ip6_data, offset, extra_payload, buf) != extra_payload) {
          return -3;
        }

      ctx->offset = offset + extra_payload + sizeof(struct ip6_hdr );
      return buf - frag + extra_payload;
    }
  else 
#line 213
    {
      struct packed_lowmsg lowmsg;

#line 215
      buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);


      lowmsg.data = lowpan_buf;
      lowmsg.len = LOWMSG_FRAGN_LEN;
      lowmsg.headers = 0;
      IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAGN_HDR);
      if (IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ))) {
        return -5;
        }
#line 224
      if (IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag)) {
        return -6;
        }
#line 226
      if (IPDispatchP__setFragDgramOffset(&lowmsg, ctx->offset / 8)) {
        return -7;
        }
#line 228
      buf += LOWMSG_FRAGN_LEN;

      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ) - ctx->offset;
      if (extra_payload > len - (buf - ieee_buf)) {
          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }

      if (iov_read(packet->ip6_data, ctx->offset - sizeof(struct ip6_hdr ), extra_payload, buf) != extra_payload) {
          return -4;
        }

      ctx->offset += extra_payload;

      if (extra_payload == 0) {
#line 242
        return 0;
        }
      else {
#line 243
        return lowpan_buf - ieee_buf + LOWMSG_FRAGN_LEN + extra_payload;
        }
    }
}

# 103 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__BarePacket__clear(message_t *msg)
#line 103
{
  memset(msg, 0, sizeof(message_t ));
}

# 65 "../../tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__clear(message_t * msg){
#line 65
  CC2420TinyosNetworkP__BarePacket__clear(msg);
#line 65
}
#line 65
# 88 "../../tos/system/PoolP.nc"
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *rval = /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index];

#line 91
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[/*IPDispatchC.FragPool.PoolP*/PoolP__0__index] = (void *)0;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free--;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__index++;
      if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__index == 12) {
          /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static IPDispatchP__FragPool__t * IPDispatchP__FragPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "../../tos/system/PoolP.nc"
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *rval = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index];

#line 91
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index] = (void *)0;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free--;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index++;
      if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index == 12) {
          /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static IPDispatchP__SendEntryPool__t * IPDispatchP__SendEntryPool__get(void ){
#line 97
  struct send_entry *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "../../tos/system/PoolP.nc"
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *rval = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index];

#line 91
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index] = (void *)0;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free--;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index++;
      if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index == 3) {
          /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "../../tos/interfaces/Pool.nc"
inline static IPDispatchP__SendInfoPool__t * IPDispatchP__SendInfoPool__get(void ){
#line 97
  struct send_info *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 135 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline struct send_info *IPDispatchP__getSendInfo(void )
#line 135
{
  struct send_info *ret = IPDispatchP__SendInfoPool__get();

#line 137
  if (ret == (void *)0) {
#line 137
    return ret;
    }
#line 138
  ret->_refcount = 1;
  ret->upper_data = (void *)0;
  ret->failed = FALSE;
  ret->link_transmissions = 0;
  ret->link_fragments = 0;
  ret->link_fragment_attempts = 0;
  return ret;
}

#line 491
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data)
#line 493
{
  struct lowpan_ctx ctx;
  struct send_info *s_info;
  struct send_entry *s_entry;
  message_t *outgoing;

  int frag_len = 1;
  error_t rc = SUCCESS;

  if (IPDispatchP__state != IPDispatchP__S_RUNNING) {
      return EOFF;
    }



  if (frame_addr->ieee_dst.ieee_addr.saddr == IEEE154_BROADCAST_ADDR) {
    IPDispatchP__ack_required = FALSE;
    }
  else {
#line 511
    IPDispatchP__ack_required = TRUE;
    }

  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc &= ~0xf0;
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc |= 0x60;

  ctx.tag = IPDispatchP__current_local_label++;
  ctx.offset = 0;

  s_info = IPDispatchP__getSendInfo();
  if (s_info == (void *)0) {
      rc = ERETRY;
      goto cleanup_outer;
    }
  s_info->upper_data = data;

  while (frag_len > 0) {
      s_entry = IPDispatchP__SendEntryPool__get();
      outgoing = IPDispatchP__FragPool__get();

      if (s_entry == (void *)0 || outgoing == (void *)0) {
          if (s_entry != (void *)0) {
            IPDispatchP__SendEntryPool__put(s_entry);
            }
#line 534
          if (outgoing != (void *)0) {
            IPDispatchP__FragPool__put(outgoing);
            }

          s_info->failed = TRUE;
          ;
#line 539
          ;
          rc = ERETRY;
          goto done;
        }

      IPDispatchP__BarePacket__clear(outgoing);
      frag_len = IPDispatchP__lowpan_frag_get(IPDispatchP__Ieee154Send__getPayload(outgoing, 0), 
      IPDispatchP__BarePacket__maxPayloadLength(), 
      msg, 
      frame_addr, 
      &ctx);
      if (frag_len < 0) {
          ;
#line 551
          ;
        }

      ;
#line 554
      ;
      IPDispatchP__BarePacket__setPayloadLength(outgoing, frag_len);

      if (frag_len <= 0) {
          IPDispatchP__FragPool__put(outgoing);
          IPDispatchP__SendEntryPool__put(s_entry);
          goto done;
        }

      if (IPDispatchP__SendQueue__enqueue(s_entry) != SUCCESS) {
          ;
          s_info->failed = TRUE;



          IPDispatchP__FragPool__put(outgoing);
          IPDispatchP__SendEntryPool__put(s_entry);
          ;
#line 571
          ;
          goto done;
        }

      s_info->link_fragments++;
      s_entry->msg = outgoing;
      s_entry->info = s_info;


      if (frame_addr->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT && 
      frame_addr->ieee_dst.ieee_addr.saddr == IEEE154_BROADCAST_ADDR) {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 0);
        }
      else 
#line 583
        {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 5);
        }
      IPDispatchP__PacketLink__setRetryDelay(s_entry->msg, 103);

      s_info->_refcount++;
    }


  done: 
    ;
  IPDispatchP__SENDINFO_DECR(s_info);
  IPDispatchP__sendTask__postTask();
  cleanup_outer: 
    return rc;
}

# 18 "../../tos/lib/net/blip/interfaces/IPLower.nc"
inline static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = IPDispatchP__IPLower__send(next_hop, msg, data);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 103 "../../tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index + /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free++;
      ;
      return SUCCESS;
    }
}

# 89 "../../tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendInfoPool__put(IPDispatchP__SendInfoPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPForwardingEngineP__Pool__put(IPForwardingEngineP__Pool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 92 "../../tools/tinyos/c/blip/libtcp/circ.c"
static inline int TcpP__circ_buf_read(void *buf, uint32_t sseqno, 
uint8_t *data, int len)
#line 93
{
  struct TcpP__circ_buf *b = (struct TcpP__circ_buf *)buf;
  uint8_t *readptr;
  int r_len;
#line 96
  int rc = 0;

  TcpP__get_ptr_off_1(b, sseqno, len, &readptr, &r_len);
  memcpy(data, readptr, r_len);
  data += r_len;
  rc += r_len;

  if (r_len != len) {
      readptr = b->data_start;
      r_len = len - r_len > b->data_head - b->data_start ? b->data_head - b->data_start : len - r_len;
      memcpy(data, readptr, r_len);
      rc += r_len;
    }
  return rc;
}

static inline int TcpP__circ_buf_write(char *buf, uint32_t sseqno, 
uint8_t *data, int len)
#line 113
{
  struct TcpP__circ_buf *b = (struct TcpP__circ_buf *)buf;
  uint8_t *writeptr;
  int w_len;


  if (sseqno > b->head_seqno + b->data_len) {
    return -1;
    }
#line 121
  if (len == 0) {
#line 121
    return 0;
    }
  TcpP__get_ptr_off_1(b, sseqno, len, &writeptr, &w_len);

  memcpy(writeptr, data, w_len);
  data += w_len;

  if (w_len != len) {
      writeptr = b->data_start;
      w_len = len - w_len > b->data_head - b->data_start ? b->data_head - b->data_start : len - w_len;
      memcpy(writeptr, data, w_len);
    }

  return 0;
}

# 617 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static inline int TcpP__tcplib_send(struct TcpP__tcplib_sock *sock, void *data, int len)
#line 617
{

  if (sock->state != TcpP__TCP_ESTABLISHED) {
    return -1;
    }
#line 621
  if (sock->seqno - TcpP__circ_get_seqno(sock->tx_buf) + len > sock->tx_buf_len) {
    return -1;
    }
#line 623
  if (TcpP__circ_buf_write(sock->tx_buf, sock->seqno, data, len) < 0) {
    return -1;
    }
  sock->seqno += len;





  sock->timer.retx = 1;





  return 0;
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t UdpP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_UDP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 36 "../../tos/lib/net/blip/UdpP.nc"
static inline uint16_t UdpP__alloc_lport(uint8_t clnt)
#line 36
{
  int i;
#line 37
  int done = 0;
  uint16_t compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;

#line 39
  UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
  while (!done) {
      done = 1;
      for (i = 0; i < UdpP__N_CLIENTS; i++) {
          if (UdpP__local_ports[i] == compare) {
              UdpP__last_localport = UdpP__last_localport < UdpP__LOCAL_PORT_STOP ? UdpP__last_localport + 1 : UdpP__LOCAL_PORT_START;
              compare = (((uint16_t )UdpP__last_localport << 8) | ((uint16_t )UdpP__last_localport >> 8)) & 0xffff;
              done = 0;
              break;
            }
        }
    }
  return UdpP__last_localport;
}

# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 136 "../../tos/lib/net/blip/UdpP.nc"
static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov)
#line 137
{
  error_t rc;
  struct ip6_packet pkt;
  struct udp_hdr udp;
  struct ip_iovec v[1];
  size_t len = iov_len(iov);


  memset((uint8_t *)& pkt.ip6_hdr, 0, sizeof  pkt.ip6_hdr);
  memset((uint8_t *)&udp, 0, sizeof udp);
  memcpy(& pkt.ip6_hdr.ip6_dst, dest->sin6_addr.in6_u.u6_addr8, 16);
  UdpP__IPAddress__setSource(& pkt.ip6_hdr);

  if (UdpP__local_ports[clnt] == 0 && (
  UdpP__local_ports[clnt] = UdpP__alloc_lport(clnt)) == 0) {
      return FAIL;
    }

  udp.srcport = UdpP__local_ports[clnt];
  udp.dstport = dest->sin6_port;
  udp.len = (((uint16_t )(len + sizeof(struct udp_hdr )) << 8) | ((uint16_t )(len + sizeof(struct udp_hdr )) >> 8)) & 0xffff;
  udp.chksum = 0;


  pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_UDP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = udp.len;


  v[0].iov_base = (uint8_t *)&udp;
  v[0].iov_len = sizeof(struct udp_hdr );
  v[0].iov_next = iov;
  pkt.ip6_data = &v[0];

  udp.chksum = (((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) << 8) | ((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) >> 8)) & 0xffff;

  rc = UdpP__IP__send(&pkt);
  ;
  return rc;
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPCoreP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_ICMP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 178 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP__m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 128 "../../tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
#line 97
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 111 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline uint16_t PacketLinkP__PacketLink__getRetryDelay(message_t *msg)
#line 111
{
  return __nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(msg)->retryDelay.nxdata);
}

# 73 "../../tos/lib/timer/Timer.nc"
inline static void PacketLinkP__DelayTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 75 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg)
#line 75
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->ack.nxdata);
}

# 85 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static bool PacketLinkP__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC2420PacketP__Acks__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 71 "../../tos/interfaces/State.nc"
inline static uint8_t PacketLinkP__SendState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(6U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 171 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__SubSend__sendDone(message_t *msg, error_t error)
#line 171
{
  if (PacketLinkP__SendState__getState() == PacketLinkP__S_SENDING) {
      PacketLinkP__totalRetries++;
      if (PacketLinkP__PacketAcknowledgements__wasAcked(msg)) {
          PacketLinkP__signalDone(SUCCESS);
          return;
        }
      else {
#line 178
        if (PacketLinkP__totalRetries < PacketLinkP__PacketLink__getRetries(PacketLinkP__currentSendMsg)) {

            if (PacketLinkP__PacketLink__getRetryDelay(PacketLinkP__currentSendMsg) > 0) {

                PacketLinkP__DelayTimer__startOneShot(PacketLinkP__PacketLink__getRetryDelay(PacketLinkP__currentSendMsg));
              }
            else {

                PacketLinkP__send__postTask();
              }

            return;
          }
        }
    }
  PacketLinkP__signalDone(error);
}

# 100 "../../tos/interfaces/Send.nc"
inline static void DefaultLplP__Send__sendDone(message_t * msg, error_t error){
#line 100
  PacketLinkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 78 "../../tos/lib/timer/Timer.nc"
inline static void DefaultLplP__SendDoneTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(6U);
#line 78
}
#line 78
# 56 "../../tos/interfaces/State.nc"
inline static void DefaultLplP__SendState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(5U);
#line 56
}
#line 56
# 85 "../../tos/interfaces/PacketAcknowledgements.nc"
inline static bool DefaultLplP__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = CC2420PacketP__Acks__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 169 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "../../tos/lib/timer/Timer.nc"
inline static bool DefaultLplP__SendDoneTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(6U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 283 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__SubSend__sendDone(message_t *msg, error_t error)
#line 283
{

  switch (DefaultLplP__SendState__getState()) {
      case S_LPL_SENDING: 
        if (DefaultLplP__SendDoneTimer__isRunning()) {
            if (!DefaultLplP__PacketAcknowledgements__wasAcked(msg)) {
                DefaultLplP__resend__postTask();
                return;
              }
          }
      break;

      case S_LPL_CLEAN_UP: 




        break;

      default: 
        break;
    }

  DefaultLplP__SendState__toIdle();
  DefaultLplP__SendDoneTimer__stop();
  DefaultLplP__startOffTimer();
  DefaultLplP__Send__sendDone(msg, error);
}

# 100 "../../tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 100
  DefaultLplP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 63 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 70 "../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 275 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__shutdown(void )
#line 275
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

#line 244
static inline void CC2420CsmaP__sendDone_task__runTask(void )
#line 244
{
  error_t packetErr;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    packetErr = CC2420CsmaP__sendErr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void PacketLinkP__DelayTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(7U);
#line 78
}
#line 78
# 88 "../../tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__dequeue(void ){
#line 88
  struct send_entry *__nesc_result;
#line 88

#line 88
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 22 "../../tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status){
#line 22
  IPForwardingEngineP__IPForward__sendDone(ROUTE_IFACE_154, status);
#line 22
}
#line 22
# 610 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status)
#line 610
{
  IPNeighborDiscoveryP__IPForward__sendDone(status);
}

# 22 "../../tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__sendDone(struct send_info *status){
#line 22
  IPNeighborDiscoveryP__IPLower__sendDone(status);
#line 22
}
#line 22
# 118 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline bool PacketLinkP__PacketLink__wasDelivered(message_t *msg)
#line 118
{
  return PacketLinkP__PacketAcknowledgements__wasAcked(msg);
}

# 71 "../../tos/interfaces/PacketLink.nc"
inline static bool IPDispatchP__PacketLink__wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = PacketLinkP__PacketLink__wasDelivered(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
#line 59
inline static uint16_t IPDispatchP__PacketLink__getRetries(message_t * msg){
#line 59
  unsigned int __nesc_result;
#line 59

#line 59
  __nesc_result = PacketLinkP__PacketLink__getRetries(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 51 "../../tos/interfaces/State.nc"
inline static void PowerCycleP__SplitControlState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(4U, reqState);
#line 51
}
#line 51
# 160 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline error_t PowerCycleP__SplitControl__stop(void )
#line 160
{
  if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_OFF)) {
      return EALREADY;
    }
  else {
#line 164
    if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_OFF)) {
        return SUCCESS;
      }
    else {
#line 167
      if (!PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON)) {
          return EBUSY;
        }
      }
    }
#line 171
  PowerCycleP__SplitControlState__forceState(PowerCycleP__S_TURNING_OFF);
  PowerCycleP__stopRadio__postTask();
  return SUCCESS;
}

# 130 "../../tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = PowerCycleP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 69 "../../tos/system/QueueC.nc"
static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void )
#line 69
{
  return /*IPDispatchC.QueueC*/QueueC__0__queue[/*IPDispatchC.QueueC*/QueueC__0__head];
}

# 80 "../../tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__head(void ){
#line 80
  struct send_entry *__nesc_result;
#line 80

#line 80
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 600 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error)
#line 600
{
  struct send_entry *s_entry = IPDispatchP__SendQueue__head();

  IPDispatchP__radioBusy = FALSE;

  if (IPDispatchP__state == IPDispatchP__S_STOPPING) {
      IPDispatchP__RadioControl__stop();
      IPDispatchP__state = IPDispatchP__S_STOPPED;
      goto done;
    }

  s_entry->info->link_transmissions += IPDispatchP__PacketLink__getRetries(msg);
  s_entry->info->link_fragment_attempts++;


  if (!IPDispatchP__PacketLink__wasDelivered(msg) && IPDispatchP__ack_required) {
      ;
#line 616
      ;

      s_entry->info->failed = TRUE;
      IPDispatchP__IPLower__sendDone(s_entry->info);
    }
  else {


    if (s_entry->info->link_fragment_attempts == 
    s_entry->info->link_fragments) {
        IPDispatchP__IPLower__sendDone(s_entry->info);
      }
    }
  done: 

    IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();

  IPDispatchP__sendTask__postTask();
}

# 100 "../../tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
#line 100
  IPDispatchP__Ieee154Send__sendDone(msg, error);
#line 100
}
#line 100
# 254 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__ActiveSend__default__sendDone(message_t *msg, error_t error)
#line 254
{
}

# 100 "../../tos/interfaces/Send.nc"
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__ActiveSend__default__sendDone(msg, error);
#line 100
}
#line 100
# 149 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
#line 149
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
#line 152
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

# 100 "../../tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 100
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 104 "../../tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 100 "../../tos/interfaces/Send.nc"
inline static void PacketLinkP__Send__sendDone(message_t * msg, error_t error){
#line 100
  UniqueSendP__SubSend__sendDone(msg, error);
#line 100
}
#line 100
# 380 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info)
#line 381
{
}

# 39 "../../tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static void IPForwardingEngineP__ForwardingEvents__linkResult(uint8_t arg_0x7fb94c05fbf0, struct in6_addr *dest, struct send_info *info){
#line 39
    IPForwardingEngineP__ForwardingEvents__default__linkResult(arg_0x7fb94c05fbf0, dest, info);
#line 39
}
#line 39
# 78 "../../tos/lib/timer/Timer.nc"
inline static void DefaultLplP__OffTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(5U);
#line 78
}
#line 78
# 267 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__SubControl__stopDone(error_t error)
#line 267
{
  if (!error) {


      if (
#line 270
      DefaultLplP__SendState__getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP__SendState__getState() == S_LPL_SENDING) {

          DefaultLplP__startRadio__postTask();
        }
      else {
          DefaultLplP__OffTimer__stop();
          DefaultLplP__SendDoneTimer__stop();
        }
    }
}

# 51 "../../tos/interfaces/State.nc"
inline static void PowerCycleP__RadioPowerState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(3U, reqState);
#line 51
}
#line 51
# 208 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__SubControl__stopDone(error_t error)
#line 208
{
  PowerCycleP__RadioPowerState__forceState(PowerCycleP__S_OFF);


  if (PowerCycleP__finishSplitControlRequests()) {
      return;
    }
  else {
#line 215
    if (PowerCycleP__isDutyCycling()) {
        PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
      }
    }
}

# 138 "../../tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
#line 138
  PowerCycleP__SubControl__stopDone(error);
#line 138
  DefaultLplP__SubControl__stopDone(error);
#line 138
}
#line 138
# 265 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__stopDone_task__runTask(void )
#line 265
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

# 51 "../../tos/interfaces/State.nc"
inline static void DefaultLplP__RadioPowerState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(3U, reqState);
#line 51
}
#line 51
# 256 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__SubControl__startDone(error_t error)
#line 256
{
  if (!error) {
      DefaultLplP__RadioPowerState__forceState(DefaultLplP__S_ON);


      if (
#line 260
      DefaultLplP__SendState__getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP__SendState__getState() == S_LPL_SENDING) {
          DefaultLplP__initializeSend();
        }
    }
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t PowerCycleP__getCca__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__getCca);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 196 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__SubControl__startDone(error_t error)
#line 196
{
  PowerCycleP__RadioPowerState__forceState(PowerCycleP__S_ON);


  if (PowerCycleP__finishSplitControlRequests()) {
      return;
    }
  else {
#line 203
    if (PowerCycleP__isDutyCycling()) {
        PowerCycleP__getCca__postTask();
      }
    }
}

# 113 "../../tos/interfaces/SplitControl.nc"
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
#line 113
  PowerCycleP__SubControl__startDone(error);
#line 113
  DefaultLplP__SubControl__startDone(error);
#line 113
}
#line 113
# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set();
#line 40
}
#line 40
# 196 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__release(void )
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
#line 199
        CC2420ControlP__SpiResource__release();

        {
#line 199
          __nesc_atomic_end(__nesc_atomic); 
#line 199
          return __nesc_temp;
        }
      }
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420CsmaP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 268 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 268
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 271
            FAIL;

            {
#line 271
              __nesc_atomic_end(__nesc_atomic); 
#line 271
              return __nesc_temp;
            }
          }
        }
#line 273
      CC2420ControlP__SRXON__strobe();
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 86 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__enable(void )
#line 86
{
#line 86
  P1IE |= 1 << 0;
}

# 42 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port10__enable();
#line 42
}
#line 42
# 118 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  {
    if (l2h) {
#line 120
      P1IES &= ~(1 << 0);
      }
    else {
#line 121
      P1IES |= 1 << 0;
      }
  }
}

# 67 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port10__edge(low_to_high);
#line 67
}
#line 67
# 52 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "../../tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 157 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__StdControl__start(void )
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 168 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__StdControl__start(void )
#line 168
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 169
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "../../tos/interfaces/StdControl.nc"
inline static error_t CC2420CsmaP__SubControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 257 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__startDone_task__runTask(void )
#line 257
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

# 107 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline uint8_t CC2420TinyosNetworkP__BarePacket__payloadLength(message_t *msg)
#line 107
{
  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 109
  return __nesc_ntoh_leuint8(hdr->length.nxdata) + 1 - MAC_FOOTER_SIZE;
}

# 78 "../../tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = CC2420TinyosNetworkP__BarePacket__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 45 "../../tos/interfaces/State.nc"
inline static error_t PacketLinkP__SendState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(6U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 130 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline error_t PacketLinkP__Send__send(message_t *msg, uint8_t len)
#line 130
{
  error_t error;

#line 132
  if (PacketLinkP__SendState__requestState(PacketLinkP__S_SENDING) == SUCCESS) {

      PacketLinkP__currentSendMsg = msg;
      PacketLinkP__currentSendLen = len;
      PacketLinkP__totalRetries = 0;

      if (PacketLinkP__PacketLink__getRetries(msg) > 0) {
          PacketLinkP__PacketAcknowledgements__requestAck(msg);
        }

      if ((error = PacketLinkP__SubSend__send(msg, len)) != SUCCESS) {
          PacketLinkP__SendState__toIdle();
        }

      return error;
    }
  return EBUSY;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = PacketLinkP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 42 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
#line 42
  nx_struct cc2420_header_t *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 45 "../../tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(2U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "../../tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 125 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static inline error_t CC2420TinyosNetworkP__BareSend__send(message_t *msg, uint8_t len)
#line 125
{
  CC2420TinyosNetworkP__BarePacket__setPayloadLength(msg, len);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_BARE;
  return CC2420TinyosNetworkP__SubSend__send(msg, 0);
}

# 75 "../../tos/interfaces/Send.nc"
inline static error_t IPDispatchP__Ieee154Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = CC2420TinyosNetworkP__BareSend__send(msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 129 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline uint16_t PowerCycleP__PowerCycle__getSleepInterval(void )
#line 129
{
  return PowerCycleP__sleepInterval;
}

# 48 "../../tos/chips/cc2420/interfaces/PowerCycle.nc"
inline static uint16_t DefaultLplP__PowerCycle__getSleepInterval(void ){
#line 48
  unsigned int __nesc_result;
#line 48

#line 48
  __nesc_result = PowerCycleP__PowerCycle__getSleepInterval();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 139 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline uint16_t DefaultLplP__LowPowerListening__getLocalWakeupInterval(void )
#line 139
{
  return DefaultLplP__PowerCycle__getSleepInterval();
}

# 57 "../../tos/interfaces/LowPowerListening.nc"
inline static uint16_t IPDispatchP__LowPowerListening__getLocalWakeupInterval(void ){
#line 57
  unsigned int __nesc_result;
#line 57

#line 57
  __nesc_result = DefaultLplP__LowPowerListening__getLocalWakeupInterval();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 149 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, 
uint16_t intervalMs)
#line 150
{
  __nesc_hton_uint16(DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata, intervalMs);
}

# 65 "../../tos/interfaces/LowPowerListening.nc"
inline static void IPDispatchP__LowPowerListening__setRemoteWakeupInterval(message_t * msg, uint16_t intervalMs){
#line 65
  DefaultLplP__LowPowerListening__setRemoteWakeupInterval(msg, intervalMs);
#line 65
}
#line 65
# 53 "../../tos/system/QueueC.nc"
static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*IPDispatchC.QueueC*/QueueC__0__size == 0;
}

# 50 "../../tos/interfaces/Queue.nc"
inline static bool IPDispatchP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 438 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__sendTask__runTask(void )
#line 438
{
  struct send_entry *s_entry;

  if (IPDispatchP__radioBusy || IPDispatchP__state != IPDispatchP__S_RUNNING) {
#line 441
    return;
    }
#line 442
  if (IPDispatchP__SendQueue__empty()) {
#line 442
    return;
    }
  s_entry = IPDispatchP__SendQueue__head();


  IPDispatchP__LowPowerListening__setRemoteWakeupInterval(s_entry->msg, 
  IPDispatchP__LowPowerListening__getLocalWakeupInterval());


  if (s_entry->info->failed) {
      ;
      goto fail;
    }


  if (
#line 456
  IPDispatchP__Ieee154Send__send(s_entry->msg, 
  IPDispatchP__BarePacket__payloadLength(s_entry->msg)) != SUCCESS) {
      ;
      goto fail;
    }
  else 
#line 460
    {
      IPDispatchP__radioBusy = TRUE;
    }

  return;
  fail: 
    ;
#line 466
  ;
  IPDispatchP__sendTask__postTask();
  ;



  s_entry->info->failed = TRUE;
  IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 180 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 180
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x7fb94ba4ee10){
#line 102
  switch (arg_0x7fb94ba4ee10) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x7fb94ba4ee10);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7fb94b898450){
#line 102
  switch (arg_0x7fb94b898450) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7fb94b898450);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 251 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 251
{
}

# 88 "../../tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x7fb94ba45060, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 88
  switch (arg_0x7fb94ba45060) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 88
      break;
#line 88
    default:
#line 88
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x7fb94ba45060, txBuf, rxBuf, len, error);
#line 88
      break;
#line 88
    }
#line 88
}
#line 88
# 244 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
#line 244
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
#line 227
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

# 486 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 487
{
}

# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__set();
#line 40
}
#line 40
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "../../tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
#line 53
  nx_struct cc2420_metadata_t *__nesc_result;
#line 53

#line 53
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 389 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
#line 389
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

# 63 "../../tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 70 "../../tos/interfaces/PacketTimeStamp.nc"
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
#line 70
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
#line 70
}
#line 70








inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
#line 78
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
#line 78
}
#line 78
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__7__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 59 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

# 73 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "../../tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 209 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

# 62 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
#line 51
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr();
#line 41
}
#line 41
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 382 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
#line 382
{
  /* atomic removed: atomic calls only */
#line 383
  {
    unsigned char __nesc_temp = 
#line 383
    CC2420ControlP__hwAutoAckDefault;

#line 383
    return __nesc_temp;
  }
}

# 112 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 389 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 389
{
  /* atomic removed: atomic calls only */
#line 390
  {
    unsigned char __nesc_temp = 
#line 390
    CC2420ControlP__autoAckEnabled;

#line 390
    return __nesc_temp;
  }
}

# 117 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 530 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 531
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen __attribute((unused))  = sizeof(message_t ) - ((unsigned short )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

#line 535
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
#line 597
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
#line 626
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
#line 634
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 648
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

# 370 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x7fb94bb53a00, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x7fb94bb53a00) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x7fb94bb53a00, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 205 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
#line 205
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 206
    CC2420CsmaP__sendErr = err;
#line 206
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

# 358 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__Resend__sendDone(message_t *p_msg, error_t error)
#line 358
{
}

# 73 "../../tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
#line 73
  DefaultLplP__Resend__sendDone(p_msg, error);
#line 73
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
#line 73
}
#line 73
# 454 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 455
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 459
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
#line 468
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
#line 469
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 476
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

# 668 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 668
{
}

# 373 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "../../tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x7fb94bb53a00, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x7fb94bb53a00) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x7fb94bb53a00, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 533 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxctrl(void )
#line 533
{
  /* atomic removed: atomic calls only */
#line 534
  {
    CC2420ControlP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
    3 << CC2420_TXCTRL_PA_CURRENT)) | (
    1 << CC2420_TXCTRL_RESERVED)) | ((
    31 & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
  }
}

# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "../../tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 224 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 224
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 227
            FAIL;

            {
#line 227
              __nesc_atomic_end(__nesc_atomic); 
#line 227
              return __nesc_temp;
            }
          }
        }
#line 230
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));

      CC2420ControlP__writeTxctrl();
    }
#line 252
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__Resource__granted(void )
#line 214
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420CsmaP__Resource__granted();
#line 102
}
#line 102
# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__clr();
#line 41
}
#line 41
# 413 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 413
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ControlP__syncDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 53 "../../tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 399 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__SyncResource__granted(void )
#line 399
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

#line 545
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 545
{
}

# 63 "../../tos/interfaces/Read.nc"
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
#line 63
  CC2420ControlP__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 120 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__RssiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 287 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 291
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 293
            status;

            {
#line 293
              __nesc_atomic_end(__nesc_atomic); 
#line 293
              return __nesc_temp;
            }
          }
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
#line 297
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 55 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 418 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__RssiResource__granted(void )
#line 418
{
  uint16_t data = 0;

#line 420
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

# 416 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline void CC2420TransmitP__SpiResource__granted(void )
#line 416
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    {
      cur_state = CC2420TransmitP__m_state;
    }
#line 421
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 437
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
#line 439
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

# 513 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 513
{







  CC2420ReceiveP__receive();
}

# 367 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "../../tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x7fb94bb54660){
#line 102
  switch (arg_0x7fb94bb54660) {
#line 102
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ControlP__SyncResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
#line 102
      CC2420ControlP__RssiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
#line 102
      CC2420TransmitP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x7fb94bb54660);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 63 "../../tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 63 "../../tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 54 "../../tos/chips/cc2420/Ieee154AddressP.nc"
static inline void Ieee154AddressP__CC2420Config__syncDone(error_t err)
#line 54
{
}

# 709 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
#line 709
{
}

# 55 "../../tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 55
  CC2420ReceiveP__CC2420Config__syncDone(error);
#line 55
  Ieee154AddressP__CC2420Config__syncDone(error);
#line 55
}
#line 55
# 469 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDone__runTask(void )
#line 469
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 470
    CC2420ControlP__m_sync_busy = FALSE;
#line 470
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 88 "../../tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SyncResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 323 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Config__sync(void )
#line 323
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 326
            FAIL;

            {
#line 326
              __nesc_atomic_end(__nesc_atomic); 
#line 326
              return __nesc_temp;
            }
          }
        }
#line 329
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
#line 332
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
#line 335
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 465
static inline void CC2420ControlP__sync__runTask(void )
#line 465
{
  CC2420ControlP__CC2420Config__sync();
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(133, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "../../tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(msg);
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPNeighborDiscoveryP__IP_RS__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*IPNeighborDiscoveryC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(ICMPV6_CODE_RS, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 7 "../../tos/interfaces/Ieee154Address.nc"
inline static ieee154_laddr_t IPNeighborDiscoveryP__Ieee154Address__getExtAddr(void ){
#line 7
  struct ieee_eui64 __nesc_result;
#line 7

#line 7
  __nesc_result = Ieee154AddressP__Ieee154Address__getExtAddr();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 180 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline uint8_t IPNeighborDiscoveryP__add_sllao(uint8_t *data)
#line 180
{
  struct nd_option_slla_t sllao;

  sllao.type = ND6_OPT_SLLAO;
  sllao.option_length = 2;

  sllao.ll_addr = IPNeighborDiscoveryP__Ieee154Address__getExtAddr();

  ip_memcpy(data, (uint8_t *)&sllao, sizeof(struct nd_option_slla_t ));
  memset(data + sizeof(struct nd_option_slla_t ), 0, 
  16 - sizeof(struct nd_option_slla_t ));
  return 16;
}

static inline void IPNeighborDiscoveryP__send_rs_task__runTask(void )
#line 194
{
  struct nd_router_solicitation_t msg;

  struct ip6_packet pkt;
  struct ip_iovec v[1];

  uint8_t sllao_len;
  uint8_t data[60];
  uint8_t *cur = data;
  uint16_t length = 0;



  msg.icmpv6.type = ICMP_TYPE_ROUTER_SOL;
  msg.icmpv6.code = ICMPV6_CODE_RS;
  __nesc_hton_uint16(msg.icmpv6.checksum.nxdata, 0);
  __nesc_hton_uint32(msg.reserved.nxdata, 0);
  ip_memcpy(cur, (uint8_t *)&msg, sizeof(struct nd_router_solicitation_t ));
#line 211
  cur += sizeof(struct nd_router_solicitation_t );
#line 211
  length += sizeof(struct nd_router_solicitation_t );
#line 211
  ;

  sllao_len = IPNeighborDiscoveryP__add_sllao(cur);
  cur += sllao_len;
  length += sllao_len;

  v[0].iov_base = data;
  v[0].iov_len = length;
  v[0].iov_next = (void *)0;

  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

  pkt.ip6_data = &v[0];

  ;
#line 226
  ;

  memcpy(& pkt.ip6_hdr.ip6_dst, &IPNeighborDiscoveryP__ALL_ROUTERS_ADDR, 16);
  IPNeighborDiscoveryP__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);
  IPNeighborDiscoveryP__IP_RS__send(&pkt);
}

# 392 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded(void )
#line 392
{
}

# 43 "../../tos/lib/net/blip/interfaces/ForwardingTableEvents.nc"
inline static void IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded(void ){
#line 43
  IPForwardingEngineP__ForwardingTableEvents__default__defaultRouteAdded();
#line 43
}
#line 43
# 95 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__defaultRouteAddedTask__runTask(void )
#line 95
{
  IPForwardingEngineP__ForwardingTableEvents__defaultRouteAdded();
}

# 103 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 18 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t TCPEchoP__Status__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(1U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 186 "../../tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__get(udp_statistics_t *buf)
#line 186
{
}

# 29 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void TCPEchoP__UDPStats__get(TCPEchoP__UDPStats__stat_str *stats){
#line 29
  UdpP__BlipStatistics__get(stats);
#line 29
}
#line 29
# 642 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__get(ip_statistics_t *statistics)
#line 642
{
#line 656
  memcpy(statistics, &IPDispatchP__stats, sizeof(ip_statistics_t ));
}

# 29 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void TCPEchoP__IPStats__get(TCPEchoP__IPStats__stat_str *stats){
#line 29
  IPDispatchP__BlipStatistics__get(stats);
#line 29
}
#line 29
# 64 "../../tos/lib/timer/Timer.nc"
inline static void TCPEchoP__StatusTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 118 "TCPEchoP.nc"
static inline void TCPEchoP__StatusTimer__fired(void )
#line 118
{
  unsigned int __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 120
  if (!TCPEchoP__timerStarted) {
      TCPEchoP__StatusTimer__startPeriodic(1024 * 75L);
      TCPEchoP__timerStarted = TRUE;
    }

  (__nesc_temp42 = TCPEchoP__stats.seqno.nxdata, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
  __nesc_hton_uint16(TCPEchoP__stats.sender.nxdata, TOS_NODE_ID);

  TCPEchoP__IPStats__get(& TCPEchoP__stats.ip);
  TCPEchoP__UDPStats__get(& TCPEchoP__stats.udp);

  TCPEchoP__Status__sendto(&TCPEchoP__route_dest, &TCPEchoP__stats, sizeof TCPEchoP__stats);
}

# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t IPNeighborDiscoveryP__send_rs_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IPNeighborDiscoveryP__send_rs_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 312 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__RSTimer__fired(void )
#line 312
{
  IPNeighborDiscoveryP__rs_transmission_count++;

  if (IPNeighborDiscoveryP__rs_transmission_count >= MAX_RTR_SOLICITATIONS) {


      IPNeighborDiscoveryP__RSTimer__startOneShot(MAX_RTR_SOLICITATION_INTERVAL);
    }
  else 
#line 319
    {
      IPNeighborDiscoveryP__RSTimer__startOneShot(RTR_SOLICITATION_INTERVAL);
    }

  IPNeighborDiscoveryP__send_rs_task__postTask();
}

# 177 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline void PowerCycleP__OnTimer__fired(void )
#line 177
{
  if (PowerCycleP__isDutyCycling()) {
      if (PowerCycleP__RadioPowerState__getState() == PowerCycleP__S_OFF) {
          PowerCycleP__ccaChecks = 0;





          PowerCycleP__getCca__postTask();
        }
      else {

          PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
        }
    }
}

# 71 "../../tos/interfaces/State.nc"
inline static uint8_t DefaultLplP__SplitControlState__getState(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = StateImplP__State__getState(4U);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 327 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__OffTimer__fired(void )
#line 327
{





  if (
#line 332
  DefaultLplP__SplitControlState__getState() == DefaultLplP__S_OFF
   || (DefaultLplP__PowerCycle__getSleepInterval() > 0
   && DefaultLplP__SplitControlState__getState() != DefaultLplP__S_OFF
   && DefaultLplP__SendState__getState() == S_LPL_NOT_SENDING)) {
      DefaultLplP__stopRadio__postTask();
    }
}

# 51 "../../tos/interfaces/State.nc"
inline static void DefaultLplP__SendState__forceState(uint8_t reqState){
#line 51
  StateImplP__State__forceState(5U, reqState);
#line 51
}
#line 51
# 344 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline void DefaultLplP__SendDoneTimer__fired(void )
#line 344
{
  if (DefaultLplP__SendState__getState() == S_LPL_SENDING) {

      DefaultLplP__SendState__forceState(S_LPL_CLEAN_UP);
    }
}

# 202 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static inline void PacketLinkP__DelayTimer__fired(void )
#line 202
{
  if (PacketLinkP__SendState__getState() == PacketLinkP__S_SENDING) {
      PacketLinkP__send__postTask();
    }
}

# 250 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__reconstruct_age(void *elt)
#line 250
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)elt;

#line 252
  if (recon->r_timeout != T_UNUSED) {
    ;
    }
#line 253
  ;


  switch (recon->r_timeout) {
      case T_ACTIVE: 
        recon->r_timeout = T_ZOMBIE;
#line 258
      break;
      case T_FAILED1: 
        recon->r_timeout = T_FAILED2;
#line 260
      break;
      case T_ZOMBIE: 
        case T_FAILED2: 

          ;
#line 264
      ;
      if (recon->r_buf != (void *)0) {
          ;
#line 266
          ;
          ip_free(recon->r_buf);
        }
      recon->r_timeout = T_UNUSED;
      recon->r_buf = (void *)0;
      break;
    }
}

#line 286
static inline void IPDispatchP__ExpireTimer__fired(void )
#line 286
{
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_age);
}

# 641 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static inline void TcpP__tcplib_retx_expire(struct TcpP__tcplib_sock *sock)
#line 641
{

  sock->retxcnt++;
  switch (sock->state) {
      case TcpP__TCP_ESTABLISHED: 
        if (TcpP__circ_get_seqno(sock->tx_buf) != sock->seqno) {
            ;
#line 647
            ;

            TcpP__reset_ssthresh(sock);

            sock->cwnd = sock->mss;

            TcpP__tcplib_output(sock, TcpP__circ_get_seqno(sock->tx_buf));
            sock->timer.retx = 6;
          }
        else 
#line 655
          {
            sock->retxcnt--;
          }
      break;
      case TcpP__TCP_SYN_SENT: 
        TcpP__tcplib_send_ack(sock, 0, TCP_FLAG_SYN);
      sock->timer.retx = 6;
      break;
      case TcpP__TCP_LAST_ACK: 
        case TcpP__TCP_FIN_WAIT_1: 
          TcpP__tcplib_send_ack(sock, 1, TCP_FLAG_ACK | TCP_FLAG_FIN);
      sock->timer.retx = TcpP__TCPLIB_2MSL;
      break;
      case TcpP__TCP_FIN_WAIT_2: 
        case TcpP__TCP_TIME_WAIT: 
          sock->state = TcpP__TCP_CLOSED;

      TcpP__tcplib_extern_closedone(sock);
      break;
      default: 
        break;
    }










  if (sock->retxcnt > TcpP__TCPLIB_GIVEUP) {
      sock->state = TcpP__TCP_TIME_WAIT;
      sock->timer.retx = TcpP__TCPLIB_TIMEWAIT_LEN;
    }
}

#line 735
static inline int TcpP__tcplib_timer_process(void )
#line 735
{
  struct TcpP__tcplib_sock *iter;

#line 737
  for (iter = TcpP__conns; iter != (void *)0; iter = iter->next) {
      if (iter->timer.retx > 0 && -- iter->timer.retx == 0) {
        TcpP__tcplib_retx_expire(iter);
        }
#line 740
      if ((iter->flags & TcpP__TCP_ACKPENDING) >= 2) {
          TcpP__tcplib_send_ack(iter, 0, TCP_FLAG_ACK);
        }
    }
  return 0;
}

# 104 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Timer__fired(void )
#line 104
{
  TcpP__tcplib_timer_process();
}

# 17 "../../tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 39 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 46 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno)
#line 46
{
  struct ip6_packet *ipmsg = (struct ip6_packet *)ip_malloc(sizeof(struct ip6_packet ) + 
  sizeof(icmp_echo_hdr_t ) + 
  sizeof(nx_uint32_t ));
  icmp_echo_hdr_t *e_hdr = (icmp_echo_hdr_t *)(ipmsg + 1);
  nx_uint32_t *sendTime = (nx_uint32_t *)(e_hdr + 1);
  struct ip_iovec v;

  if (ipmsg == (void *)0) {
#line 54
    return;
    }

  v.iov_base = (void *)(ipmsg + 1);
  v.iov_len = sizeof(icmp_echo_hdr_t ) + sizeof(nx_uint32_t );
  v.iov_next = (void *)0;
  ipmsg->ip6_data = &v;


  __nesc_hton_uint8(e_hdr->type.nxdata, ICMP_TYPE_ECHO_REQUEST);
  __nesc_hton_uint8(e_hdr->code.nxdata, 0);
  __nesc_hton_uint16(e_hdr->cksum.nxdata, 0);
  __nesc_hton_uint16(e_hdr->ident.nxdata, ICMPPingP__ping_ident);
  __nesc_hton_uint16(e_hdr->seqno.nxdata, seqno);
  __nesc_hton_uint32((*sendTime).nxdata, ICMPPingP__PingTimer__getNow());


  memset(& ipmsg->ip6_hdr, 0, sizeof(struct ip6_hdr ));
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )v.iov_len << 8) | ((uint16_t )v.iov_len >> 8)) & 0xffff;
  memcpy(& ipmsg->ip6_hdr.ip6_dst, dest->in6_u.u6_addr8, 16);
  ICMPPingP__IPAddress__setSource(& ipmsg->ip6_hdr);

  __nesc_hton_uint16(e_hdr->cksum.nxdata, msg_cksum(& ipmsg->ip6_hdr, ipmsg->ip6_data, IANA_ICMP));

  ICMPPingP__IP_ECHO__send(ipmsg);
  ip_free(ipmsg);
}

# 78 "../../tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(10U);
#line 78
}
#line 78
# 286 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n)
#line 286
{
  int len;

#line 288
  len = snprintf(UDPShellP__reply_buf, MAX_REPLY_LEN, UDPShellP__ping_summary, ping_n, ping_rcv);
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, len);
}

# 129 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m)
#line 129
{
}

# 10 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingDone(uint8_t arg_0x7fb94aaca190, uint16_t ping_rcv, uint16_t ping_n){
#line 10
  switch (arg_0x7fb94aaca190) {
#line 10
    case 0U:
#line 10
      UDPShellP__ICMPPing__pingDone(ping_rcv, ping_n);
#line 10
      break;
#line 10
    default:
#line 10
      ICMPPingP__ICMPPing__default__pingDone(arg_0x7fb94aaca190, ping_rcv, ping_n);
#line 10
      break;
#line 10
    }
#line 10
}
#line 10
# 97 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__PingTimer__fired(void )
#line 97
{

  if (ICMPPingP__ping_seq == ICMPPingP__ping_n) {
      ICMPPingP__ICMPPing__pingDone(ICMPPingP__ping_ident, ICMPPingP__ping_rcv, ICMPPingP__ping_n);
      ICMPPingP__PingTimer__stop();
      return;
    }
  ICMPPingP__sendPing(&ICMPPingP__ping_dest, ICMPPingP__ping_seq);
  ICMPPingP__ping_seq++;
}

# 204 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fb94c11b3f0){
#line 83
  switch (arg_0x7fb94c11b3f0) {
#line 83
    case 0U:
#line 83
      TCPEchoP__StatusTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      IPNeighborDiscoveryP__RSTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      PowerCycleP__OnTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      DefaultLplP__OffTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      DefaultLplP__SendDoneTimer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      PacketLinkP__DelayTimer__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      IPDispatchP__ExpireTimer__fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      TcpP__Timer__fired();
#line 83
      break;
#line 83
    case 10U:
#line 83
      ICMPPingP__PingTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fb94c11b3f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "../../tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4420 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 17 "../../tos/chips/cc2420/Ieee154AddressP.nc"
static inline error_t Ieee154AddressP__Init__init(void )
#line 17
{
  Ieee154AddressP__m_saddr = TOS_NODE_ID;
  Ieee154AddressP__m_panid = TOS_AM_GROUP;
  return SUCCESS;
}

# 48 "../../tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64P__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 94 "../../tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 94
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 96
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

# 55 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 120 "../../tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

  /* atomic removed: atomic calls only */
#line 122
  myAddr = ActiveMessageAddressC__addr;
  return myAddr;
}

#line 73
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "../../tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__10__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__8__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__HplGeneralIO__makeOutput();
}

# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__makeOutput();
#line 46
}
#line 46
# 129 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 129
{
  int i;
#line 130
  int t;

#line 131
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 15;

  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  for (i = 0; i < 4; i++) {
      t = CC2420ControlP__m_ext_addr.data[i];
      CC2420ControlP__m_ext_addr.data[i] = CC2420ControlP__m_ext_addr.data[7 - i];
      CC2420ControlP__m_ext_addr.data[7 - i] = t;
    }





  CC2420ControlP__addressRecognition = TRUE;



  CC2420ControlP__hwAddressRecognition = TRUE;








  CC2420ControlP__autoAckEnabled = TRUE;



  CC2420ControlP__hwAutoAckDefault = TRUE;
  CC2420ControlP__hwAddressRecognition = TRUE;





  return SUCCESS;
}

# 81 "../../tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 7U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 55 "../../tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 128 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__reconstruct_clear(void *ent)
#line 128
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)ent;

#line 130
  memset((uint8_t *)& recon->r_meta, 0, sizeof(struct ip6_metadata ));
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

#line 660
static inline void IPDispatchP__BlipStatistics__clear(void )
#line 660
{
  memset((uint8_t *)&IPDispatchP__stats, 0, sizeof(ip_statistics_t ));
}

#line 188
static inline error_t IPDispatchP__Init__init(void )
#line 188
{


  ip_malloc_init();

  IPDispatchP__BlipStatistics__clear();


  table_init(&IPDispatchP__recon_cache, IPDispatchP__recon_data, sizeof(struct lowpan_reconstruct ), N_RECONSTRUCTIONS);
  table_map(&IPDispatchP__recon_cache, IPDispatchP__reconstruct_clear);

  return SUCCESS;
}

# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4421 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 61 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__HplGeneralIO__makeInput();
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__9__GeneralIO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__5__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__HplGeneralIO__makeInput();
}

# 44 "../../tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__4__GeneralIO__makeInput();
#line 44
}
#line 44
# 160 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 160
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 151 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 151
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

# 52 "../../tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 62 "../../tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 71 "../../tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 55 "../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 118 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static inline error_t DefaultLplP__Init__init(void )
#line 118
{
  DefaultLplP__dutyCycling = FALSE;
  return SUCCESS;
}

# 65 "../../tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[i] = &/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[i];
    }
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__free = 12;
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[i] = &/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[i];
    }
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free = 12;
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[i] = &/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[i];
    }
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free = 3;
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[i] = &/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool[i];
    }
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free = 3;
  /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index = 0;
  return SUCCESS;
}

# 180 "../../tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__clear(void )
#line 180
{
}

#line 54
static inline error_t UdpP__Init__init(void )
#line 54
{
  UdpP__BlipStatistics__clear();
  memset((uint8_t *)UdpP__local_ports, 0, sizeof(uint16_t ) * UdpP__N_CLIENTS);
  return SUCCESS;
}

# 92 "../../tos/lib/net/blip/TcpP.nc"
static inline error_t TcpP__Init__init(void )
#line 92
{
  int i;

#line 94
  for (i = 0; i < 2U; i++) {
      TcpP__tcplib_init_sock(&TcpP__socks[i]);
    }
  return SUCCESS;
}

# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = TcpP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, UdpP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, DefaultLplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IPDispatchP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Ieee154AddressP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 60 "HttpdP.nc"
static inline void HttpdP__Boot__booted(void )
#line 60
{
  HttpdP__http_state = HttpdP__S_IDLE;
  HttpdP__Tcp__bind(80);
}

# 12 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t TCPEchoP__Status__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(1U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
inline static error_t TCPEchoP__Echo__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(0U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 34 "../../tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void TCPEchoP__IPStats__clear(void ){
#line 34
  IPDispatchP__BlipStatistics__clear();
#line 34
}
#line 34
# 135 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static inline error_t PowerCycleP__SplitControl__start(void )
#line 135
{
  if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON)) {
      return EALREADY;
    }
  else {
#line 139
    if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_ON)) {
        return SUCCESS;
      }
    else {
#line 142
      if (!PowerCycleP__SplitControlState__isState(PowerCycleP__S_OFF)) {
          return EBUSY;
        }
      }
    }
  PowerCycleP__SplitControlState__forceState(PowerCycleP__S_TURNING_ON);

  if (PowerCycleP__sleepInterval > 0) {

      PowerCycleP__stopRadio__postTask();
      return SUCCESS;
    }
  else {
      PowerCycleP__startRadio__postTask();
      return SUCCESS;
    }
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = PowerCycleP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 153 "../../tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__SplitControl__start(void )
#line 153
{
  return IPDispatchP__RadioControl__start();
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t IPStackControlP__SubSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPDispatchP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 25 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void )
#line 25
{
  if (IPStackControlP__blip_started) {
#line 26
    return EALREADY;
    }
#line 27
  return IPStackControlP__SubSplitControl__start();
}

# 104 "../../tos/interfaces/SplitControl.nc"
inline static error_t TCPEchoP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPStackControlP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 74 "TCPEchoP.nc"
static inline void TCPEchoP__Boot__booted(void )
#line 74
{
  ;
  TCPEchoP__RadioControl__start();
  TCPEchoP__timerStarted = FALSE;

  TCPEchoP__IPStats__clear();








  ;
  TCPEchoP__Echo__bind(7);
  TCPEchoP__TcpEcho__bind(7);
  TCPEchoP__Status__bind(7001);
}

# 64 "../../tos/lib/timer/Timer.nc"
inline static void TcpP__Timer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(9U, dt);
#line 64
}
#line 64
# 100 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__Boot__booted(void )
#line 100
{
  TcpP__Timer__startPeriodic(512);
}

# 12 "../../tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(2U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 302 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id)
#line 302
{
  return (void *)0;
}

# 3 "../../tos/lib/net/blip/shell/RegisterShellCommand.nc"
inline static char *UDPShellP__RegisterShellCommand__getCommandName(uint8_t arg_0x7fb94ab3d800){
#line 3
  char *__nesc_result;
#line 3

#line 3
    __nesc_result = UDPShellP__RegisterShellCommand__default__getCommandName(arg_0x7fb94ab3d800);
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 64 "../../tos/lib/timer/Counter.nc"
inline static UDPShellP__Uptime__size_type UDPShellP__Uptime__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 93 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__Boot__booted(void )
#line 93
{
  int i;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      UDPShellP__uptime = 0;

      UDPShellP__boot_time = UDPShellP__Uptime__get();
    }
#line 99
    __nesc_atomic_end(__nesc_atomic); }

  for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
      UDPShellP__externals[i].c_name[UDPShellP__CMDNAMSIZ - 1] = '\0';
      strncpy(UDPShellP__externals[i].c_name, UDPShellP__RegisterShellCommand__getCommandName(i), UDPShellP__CMDNAMSIZ);
      UDPShellP__externals[i].c_len = strlen(UDPShellP__externals[i].c_name);
    }
  UDPShellP__UDP__bind(2000);
}

# 82 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__RoutingControl__default__stop(void )
#line 82
{
#line 82
  return SUCCESS;
}

# 105 "../../tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = IPStackControlP__RoutingControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 71 "../../tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__IPAddress__changed(bool valid)
#line 71
{
  if (valid) {
      IPStackControlP__RoutingControl__start();
    }
  else 
#line 74
    {
      IPStackControlP__RoutingControl__stop();
    }
}

# 395 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid)
#line 395
{
}

# 149 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IPAddress__changed(bool valid)
#line 149
{
}

# 615 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid)
#line 615
{
}

# 197 "../../tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IPAddress__changed(bool global_valid)
#line 197
{
}

# 150 "../../tos/lib/net/blip/TcpP.nc"
static inline void TcpP__IPAddress__changed(bool valid)
#line 150
{
}

# 133 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IPAddress__changed(bool global_valid)
#line 133
{
}

# 54 "../../tos/lib/net/blip/interfaces/IPAddress.nc"
inline static void IPAddressP__IPAddress__changed(bool valid){
#line 54
  ICMPPingP__IPAddress__changed(valid);
#line 54
  TcpP__IPAddress__changed(valid);
#line 54
  UdpP__IPAddress__changed(valid);
#line 54
  IPNeighborDiscoveryP__IPAddress__changed(valid);
#line 54
  ICMPCoreP__IPAddress__changed(valid);
#line 54
  IPForwardingEngineP__IPAddress__changed(valid);
#line 54
  IPStackControlP__IPAddress__changed(valid);
#line 54
}
#line 54
# 137 "../../tos/lib/net/blip/IPAddressP.nc"
static inline error_t IPAddressP__SetIPAddress__setAddress(struct in6_addr *addr)
#line 137
{

  if (IPAddressP__m_valid_addr && memcmp(addr, &IPAddressP__m_addr, sizeof(struct in6_addr )) == 0) {

      return EALREADY;
    }

  IPAddressP__m_addr = *addr;
#line 161
  ;
#line 161
  ;
  ;
#line 162
  ;
  ;
#line 163
  ;

  IPAddressP__m_valid_addr = TRUE;
  IPAddressP__IPAddress__changed(TRUE);
  return SUCCESS;
}

# 20 "../../tos/lib/net/blip/interfaces/SetIPAddress.nc"
inline static error_t StaticIPAddressTosIdP__SetIPAddress__setAddress(struct in6_addr *addr){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = IPAddressP__SetIPAddress__setAddress(addr);
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 21 "../../tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static void StaticIPAddressTosIdP__NeighborDiscovery__setPrefix(struct in6_addr *newprefix, uint8_t length, uint32_t valid_lifetime, uint32_t preferred_lifetime){
#line 21
  IPNeighborDiscoveryP__NeighborDiscovery__setPrefix(newprefix, length, valid_lifetime, preferred_lifetime);
#line 21
}
#line 21
# 55 "../../tos/lib/net/blip/StaticIPAddressTosIdP.nc"
static inline void StaticIPAddressTosIdP__Boot__booted(void )
#line 55
{
  struct in6_addr addr;

#line 57
  memset(&addr, 0, sizeof addr);
  inet_pton6("fec0::", &addr);
  StaticIPAddressTosIdP__NeighborDiscovery__setPrefix(&addr, 64, IP6_INFINITE_LIFETIME, 
  IP6_INFINITE_LIFETIME);
  addr.in6_u.u6_addr16[7] = (((uint16_t )TOS_NODE_ID << 8) | ((uint16_t )TOS_NODE_ID >> 8)) & 0xffff;
  StaticIPAddressTosIdP__SetIPAddress__setAddress(&addr);
}

# 60 "../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  StaticIPAddressTosIdP__Boot__booted();
#line 60
  UDPShellP__Boot__booted();
#line 60
  TcpP__Boot__booted();
#line 60
  TCPEchoP__Boot__booted();
#line 60
  HttpdP__Boot__booted();
#line 60
}
#line 60
# 402 "../../tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "../../tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "../../tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TACCTL0 & 0x0010 || 
  TACCTL1 & 0x0010) || 
  TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  ME1 & (0x80 | 0x40) && U0TCTL & 0x20)) || (
  ME2 & (0x20 | 0x10) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 99
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 100
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 390 "../../tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 390
{
  return m1 < m2 ? m1 : m2;
}

# 112 "../../tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 79 "../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 79
  McuSleepC__McuSleep__sleep();
#line 79
}
#line 79
# 80 "../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 85
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 154
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 166
        __nesc_atomic_end(__nesc_atomic); }
      watch_task_id = nextTask;
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 212 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 212
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 103 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 218 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
#line 218
{
  CC2420CsmaP__startDone_task__postTask();
}

# 76 "../../tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 76
  CC2420CsmaP__CC2420Power__startOscillatorDone();
#line 76
}
#line 76
# 61 "../../tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 441 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 441
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "../../tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "../../tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "../../tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~0x40;
}

# 177 "../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 231 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
#line 231
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
#line 238
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

# 65 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x7fb94b8d8cd0, uint8_t data){
#line 54
  switch (arg_0x7fb94b8d8cd0) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x7fb94b8d8cd0, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "../../tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x7fb94b8d7b80){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x7fb94b8d7b80);
#line 39
}
#line 39
# 59 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 249 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 249
{
}

# 64 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x7fb94b8d8cd0){
#line 49
  switch (arg_0x7fb94b8d8cd0) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x7fb94b8d8cd0);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 122 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__action_help(int argc, char **argv)
#line 122
{
  int i = 0;
  char *pos = UDPShellP__reply_buf;

#line 125
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__help_str, strlen(UDPShellP__help_str));
  if (UDPShellP__N_EXTERNAL > 0) {
      strcpy(pos, "\t\t[");
      pos += 3;
      for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
          if (UDPShellP__externals[i].c_len + 4 < MAX_REPLY_LEN - (pos - UDPShellP__reply_buf)) {
              memcpy(pos, UDPShellP__externals[i].c_name, UDPShellP__externals[i].c_len);
              pos += UDPShellP__externals[i].c_len;
              if (i < UDPShellP__N_EXTERNAL - 1) {
                  pos[0] = ',';
                  pos[1] = ' ';
                  pos += 2;
                }
            }
          else 
#line 138
            {
              pos[0] = '.';
              pos[1] = '.';
              pos[2] = '.';
              pos += 3;
              break;
            }
        }
      * pos++ = ']';
      * pos++ = '\n';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, pos - UDPShellP__reply_buf);
    }
}

# 64 "../../tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(10U, dt);
#line 64
}
#line 64
#line 92
inline static bool ICMPPingP__PingTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(10U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 84 "../../tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n)
#line 86
{
  if (ICMPPingP__PingTimer__isRunning()) {
#line 87
    return ERETRY;
    }
#line 88
  ICMPPingP__PingTimer__startPeriodic(period);
  memcpy(&ICMPPingP__ping_dest, target, 16);
  ICMPPingP__ping_n = n;
  ICMPPingP__ping_seq = 0;
  ICMPPingP__ping_rcv = 0;
  ICMPPingP__ping_ident = client;
  return SUCCESS;
}

# 6 "../../tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = ICMPPingP__ICMPPing__ping(0U, target, period, n);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 201 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__action_ident(int argc, char **argv)
#line 201
{
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__ident_string, strlen(UDPShellP__ident_string));
}

# 422 "../../tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 425
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x001A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fb94c70f8b0){
#line 39
  switch (arg_0x7fb94c70f8b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fb94c70f8b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 176 "../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
#line 178
      {
        unsigned char __nesc_temp = 
#line 178
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 178
          __nesc_atomic_end(__nesc_atomic); 
#line 178
          return __nesc_temp;
        }
      }
    }
#line 181
    __nesc_atomic_end(__nesc_atomic); }
}

# 107 "../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 5);
}

# 80 "../../tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 80 "../../tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__1__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__1__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__1__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 49 "../../tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 260 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 133 "../../tos/system/StateImplP.nc"
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP__state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 134 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 2;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 247 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P__ME1 &= ~0x40;
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 147 "../../tos/lib/timer/TransformAlarmC.nc"
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

#line 107
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
}

# 850 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__signalDone(error_t err)
#line 850
{
  /* atomic removed: atomic calls only */
#line 851
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

# 171 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

# 788 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__congestionBackoff(void )
#line 788
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 789
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
#line 792
    __nesc_atomic_end(__nesc_atomic); }
}

# 69 "../../tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 795 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__acquireSpiResource(void )
#line 795
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

#line 797
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

# 126 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "../../tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 177 "../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 265 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 107 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 743 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__attemptSend(void )
#line 743
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 747
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
#line 754
            __nesc_atomic_end(__nesc_atomic); 
#line 754
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
#line 773
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
#line 779
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}

# 318 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 321
            0;

            {
#line 321
              __nesc_atomic_end(__nesc_atomic); 
#line 321
              return __nesc_temp;
            }
          }
        }
    }
#line 325
    __nesc_atomic_end(__nesc_atomic); }
#line 325
  return CC2420SpiP__SpiByte__write(addr);
}

# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 14 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "../../tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "../../tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 136 "../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
  {
    nextTask = SchedulerBasicP__popTask();

    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 146
          FALSE;

#line 146
          return __nesc_temp;
        }
      }
  }
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 181
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fb94c816450){
#line 75
  switch (arg_0x7fb94c816450) {
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case IPForwardingEngineP__defaultRouteAddedTask:
#line 75
      IPForwardingEngineP__defaultRouteAddedTask__runTask();
#line 75
      break;
#line 75
    case IPNeighborDiscoveryP__send_rs_task:
#line 75
      IPNeighborDiscoveryP__send_rs_task__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__sync:
#line 75
      CC2420ControlP__sync__runTask();
#line 75
      break;
#line 75
    case CC2420ControlP__syncDone:
#line 75
      CC2420ControlP__syncDone__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case IPDispatchP__sendTask:
#line 75
      IPDispatchP__sendTask__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__startDone_task:
#line 75
      CC2420CsmaP__startDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__stopDone_task:
#line 75
      CC2420CsmaP__stopDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420CsmaP__sendDone_task:
#line 75
      CC2420CsmaP__sendDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case CC2420TinyosNetworkP__grantTask:
#line 75
      CC2420TinyosNetworkP__grantTask__runTask();
#line 75
      break;
#line 75
    case DefaultLplP__send:
#line 75
      DefaultLplP__send__runTask();
#line 75
      break;
#line 75
    case DefaultLplP__resend:
#line 75
      DefaultLplP__resend__runTask();
#line 75
      break;
#line 75
    case DefaultLplP__startRadio:
#line 75
      DefaultLplP__startRadio__runTask();
#line 75
      break;
#line 75
    case DefaultLplP__stopRadio:
#line 75
      DefaultLplP__stopRadio__runTask();
#line 75
      break;
#line 75
    case PowerCycleP__stopRadio:
#line 75
      PowerCycleP__stopRadio__runTask();
#line 75
      break;
#line 75
    case PowerCycleP__startRadio:
#line 75
      PowerCycleP__startRadio__runTask();
#line 75
      break;
#line 75
    case PowerCycleP__getCca:
#line 75
      PowerCycleP__getCca__runTask();
#line 75
      break;
#line 75
    case PacketLinkP__send:
#line 75
      PacketLinkP__send__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fb94c816450);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 65 "../../tos/chips/cc2420/packet/CC2420PacketP.nc"
static error_t CC2420PacketP__Acks__requestAck(message_t *p_msg)
#line 65
{
  unsigned char *__nesc_temp48;

#line 66
  (__nesc_temp48 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 169 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static error_t DefaultLplP__Send__send(message_t *msg, uint8_t len)
#line 169
{
  if (DefaultLplP__SplitControlState__getState() == DefaultLplP__S_OFF) {

      return EOFF;
    }

  if (DefaultLplP__SendState__requestState(S_LPL_SENDING) == SUCCESS) {
      DefaultLplP__currentSendMsg = msg;
      DefaultLplP__currentSendLen = len;


      DefaultLplP__OffTimer__stop();
      DefaultLplP__SendDoneTimer__stop();

      if (DefaultLplP__RadioPowerState__getState() == DefaultLplP__S_ON) {
          DefaultLplP__initializeSend();
          return SUCCESS;
        }
      else {
          DefaultLplP__startRadio__postTask();
        }

      return SUCCESS;
    }

  return EBUSY;
}

# 143 "../../tos/system/StateImplP.nc"
static uint8_t StateImplP__State__getState(uint8_t id)
#line 143
{
  uint8_t theState;

#line 145
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    theState = StateImplP__state[id];
#line 145
    __nesc_atomic_end(__nesc_atomic); }
  return theState;
}

# 391 "../../tos/chips/cc2420/lpl/DefaultLplP.nc"
static void DefaultLplP__initializeSend(void )
#line 391
{

  if (
#line 392
  DefaultLplP__LowPowerListening__getRemoteWakeupInterval(DefaultLplP__currentSendMsg)
   > DefaultLplP__ONE_MESSAGE) {

      if (__nesc_ntoh_leuint16(DefaultLplP__CC2420PacketBody__getHeader(DefaultLplP__currentSendMsg)->dest.nxdata) == IEEE154_BROADCAST_ADDR) {
          DefaultLplP__PacketAcknowledgements__noAck(DefaultLplP__currentSendMsg);
        }
      else 
#line 397
        {

          DefaultLplP__PacketAcknowledgements__requestAck(DefaultLplP__currentSendMsg);
        }

      DefaultLplP__SendDoneTimer__startOneShot(
      DefaultLplP__LowPowerListening__getRemoteWakeupInterval(DefaultLplP__currentSendMsg) + 20);
    }

  DefaultLplP__send__postTask();
}

# 144 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 73 "../../tos/lib/timer/Timer.nc"
static void DefaultLplP__OffTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 81 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static error_t CC2420CsmaP__SplitControl__start(void )
#line 81
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
#line 86
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
#line 89
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 93
  return EBUSY;
}

static error_t CC2420CsmaP__SplitControl__stop(void )
#line 96
{
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);
      CC2420CsmaP__shutdown();
      return SUCCESS;
    }
  else {
#line 102
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPED)) {
        return EALREADY;
      }
    else {
#line 105
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_TRANSMITTING)) {
          CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);

          return SUCCESS;
        }
      else {
#line 110
        if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
            return SUCCESS;
          }
        }
      }
    }
#line 114
  return EBUSY;
}

# 179 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP__StdControl__stop(void )
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 171 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__StdControl__stop(void )
#line 171
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 813
static void CC2420ReceiveP__reset_state(void )
#line 813
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 815
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 216 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 216
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 286 "../../tos/chips/cc2420/lpl/PowerCycleP.nc"
static bool PowerCycleP__finishSplitControlRequests(void )
#line 286
{
  if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_OFF)) {
      PowerCycleP__SplitControlState__forceState(PowerCycleP__S_OFF);
      PowerCycleP__SplitControl__stopDone(SUCCESS);
      return TRUE;
    }
  else {
#line 292
    if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_ON)) {

        PowerCycleP__SplitControlState__forceState(PowerCycleP__S_ON);
        PowerCycleP__SplitControl__startDone(SUCCESS);
        return TRUE;
      }
    }
  return FALSE;
}

# 154 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 73 "../../tos/lib/timer/Timer.nc"
static void PowerCycleP__OnTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 223 "../../tos/chips/cc2420/csma/CC2420CsmaP.nc"
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
#line 223
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

# 825 "../../tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP__loadTXFIFO(void )
#line 825
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen __attribute((unused))  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

#line 846
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

# 305 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 205 "../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 207
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 182
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
#line 182
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 187
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
            }
#line 199
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
        }
    }
#line 201
    __nesc_atomic_end(__nesc_atomic); }
}

# 302 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
#line 302
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 303
    {
      unsigned int __nesc_temp = 
#line 303
      CC2420ControlP__m_short_addr;

      {
#line 303
        __nesc_atomic_end(__nesc_atomic); 
#line 303
        return __nesc_temp;
      }
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
}

# 14 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, 
size_t len)
#line 17
{
  uint8_t *unpack_point;
  struct packed_lowmsg msg;
  uint8_t recalculate_checksum = 0;
  int ret;
  uint16_t unpacked_len = 0;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 27
    return -1;
    }

  unpack_point = IPDispatchP__getLowpanPayload(&msg);
  len -= unpack_point - pkt;

  if (len <= 0) {
      return -4;
    }


  if (IPDispatchP__hasFrag1Header(&msg)) {
      IPDispatchP__getFragDgramTag(&msg, & recon->r_tag);
      IPDispatchP__getFragDgramSize(&msg, & recon->r_size);
    }
  else 
#line 41
    {
      recon->r_size = LIB6LOWPAN_MAX_LEN + LOWPAN_LINK_MTU;
    }
  recon->r_buf = ip_malloc(recon->r_size);
  if (! recon->r_buf) {
#line 45
    return -2;
    }
#line 46
  memset(recon->r_buf, 0, recon->r_size);
  recon->r_app_len = (void *)0;

  if (len < 1) {
      ip_free(recon->r_buf);
      return -5;
    }
  if (*unpack_point == LOWPAN_IPV6_PATTERN) {

      unpack_point++;
#line 55
      len--;
      if (len < sizeof(struct ip6_hdr )) {

          ip_free(recon->r_buf);
          return -7;
        }
      if (len > recon->r_size) {
          ip_free(recon->r_buf);
          return -6;
        }
      memcpy(recon->r_buf, unpack_point, len);
      unpacked_len = len;
    }
  else 
#line 67
    {

      ret = IPDispatchP__lowpan_unpack_headers(recon, 
      frame_addr, 
      &unpack_point, 
      &len, 
      &recalculate_checksum, 
      &unpacked_len);
      if (ret < 0) {
          ip_free(recon->r_buf);
          return -3;
        }
    }

  if (!IPDispatchP__hasFrag1Header(&msg)) {
      recon->r_size = unpacked_len;
    }
  recon->r_bytes_rcvd = unpacked_len;
  ((struct ip6_hdr *)recon->r_buf)->ip6_ctlun.ip6_un1.ip6_un1_plen = ((
  (uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;

  if (recon->r_app_len) {
      * recon->r_app_len = ((
      (uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) << 8) | ((uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) >> 8)) & 0xffff;
    }







  if (recalculate_checksum) {
      struct ip6_hdr *hdr = (struct ip6_hdr *)recon->r_buf;


      if (hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_UDP) {
          struct ip_iovec v[2];
          struct udp_hdr *udph;

          udph = (struct udp_hdr *)recon->r_transport_header;
          udph->chksum = 0;

          v[0].iov_base = (uint8_t *)udph;
          v[0].iov_len = sizeof(struct udp_hdr );
          v[0].iov_next = v + 1;
          v[1].iov_base = (uint8_t *)(udph + 1);
          v[1].iov_len = ((((uint16_t )* recon->r_app_len >> 8) | ((uint16_t )* recon->r_app_len << 8)) & 0xffff) - sizeof(struct udp_hdr );
          v[1].iov_next = (void *)0;

          udph->chksum = (((uint16_t )msg_cksum(hdr, v, IANA_UDP) << 8) | ((uint16_t )msg_cksum(hdr, v, IANA_UDP) >> 8)) & 0xffff;
        }
    }




  return 0;
}

# 624 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static int IPDispatchP__unpack_address(struct in6_addr *addr, 
uint8_t dispatch, 
int context, 
uint8_t **buf, 
size_t *len, 
ieee154_addr_t *frame, 
ieee154_panid_t pan, 
uint8_t *stateful)
#line 631
{
  memset(addr, 0, 16);
  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {

      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_128: 
            if (*len < 16) {
#line 637
              return -1;
              }
#line 638
          memcpy(addr, *buf, 16);
          *buf += 16;
#line 639
          *len -= 16;
          return 0;
          case LOWPAN_IPHC_AM_64: 
            if (*len < 8) {
#line 642
              return -1;
              }
#line 643
          addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[8], *buf, 8);
          *buf += 8;
#line 645
          *len -= 8;
          return 0;
          case LOWPAN_IPHC_AM_16: 
            if (*len < 2) {
#line 648
              return -1;
              }
#line 649
          addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          memcpy(&addr->in6_u.u6_addr8[14], *buf, 2);
          *buf += 2;
#line 651
          *len -= 2;
          return 0;
          default: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          if (frame->ieee_mode == IEEE154_ADDR_EXT) {
              int i;

#line 657
              for (i = 0; i < 8; i++) 
                addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
              addr->in6_u.u6_addr8[8] ^= 0x2;
            }
          else 
#line 660
            {
              addr->in6_u.u6_addr8[11] = 0xff;
              addr->in6_u.u6_addr8[12] = 0xfe;
              addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
            }
          return 0;
        }
    }
  else 
#line 667
    {

      if ((dispatch & LOWPAN_IPHC_AM_MASK) == LOWPAN_IPHC_AM_128) {

          return 0;
        }
      else 
#line 672
        {
          int ctxlen = IPDispatchP__lowpan_extern_read_context(addr, context);

#line 674
          *stateful = 1;
          switch (dispatch & LOWPAN_IPHC_AM_MASK) {
              case LOWPAN_IPHC_AM_64: 
                if (*len < 8) {
#line 677
                  return -1;
                  }
#line 678
              memcpy(&addr->in6_u.u6_addr8[8], *buf, 8);
              *buf += 8;
#line 679
              *len -= 8;
              return 0;
              case LOWPAN_IPHC_AM_16: 
                if (*len < 2) {
#line 682
                  return -1;
                  }
#line 683
              memcpy(&addr->in6_u.u6_addr8[14], *buf, 2);
              *buf += 2;
#line 684
              *len -= 2;
              return 0;
              case LOWPAN_IPHC_AM_0: 


                if (ctxlen <= 64 && frame->ieee_mode == IEEE154_ADDR_EXT) {
                    int i;

#line 691
                    for (i = 0; i < 8; i++) 
                      addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
                    addr->in6_u.u6_addr8[8] ^= 0x2;
                  }
                else {
#line 694
                  if (ctxlen <= 112) {
                      memset(&addr->in6_u.u6_addr8[8], 0, 8);
                      addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
                    }
                  }
#line 698
              return 0;
            }
        }
    }
  return -2;
}

# 205 "../../tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon)
#line 205
{
  struct ip6_hdr *iph = (struct ip6_hdr *)recon->r_buf;




  ;
#line 211
  ;
  ;
#line 212
  ;
  ;
#line 213
  ;
  ;
#line 214
  ;
  ;
#line 215
  ;
  ;
#line 216
  ;


  iph->ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;
  IPDispatchP__IPLower__recv(iph, (void *)(iph + 1), & recon->r_meta);


  ip_free(recon->r_buf);
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

# 90 "../../tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr)
#line 90
{
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t eui = IPAddressP__Ieee154Address__getExtAddr();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {


      if (
#line 96
      IPAddressP__m_short_addr && 
      addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {
          if (((((uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff) == saddr) {
              return TRUE;
            }
          else 
#line 101
            {
              return FALSE;
            }
        }

      return addr->in6_u.u6_addr8[8] == (eui.data[7] ^ 0x2) && 
      addr->in6_u.u6_addr8[9] == eui.data[6] && 
      addr->in6_u.u6_addr8[10] == eui.data[5] && 
      addr->in6_u.u6_addr8[11] == eui.data[4] && 
      addr->in6_u.u6_addr8[12] == eui.data[3] && 
      addr->in6_u.u6_addr8[13] == eui.data[2] && 
      addr->in6_u.u6_addr8[14] == eui.data[1] && 
      addr->in6_u.u6_addr8[15] == eui.data[0];
    }
  else {
#line 115
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) <= 2) {

            return TRUE;
          }
      }
    else {
#line 121
      if (memcmp(addr->in6_u.u6_addr8, IPAddressP__m_addr.in6_u.u6_addr8, 16) == 0) {
          return TRUE;
        }
      }
    }
#line 124
  return FALSE;
}

# 29 "../../tos/chips/cc2420/Ieee154AddressP.nc"
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void )
#line 29
{
  ieee154_laddr_t addr = Ieee154AddressP__LocalIeeeEui64__getId();
  int i;
  uint8_t tmp;


  for (i = 0; i < 4; i++) {
      tmp = addr.data[i];
      addr.data[i] = addr.data[7 - i];
      addr.data[7 - i] = tmp;
    }
  return addr;
}

# 17 "../../tos/chips/ds2411/LocalIeeeEui64P.nc"
static ieee_eui64_t LocalIeeeEui64P__LocalIeeeEui64__getId(void )
#line 17
{
  uint8_t buf[6] = { 0 };
  error_t e;

  if (!LocalIeeeEui64P__have_id) {
      e = LocalIeeeEui64P__ReadId48__read(buf);
      if (e == SUCCESS) {
          LocalIeeeEui64P__eui.data[0] = IEEE_EUI64_COMPANY_ID_0;
          LocalIeeeEui64P__eui.data[1] = IEEE_EUI64_COMPANY_ID_1;
          LocalIeeeEui64P__eui.data[2] = IEEE_EUI64_COMPANY_ID_2;



          LocalIeeeEui64P__eui.data[3] = IEEE_EUI64_SERIAL_ID_0;
          LocalIeeeEui64P__eui.data[4] = IEEE_EUI64_SERIAL_ID_1;


          LocalIeeeEui64P__eui.data[5] = buf[2];
          LocalIeeeEui64P__eui.data[6] = buf[1];
          LocalIeeeEui64P__eui.data[7] = buf[0];

          LocalIeeeEui64P__have_id = TRUE;
        }
    }
  return LocalIeeeEui64P__eui;
}

# 64 "../../tos/lib/timer/BusyWaitCounterC.nc"
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt)
{
  /* atomic removed: atomic calls only */
  {



    /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type t0 = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get();

    if (dt > /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE) 
      {
        dt -= /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
        while ((/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0) <= dt) ;
        t0 += dt;
        dt = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
      }

    while ((/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0) <= dt) ;
  }
}

# 30 "../../tos/lib/net/blip/IPPacketC.nc"
static int IPPacketC__IPPacket__findHeader(struct ip_iovec *payload, 
uint8_t first_type, uint8_t *search_type)
#line 31
{
  int off = 0;
  uint8_t nxt = first_type;
  struct ip6_ext ext;



  while ((*search_type == 0xff && ((((
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY)) || (
  *search_type != 0xff && *search_type != nxt)) {

      if (iov_read(payload, off, sizeof ext, (void *)&ext) != sizeof ext) {
        return -1;
        }
      nxt = ext.ip6e_nxt;
      off += (ext.ip6e_len + 1) * 8;
    }
  if (*search_type == 0xff) {
    *search_type = nxt;
    }
#line 51
  if (nxt == IPV6_NONEXT) {
    return -1;
    }
  else {
#line 54
    return off;
    }
}

# 54 "../../tos/lib/net/blip/TcpP.nc"
static void TcpP__tcplib_extern_closedone(struct TcpP__tcplib_sock *sock)
#line 54
{
  int cid = TcpP__find_client(sock);

#line 56
  TcpP__tcplib_init_sock(sock);
  if (cid < TcpP__N_CLIENTS) {
    TcpP__Tcp__closed(cid, 0);
    }
}

#line 30
static int TcpP__find_client(struct TcpP__tcplib_sock *conn)
#line 30
{
  int i;

#line 32
  for (i = 0; i < TcpP__N_CLIENTS; i++) 
    if (&TcpP__socks[i] == conn) {
#line 33
      break;
      }
  return i;
}

# 263 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static int TcpP__tcplib_init_sock(struct TcpP__tcplib_sock *sock)
#line 263
{
  memset(sock, 0, sizeof(struct TcpP__tcplib_sock ) - sizeof(struct TcpP__tcplib_sock *));
  sock->mss = 200;
  sock->my_wind = 200;
  sock->cwnd = sock->mss;
  sock->ssthresh = 0xffff;
  TcpP__conn_add_once(sock);
  return 0;
}

# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 6;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 117 "../../tos/lib/net/blip/TcpP.nc"
static error_t TcpP__Tcp__bind(uint8_t client, uint16_t port)
#line 117
{
  struct sockaddr_in6 addr;

#line 119
  memset(addr.sin6_addr.in6_u.u6_addr8, 0, 16);
  addr.sin6_port = (((uint16_t )port << 8) | ((uint16_t )port >> 8)) & 0xffff;
  TcpP__tcplib_bind(&TcpP__socks[client], &addr);
  return SUCCESS;
}

# 179 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static void TcpP__tcplib_send_ack(struct TcpP__tcplib_sock *sock, int fin_seqno, uint8_t flags)
#line 179
{
  struct ip6_packet *msg = TcpP__get_ipmsg(0);

#line 181
  ;
#line 181
  ;

  if (msg != (void *)0) {
      struct tcp_hdr *tcp_rep = (struct tcp_hdr *)(msg + 1);

#line 185
      tcp_rep->flags = flags;


      tcp_rep->seqno = ntohl(sock->seqno);
      tcp_rep->ackno = ntohl(sock->ackno + (fin_seqno ? 1 : 0));

      ;
#line 191
      ;
      TcpP____tcplib_send(sock, msg);
      ip_free(msg);
    }
  else 
#line 194
    {
      ;
#line 195
      ;
    }
}

#line 137
static struct ip6_packet *TcpP__get_ipmsg(int plen)
#line 137
{
  int alen = sizeof(struct ip6_packet ) + sizeof(struct tcp_hdr ) + 
  sizeof(struct ip_iovec ) + plen;
  char *buf = ip_malloc(alen);
  struct ip6_packet *msg = (struct ip6_packet *)buf;
  struct ip_iovec *iov = (struct ip_iovec *)(buf + alen - sizeof(struct ip_iovec ));

  if (buf == (void *)0) {
#line 144
    return (void *)0;
    }
#line 145
  memset(msg, 0, sizeof(struct ip6_packet ) + sizeof(struct tcp_hdr ));
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_TCP;
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )(sizeof(struct tcp_hdr ) + plen) << 8) | ((uint16_t )(sizeof(struct tcp_hdr ) + plen) >> 8)) & 0xffff;

  msg->ip6_data = iov;
  iov->iov_next = (void *)0;
  iov->iov_len = plen + sizeof(struct tcp_hdr );
  iov->iov_base = (void *)(msg + 1);

  return msg;
}

static void TcpP____tcplib_send(struct TcpP__tcplib_sock *sock, 
struct ip6_packet *msg)
#line 158
{
  struct tcp_hdr *tcph = TcpP__find_tcp_hdr(msg);

#line 160
  if (tcph == (void *)0) {
#line 160
    return;
    }
#line 161
  memcpy(& msg->ip6_hdr.ip6_dst, & sock->r_ep.sin6_addr, 16);

  sock->flags &= ~TcpP__TCP_ACKPENDING;


  ;
#line 166
  ;


  tcph->srcport = sock->l_ep.sin6_port;
  tcph->dstport = sock->r_ep.sin6_port;
  tcph->offset = sizeof(struct tcp_hdr ) * 4;
  tcph->window = (((uint16_t )sock->my_wind << 8) | ((uint16_t )sock->my_wind >> 8)) & 0xffff;
  tcph->chksum = 0;
  tcph->urgent = 0;

  TcpP__tcplib_send_out(msg, tcph);
}

# 85 "../../tos/lib/net/blip/TcpP.nc"
static void TcpP__tcplib_send_out(struct ip6_packet *msg, struct tcp_hdr *tcph)
#line 85
{
  ;
#line 86
  ;
  TcpP__IPAddress__setSource(& msg->ip6_hdr);
  tcph->chksum = (((uint16_t )msg_cksum(& msg->ip6_hdr, msg->ip6_data, IANA_TCP) << 8) | ((uint16_t )msg_cksum(& msg->ip6_hdr, msg->ip6_data, IANA_TCP) >> 8)) & 0xffff;
  TcpP__IP__send(msg);
}

# 68 "../../tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr)
#line 68
{
  enum __nesc_unnamed4422 {
#line 69
    LOCAL, GLOBAL
  } 
#line 69
  type = GLOBAL;

  if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xff) {

      if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0x0f) <= 0x2) {
          type = LOCAL;
        }
    }
  else {
#line 76
    if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xfe) {

        if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0xf0) <= 0x80) {
            type = LOCAL;
          }
      }
    }
  if (type == LOCAL) {
      return IPAddressP__IPAddress__getLLAddr(& hdr->ip6_src);
    }
  else 
#line 85
    {
      return IPAddressP__IPAddress__getGlobalAddr(& hdr->ip6_src);
    }
}

#line 42
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr)
#line 42
{
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t laddr = IPAddressP__Ieee154Address__getExtAddr();

  memset(addr->in6_u.u6_addr8, 0, 16);
  addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
  if (IPAddressP__m_short_addr) {
      addr->in6_u.u6_addr16[5] = (((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[6] = (((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[7] = (((uint16_t )saddr << 8) | ((uint16_t )saddr >> 8)) & 0xffff;
      addr->in6_u.u6_addr8[8] &= ~0x2;
    }
  else 
#line 53
    {
      int i;

#line 55
      for (i = 0; i < 8; i++) 
        addr->in6_u.u6_addr8[8 + i] = laddr.data[7 - i];
      addr->in6_u.u6_addr8[8] ^= 0x2;
    }

  return TRUE;
}

# 54 "../../tos/lib/net/blip/IPProtocolsP.nc"
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg)
#line 54
{
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 16;


  {
    struct ip6_hdr *iph = (struct ip6_hdr *)& msg->ip6_hdr;

#line 61
    ;
#line 61
    ;
    ;
#line 62
    ;
    ;
#line 63
    ;
    ;
#line 64
    ;
    ;
#line 65
    ;
    ;
#line 66
    ;
  }



  return IPProtocolsP__SubIP__send(msg);
}

# 154 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits)
#line 155
{
  int i;

#line 157
  for (i = 0; i < 20; i++) {
      if (IPForwardingEngineP__routing_table[i].valid && (
      IPForwardingEngineP__routing_table[i].prefixlen == 0 || (
      memcmp(prefix, IPForwardingEngineP__routing_table[i].prefix.in6_u.u6_addr8, (
      prefix_len_bits < IPForwardingEngineP__routing_table[i].prefixlen ? prefix_len_bits : IPForwardingEngineP__routing_table[i].prefixlen) / 8) == 0 && 
      prefix_len_bits))) {

          return &IPForwardingEngineP__routing_table[i];
        }
    }
  return (void *)0;
}

#line 184
static error_t IPForwardingEngineP__do_send(uint8_t ifindex, struct in6_addr *next, struct ip6_packet *pkt)
#line 184
{
  error_t rc;
  struct in6_iid *iid = IPForwardingEngineP__Pool__get();

#line 187
  if (iid != (void *)0) {
    memcpy(iid->data, &next->in6_u.u6_addr8[8], 8);
    }
#line 189
  rc = IPForwardingEngineP__IPForward__send(ifindex, next, pkt, iid);
  if (rc != SUCCESS && iid != (void *)0) {
    IPForwardingEngineP__Pool__put(iid);
    }
#line 192
  return rc;
}

# 570 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, 
struct ip6_packet *msg, 
void *ptr)
#line 572
{
  struct ieee154_frame_addr fr_addr;
  struct in6_addr local_addr;

#line 575
  fr_addr.ieee_dstpan = IPNeighborDiscoveryP__Ieee154Address__getPanId();
  IPNeighborDiscoveryP__IPAddress__getLLAddr(&local_addr);








  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(&local_addr, & fr_addr.ieee_src) != 
  SUCCESS) {
      ;
#line 587
      ;
      return FAIL;
    }

  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(next, & fr_addr.ieee_dst) != 
  SUCCESS) {
      ;
#line 593
      ;
      return FAIL;
    }
  ;
#line 596
  ;
  ;
#line 597
  ;
#line 597
  ;
#line 597
  ;
  ;
#line 598
  ;
#line 598
  ;
#line 598
  ;
  ;
#line 599
  ;

  return IPNeighborDiscoveryP__IPLower__send(&fr_addr, msg, ptr);
}

#line 116
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr)
#line 117
{

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {
      if (addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {

          link_addr->ieee_mode = IEEE154_ADDR_SHORT;
          link_addr->ieee_addr.saddr = (((uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff;
        }
      else 
#line 125
        {
          int i;

#line 127
          link_addr->ieee_mode = IEEE154_ADDR_EXT;
          for (i = 0; i < 8; i++) 
            link_addr->ieee_addr.laddr.data[i] = addr->in6_u.u6_addr8[15 - i];
          link_addr->ieee_addr.laddr.data[7] ^= 0x2;
        }
      return SUCCESS;
    }
  else {
#line 133
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) == 0x02) {
            link_addr->ieee_mode = IEEE154_ADDR_SHORT;
            link_addr->ieee_addr.saddr = IEEE154_BROADCAST_ADDR;
            return SUCCESS;
          }
      }
    }
  return FAIL;
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index + /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.FragPool.PoolP*/PoolP__0__index + /*IPDispatchC.FragPool.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 14 "../../tools/tinyos/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame)
#line 15
{
  uint8_t *ieee_hdr = buf;
  uint16_t fcf;







  buf = buf + IEEE154_MIN_HDR_SZ;
  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
#line 26
      uint16_t tmpval = frame->ieee_dst.ieee_addr.saddr;

#line 26
      memcpy(buf, &tmpval, 2);
#line 26
      buf += 2;
    }
  else 
#line 26
    {
#line 26
      memcpy(buf, & frame->ieee_dst.ieee_addr.laddr, 8);
#line 26
      buf += 8;
    }
#line 26
  ;
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
#line 27
      uint16_t tmpval = frame->ieee_src.ieee_addr.saddr;

#line 27
      memcpy(buf, &tmpval, 2);
#line 27
      buf += 2;
    }
  else 
#line 27
    {
#line 27
      memcpy(buf, & frame->ieee_src.ieee_addr.laddr, 8);
#line 27
      buf += 8;
    }
#line 27
  ;

  fcf = IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE;
  fcf |= frame->ieee_src.ieee_mode << IEEE154_FCF_SRC_ADDR_MODE;
  fcf |= frame->ieee_dst.ieee_mode << IEEE154_FCF_DEST_ADDR_MODE;
  fcf |= 1 << IEEE154_FCF_INTRAPAN;

  ieee_hdr[1] = fcf & 0xff;
  ieee_hdr[2] = fcf >> 8;
  ieee_hdr[4] = frame->ieee_dstpan & 0xff;
  ieee_hdr[5] = frame->ieee_dstpan >> 8;

  return buf;
}

# 92 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx)
#line 93
{
  struct in6_addr me;

#line 95
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 95
    return 0;
    }
#line 96
  if (memcmp(me.in6_u.u6_addr8, addr->in6_u.u6_addr8, 8) == 0) {
      *ctx = 0;
      return 64;
    }
  else 
#line 99
    {
      return 0;
    }
}

# 182 "../../tools/tinyos/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, 
struct in6_addr *addr, 
int context_match_len, 
ieee154_addr_t *l2addr, 
ieee154_panid_t pan, 
uint8_t *flags)
#line 187
{
  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0) {



      if (
#line 192
      addr->in6_u.u6_addr16[4] == 0 && 
      addr->in6_u.u6_addr16[5] == 0 && 
      addr->in6_u.u6_addr16[6] == 0) {

          *flags |= LOWPAN_IPHC_AM_16;
          memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
          return buf += 2;
        }
      else {



        if ((
#line 201
        addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00ff << 8) | ((uint16_t )0x00ff >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[6] == ((((uint16_t )0xfe00 << 8) | ((uint16_t )0xfe00 >> 8)) & 0xffff) && (
        l2addr->ieee_mode == IEEE154_ADDR_SHORT && 
        addr->in6_u.u6_addr16[7] == ((((uint16_t )l2addr->ieee_addr.saddr << 8) | ((uint16_t )l2addr->ieee_addr.saddr >> 8)) & 0xffff))) || (

        l2addr->ieee_mode == IEEE154_ADDR_EXT && 
        IPDispatchP__iid_eui_cmp(&addr->in6_u.u6_addr8[8], l2addr->ieee_addr.laddr.data))) {

            *flags |= LOWPAN_IPHC_AM_0;
            return buf;
          }
        else 
#line 211
          {
            *flags |= LOWPAN_IPHC_AM_64;
            memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
            return buf + 8;
          }
        }
    }
  else {
#line 216
    if (context_match_len > 0) {
        int extra = 0;

        *flags |= LOWPAN_IPHC_AC_CONTEXT;
        if (context_match_len == 128) {
            *flags |= LOWPAN_IPHC_AM_0;
          }
        else {
#line 223
          if (
#line 222
          IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], 
          context_match_len, 112) == 0) {
              *flags |= LOWPAN_IPHC_AM_16;
              memcpy(buf, &addr->in6_u.u6_addr8[14], 2);
              extra = 2;
            }
          else {
#line 228
            if (
#line 227
            IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], 
            context_match_len, 64) == 0) {



                if (l2addr->ieee_mode == IEEE154_ADDR_EXT && 
                IPDispatchP__iid_eui_cmp(&addr->in6_u.u6_addr8[8], l2addr->ieee_addr.laddr.data)) {


                    *flags |= LOWPAN_IPHC_AM_0;
                  }
                else 
#line 237
                  {

                    *flags |= LOWPAN_IPHC_AM_64;
                    memcpy(buf, &addr->in6_u.u6_addr8[8], 8);
                    extra = 8;
                  }
              }
            else 
#line 243
              {
                *flags |= LOWPAN_IPHC_AM_128;
                *flags &= ~LOWPAN_IPHC_AC_CONTEXT;
                memcpy(buf, &addr->in6_u.u6_addr8[0], 16);
                extra = 16;
              }
            }
          }
#line 249
        return buf + extra;
      }
    else {
#line 250
      if (addr->in6_u.u6_addr16[0] == 0 && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0 && addr->in6_u.u6_addr16[4] == 0 && addr->in6_u.u6_addr16[5] == 0 && addr->in6_u.u6_addr16[6] == 0 && addr->in6_u.u6_addr16[7] == 0) {

          *flags |= LOWPAN_IPHC_AC_CONTEXT | LOWPAN_IPHC_AM_128;
          return buf;
        }
      else 
#line 254
        {

          *flags |= LOWPAN_IPHC_AM_128;
          memcpy(buf, addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

#line 64
static int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui)
#line 64
{
  return iid[0] == (eui[7] ^ 0x2) && 
  iid[1] == eui[6] && 
  iid[2] == eui[5] && 
  iid[3] == eui[4] && 
  iid[4] == eui[3] && 
  iid[5] == eui[2] && 
  iid[6] == eui[1] && 
  iid[7] == eui[0];
}



static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end)
#line 77
{
  int start_byte = start / 8;
  int end_byte = end / 8;
  int i;
  uint8_t start_mask = 0xff << (8 - start % 8);
  uint8_t end_mask = 0xff << (8 - end % 8);



  if ((buf[start_byte] & start_mask) != 0) {
      return -1;
    }
  if ((buf[end_byte] & end_mask) != 0) {
      return -1;
    }
  for (i = start_byte; i < end_byte; i++) {
      if (buf[i] != 0) {
#line 93
        return -1;
        }
    }
#line 95
  return 0;
}

# 112 "../../tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc"
static void CC2420TinyosNetworkP__BarePacket__setPayloadLength(message_t *msg, uint8_t len)
#line 112
{
  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

#line 114
  __nesc_hton_leuint8(hdr->length.nxdata, len - 1 + MAC_FOOTER_SIZE);
}

# 147 "../../tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__SENDINFO_DECR(struct send_info *si)
#line 147
{
  if (-- si->_refcount == 0) {
      IPDispatchP__SendInfoPool__put(si);
    }
}

# 103 "../../tos/system/PoolP.nc"
static error_t /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__Pool__put(/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__index + /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__queue[emptyIndex] = newVal;
      /*IPStackC.FwdAddrPoolC.PoolP*/PoolP__3__free++;
      ;
      return SUCCESS;
    }
}

# 199 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static void TcpP__tcplib_send_rst(struct ip6_hdr *iph, struct tcp_hdr *tcph)
#line 199
{
  struct ip6_packet *msg = TcpP__get_ipmsg(0);

  if (msg != (void *)0) {
      struct tcp_hdr *tcp_rep = (struct tcp_hdr *)(msg + 1);

      memcpy(& msg->ip6_hdr.ip6_dst, & iph->ip6_src, 16);

      tcp_rep->flags = TCP_FLAG_RST | TCP_FLAG_ACK;

      tcp_rep->ackno = ntohl(ntohl(tcph->seqno) + 1);
      tcp_rep->seqno = tcph->ackno;
#line 210
      ;

      tcp_rep->srcport = tcph->dstport;
      tcp_rep->dstport = tcph->srcport;
      tcp_rep->offset = sizeof(struct tcp_hdr ) * 4;
      tcp_rep->window = 0;
      tcp_rep->chksum = 0;
      tcp_rep->urgent = 0;

      TcpP__tcplib_send_out(msg, tcp_rep);

      ip_free(msg);
    }
}

#line 291
static void TcpP__reset_ssthresh(struct TcpP__tcplib_sock *conn)
#line 291
{
  uint16_t new_ssthresh = (conn->cwnd > conn->r_wind ? conn->r_wind : conn->cwnd) / 2;

#line 293
  if (new_ssthresh < 2 * conn->mss) {
    new_ssthresh = 2 * conn->mss;
    }
#line 295
  conn->ssthresh = new_ssthresh;
}

#line 227
static int TcpP__tcplib_output(struct TcpP__tcplib_sock *sock, uint32_t sseqno)
#line 227
{



  int seg_size = sock->seqno - sseqno > sock->r_wind ? sock->r_wind : sock->seqno - sseqno;

#line 232
  ;
#line 232
  ;
  seg_size = seg_size > sock->cwnd ? sock->cwnd : seg_size;
  while (seg_size > 0 && sock->seqno > sseqno) {

      struct ip6_packet *msg = TcpP__get_ipmsg(seg_size);
      struct tcp_hdr *tcph;
      uint8_t *data;

#line 239
      if (msg == (void *)0) {
#line 239
        return -1;
        }
#line 240
      tcph = (struct tcp_hdr *)(msg + 1);
      data = (uint8_t *)(tcph + 1);

      tcph->flags = TCP_FLAG_ACK;
      tcph->seqno = ntohl(sseqno);
      tcph->ackno = ntohl(sock->ackno);

      ;
#line 247
      ;



      if (seg_size != TcpP__circ_buf_read(sock->tx_buf, sseqno, data, seg_size)) {
          ;
#line 252
          ;
        }
      TcpP____tcplib_send(sock, msg);
      ip_free(msg);

      sseqno += seg_size;
      seg_size = sock->seqno - sseqno > sock->mss ? sock->mss : sock->seqno - sseqno;
    }
  return 0;
}

# 58 "../../tools/tinyos/c/blip/libtcp/circ.c"
static void TcpP__get_ptr_off_1(struct TcpP__circ_buf *b, uint32_t sseqno, int len, 
uint8_t **writeptr, int *w_len)
#line 59
{
  uint8_t *endptr = b->data_start + b->data_len;
  int offset;

  *writeptr = (void *)0;
  *w_len = len;


  offset = sseqno - b->head_seqno;
  if (b->data_head + offset < endptr) {
      *writeptr = b->data_head + offset;
    }
  else 
#line 70
    {
      offset -= endptr - b->data_head;
      *writeptr = b->data_start + offset;
    }
  if (*writeptr + *w_len > endptr) {
      *w_len = endptr - *writeptr;
    }
}

# 139 "../../tos/lib/net/blip/TcpP.nc"
static error_t TcpP__Tcp__close(uint8_t client)
#line 139
{
  if (!TcpP__tcplib_close(&TcpP__socks[client])) {
    return SUCCESS;
    }
#line 142
  return FAIL;
}

# 708 "../../tools/tinyos/c/blip/libtcp/tcplib.c"
static int TcpP__tcplib_close(struct TcpP__tcplib_sock *sock)
#line 708
{
  int rc = 0;

  switch (sock->state) {

      case TcpP__TCP_CLOSE_WAIT: 
        TcpP__tcplib_send_ack(sock, 1, TCP_FLAG_ACK | TCP_FLAG_FIN);
      sock->timer.retx = 6;
      sock->state = TcpP__TCP_LAST_ACK;
      break;

      case TcpP__TCP_ESTABLISHED: 

        TcpP__tcplib_send_ack(sock, 0, TCP_FLAG_ACK | TCP_FLAG_FIN);
      sock->timer.retx = TcpP__TCPLIB_2MSL;
      sock->state = TcpP__TCP_FIN_WAIT_1;
      break;
      case TcpP__TCP_SYN_SENT: 
        sock->state = TcpP__TCP_CLOSED;
      break;
      default: 

        rc = -1;
    }
  return rc;
}

# 134 "../../tos/lib/net/blip/TcpP.nc"
static error_t TcpP__Tcp__send(uint8_t client, void *payload, uint16_t len)
#line 134
{
  if (TcpP__tcplib_send(&TcpP__socks[client], payload, len) < 0) {
#line 135
    return FAIL;
    }
#line 136
  return SUCCESS;
}

# 239 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db)
#line 239
{
  int i;

#line 241
  for (i = 0; i < dbsize; i++) {

      if (
#line 242
      memcmp(cmd, db[i].c_name, db[i].c_len) == 0
       && cmd[db[i].c_len] == '\0') {
        return i;
        }
    }
#line 246
  return UDPShellP__CMD_NO_CMD;
}

# 126 "../../tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, 
void *payload, 
uint16_t len)
#line 128
{
  struct ip_iovec v[1];

#line 130
  v[0].iov_base = payload;
  v[0].iov_len = len;
  v[0].iov_next = (void *)0;
  return UdpP__UDP__sendtov(clnt, dest, &v[0]);
}

# 122 "../../tos/lib/net/blip/icmp/ICMPCoreP.nc"
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt)
#line 122
{
  struct icmp6_hdr *req = (struct icmp6_hdr *)pkt->ip6_data->iov_base;

#line 124
  if (pkt->ip6_data->iov_len >= sizeof(struct icmp6_hdr ) && 
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
      req->cksum = 0;
      req->cksum = (((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) << 8) | ((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) >> 8)) & 0xffff;
    }

  ;
#line 130
  ;
  switch (type) {
      case ICMP_TYPE_ECHO_DEST_UNREACH: ;
#line 132
      ;
#line 132
      break;
      case ICMP_TYPE_ECHO_PKT_TOO_BIG: ;
#line 133
      ;
#line 133
      break;
      case ICMP_TYPE_ECHO_TIME_EXCEEDED: ;
#line 134
      ;
#line 134
      break;
      case ICMP_TYPE_ECHO_PARAM_PROBLEM: ;
#line 135
      ;
#line 135
      break;
      case ICMP_TYPE_ECHO_REQUEST: ;
#line 136
      ;
#line 136
      break;
      case ICMP_TYPE_ECHO_REPLY: ;
#line 137
      ;
#line 137
      break;
      case ICMP_TYPE_ROUTER_SOL: ;
#line 138
      ;
#line 138
      break;
      case ICMP_TYPE_ROUTER_ADV: ;
#line 139
      ;
#line 139
      break;
      case ICMP_TYPE_NEIGHBOR_SOL: ;
#line 140
      ;
#line 140
      break;
      case ICMP_TYPE_NEIGHBOR_ADV: ;
#line 141
      ;
#line 141
      break;
      case ICMP_TYPE_RPL_CONTROL: ;
#line 142
      ;
#line 142
      break;
      default: ;
#line 143
      ;
#line 143
      break;
    }

  return ICMPCoreP__IP__send(pkt);
}

# 152 "../../tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static void IPNeighborDiscoveryP__NeighborDiscovery__setPrefix(struct in6_addr *newprefix, 
uint8_t length, uint32_t valid_lifetime, uint32_t preferred_lifetime)
#line 153
{

  if (! !memcmp(newprefix, &IPNeighborDiscoveryP__prefix, sizeof(struct in6_addr )) || length != IPNeighborDiscoveryP__prefix_length) {
      ip_memcpy((uint8_t *)&IPNeighborDiscoveryP__prefix, (uint8_t *)newprefix, 
      sizeof(struct in6_addr ));
      IPNeighborDiscoveryP__prefix_length = length;
      IPNeighborDiscoveryP__prefix_valid_lifetime = valid_lifetime;
      IPNeighborDiscoveryP__prefix_preferred_lifetime = preferred_lifetime;
      IPNeighborDiscoveryP__prefix_exists = TRUE;
    }
}

# 769 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 769
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 770
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 773
            __nesc_atomic_end(__nesc_atomic); 
#line 773
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
#line 788
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 807
    __nesc_atomic_end(__nesc_atomic); }
}

#line 716
static void CC2420ReceiveP__beginReceive(void )
#line 716
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
#line 718
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
#line 722
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

#line 759
static void CC2420ReceiveP__receive(void )
#line 759
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

# 189 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 220 "../../tos/chips/cc2420/link/PacketLinkP.nc"
static void PacketLinkP__signalDone(error_t error)
#line 220
{
  PacketLinkP__DelayTimer__stop();
  PacketLinkP__SendState__toIdle();


  if (__nesc_ntoh_uint16(PacketLinkP__CC2420PacketBody__getMetadata(PacketLinkP__currentSendMsg)->maxRetries.nxdata) > 0) {
    __nesc_hton_uint16(PacketLinkP__CC2420PacketBody__getMetadata(PacketLinkP__currentSendMsg)->maxRetries.nxdata, PacketLinkP__totalRetries);
    }
  PacketLinkP__Send__sendDone(PacketLinkP__currentSendMsg, error);
}

# 56 "../../tos/interfaces/State.nc"
static void PacketLinkP__SendState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(6U);
#line 56
}
#line 56
static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(2U);
#line 56
}
#line 56
# 328 "../../tos/lib/net/blip/IPForwardingEngineP.nc"
static void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status)
#line 328
{
  struct in6_addr next;
  struct in6_iid *iid = (struct in6_iid *)status->upper_data;

#line 331
  memset(next.in6_u.u6_addr8, 0, 16);
  next.in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;


  if (iid != (void *)0) {
      memcpy(&next.in6_u.u6_addr8[8], iid->data, 8);
      IPForwardingEngineP__ForwardingEvents__linkResult(ifindex, &next, status);
      IPForwardingEngineP__Pool__put(iid);
    }
}

# 89 "../../tos/system/QueueC.nc"
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 89
{
  /*IPDispatchC.QueueC*/QueueC__0__queue_t t = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();

#line 91
  ;
  if (!/*IPDispatchC.QueueC*/QueueC__0__Queue__empty()) {
      /*IPDispatchC.QueueC*/QueueC__0__head++;
      if (/*IPDispatchC.QueueC*/QueueC__0__head == 12) {
#line 94
        /*IPDispatchC.QueueC*/QueueC__0__head = 0;
        }
#line 95
      /*IPDispatchC.QueueC*/QueueC__0__size--;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 329 "../../tos/chips/cc2420/spi/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 733 "../../tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 733
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 479 "../../tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 479
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 482
    {
      channel = CC2420ControlP__m_channel;
    }
#line 484
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
#line 496
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 497
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 506
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
#line 515
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 518
    {

      memcpy((uint8_t *)id, CC2420ControlP__m_ext_addr.data, 8);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 523
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

# 73 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 73 "../../tos/lib/timer/Timer.nc"
static void IPNeighborDiscoveryP__RSTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 147 "../../tos/lib/timer/TransformAlarmC.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 60 "../../tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port)
#line 60
{
  int i;

#line 62
  port = (((uint16_t )port << 8) | ((uint16_t )port >> 8)) & 0xffff;
  if (port > 0) {
      for (i = 0; i < UdpP__N_CLIENTS; i++) 
        if (i != clnt && UdpP__local_ports[i] == port) {
          return FAIL;
          }
    }
#line 68
  UdpP__local_ports[clnt] = port;
  return SUCCESS;
}

# 64 "../../tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0008)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0002)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0010)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
#line 105
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

# 162 "../../tos/lib/net/blip/shell/UDPShellP.nc"
static void UDPShellP__action_echo(int argc, char **argv)
#line 162
{
  int i;
#line 163
  int arg_len;
  char *payload = UDPShellP__reply_buf;

  if (argc < 2) {
#line 166
    return;
    }
#line 167
  for (i = 1; i < argc; i++) {
      arg_len = strlen(argv[i]);
      if (payload - UDPShellP__reply_buf + arg_len + 1 > MAX_REPLY_LEN) {
#line 169
        break;
        }
#line 170
      memcpy(payload, argv[i], arg_len);
      payload += arg_len;
      *payload = ' ';
      payload++;
    }
  *(payload - 1) = '\n';

  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, payload - UDPShellP__reply_buf);
}

static void UDPShellP__action_ping6(int argc, char **argv)
#line 180
{
  struct in6_addr dest;

  if (argc < 2) {
#line 183
    return;
    }
#line 184
  inet_pton6(argv[1], &dest);
  UDPShellP__ICMPPing__ping(&dest, 1024, 10);
}


static void UDPShellP__action_uptime(int argc, char **argv)
#line 189
{

  int len;
  uint64_t tval = UDPShellP__Uptime__get();

#line 193
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    tval = (UDPShellP__uptime + tval - UDPShellP__boot_time) / 1024;
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  len = snprintf(UDPShellP__reply_buf, MAX_REPLY_LEN, "up %li seconds\n", 
  (uint32_t )tval);
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint, UDPShellP__reply_buf, len);
}
