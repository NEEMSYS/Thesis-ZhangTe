# 1 "app.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "app.c"
# 150 "/usr/bin/../lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef long int ptrdiff_t;
# 212 "/usr/bin/../lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef unsigned int size_t;
# 324 "/usr/bin/../lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
  int dummy;
} ;
# 9 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_bnd {
# 9 "/usr/lib/ncc/deputy_nodeputy.h"
  void *lo, *hi;
} ;
# 10 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_bnd_nok {
# 10 "/usr/lib/ncc/deputy_nodeputy.h"
  void *lo, *hi;
} ;
# 11 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_count {
# 11 "/usr/lib/ncc/deputy_nodeputy.h"
  int n;
} ;
# 12 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_count_nok {
# 12 "/usr/lib/ncc/deputy_nodeputy.h"
  int n;
} ;
# 13 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_one {
# 13 "/usr/lib/ncc/deputy_nodeputy.h"
  int dummy;
} ;
# 14 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_one_nok {
# 14 "/usr/lib/ncc/deputy_nodeputy.h"
  int dummy;
} ;
# 15 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_dmemset {
# 15 "/usr/lib/ncc/deputy_nodeputy.h"
  int a1, a2, a3;
} ;
# 16 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_dmemcpy {
# 16 "/usr/lib/ncc/deputy_nodeputy.h"
  int a1, a2, a3;
} ;
# 17 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nts {
# 17 "/usr/lib/ncc/deputy_nodeputy.h"
  int dummy;
} ;
# 38 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__
# 41 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;

# 46 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;

# 55 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;

# 61 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;

# 70 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;

# 76 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef unsigned long long int uint_fast64_t;
# 86 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef int16_t intptr_t;
typedef uint16_t uintptr_t;






# 93 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef long long int intmax_t;

# 94 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef unsigned long long int uintmax_t;
# 431 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t ;
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
# 44 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memset(void *arg_0x7ff0d933c020, int arg_0x7ff0d933c2a0, size_t arg_0x7ff0d933c560);
# 65 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memset(void *arg_0x7ff0d9324060, int arg_0x7ff0d93242e0, size_t arg_0x7ff0d93245a0);
# 62 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
# 59 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;
# 66 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
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
# 31 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
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
# 78 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
# 116 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
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
# 174 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
# 188 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x7ff0d92e7170);


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


  void (**_sig_func)(int arg_0x7ff0d92e2480);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
# 273 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
struct _reent;
# 18 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
# 212 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
# 265 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
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
# 26 "../../tos/system/tos.h"
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
# 37 "../../tos/system/tos.h"
struct __nesc_attr_atleastonce {
};
# 38 "../../tos/system/tos.h"
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

typedef uint8_t error_t ;
# 47 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/intrinsics.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );


typedef unsigned int __istate_t;
# 164 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
# 183 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME2 __asm ("__""ME2");
# 195 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
# 267 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char P1OUT __asm ("__""P1OUT");

extern volatile unsigned char P1DIR __asm ("__""P1DIR");





extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");





extern volatile unsigned char P2IE __asm ("__""P2IE");

extern volatile unsigned char P2SEL __asm ("__""P2SEL");
# 303 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char P3OUT __asm ("__""P3OUT");

extern volatile unsigned char P3DIR __asm ("__""P3DIR");

extern volatile unsigned char P3SEL __asm ("__""P3SEL");




extern volatile unsigned char P4OUT __asm ("__""P4OUT");

extern volatile unsigned char P4DIR __asm ("__""P4DIR");

extern volatile unsigned char P4SEL __asm ("__""P4SEL");
# 327 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char P5OUT __asm ("__""P5OUT");

extern volatile unsigned char P5DIR __asm ("__""P5DIR");

extern volatile unsigned char P5SEL __asm ("__""P5SEL");




extern volatile unsigned char P6OUT __asm ("__""P6OUT");

extern volatile unsigned char P6DIR __asm ("__""P6DIR");

extern volatile unsigned char P6SEL __asm ("__""P6SEL");
# 384 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");
# 441 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");
# 595 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
# 720 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
# 734 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
# 849 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
# 1021 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 354 "../../tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
# 389 "../../tos/chips/msp430/msp430hardware.h"
typedef uint8_t mcu_power_t ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2) ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0,
  MSP430_POWER_LPM0 = 1,
  MSP430_POWER_LPM1 = 2,
  MSP430_POWER_LPM2 = 3,
  MSP430_POWER_LPM3 = 4,
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void ) ;





static inline void __nesc_enable_interrupt(void ) ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void ) ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts) ;
# 444 "../../tos/chips/msp430/msp430hardware.h"
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float ;
# 459 "../../tos/chips/msp430/msp430hardware.h"
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
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_SIMO0_PIN() ;
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_SIMO0_PIN() ;
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_SIMO0_OUTPUT() ;
static inline void TOSH_SET_UCLK0_PIN() ;
# 37 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_UCLK0_PIN() ;
# 37 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_UCLK0_OUTPUT() ;
# 79 "../../tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4252 {

  TOSH_HUMIDITY_ADDR = 5,
  TOSH_HUMIDTEMP_ADDR = 3,
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN() ;
# 88 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_FLASH_CS_PIN() ;
# 88 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_FLASH_CS_OUTPUT() ;
static inline void TOSH_SET_FLASH_HOLD_PIN() ;
# 89 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT() ;
# 54 "../../tos/system/SchedulerBasicP.nc"
volatile uint8_t watch_task_id = 0;
# 39 "../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4253 {
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
# 75 "../../tos/chips/msp430/timer/Msp430Timer.h"
# 62 "../../tos/chips/msp430/timer/Msp430Timer.h"
typedef struct __nesc_unnamed4254 {

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
# 87 "../../tos/chips/msp430/timer/Msp430Timer.h"
# 77 "../../tos/chips/msp430/timer/Msp430Timer.h"
typedef struct __nesc_unnamed4255 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
# 102 "../../tos/chips/msp430/timer/Msp430Timer.h"
# 89 "../../tos/chips/msp430/timer/Msp430Timer.h"
typedef struct __nesc_unnamed4256 {

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
# 41 "../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4257 {
# 41 "../../tos/lib/timer/Timer.h"
  int notUsed;
}
# 41 "../../tos/lib/timer/Timer.h"
TSecond;
typedef struct __nesc_unnamed4258 {
# 42 "../../tos/lib/timer/Timer.h"
  int notUsed;
}
# 42 "../../tos/lib/timer/Timer.h"
TMilli;
typedef struct __nesc_unnamed4259 {
# 43 "../../tos/lib/timer/Timer.h"
  int notUsed;
}
# 43 "../../tos/lib/timer/Timer.h"
T32khz;
typedef struct __nesc_unnamed4260 {
# 44 "../../tos/lib/timer/Timer.h"
  int notUsed;
}
# 44 "../../tos/lib/timer/Timer.h"
TMicro;
# 43 "../../tos/types/Leds.h"
enum __nesc_unnamed4261 {
  LEDS_LED0 = 1 << 0,
  LEDS_LED1 = 1 << 1,
  LEDS_LED2 = 1 << 2,
  LEDS_LED3 = 1 << 3,
  LEDS_LED4 = 1 << 4,
  LEDS_LED5 = 1 << 5,
  LEDS_LED6 = 1 << 6,
  LEDS_LED7 = 1 << 7
};
typedef TMilli BlinkC__Timer0__precision_tag;
typedef TMilli BlinkC__Timer1__precision_tag;
typedef TMilli BlinkC__Timer2__precision_tag;
enum Msp430Timer32khzC__0____nesc_unnamed4262 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz Msp430AlarmC__0__frequency_tag;
typedef Msp430AlarmC__0__frequency_tag Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t Msp430AlarmC__0__Alarm__size_type;
typedef T32khz Msp430CounterC__0__frequency_tag;
typedef Msp430CounterC__0__frequency_tag Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t Msp430CounterC__0__Counter__size_type;
typedef TMilli TransformCounterC__0__to_precision_tag;
typedef uint32_t TransformCounterC__0__to_size_type;
typedef T32khz TransformCounterC__0__from_precision_tag;
typedef uint16_t TransformCounterC__0__from_size_type;
typedef uint32_t TransformCounterC__0__upper_count_type;
typedef TransformCounterC__0__from_precision_tag TransformCounterC__0__CounterFrom__precision_tag;
typedef TransformCounterC__0__from_size_type TransformCounterC__0__CounterFrom__size_type;
typedef TransformCounterC__0__to_precision_tag TransformCounterC__0__Counter__precision_tag;
typedef TransformCounterC__0__to_size_type TransformCounterC__0__Counter__size_type;
typedef TMilli TransformAlarmC__0__to_precision_tag;
typedef uint32_t TransformAlarmC__0__to_size_type;
typedef T32khz TransformAlarmC__0__from_precision_tag;
typedef uint16_t TransformAlarmC__0__from_size_type;
typedef TransformAlarmC__0__to_precision_tag TransformAlarmC__0__Alarm__precision_tag;
typedef TransformAlarmC__0__to_size_type TransformAlarmC__0__Alarm__size_type;
typedef TransformAlarmC__0__from_precision_tag TransformAlarmC__0__AlarmFrom__precision_tag;
typedef TransformAlarmC__0__from_size_type TransformAlarmC__0__AlarmFrom__size_type;
typedef TransformAlarmC__0__to_precision_tag TransformAlarmC__0__Counter__precision_tag;
typedef TransformAlarmC__0__to_size_type TransformAlarmC__0__Counter__size_type;
typedef TMilli AlarmToTimerC__0__precision_tag;
typedef AlarmToTimerC__0__precision_tag AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t AlarmToTimerC__0__Alarm__size_type;
typedef AlarmToTimerC__0__precision_tag AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli VirtualizeTimerC__0__precision_tag;
typedef VirtualizeTimerC__0__precision_tag VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef VirtualizeTimerC__0__precision_tag VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli CounterToLocalTimeC__0__precision_tag;
typedef CounterToLocalTimeC__0__precision_tag CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef CounterToLocalTimeC__0__precision_tag CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t CounterToLocalTimeC__0__Counter__size_type;
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t MotePlatformC__Init__init(void );
# 46 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
# 45 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__0__VectorTimerX0__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__0__Overflow__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__0__VectorTimerX1__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__0__Event__default__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7ff0d8d048b0);
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__VectorTimerX0__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__Overflow__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__VectorTimerX1__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__Event__default__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7ff0d8d048b0);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t Msp430TimerP__1__Timer__get(void );
static bool Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__0__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__0__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__0__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__1__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__1__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__1__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__2__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__2__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__2__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__3__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__3__Control__getControl(void );
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430TimerCapComP__3__Control__enableEvents(void );
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430TimerCapComP__3__Control__setControlAsCompare(void );
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430TimerCapComP__3__Control__disableEvents(void );
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__3__Event__fired(void );
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__4__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__4__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__4__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__4__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__5__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__5__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__5__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__5__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__6__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__6__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__6__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__7__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__7__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__7__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__8__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__8__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__8__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t Msp430TimerCapComP__9__Capture__getEvent(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t Msp430TimerCapComP__9__Control__getControl(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCapComP__9__Event__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerCapComP__9__Timer__overflow(void );
# 79 "../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ff0d8df9450);
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ff0d8df9450);
# 57 "../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
# 72 "../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__taskLoop(void );
# 65 "../../tos/interfaces/Scheduler.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "../../tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__fired(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer2__fired(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );





static void LedsP__Leds__led0Toggle(void );
# 83 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
# 100 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led2Toggle(void );
# 56 "../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0On(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__36__IO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__36__IO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__36__IO__set(void );




static void HplMsp430GeneralIOP__36__IO__clr(void );




static void HplMsp430GeneralIOP__37__IO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__37__IO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__37__IO__set(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__38__IO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430GeneralIOP__38__IO__set(void );
# 42 "../../tos/interfaces/GeneralIO.nc"
static void Msp430GpioC__0__GeneralIO__toggle(void );



static void Msp430GpioC__0__GeneralIO__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void Msp430GpioC__0__GeneralIO__set(void );
static void Msp430GpioC__0__GeneralIO__clr(void );
static void Msp430GpioC__1__GeneralIO__toggle(void );



static void Msp430GpioC__1__GeneralIO__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void Msp430GpioC__1__GeneralIO__set(void );

static void Msp430GpioC__2__GeneralIO__toggle(void );



static void Msp430GpioC__2__GeneralIO__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void Msp430GpioC__2__GeneralIO__set(void );
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void Msp430AlarmC__0__Alarm__startAt( Msp430AlarmC__0__Alarm__size_type t0, Msp430AlarmC__0__Alarm__size_type dt);
# 73 "../../tos/lib/timer/Alarm.nc"
static void Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t Msp430AlarmC__0__Init__init(void );
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static Msp430CounterC__0__Counter__size_type Msp430CounterC__0__Counter__get(void );






static bool Msp430CounterC__0__Counter__isOverflowPending(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void TransformCounterC__0__CounterFrom__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static TransformCounterC__0__Counter__size_type TransformCounterC__0__Counter__get(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static TransformAlarmC__0__Alarm__size_type TransformAlarmC__0__Alarm__getNow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void TransformAlarmC__0__Alarm__startAt( TransformAlarmC__0__Alarm__size_type t0, TransformAlarmC__0__Alarm__size_type dt);
# 116 "../../tos/lib/timer/Alarm.nc"
static TransformAlarmC__0__Alarm__size_type TransformAlarmC__0__Alarm__getAlarm(void );
# 73 "../../tos/lib/timer/Alarm.nc"
static void TransformAlarmC__0__Alarm__stop(void );




static void TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void TransformAlarmC__0__Counter__overflow(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void AlarmToTimerC__0__fired__runTask(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t AlarmToTimerC__0__Timer__getNow(void );
# 129 "../../tos/lib/timer/Timer.nc"
static void AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
# 78 "../../tos/lib/timer/Timer.nc"
static void AlarmToTimerC__0__Timer__stop(void );
# 75 "../../tos/interfaces/TaskBasic.nc"
static void VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void VirtualizeTimerC__0__TimerFrom__fired(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7ff0d87fd3f0);
# 64 "../../tos/lib/timer/Timer.nc"
static void VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7ff0d87fd3f0,
# 64 "../../tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "../../tos/lib/timer/Counter.nc"
static void CounterToLocalTimeC__0__Counter__overflow(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteClockInit__init(void );
# 62 "../../tos/interfaces/Init.nc"
static error_t PlatformP__LedsInit__init(void );
# 10 "../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);
# 27 "../../tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
# 56 "../../tos/platforms/telosb/MotePlatformC.nc"
static inline error_t MotePlatformC__Init__init(void );
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4263 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8,
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
# 79 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
# 100 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
# 115 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
# 130 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
# 163 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void );
# 175 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
# 204 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__busyCalibrateDco(void );
# 229 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__0__Event__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7ff0d8d048b0);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerP__0__Timer__overflow(void );
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void Msp430TimerP__0__Overflow__fired(void );
# 146 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__Event__fired(
# 51 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7ff0d8d048b0);
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430TimerP__1__Timer__overflow(void );
# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t Msp430TimerP__1__Timer__get(void );
# 81 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool Msp430TimerP__1__Timer__isOverflowPending(void );
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void Msp430TimerP__1__Overflow__fired(void );
# 146 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void Msp430TimerP__1__Event__default__fired(uint8_t n);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__0__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__0__cc_t;


static inline Msp430TimerCapComP__0__cc_t Msp430TimerCapComP__0__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__0__cc_t Msp430TimerCapComP__0__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__0__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__0__Event__fired(void );







static inline void Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void Msp430TimerCapComP__0__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__1__cc_t;


static inline Msp430TimerCapComP__1__cc_t Msp430TimerCapComP__1__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__1__cc_t Msp430TimerCapComP__1__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__1__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__1__Event__fired(void );







static inline void Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void Msp430TimerCapComP__1__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__2__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__2__cc_t;


static inline Msp430TimerCapComP__2__cc_t Msp430TimerCapComP__2__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__2__cc_t Msp430TimerCapComP__2__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__2__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__2__Event__fired(void );







static inline void Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void Msp430TimerCapComP__2__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__3__Compare__fired(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t Msp430TimerCapComP__3__Timer__get(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__3__cc_t;

static inline uint16_t Msp430TimerCapComP__3__CC2int( Msp430TimerCapComP__3__cc_t x) ;
static inline Msp430TimerCapComP__3__cc_t Msp430TimerCapComP__3__int2CC(uint16_t x) ;

static inline uint16_t Msp430TimerCapComP__3__compareControl(void );
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__3__cc_t Msp430TimerCapComP__3__Control__getControl(void );
# 95 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 105 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__setControlAsCompare(void );
# 130 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void Msp430TimerCapComP__3__Control__disableEvents(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);
# 165 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Event__fired(void );







static inline void Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void Msp430TimerCapComP__3__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__4__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__4__cc_t;


static inline Msp430TimerCapComP__4__cc_t Msp430TimerCapComP__4__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__4__cc_t Msp430TimerCapComP__4__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__4__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__4__Event__fired(void );







static inline void Msp430TimerCapComP__4__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void Msp430TimerCapComP__4__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__5__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__5__cc_t;


static inline Msp430TimerCapComP__5__cc_t Msp430TimerCapComP__5__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__5__cc_t Msp430TimerCapComP__5__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__5__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__5__Event__fired(void );







static inline void Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__5__Compare__default__fired(void );



static inline void Msp430TimerCapComP__5__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__6__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__6__cc_t;


static inline Msp430TimerCapComP__6__cc_t Msp430TimerCapComP__6__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__6__cc_t Msp430TimerCapComP__6__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__6__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__6__Event__fired(void );







static inline void Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__6__Compare__default__fired(void );



static inline void Msp430TimerCapComP__6__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__7__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__7__cc_t;


static inline Msp430TimerCapComP__7__cc_t Msp430TimerCapComP__7__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__7__cc_t Msp430TimerCapComP__7__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__7__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__7__Event__fired(void );







static inline void Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void Msp430TimerCapComP__7__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__8__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__8__cc_t;


static inline Msp430TimerCapComP__8__cc_t Msp430TimerCapComP__8__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__8__cc_t Msp430TimerCapComP__8__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__8__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__8__Event__fired(void );







static inline void Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void Msp430TimerCapComP__8__Timer__overflow(void );
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
static void Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430TimerCapComP__9__Compare__fired(void );
# 55 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t Msp430TimerCapComP__9__cc_t;


static inline Msp430TimerCapComP__9__cc_t Msp430TimerCapComP__9__int2CC(uint16_t x) ;
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__9__cc_t Msp430TimerCapComP__9__Control__getControl(void );
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__9__Capture__getEvent(void );
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__9__Event__fired(void );







static inline void Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C))) ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A))) ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A))) ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018))) ;
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
# 112 "../../tos/chips/msp430/McuSleepC.nc"
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
# 72 "../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__taskLoop(void );
# 65 "../../tos/interfaces/Scheduler.nc"
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../tos/system/RealMainP.nc"
int main(void ) ;
# 75 "../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 58 "../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7ff0d8df9450);
# 79 "../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 63 "../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4264 {

  SchedulerBasicP__NUM_TASKS = 2U,
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];
# 80 "../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void );
# 99 "../../tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
# 126 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void );
# 136 "../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 154 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
# 176 "../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 64 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
# 64 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__startPeriodic(uint32_t dt);
# 61 "../../tos/interfaces/Leds.nc"
static void BlinkC__Leds__led0Off(void );





static void BlinkC__Leds__led0Toggle(void );
# 83 "../../tos/interfaces/Leds.nc"
static void BlinkC__Leds__led1Toggle(void );
# 100 "../../tos/interfaces/Leds.nc"
static void BlinkC__Leds__led2Toggle(void );
# 56 "../../tos/interfaces/Leds.nc"
static void BlinkC__Leds__led0On(void );
# 64 "../../tos/lib/timer/Timer.nc"
static void BlinkC__Timer2__startPeriodic(uint32_t dt);
# 60 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void );






static inline void BlinkC__Timer0__fired(void );







static inline void BlinkC__Timer1__fired(void );





static inline void BlinkC__Timer2__fired(void );
# 42 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
# 40 "../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led2__set(void );
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
# 74 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );




static inline void LedsP__Leds__led0Toggle(void );
# 99 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void );
# 114 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void );
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void HplMsp430GeneralIOP__36__IO__set(void );
static inline void HplMsp430GeneralIOP__36__IO__clr(void );
static inline void HplMsp430GeneralIOP__36__IO__toggle(void );




static inline void HplMsp430GeneralIOP__36__IO__makeOutput(void );
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__37__IO__set(void );

static inline void HplMsp430GeneralIOP__37__IO__toggle(void );




static inline void HplMsp430GeneralIOP__37__IO__makeOutput(void );
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__38__IO__set(void );

static inline void HplMsp430GeneralIOP__38__IO__toggle(void );




static inline void HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__0__HplGeneralIO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__0__HplGeneralIO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__0__HplGeneralIO__set(void );




static void Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__0__GeneralIO__set(void );
static inline void Msp430GpioC__0__GeneralIO__clr(void );
static inline void Msp430GpioC__0__GeneralIO__toggle(void );



static inline void Msp430GpioC__0__GeneralIO__makeOutput(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__1__HplGeneralIO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__1__HplGeneralIO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__1__HplGeneralIO__set(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__1__GeneralIO__set(void );

static inline void Msp430GpioC__1__GeneralIO__toggle(void );



static inline void Msp430GpioC__1__GeneralIO__makeOutput(void );
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__2__HplGeneralIO__toggle(void );
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__2__HplGeneralIO__makeOutput(void );
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430GpioC__2__HplGeneralIO__set(void );
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__2__GeneralIO__set(void );

static inline void Msp430GpioC__2__GeneralIO__toggle(void );



static inline void Msp430GpioC__2__GeneralIO__makeOutput(void );
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t Msp430AlarmC__0__Init__init(void );
# 65 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Alarm__stop(void );




static inline void Msp430AlarmC__0__Msp430Compare__fired(void );
# 81 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
# 114 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t Msp430CounterC__0__Msp430Timer__get(void );
static bool Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void Msp430CounterC__0__Counter__overflow(void );
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t Msp430CounterC__0__Counter__get(void );




static inline bool Msp430CounterC__0__Counter__isOverflowPending(void );
# 64 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../tos/lib/timer/Counter.nc"
static TransformCounterC__0__CounterFrom__size_type TransformCounterC__0__CounterFrom__get(void );






static bool TransformCounterC__0__CounterFrom__isOverflowPending(void );
# 82 "../../tos/lib/timer/Counter.nc"
static void TransformCounterC__0__Counter__overflow(void );
# 67 "../../tos/lib/timer/TransformCounterC.nc"
                             TransformCounterC__0__upper_count_type TransformCounterC__0__m_upper;

enum TransformCounterC__0____nesc_unnamed4265 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5,
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof( TransformCounterC__0__from_size_type ) - TransformCounterC__0__LOW_SHIFT_RIGHT,
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof( TransformCounterC__0__to_size_type ) - 8 * sizeof( TransformCounterC__0__from_size_type ) + 5,



  TransformCounterC__0__OVERFLOW_MASK = TransformCounterC__0__NUM_UPPER_BITS ? (( TransformCounterC__0__upper_count_type )2 << ( TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static TransformCounterC__0__to_size_type TransformCounterC__0__Counter__get(void );
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../tos/lib/timer/Alarm.nc"
static void TransformAlarmC__0__Alarm__fired(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void TransformAlarmC__0__AlarmFrom__startAt( TransformAlarmC__0__AlarmFrom__size_type t0, TransformAlarmC__0__AlarmFrom__size_type dt);
# 73 "../../tos/lib/timer/Alarm.nc"
static void TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../tos/lib/timer/Counter.nc"
static TransformAlarmC__0__Counter__size_type TransformAlarmC__0__Counter__get(void );
# 77 "../../tos/lib/timer/TransformAlarmC.nc"
                                          TransformAlarmC__0__to_size_type TransformAlarmC__0__m_t0;
                                          TransformAlarmC__0__to_size_type TransformAlarmC__0__m_dt;

enum TransformAlarmC__0____nesc_unnamed4266 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof( TransformAlarmC__0__from_size_type ) - 1 - 5,
  TransformAlarmC__0__MAX_DELAY = ( TransformAlarmC__0__to_size_type )1 << TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline TransformAlarmC__0__to_size_type TransformAlarmC__0__Alarm__getNow(void );




static inline TransformAlarmC__0__to_size_type TransformAlarmC__0__Alarm__getAlarm(void );
# 102 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__Alarm__stop(void );




static void TransformAlarmC__0__set_alarm(void );
# 147 "../../tos/lib/timer/TransformAlarmC.nc"
static void TransformAlarmC__0__Alarm__startAt( TransformAlarmC__0__to_size_type t0, TransformAlarmC__0__to_size_type dt);
# 162 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__AlarmFrom__fired(void );
# 177 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__Counter__overflow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t AlarmToTimerC__0__fired__postTask(void );
# 109 "../../tos/lib/timer/Alarm.nc"
static AlarmToTimerC__0__Alarm__size_type AlarmToTimerC__0__Alarm__getNow(void );
# 103 "../../tos/lib/timer/Alarm.nc"
static void AlarmToTimerC__0__Alarm__startAt( AlarmToTimerC__0__Alarm__size_type t0, AlarmToTimerC__0__Alarm__size_type dt);
# 116 "../../tos/lib/timer/Alarm.nc"
static AlarmToTimerC__0__Alarm__size_type AlarmToTimerC__0__Alarm__getAlarm(void );
# 73 "../../tos/lib/timer/Alarm.nc"
static void AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../tos/lib/timer/Timer.nc"
static void AlarmToTimerC__0__Timer__fired(void );
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
enum AlarmToTimerC__0____nesc_unnamed4267 {
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
  AlarmToTimerC__0__fired = 0U
};
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
typedef int AlarmToTimerC__0____nesc_sillytask_fired[ AlarmToTimerC__0__fired];
# 55 "../../tos/lib/timer/AlarmToTimerC.nc"
uint32_t AlarmToTimerC__0__m_dt;
bool AlarmToTimerC__0__m_oneshot;

static inline void AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
# 71 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__Timer__stop(void );


static void AlarmToTimerC__0__fired__runTask(void );






static inline void AlarmToTimerC__0__Alarm__fired(void );
# 93 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t AlarmToTimerC__0__Timer__getNow(void );
# 67 "../../tos/interfaces/TaskBasic.nc"
static error_t VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../tos/lib/timer/Timer.nc"
static uint32_t VirtualizeTimerC__0__TimerFrom__getNow(void );
# 129 "../../tos/lib/timer/Timer.nc"
static void VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
# 78 "../../tos/lib/timer/Timer.nc"
static void VirtualizeTimerC__0__TimerFrom__stop(void );




static void VirtualizeTimerC__0__Timer__fired(
# 48 "../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7ff0d87fd3f0);
# 71 "../../tos/lib/timer/VirtualizeTimerC.nc"
enum VirtualizeTimerC__0____nesc_unnamed4268 {
# 71 "../../tos/lib/timer/VirtualizeTimerC.nc"
  VirtualizeTimerC__0__updateFromTimer = 1U
};
# 71 "../../tos/lib/timer/VirtualizeTimerC.nc"
typedef int VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[ VirtualizeTimerC__0__updateFromTimer];
# 53 "../../tos/lib/timer/VirtualizeTimerC.nc"
enum VirtualizeTimerC__0____nesc_unnamed4269 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U,
  VirtualizeTimerC__0__END_OF_LIST = 255
};
# 59 "../../tos/lib/timer/VirtualizeTimerC.nc"
typedef struct VirtualizeTimerC__0____nesc_unnamed4270 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} VirtualizeTimerC__0__Timer_t;

                                   VirtualizeTimerC__0__Timer_t VirtualizeTimerC__0__m_timers[ VirtualizeTimerC__0__NUM_TIMERS];




static void VirtualizeTimerC__0__fireTimers(uint32_t now);
# 100 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 139 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
# 154 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
# 204 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void CounterToLocalTimeC__0__Counter__overflow(void );
# 408 "../../tos/chips/msp430/msp430hardware.h"
static inline void __nesc_enable_interrupt(void )
{
  __eint();
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__2__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__1__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__0__Timer__overflow(void )
{
}
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430TimerP__0__Timer__overflow(void ){
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__0__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__1__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__2__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 137 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__0__Overflow__fired(void )
{
                               Msp430TimerP__0__Timer__overflow();
}





static inline void Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerP__0__Event__fired(uint8_t arg_0x7ff0d8d048b0){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
  switch (arg_0x7ff0d8d048b0) {
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 0:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__0__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 1:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__1__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 2:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__2__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 5:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                   Msp430TimerP__0__Overflow__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    default:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                   Msp430TimerP__0__Event__default__fired(arg_0x7ff0d8d048b0);
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    }
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__0__VectorTimerX0__fired(void )
{
                               Msp430TimerP__0__Event__fired(0);
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                               Msp430TimerP__0__VectorTimerX0__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__0__cc_t Msp430TimerCapComP__0__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__0____nesc_unnamed4271 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__0__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__0__cc_t Msp430TimerCapComP__0__Control__getControl(void )
{
  return Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__0__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__0__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__0__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__0__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__0__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__1__cc_t Msp430TimerCapComP__1__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__1____nesc_unnamed4272 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__1__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__1__cc_t Msp430TimerCapComP__1__Control__getControl(void )
{
  return Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__1__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__1__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__1__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__1__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__1__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__2__cc_t Msp430TimerCapComP__2__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__2____nesc_unnamed4273 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__2__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__2__cc_t Msp430TimerCapComP__2__Control__getControl(void )
{
  return Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__2__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__2__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__2__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__2__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__2__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 131 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;
# 134 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
                               Msp430TimerP__0__Event__fired(n >> 1);
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                               Msp430TimerP__0__VectorTimerX1__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 126 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__1__VectorTimerX0__fired(void )
{
                               Msp430TimerP__1__Event__fired(0);
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                               Msp430TimerP__1__VectorTimerX0__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__9__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__8__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__7__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__6__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__5__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__4__Timer__overflow(void )
{
}
# 196 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Timer__overflow(void )
{
}
# 114 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}
# 58 "../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void CounterToLocalTimeC__0__Counter__overflow(void )
{
}
# 177 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__Counter__overflow(void )
{
}
# 82 "../../tos/lib/timer/Counter.nc"
inline static void TransformCounterC__0__Counter__overflow(void ){
# 82 "../../tos/lib/timer/Counter.nc"
                                            TransformAlarmC__0__Counter__overflow();
# 82 "../../tos/lib/timer/Counter.nc"
                                        CounterToLocalTimeC__0__Counter__overflow();
# 82 "../../tos/lib/timer/Counter.nc"
}
# 82 "../../tos/lib/timer/Counter.nc"
# 133 "../../tos/lib/timer/TransformCounterC.nc"
static inline void TransformCounterC__0__CounterFrom__overflow(void )
{

  {
                                 TransformCounterC__0__m_upper++;
    if (( TransformCounterC__0__m_upper & TransformCounterC__0__OVERFLOW_MASK) == 0) {
                                   TransformCounterC__0__Counter__overflow();
      }
  }
}
# 82 "../../tos/lib/timer/Counter.nc"
inline static void Msp430CounterC__0__Counter__overflow(void ){
# 82 "../../tos/lib/timer/Counter.nc"
                               TransformCounterC__0__CounterFrom__overflow();
# 82 "../../tos/lib/timer/Counter.nc"
}
# 82 "../../tos/lib/timer/Counter.nc"
# 64 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void Msp430CounterC__0__Msp430Timer__overflow(void )
{
                                 Msp430CounterC__0__Counter__overflow();
}
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430TimerP__1__Timer__overflow(void ){
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                 Msp430CounterC__0__Msp430Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                                        Msp430AlarmC__0__Msp430Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__3__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__4__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__5__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__6__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__7__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__8__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
                                Msp430TimerCapComP__9__Timer__overflow();
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 48 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 137 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__1__Overflow__fired(void )
{
                               Msp430TimerP__1__Timer__overflow();
}
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t AlarmToTimerC__0__fired__postTask(void ){
# 67 "../../tos/interfaces/TaskBasic.nc"
  unsigned char __nesc_result;
# 67 "../../tos/interfaces/TaskBasic.nc"
# 67 "../../tos/interfaces/TaskBasic.nc"
  __nesc_result = SchedulerBasicP__TaskBasic__postTask( AlarmToTimerC__0__fired);
# 67 "../../tos/interfaces/TaskBasic.nc"
# 67 "../../tos/interfaces/TaskBasic.nc"
  return __nesc_result;
# 67 "../../tos/interfaces/TaskBasic.nc"
}
# 67 "../../tos/interfaces/TaskBasic.nc"
# 81 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__Alarm__fired(void )
{
# 82 "../../tos/lib/timer/AlarmToTimerC.nc"
                                  AlarmToTimerC__0__fired__postTask();
}
# 78 "../../tos/lib/timer/Alarm.nc"
inline static void TransformAlarmC__0__Alarm__fired(void ){
# 78 "../../tos/lib/timer/Alarm.nc"
                                  AlarmToTimerC__0__Alarm__fired();
# 78 "../../tos/lib/timer/Alarm.nc"
}
# 78 "../../tos/lib/timer/Alarm.nc"
# 162 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__AlarmFrom__fired(void )
{

  {
    if ( TransformAlarmC__0__m_dt == 0)
      {
                                                  TransformAlarmC__0__Alarm__fired();
      }
    else
      {
                                                  TransformAlarmC__0__set_alarm();
      }
  }
}
# 78 "../../tos/lib/timer/Alarm.nc"
inline static void Msp430AlarmC__0__Alarm__fired(void ){
# 78 "../../tos/lib/timer/Alarm.nc"
                                            TransformAlarmC__0__AlarmFrom__fired();
# 78 "../../tos/lib/timer/Alarm.nc"
}
# 78 "../../tos/lib/timer/Alarm.nc"
# 135 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
                                Msp430TimerCapComP__3__Control__disableEvents();
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
}
# 58 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
# 70 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Msp430Compare__fired(void )
{
                                                        Msp430AlarmC__0__Msp430TimerControl__disableEvents();
                                                        Msp430AlarmC__0__Alarm__fired();
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__3__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                                        Msp430AlarmC__0__Msp430Compare__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__3__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__3__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__3__cc_t Msp430TimerCapComP__3__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__3____nesc_unnamed4274 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__3__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__3__cc_t Msp430TimerCapComP__3__Control__getControl(void )
{
  return Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Event__fired(void )
{
  if ( Msp430TimerCapComP__3__Control__getControl().cap) {
                                  Msp430TimerCapComP__3__Capture__captured( Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__3__Compare__fired();
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
inline static uint16_t Msp430CounterC__0__Msp430Timer__get(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  unsigned int __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  __nesc_result = Msp430TimerP__1__Timer__get();
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  return __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 49 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t Msp430CounterC__0__Counter__get(void )
{
  return Msp430CounterC__0__Msp430Timer__get();
}
# 64 "../../tos/lib/timer/Counter.nc"
inline static TransformCounterC__0__CounterFrom__size_type TransformCounterC__0__CounterFrom__get(void ){
# 64 "../../tos/lib/timer/Counter.nc"
  unsigned int __nesc_result;
# 64 "../../tos/lib/timer/Counter.nc"
# 64 "../../tos/lib/timer/Counter.nc"
  __nesc_result = Msp430CounterC__0__Counter__get();
# 64 "../../tos/lib/timer/Counter.nc"
# 64 "../../tos/lib/timer/Counter.nc"
  return __nesc_result;
# 64 "../../tos/lib/timer/Counter.nc"
}
# 64 "../../tos/lib/timer/Counter.nc"
# 81 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  unsigned char __nesc_result;
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  __nesc_result = Msp430TimerP__1__Timer__isOverflowPending();
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  return __nesc_result;
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 46 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 54 "../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return Msp430CounterC__0__Msp430Timer__isOverflowPending();
}
# 71 "../../tos/lib/timer/Counter.nc"
inline static bool TransformCounterC__0__CounterFrom__isOverflowPending(void ){
# 71 "../../tos/lib/timer/Counter.nc"
  unsigned char __nesc_result;
# 71 "../../tos/lib/timer/Counter.nc"
# 71 "../../tos/lib/timer/Counter.nc"
  __nesc_result = Msp430CounterC__0__Counter__isOverflowPending();
# 71 "../../tos/lib/timer/Counter.nc"
# 71 "../../tos/lib/timer/Counter.nc"
  return __nesc_result;
# 71 "../../tos/lib/timer/Counter.nc"
}
# 71 "../../tos/lib/timer/Counter.nc"
# 130 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
                                Msp430TimerCapComP__3__Control__enableEvents();
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
}
# 57 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
# 95 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
                                Msp430TimerCapComP__3__Control__clearPendingInterrupt();
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
}
# 44 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
# 155 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__3__Compare__setEvent(time);
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 41 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t Msp430TimerCapComP__3__Timer__get(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  unsigned int __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  __nesc_result = Msp430TimerP__1__Timer__get();
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  return __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 165 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = Msp430TimerCapComP__3__Timer__get() + x;
}
# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 43 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t Msp430AlarmC__0__Msp430Timer__get(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  unsigned int __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  __nesc_result = Msp430TimerP__1__Timer__get();
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
  return __nesc_result;
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Timer.nc"
# 81 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{

  {
    uint16_t now = Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;
# 87 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
    if (elapsed >= dt)
      {
                                                              Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else
      {
        uint16_t remaining = dt - elapsed;
# 94 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
        if (remaining <= 2) {
                                                                Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
# 97 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
                                                                Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
# 99 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
                                                          Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
                                                          Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}
# 103 "../../tos/lib/timer/Alarm.nc"
inline static void TransformAlarmC__0__AlarmFrom__startAt( TransformAlarmC__0__AlarmFrom__size_type t0, TransformAlarmC__0__AlarmFrom__size_type dt){
# 103 "../../tos/lib/timer/Alarm.nc"
                                                        Msp430AlarmC__0__Alarm__startAt(t0, dt);
# 103 "../../tos/lib/timer/Alarm.nc"
}
# 103 "../../tos/lib/timer/Alarm.nc"
# 192 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__4__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__4__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__4__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__4__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__4__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__4__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__4__cc_t Msp430TimerCapComP__4__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__4____nesc_unnamed4275 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__4__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__4__cc_t Msp430TimerCapComP__4__Control__getControl(void )
{
  return Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__4__Event__fired(void )
{
  if ( Msp430TimerCapComP__4__Control__getControl().cap) {
                                  Msp430TimerCapComP__4__Capture__captured( Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__4__Compare__fired();
    }
}




static inline void Msp430TimerCapComP__5__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__5__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__5__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__5__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__5__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__5__cc_t Msp430TimerCapComP__5__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__5____nesc_unnamed4276 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__5__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__5__cc_t Msp430TimerCapComP__5__Control__getControl(void )
{
  return Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__5__Event__fired(void )
{
  if ( Msp430TimerCapComP__5__Control__getControl().cap) {
                                  Msp430TimerCapComP__5__Capture__captured( Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__5__Compare__fired();
    }
}




static inline void Msp430TimerCapComP__6__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__6__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__6__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__6__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__6__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__6__cc_t Msp430TimerCapComP__6__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__6____nesc_unnamed4277 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__6__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__6__cc_t Msp430TimerCapComP__6__Control__getControl(void )
{
  return Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__6__Event__fired(void )
{
  if ( Msp430TimerCapComP__6__Control__getControl().cap) {
                                  Msp430TimerCapComP__6__Capture__captured( Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__6__Compare__fired();
    }
}




static inline void Msp430TimerCapComP__7__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__7__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__7__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__7__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__7__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__7__cc_t Msp430TimerCapComP__7__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__7____nesc_unnamed4278 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__7__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__7__cc_t Msp430TimerCapComP__7__Control__getControl(void )
{
  return Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__7__Event__fired(void )
{
  if ( Msp430TimerCapComP__7__Control__getControl().cap) {
                                  Msp430TimerCapComP__7__Capture__captured( Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void Msp430TimerCapComP__8__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__8__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__8__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__8__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__8__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__8__cc_t Msp430TimerCapComP__8__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__8____nesc_unnamed4279 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__8__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__8__cc_t Msp430TimerCapComP__8__Control__getControl(void )
{
  return Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__8__Event__fired(void )
{
  if ( Msp430TimerCapComP__8__Control__getControl().cap) {
                                  Msp430TimerCapComP__8__Capture__captured( Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void Msp430TimerCapComP__9__Compare__default__fired(void )
{
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430TimerCapComP__9__Compare__fired(void ){
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
                                Msp430TimerCapComP__9__Compare__default__fired();
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
}
# 45 "../../tos/chips/msp430/timer/Msp430Compare.nc"
# 150 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}
# 188 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void Msp430TimerCapComP__9__Capture__captured(uint16_t time){
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
                                Msp430TimerCapComP__9__Capture__default__captured(time);
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
}
# 91 "../../tos/chips/msp430/timer/Msp430Capture.nc"
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__9__cc_t Msp430TimerCapComP__9__int2CC(uint16_t x)
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__9____nesc_unnamed4280 {
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t f;
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__9__cc_t t;
  }
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 58 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}
# 85 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline Msp430TimerCapComP__9__cc_t Msp430TimerCapComP__9__Control__getControl(void )
{
  return Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__9__Event__fired(void )
{
  if ( Msp430TimerCapComP__9__Control__getControl().cap) {
                                  Msp430TimerCapComP__9__Capture__captured( Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__9__Compare__fired();
    }
}
# 131 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;
# 134 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
                               Msp430TimerP__1__Event__fired(n >> 1);
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                               Msp430TimerP__1__VectorTimerX1__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 126 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{

  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}
# 57 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
# 57 "../../tos/interfaces/Scheduler.nc"
  SchedulerBasicP__Scheduler__init();
# 57 "../../tos/interfaces/Scheduler.nc"
}
# 57 "../../tos/interfaces/Scheduler.nc"
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__38__IO__set(void )
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  * (volatile uint8_t * )49U |= 0x01 << 6;
}
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__2__HplGeneralIO__set(void ){
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__38__IO__set();
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__2__GeneralIO__set(void )
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__2__HplGeneralIO__set();
}
# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
# 40 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__2__GeneralIO__set();
# 40 "../../tos/interfaces/GeneralIO.nc"
}
# 40 "../../tos/interfaces/GeneralIO.nc"
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__37__IO__set(void )
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  * (volatile uint8_t * )49U |= 0x01 << 5;
}
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__1__HplGeneralIO__set(void ){
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__37__IO__set();
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__1__GeneralIO__set(void )
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__1__HplGeneralIO__set();
}
# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
# 40 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__1__GeneralIO__set();
# 40 "../../tos/interfaces/GeneralIO.nc"
}
# 40 "../../tos/interfaces/GeneralIO.nc"
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__0__HplGeneralIO__set(void ){
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__36__IO__set();
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 48 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__0__GeneralIO__set(void )
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 48 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__0__HplGeneralIO__set();
}
# 40 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
# 40 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__0__GeneralIO__set();
# 40 "../../tos/interfaces/GeneralIO.nc"
}
# 40 "../../tos/interfaces/GeneralIO.nc"
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__38__IO__makeOutput(void )
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  * (volatile uint8_t * )50U |= 0x01 << 6;
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__38__IO__makeOutput();
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__2__GeneralIO__makeOutput(void )
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__2__HplGeneralIO__makeOutput();
}
# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
# 46 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__2__GeneralIO__makeOutput();
# 46 "../../tos/interfaces/GeneralIO.nc"
}
# 46 "../../tos/interfaces/GeneralIO.nc"
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__37__IO__makeOutput(void )
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  * (volatile uint8_t * )50U |= 0x01 << 5;
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__37__IO__makeOutput();
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__1__GeneralIO__makeOutput(void )
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__1__HplGeneralIO__makeOutput();
}
# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
# 46 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__1__GeneralIO__makeOutput();
# 46 "../../tos/interfaces/GeneralIO.nc"
}
# 46 "../../tos/interfaces/GeneralIO.nc"
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__36__IO__makeOutput(void )
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 63 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  * (volatile uint8_t * )50U |= 0x01 << 4;
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__36__IO__makeOutput();
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 85 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__0__GeneralIO__makeOutput(void )
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 54 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__0__HplGeneralIO__makeOutput();
}
# 46 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
# 46 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__0__GeneralIO__makeOutput();
# 46 "../../tos/interfaces/GeneralIO.nc"
}
# 46 "../../tos/interfaces/GeneralIO.nc"
# 56 "../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
# 56 "../../tos/system/LedsP.nc"
{
# 57 "../../tos/system/LedsP.nc"
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
# 62 "../../tos/interfaces/Init.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  __nesc_result = LedsP__Init__init();
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
}
# 62 "../../tos/interfaces/Init.nc"
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_SIMO0_PIN()
# 36 "../../tos/platforms/telosb/hardware.h"
{
# 36 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x0019");
# 36 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 1;
}
# 37 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_UCLK0_PIN()
# 37 "../../tos/platforms/telosb/hardware.h"
{
# 37 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x0019");
# 37 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 3;
}
# 88 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_FLASH_CS_PIN()
# 88 "../../tos/platforms/telosb/hardware.h"
{
# 88 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001D");
# 88 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 4;
}
# 37 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_UCLK0_PIN()
# 37 "../../tos/platforms/telosb/hardware.h"
{
# 37 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x0019");
# 37 "../../tos/platforms/telosb/hardware.h"
  r &= ~(1 << 3);
}
# 88 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_FLASH_CS_PIN()
# 88 "../../tos/platforms/telosb/hardware.h"
{
# 88 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001D");
# 88 "../../tos/platforms/telosb/hardware.h"
  r &= ~(1 << 4);
}
# 11 "../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
# 11 "../../tos/platforms/telosb/MotePlatformC.nc"
{
  __nop();
# 12 "../../tos/platforms/telosb/MotePlatformC.nc"
  __nop();
}
# 89 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_SET_FLASH_HOLD_PIN()
# 89 "../../tos/platforms/telosb/hardware.h"
{
# 89 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001D");
# 89 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 7;
}
# 88 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()
# 88 "../../tos/platforms/telosb/hardware.h"
{
# 88 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001E");
# 88 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 4;
}
# 89 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()
# 89 "../../tos/platforms/telosb/hardware.h"
{
# 89 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001E");
# 89 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 7;
}
# 37 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_UCLK0_OUTPUT()
# 37 "../../tos/platforms/telosb/hardware.h"
{
# 37 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001A");
# 37 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 3;
}
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_MAKE_SIMO0_OUTPUT()
# 36 "../../tos/platforms/telosb/hardware.h"
{
# 36 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x001A");
# 36 "../../tos/platforms/telosb/hardware.h"
  r |= 1 << 1;
}
# 27 "../../tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
# 27 "../../tos/platforms/telosb/MotePlatformC.nc"
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
# 6 "../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u)
# 6 "../../tos/platforms/telosb/MotePlatformC.nc"
{
  uint16_t t0 = TAR;
# 8 "../../tos/platforms/telosb/MotePlatformC.nc"
  while (TAR - t0 <= u) ;
}
# 56 "../../tos/platforms/telosb/MotePlatformC.nc"
static inline error_t MotePlatformC__Init__init(void )
# 56 "../../tos/platforms/telosb/MotePlatformC.nc"
{


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
# 62 "../../tos/interfaces/Init.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  __nesc_result = MotePlatformC__Init__init();
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
}
# 62 "../../tos/interfaces/Init.nc"
# 163 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}
# 151 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}
# 115 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;
# 127 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}
# 145 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
}
# 43 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
# 100 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;
# 112 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}
# 140 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
}
# 42 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
# 79 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}
# 135 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}
# 41 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
# 41 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
  Msp430ClockP__Msp430ClockInit__default__initClocks();
# 41 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
}
# 41 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
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
# 67 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}
# 130 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
}
# 40 "../../tos/chips/msp430/timer/Msp430ClockInit.nc"
# 229 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;


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
# 62 "../../tos/interfaces/Init.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  __nesc_result = Msp430ClockP__Init__init();
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
}
# 62 "../../tos/interfaces/Init.nc"
# 10 "../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
# 10 "../../tos/platforms/telosa/PlatformP.nc"
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}
# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
# 62 "../../tos/interfaces/Init.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  __nesc_result = PlatformP__Init__init();
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
}
# 62 "../../tos/interfaces/Init.nc"
# 36 "../../tos/platforms/telosb/hardware.h"
static inline void TOSH_CLR_SIMO0_PIN()
# 36 "../../tos/platforms/telosb/hardware.h"
{
# 36 "../../tos/platforms/telosb/hardware.h"
  static volatile uint8_t r __asm ("0x0019");
# 36 "../../tos/platforms/telosb/hardware.h"
  r &= ~(1 << 1);
}
# 65 "../../tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
# 65 "../../tos/interfaces/Scheduler.nc"
  unsigned char __nesc_result;
# 65 "../../tos/interfaces/Scheduler.nc"
# 65 "../../tos/interfaces/Scheduler.nc"
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
# 65 "../../tos/interfaces/Scheduler.nc"
# 65 "../../tos/interfaces/Scheduler.nc"
  return __nesc_result;
# 65 "../../tos/interfaces/Scheduler.nc"
}
# 65 "../../tos/interfaces/Scheduler.nc"
# 65 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void Msp430AlarmC__0__Alarm__stop(void )
{
                                                        Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}
# 73 "../../tos/lib/timer/Alarm.nc"
inline static void TransformAlarmC__0__AlarmFrom__stop(void ){
# 73 "../../tos/lib/timer/Alarm.nc"
                                                        Msp430AlarmC__0__Alarm__stop();
# 73 "../../tos/lib/timer/Alarm.nc"
}
# 73 "../../tos/lib/timer/Alarm.nc"
# 102 "../../tos/lib/timer/TransformAlarmC.nc"
static inline void TransformAlarmC__0__Alarm__stop(void )
{
                                            TransformAlarmC__0__AlarmFrom__stop();
}
# 73 "../../tos/lib/timer/Alarm.nc"
inline static void AlarmToTimerC__0__Alarm__stop(void ){
# 73 "../../tos/lib/timer/Alarm.nc"
                                            TransformAlarmC__0__Alarm__stop();
# 73 "../../tos/lib/timer/Alarm.nc"
}
# 73 "../../tos/lib/timer/Alarm.nc"
# 71 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__Timer__stop(void )
{
# 72 "../../tos/lib/timer/AlarmToTimerC.nc"
                                  AlarmToTimerC__0__Alarm__stop();
}
# 78 "../../tos/lib/timer/Timer.nc"
inline static void VirtualizeTimerC__0__TimerFrom__stop(void ){
# 78 "../../tos/lib/timer/Timer.nc"
                                  AlarmToTimerC__0__Timer__stop();
# 78 "../../tos/lib/timer/Timer.nc"
}
# 78 "../../tos/lib/timer/Timer.nc"
# 79 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
# 79 "../../tos/system/LedsP.nc"
{
  LedsP__Led0__set();
  ;
# 81 "../../tos/system/LedsP.nc"
  ;
}
# 61 "../../tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0Off(void ){
# 61 "../../tos/interfaces/Leds.nc"
  LedsP__Leds__led0Off();
# 61 "../../tos/interfaces/Leds.nc"
}
# 61 "../../tos/interfaces/Leds.nc"
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__36__IO__clr(void )
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
# 57 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__0__HplGeneralIO__clr(void ){
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__36__IO__clr();
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 53 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__0__GeneralIO__clr(void )
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 49 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__0__HplGeneralIO__clr();
}
# 41 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
# 41 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__0__GeneralIO__clr();
# 41 "../../tos/interfaces/GeneralIO.nc"
}
# 41 "../../tos/interfaces/GeneralIO.nc"
# 74 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
# 74 "../../tos/system/LedsP.nc"
{
  LedsP__Led0__clr();
  ;
# 76 "../../tos/system/LedsP.nc"
  ;
}
# 56 "../../tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0On(void ){
# 56 "../../tos/interfaces/Leds.nc"
  LedsP__Leds__led0On();
# 56 "../../tos/interfaces/Leds.nc"
}
# 56 "../../tos/interfaces/Leds.nc"
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__36__IO__toggle(void )
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    * (volatile uint8_t * )49U ^= 0x01 << 4;
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__0__HplGeneralIO__toggle(void ){
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__36__IO__toggle();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__0__GeneralIO__toggle(void )
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__0__HplGeneralIO__toggle();
}
# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
# 42 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__0__GeneralIO__toggle();
# 42 "../../tos/interfaces/GeneralIO.nc"
}
# 42 "../../tos/interfaces/GeneralIO.nc"
# 84 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
# 84 "../../tos/system/LedsP.nc"
{
  LedsP__Led0__toggle();
  ;
# 86 "../../tos/system/LedsP.nc"
  ;
}
# 67 "../../tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0Toggle(void ){
# 67 "../../tos/interfaces/Leds.nc"
  LedsP__Leds__led0Toggle();
# 67 "../../tos/interfaces/Leds.nc"
}
# 67 "../../tos/interfaces/Leds.nc"
# 67 "BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{
  ;
  BlinkC__Leds__led0Toggle();
  BlinkC__Leds__led0On();
  BlinkC__Leds__led0Off();
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__37__IO__toggle(void )
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    * (volatile uint8_t * )49U ^= 0x01 << 5;
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__1__HplGeneralIO__toggle(void ){
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__37__IO__toggle();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__1__GeneralIO__toggle(void )
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__1__HplGeneralIO__toggle();
}
# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
# 42 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__1__GeneralIO__toggle();
# 42 "../../tos/interfaces/GeneralIO.nc"
}
# 42 "../../tos/interfaces/GeneralIO.nc"
# 99 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
# 99 "../../tos/system/LedsP.nc"
{
  LedsP__Led1__toggle();
  ;
# 101 "../../tos/system/LedsP.nc"
  ;
}
# 83 "../../tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led1Toggle(void ){
# 83 "../../tos/interfaces/Leds.nc"
  LedsP__Leds__led1Toggle();
# 83 "../../tos/interfaces/Leds.nc"
}
# 83 "../../tos/interfaces/Leds.nc"
# 75 "BlinkC.nc"
static inline void BlinkC__Timer1__fired(void )
{
  ;
  BlinkC__Leds__led1Toggle();
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void HplMsp430GeneralIOP__38__IO__toggle(void )
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    * (volatile uint8_t * )49U ^= 0x01 << 6;
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430GpioC__2__HplGeneralIO__toggle(void ){
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
                             HplMsp430GeneralIOP__38__IO__toggle();
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
}
# 58 "../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void Msp430GpioC__2__GeneralIO__toggle(void )
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
{
# 50 "../../tos/chips/msp430/pins/Msp430GpioC.nc"
                            Msp430GpioC__2__HplGeneralIO__toggle();
}
# 42 "../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
# 42 "../../tos/interfaces/GeneralIO.nc"
                            Msp430GpioC__2__GeneralIO__toggle();
# 42 "../../tos/interfaces/GeneralIO.nc"
}
# 42 "../../tos/interfaces/GeneralIO.nc"
# 114 "../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
# 114 "../../tos/system/LedsP.nc"
{
  LedsP__Led2__toggle();
  ;
# 116 "../../tos/system/LedsP.nc"
  ;
}
# 100 "../../tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led2Toggle(void ){
# 100 "../../tos/interfaces/Leds.nc"
  LedsP__Leds__led2Toggle();
# 100 "../../tos/interfaces/Leds.nc"
}
# 100 "../../tos/interfaces/Leds.nc"
# 81 "BlinkC.nc"
static inline void BlinkC__Timer2__fired(void )
{
  ;
  BlinkC__Leds__led2Toggle();
}
# 204 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}
# 83 "../../tos/lib/timer/Timer.nc"
inline static void VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7ff0d87fd3f0){
# 83 "../../tos/lib/timer/Timer.nc"
  switch (arg_0x7ff0d87fd3f0) {
# 83 "../../tos/lib/timer/Timer.nc"
    case 0U:
# 83 "../../tos/lib/timer/Timer.nc"
      BlinkC__Timer0__fired();
# 83 "../../tos/lib/timer/Timer.nc"
      break;
# 83 "../../tos/lib/timer/Timer.nc"
    case 1U:
# 83 "../../tos/lib/timer/Timer.nc"
      BlinkC__Timer1__fired();
# 83 "../../tos/lib/timer/Timer.nc"
      break;
# 83 "../../tos/lib/timer/Timer.nc"
    case 2U:
# 83 "../../tos/lib/timer/Timer.nc"
      BlinkC__Timer2__fired();
# 83 "../../tos/lib/timer/Timer.nc"
      break;
# 83 "../../tos/lib/timer/Timer.nc"
    default:
# 83 "../../tos/lib/timer/Timer.nc"
                                         VirtualizeTimerC__0__Timer__default__fired(arg_0x7ff0d87fd3f0);
# 83 "../../tos/lib/timer/Timer.nc"
      break;
# 83 "../../tos/lib/timer/Timer.nc"
    }
# 83 "../../tos/lib/timer/Timer.nc"
}
# 83 "../../tos/lib/timer/Timer.nc"
# 103 "../../tos/lib/timer/Alarm.nc"
inline static void AlarmToTimerC__0__Alarm__startAt( AlarmToTimerC__0__Alarm__size_type t0, AlarmToTimerC__0__Alarm__size_type dt){
# 103 "../../tos/lib/timer/Alarm.nc"
                                            TransformAlarmC__0__Alarm__startAt(t0, dt);
# 103 "../../tos/lib/timer/Alarm.nc"
}
# 103 "../../tos/lib/timer/Alarm.nc"
# 58 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
                                  AlarmToTimerC__0__m_dt = dt;
                                  AlarmToTimerC__0__m_oneshot = oneshot;
                                  AlarmToTimerC__0__Alarm__startAt(t0, dt);
}
# 93 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline void AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
# 94 "../../tos/lib/timer/AlarmToTimerC.nc"
                                  AlarmToTimerC__0__start(t0, dt, TRUE);
}
# 129 "../../tos/lib/timer/Timer.nc"
inline static void VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
# 129 "../../tos/lib/timer/Timer.nc"
                                  AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
# 129 "../../tos/lib/timer/Timer.nc"
}
# 129 "../../tos/lib/timer/Timer.nc"
# 91 "../../tos/lib/timer/TransformAlarmC.nc"
static inline TransformAlarmC__0__to_size_type TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 93 "../../tos/lib/timer/TransformAlarmC.nc"
    {
                                                TransformAlarmC__0__to_size_type __nesc_temp =
# 93 "../../tos/lib/timer/TransformAlarmC.nc"
                                                TransformAlarmC__0__m_t0 + TransformAlarmC__0__m_dt;

      {
# 93 "../../tos/lib/timer/TransformAlarmC.nc"
        __nesc_atomic_end(__nesc_atomic);
# 93 "../../tos/lib/timer/TransformAlarmC.nc"
        return __nesc_temp;
      }
    }
# 95 "../../tos/lib/timer/TransformAlarmC.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 116 "../../tos/lib/timer/Alarm.nc"
inline static AlarmToTimerC__0__Alarm__size_type AlarmToTimerC__0__Alarm__getAlarm(void ){
# 116 "../../tos/lib/timer/Alarm.nc"
  unsigned long __nesc_result;
# 116 "../../tos/lib/timer/Alarm.nc"
# 116 "../../tos/lib/timer/Alarm.nc"
  __nesc_result = TransformAlarmC__0__Alarm__getAlarm();
# 116 "../../tos/lib/timer/Alarm.nc"
# 116 "../../tos/lib/timer/Alarm.nc"
  return __nesc_result;
# 116 "../../tos/lib/timer/Alarm.nc"
}
# 116 "../../tos/lib/timer/Alarm.nc"
# 64 "../../tos/lib/timer/Counter.nc"
inline static TransformAlarmC__0__Counter__size_type TransformAlarmC__0__Counter__get(void ){
# 64 "../../tos/lib/timer/Counter.nc"
  unsigned long __nesc_result;
# 64 "../../tos/lib/timer/Counter.nc"
# 64 "../../tos/lib/timer/Counter.nc"
  __nesc_result = TransformCounterC__0__Counter__get();
# 64 "../../tos/lib/timer/Counter.nc"
# 64 "../../tos/lib/timer/Counter.nc"
  return __nesc_result;
# 64 "../../tos/lib/timer/Counter.nc"
}
# 64 "../../tos/lib/timer/Counter.nc"
# 86 "../../tos/lib/timer/TransformAlarmC.nc"
static inline TransformAlarmC__0__to_size_type TransformAlarmC__0__Alarm__getNow(void )
{
  return TransformAlarmC__0__Counter__get();
}
# 109 "../../tos/lib/timer/Alarm.nc"
inline static AlarmToTimerC__0__Alarm__size_type AlarmToTimerC__0__Alarm__getNow(void ){
# 109 "../../tos/lib/timer/Alarm.nc"
  unsigned long __nesc_result;
# 109 "../../tos/lib/timer/Alarm.nc"
# 109 "../../tos/lib/timer/Alarm.nc"
  __nesc_result = TransformAlarmC__0__Alarm__getNow();
# 109 "../../tos/lib/timer/Alarm.nc"
# 109 "../../tos/lib/timer/Alarm.nc"
  return __nesc_result;
# 109 "../../tos/lib/timer/Alarm.nc"
}
# 109 "../../tos/lib/timer/Alarm.nc"
# 96 "../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t AlarmToTimerC__0__Timer__getNow(void )
{
# 97 "../../tos/lib/timer/AlarmToTimerC.nc"
  return AlarmToTimerC__0__Alarm__getNow();
}
# 136 "../../tos/lib/timer/Timer.nc"
inline static uint32_t VirtualizeTimerC__0__TimerFrom__getNow(void ){
# 136 "../../tos/lib/timer/Timer.nc"
  unsigned long __nesc_result;
# 136 "../../tos/lib/timer/Timer.nc"
# 136 "../../tos/lib/timer/Timer.nc"
  __nesc_result = AlarmToTimerC__0__Timer__getNow();
# 136 "../../tos/lib/timer/Timer.nc"
# 136 "../../tos/lib/timer/Timer.nc"
  return __nesc_result;
# 136 "../../tos/lib/timer/Timer.nc"
}
# 136 "../../tos/lib/timer/Timer.nc"
# 139 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void VirtualizeTimerC__0__TimerFrom__fired(void )
{
                                     VirtualizeTimerC__0__fireTimers( VirtualizeTimerC__0__TimerFrom__getNow());
}
# 83 "../../tos/lib/timer/Timer.nc"
inline static void AlarmToTimerC__0__Timer__fired(void ){
# 83 "../../tos/lib/timer/Timer.nc"
                                     VirtualizeTimerC__0__TimerFrom__fired();
# 83 "../../tos/lib/timer/Timer.nc"
}
# 83 "../../tos/lib/timer/Timer.nc"
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t Msp430TimerCapComP__3__CC2int( Msp430TimerCapComP__3__cc_t x)
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
{
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  union Msp430TimerCapComP__3____nesc_unnamed4281 {
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__3__cc_t f;
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
    uint16_t t;
  }
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  c = { .f = x };
# 57 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
  return c.t;
}

static inline uint16_t Msp430TimerCapComP__3__compareControl(void )
{
                                Msp430TimerCapComP__3__cc_t x = {
  .cm = 1,
  .ccis = 0,
  .clld = 0,
  .cap = 0,
  .ccie = 0 };

  return Msp430TimerCapComP__3__CC2int(x);
}
# 105 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = Msp430TimerCapComP__3__compareControl();
}
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
                                Msp430TimerCapComP__3__Control__setControlAsCompare();
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
}
# 47 "../../tos/chips/msp430/timer/Msp430TimerControl.nc"
# 53 "../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t Msp430AlarmC__0__Init__init(void )
{
                                                        Msp430AlarmC__0__Msp430TimerControl__disableEvents();
                                                        Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}
# 62 "../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
# 62 "../../tos/interfaces/Init.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  __nesc_result = Msp430AlarmC__0__Init__init();
# 62 "../../tos/interfaces/Init.nc"
# 62 "../../tos/interfaces/Init.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/Init.nc"
}
# 62 "../../tos/interfaces/Init.nc"
# 64 "../../tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer2__startPeriodic(uint32_t dt){
# 64 "../../tos/lib/timer/Timer.nc"
                                     VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
# 64 "../../tos/lib/timer/Timer.nc"
}
# 64 "../../tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer1__startPeriodic(uint32_t dt){
# 64 "../../tos/lib/timer/Timer.nc"
                                     VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
# 64 "../../tos/lib/timer/Timer.nc"
}
# 64 "../../tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
# 64 "../../tos/lib/timer/Timer.nc"
                                     VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
# 64 "../../tos/lib/timer/Timer.nc"
}
# 64 "../../tos/lib/timer/Timer.nc"
# 60 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__Timer0__startPeriodic(250);
  BlinkC__Timer1__startPeriodic(500);
  BlinkC__Timer2__startPeriodic(1000);
}
# 60 "../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
# 60 "../../tos/interfaces/Boot.nc"
  BlinkC__Boot__booted();
# 60 "../../tos/interfaces/Boot.nc"
}
# 60 "../../tos/interfaces/Boot.nc"
# 67 "../../tos/interfaces/TaskBasic.nc"
inline static error_t VirtualizeTimerC__0__updateFromTimer__postTask(void ){
# 67 "../../tos/interfaces/TaskBasic.nc"
  unsigned char __nesc_result;
# 67 "../../tos/interfaces/TaskBasic.nc"
# 67 "../../tos/interfaces/TaskBasic.nc"
  __nesc_result = SchedulerBasicP__TaskBasic__postTask( VirtualizeTimerC__0__updateFromTimer);
# 67 "../../tos/interfaces/TaskBasic.nc"
# 67 "../../tos/interfaces/TaskBasic.nc"
  return __nesc_result;
# 67 "../../tos/interfaces/TaskBasic.nc"
}
# 67 "../../tos/interfaces/TaskBasic.nc"
# 144 "../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
                                     VirtualizeTimerC__0__Timer_t *timer = & VirtualizeTimerC__0__m_timers[num];
# 147 "../../tos/lib/timer/VirtualizeTimerC.nc"
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
                                     VirtualizeTimerC__0__updateFromTimer__postTask();
}
# 181 "../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}
# 75 "../../tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7ff0d8df9450){
# 75 "../../tos/interfaces/TaskBasic.nc"
  switch (arg_0x7ff0d8df9450) {
# 75 "../../tos/interfaces/TaskBasic.nc"
    case AlarmToTimerC__0__fired:
# 75 "../../tos/interfaces/TaskBasic.nc"
                                      AlarmToTimerC__0__fired__runTask();
# 75 "../../tos/interfaces/TaskBasic.nc"
      break;
# 75 "../../tos/interfaces/TaskBasic.nc"
    case VirtualizeTimerC__0__updateFromTimer:
# 75 "../../tos/interfaces/TaskBasic.nc"
                                         VirtualizeTimerC__0__updateFromTimer__runTask();
# 75 "../../tos/interfaces/TaskBasic.nc"
      break;
# 75 "../../tos/interfaces/TaskBasic.nc"
    default:
# 75 "../../tos/interfaces/TaskBasic.nc"
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7ff0d8df9450);
# 75 "../../tos/interfaces/TaskBasic.nc"
      break;
# 75 "../../tos/interfaces/TaskBasic.nc"
    }
# 75 "../../tos/interfaces/TaskBasic.nc"
}
# 75 "../../tos/interfaces/TaskBasic.nc"
# 402 "../../tos/chips/msp430/msp430hardware.h"
static inline void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}
# 63 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
# 63 "../../tos/chips/msp430/timer/Msp430ClockP.nc"
{
  return MSP430_POWER_LPM3;
}
# 62 "../../tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
# 62 "../../tos/interfaces/McuPowerOverride.nc"
  unsigned char __nesc_result;
# 62 "../../tos/interfaces/McuPowerOverride.nc"
# 62 "../../tos/interfaces/McuPowerOverride.nc"
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
# 62 "../../tos/interfaces/McuPowerOverride.nc"
# 62 "../../tos/interfaces/McuPowerOverride.nc"
  return __nesc_result;
# 62 "../../tos/interfaces/McuPowerOverride.nc"
}
# 62 "../../tos/interfaces/McuPowerOverride.nc"
# 74 "../../tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
# 74 "../../tos/chips/msp430/McuSleepC.nc"
{
  mcu_power_t pState = MSP430_POWER_LPM4;
# 85 "../../tos/chips/msp430/McuSleepC.nc"
  if ((((((
# 77 "../../tos/chips/msp430/McuSleepC.nc"
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
# 99 "../../tos/chips/msp430/McuSleepC.nc"
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
# 100 "../../tos/chips/msp430/McuSleepC.nc"
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}
# 390 "../../tos/chips/msp430/msp430hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
# 390 "../../tos/chips/msp430/msp430hardware.h"
{
  return m1 < m2 ? m1 : m2;
}
# 112 "../../tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
# 112 "../../tos/chips/msp430/McuSleepC.nc"
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(),
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
# 117 "../../tos/chips/msp430/McuSleepC.nc"
{
  uint16_t temp;
# 119 "../../tos/chips/msp430/McuSleepC.nc"
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" : : "m"(temp));

   __asm volatile ("" : : : "memory");
  __nesc_disable_interrupt();
}
# 79 "../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
# 79 "../../tos/interfaces/McuSleep.nc"
  McuSleepC__McuSleep__sleep();
# 79 "../../tos/interfaces/McuSleep.nc"
}
# 79 "../../tos/interfaces/McuSleep.nc"
# 80 "../../tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK)
    {
      uint8_t id = SchedulerBasicP__m_head;
# 85 "../../tos/system/SchedulerBasicP.nc"
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
# 154 "../../tos/system/SchedulerBasicP.nc"
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
# 166 "../../tos/system/SchedulerBasicP.nc"
        __nesc_atomic_end(__nesc_atomic); }
      watch_task_id = nextTask;
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}
# 72 "../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
# 72 "../../tos/interfaces/Scheduler.nc"
  SchedulerBasicP__Scheduler__taskLoop();
# 72 "../../tos/interfaces/Scheduler.nc"
}
# 72 "../../tos/interfaces/Scheduler.nc"
# 422 "../../tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;
# 425 "../../tos/chips/msp430/msp430hardware.h"
  __nesc_disable_interrupt();
   __asm volatile ("" : : : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" : : : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}
# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C))) void sig_TIMERA0_VECTOR(void )
# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
{
# 11 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
  Msp430TimerCommonP__VectorTimerA0__fired();
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__0__Event__fired(void )
{
  if ( Msp430TimerCapComP__0__Control__getControl().cap) {
                                  Msp430TimerCapComP__0__Capture__captured( Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__0__Compare__fired();
    }
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__1__Event__fired(void )
{
  if ( Msp430TimerCapComP__1__Control__getControl().cap) {
                                  Msp430TimerCapComP__1__Capture__captured( Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__1__Compare__fired();
    }
}
# 180 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void Msp430TimerCapComP__2__Event__fired(void )
{
  if ( Msp430TimerCapComP__2__Control__getControl().cap) {
                                  Msp430TimerCapComP__2__Capture__captured( Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
# 185 "../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
                                  Msp430TimerCapComP__2__Compare__fired();
    }
}
# 12 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A))) void sig_TIMERA1_VECTOR(void )
# 12 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
{
# 12 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
  Msp430TimerCommonP__VectorTimerA1__fired();
}
# 13 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x001A))) void sig_TIMERB0_VECTOR(void )
# 13 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
{
# 13 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
  Msp430TimerCommonP__VectorTimerB0__fired();
}
# 146 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerP__1__Event__fired(uint8_t arg_0x7ff0d8d048b0){
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
  switch (arg_0x7ff0d8d048b0) {
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 0:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__3__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 1:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__4__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 2:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__5__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 3:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__6__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 4:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__7__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 5:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__8__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 6:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                    Msp430TimerCapComP__9__Event__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    case 7:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                   Msp430TimerP__1__Overflow__fired();
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    default:
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
                                   Msp430TimerP__1__Event__default__fired(arg_0x7ff0d8d048b0);
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
      break;
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
    }
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
}
# 39 "../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
# 176 "../../tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 178 "../../tos/system/SchedulerBasicP.nc"
    {
# 178 "../../tos/system/SchedulerBasicP.nc"
      {
        unsigned char __nesc_temp =
# 178 "../../tos/system/SchedulerBasicP.nc"
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
# 178 "../../tos/system/SchedulerBasicP.nc"
          __nesc_atomic_end(__nesc_atomic);
# 178 "../../tos/system/SchedulerBasicP.nc"
          return __nesc_temp;
        }
      }
    }
# 181 "../../tos/system/SchedulerBasicP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 107 "../../tos/lib/timer/TransformAlarmC.nc"
static void TransformAlarmC__0__set_alarm(void )
{
                                            TransformAlarmC__0__to_size_type now = TransformAlarmC__0__Counter__get();
# 109 "../../tos/lib/timer/TransformAlarmC.nc"
                                            TransformAlarmC__0__to_size_type expires;
# 109 "../../tos/lib/timer/TransformAlarmC.nc"
                                            TransformAlarmC__0__to_size_type remaining;




  expires = TransformAlarmC__0__m_t0 + TransformAlarmC__0__m_dt;


  remaining = ( TransformAlarmC__0__to_size_type )(expires - now);


  if ( TransformAlarmC__0__m_t0 <= now)
    {
      if (expires >= TransformAlarmC__0__m_t0 &&
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= TransformAlarmC__0__m_t0 ||
      expires <= now) {
        remaining = 0;
        }
    }
# 132 "../../tos/lib/timer/TransformAlarmC.nc"
  if (remaining > TransformAlarmC__0__MAX_DELAY)
    {
                                                TransformAlarmC__0__m_t0 = now + TransformAlarmC__0__MAX_DELAY;
                                                TransformAlarmC__0__m_dt = remaining - TransformAlarmC__0__MAX_DELAY;
      remaining = TransformAlarmC__0__MAX_DELAY;
    }
  else
    {
                                                TransformAlarmC__0__m_t0 += TransformAlarmC__0__m_dt;
                                                TransformAlarmC__0__m_dt = 0;
    }
                                            TransformAlarmC__0__AlarmFrom__startAt(( TransformAlarmC__0__from_size_type )now << 5,
  ( TransformAlarmC__0__from_size_type )remaining << 5);
}
# 80 "../../tos/lib/timer/TransformCounterC.nc"
static TransformCounterC__0__to_size_type TransformCounterC__0__Counter__get(void )
{
                               TransformCounterC__0__to_size_type rv = 0;
# 83 "../../tos/lib/timer/TransformCounterC.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
                                   TransformCounterC__0__upper_count_type high = TransformCounterC__0__m_upper;
                                   TransformCounterC__0__from_size_type low = TransformCounterC__0__CounterFrom__get();
# 87 "../../tos/lib/timer/TransformCounterC.nc"
      if ( TransformCounterC__0__CounterFrom__isOverflowPending())
        {






          high++;
          low = TransformCounterC__0__CounterFrom__get();
        }
      {
                                     TransformCounterC__0__to_size_type high_to = high;
                                     TransformCounterC__0__to_size_type low_to = low >> TransformCounterC__0__LOW_SHIFT_RIGHT;
# 101 "../../tos/lib/timer/TransformCounterC.nc"
        rv = (high_to << TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
# 103 "../../tos/lib/timer/TransformCounterC.nc"
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}
# 62 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t Msp430TimerP__1__Timer__get(void )
{




  if (1) {
# 69 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;
# 72 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
        do {
# 72 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
            t0 = t1;
# 72 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
            t1 = * (volatile uint16_t * )400U;
          }
        while (
# 72 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
        t0 != t1);
        {
          unsigned int __nesc_temp =
# 73 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
          t1;
# 73 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
          return __nesc_temp;
        }
      }
    }
  else
# 76 "../../tos/chips/msp430/timer/Msp430TimerP.nc"
    {
      return * (volatile uint16_t * )400U;
    }
}
# 14 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018))) void sig_TIMERB1_VECTOR(void )
# 14 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
{
# 14 "../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
  Msp430TimerCommonP__VectorTimerB1__fired();
}
# 63 "../../tos/system/RealMainP.nc"
  int main(void )
# 63 "../../tos/system/RealMainP.nc"
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
# 71 "../../tos/system/RealMainP.nc"
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
# 88 "../../tos/system/RealMainP.nc"
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
# 16 "../../tos/platforms/telosb/MotePlatformC.nc"
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
# 20 "../../tos/platforms/telosb/MotePlatformC.nc"
    TOSH_CLR_SIMO0_PIN();
    }
# 21 "../../tos/platforms/telosb/MotePlatformC.nc"
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void HplMsp430GeneralIOP__36__IO__set(void )
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
{
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    * (volatile uint8_t * )49U |= 0x01 << 4;
# 56 "../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 136 "../../tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;


  {
    nextTask = SchedulerBasicP__popTask();

    if (nextTask == SchedulerBasicP__NO_TASK)
      {
        {
          unsigned char __nesc_temp =
# 146 "../../tos/system/SchedulerBasicP.nc"
          FALSE;
# 146 "../../tos/system/SchedulerBasicP.nc"
          return __nesc_temp;
        }
      }
  }
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}
# 100 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

                                     VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < VirtualizeTimerC__0__NUM_TIMERS; num++)
    {
                                         VirtualizeTimerC__0__Timer_t *timer = & VirtualizeTimerC__0__m_timers[num];

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
                                           VirtualizeTimerC__0__fireTimers(now);
        }
      else {
# 135 "../../tos/lib/timer/VirtualizeTimerC.nc"
                                           VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}
# 73 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < VirtualizeTimerC__0__NUM_TIMERS; num++)
    {
                                         VirtualizeTimerC__0__Timer_t *timer = & VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning)
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt)
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
# 90 "../../tos/lib/timer/VirtualizeTimerC.nc"
                timer->t0 += timer->dt;
                }
                                                 VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
                                     VirtualizeTimerC__0__updateFromTimer__postTask();
}
# 147 "../../tos/lib/timer/TransformAlarmC.nc"
static void TransformAlarmC__0__Alarm__startAt( TransformAlarmC__0__to_size_type t0, TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
                                                TransformAlarmC__0__m_t0 = t0;
                                                TransformAlarmC__0__m_dt = dt;
                                                TransformAlarmC__0__set_alarm();
    }
# 154 "../../tos/lib/timer/TransformAlarmC.nc"
    __nesc_atomic_end(__nesc_atomic); }
}
# 74 "../../tos/lib/timer/AlarmToTimerC.nc"
static void AlarmToTimerC__0__fired__runTask(void )
{
  if ( AlarmToTimerC__0__m_oneshot == FALSE) {
                                    AlarmToTimerC__0__start( AlarmToTimerC__0__Alarm__getAlarm(), AlarmToTimerC__0__m_dt, FALSE);
    }
# 78 "../../tos/lib/timer/AlarmToTimerC.nc"
                                  AlarmToTimerC__0__Timer__fired();
}
# 154 "../../tos/lib/timer/VirtualizeTimerC.nc"
static void VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
                                     VirtualizeTimerC__0__startTimer(num, VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}
