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
# 431 "/usr/lib/ncc/nesc_nx.h"
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
# 44 "/usr/bin/../lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memset(void *arg_0x7fb89abf1020, int arg_0x7fb89abf12a0, size_t arg_0x7fb89abf1560);
#line 65
extern void *memset(void *arg_0x7fb89abd9060, int arg_0x7fb89abd92e0, size_t arg_0x7fb89abd95a0);
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

  void (*__cleanup)(struct _reent *arg_0x7fb89ab9a170);


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


  void (**_sig_func)(int arg_0x7fb89ab95480);




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
# 25 "../../../../tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "../../../../tos/types/TinyError.h"
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
  ELAST = 11
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





extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");





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
#line 384
extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");
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
# 354 "../../../../tos/chips/msp430/msp430hardware.h"
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
# 8 "../../../../tos/platforms/telosb/hardware.h"
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
# 54 "../../../../tos/system/SchedulerBasicP.nc"
volatile uint8_t watch_task_id = 0;
# 59 "../../../../tos/chips/msp430/adc12/Msp430Adc12.h"
#line 48
typedef struct __nesc_unnamed4253 {

  unsigned int inch : 4;
  unsigned int sref : 3;
  unsigned int ref2_5v : 1;
  unsigned int adc12ssel : 2;
  unsigned int adc12div : 3;
  unsigned int sht : 4;
  unsigned int sampcon_ssel : 2;
  unsigned int sampcon_id : 2;
  unsigned int  : 0;
} msp430adc12_channel_config_t;








#line 61
typedef struct __nesc_unnamed4254 {


  volatile unsigned 
  inch : 4, 
  sref : 3, 
  eos : 1;
} __attribute((packed))  adc12memctl_t;

enum inch_enum {


  INPUT_CHANNEL_A0 = 0, 
  INPUT_CHANNEL_A1 = 1, 
  INPUT_CHANNEL_A2 = 2, 
  INPUT_CHANNEL_A3 = 3, 
  INPUT_CHANNEL_A4 = 4, 
  INPUT_CHANNEL_A5 = 5, 
  INPUT_CHANNEL_A6 = 6, 
  INPUT_CHANNEL_A7 = 7, 
  EXTERNAL_REF_VOLTAGE_CHANNEL = 8, 
  REF_VOLTAGE_NEG_TERMINAL_CHANNEL = 9, 
  TEMPERATURE_DIODE_CHANNEL = 10, 
  SUPPLY_VOLTAGE_HALF_CHANNEL = 11, 
  INPUT_CHANNEL_NONE = 12
};

enum sref_enum {

  REFERENCE_AVcc_AVss = 0, 
  REFERENCE_VREFplus_AVss = 1, 
  REFERENCE_VeREFplus_AVss = 2, 
  REFERENCE_AVcc_VREFnegterm = 4, 
  REFERENCE_VREFplus_VREFnegterm = 5, 
  REFERENCE_VeREFplus_VREFnegterm = 6
};

enum ref2_5v_enum {

  REFVOLT_LEVEL_1_5 = 0, 
  REFVOLT_LEVEL_2_5 = 1, 
  REFVOLT_LEVEL_NONE = 0
};

enum adc12ssel_enum {

  SHT_SOURCE_ADC12OSC = 0, 
  SHT_SOURCE_ACLK = 1, 
  SHT_SOURCE_MCLK = 2, 
  SHT_SOURCE_SMCLK = 3
};

enum adc12div_enum {

  SHT_CLOCK_DIV_1 = 0, 
  SHT_CLOCK_DIV_2 = 1, 
  SHT_CLOCK_DIV_3 = 2, 
  SHT_CLOCK_DIV_4 = 3, 
  SHT_CLOCK_DIV_5 = 4, 
  SHT_CLOCK_DIV_6 = 5, 
  SHT_CLOCK_DIV_7 = 6, 
  SHT_CLOCK_DIV_8 = 7
};

enum sht_enum {

  SAMPLE_HOLD_4_CYCLES = 0, 
  SAMPLE_HOLD_8_CYCLES = 1, 
  SAMPLE_HOLD_16_CYCLES = 2, 
  SAMPLE_HOLD_32_CYCLES = 3, 
  SAMPLE_HOLD_64_CYCLES = 4, 
  SAMPLE_HOLD_96_CYCLES = 5, 
  SAMPLE_HOLD_128_CYCLES = 6, 
  SAMPLE_HOLD_192_CYCLES = 7, 
  SAMPLE_HOLD_256_CYCLES = 8, 
  SAMPLE_HOLD_384_CYCLES = 9, 
  SAMPLE_HOLD_512_CYCLES = 10, 
  SAMPLE_HOLD_768_CYCLES = 11, 
  SAMPLE_HOLD_1024_CYCLES = 12
};

enum sampcon_ssel_enum {

  SAMPCON_SOURCE_TACLK = 0, 
  SAMPCON_SOURCE_ACLK = 1, 
  SAMPCON_SOURCE_SMCLK = 2, 
  SAMPCON_SOURCE_INCLK = 3
};

enum sampcon_id_enum {

  SAMPCON_CLOCK_DIV_1 = 0, 
  SAMPCON_CLOCK_DIV_2 = 1, 
  SAMPCON_CLOCK_DIV_4 = 2, 
  SAMPCON_CLOCK_DIV_8 = 3
};
#line 199
#line 186
typedef struct __nesc_unnamed4255 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl0_t;
#line 212
#line 201
typedef struct __nesc_unnamed4256 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
  volatile unsigned int  : 0;
} __attribute((packed))  adc12ctl1_t;
# 39 "../../../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4257 {
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
typedef struct __nesc_unnamed4258 {

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
typedef struct __nesc_unnamed4259 {

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
typedef struct __nesc_unnamed4260 {

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
# 43 "../../../../tos/types/Leds.h"
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
# 33 "../../../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "../../../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4262 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4263 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4264 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4265 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 46 "../../../../tos/chips/msp430/dma/Msp430Dma.h"
enum __nesc_unnamed4266 {
  DMA_CHANNELS = 3
};

enum __nesc_unnamed4267 {
  DMA_CHANNEL0 = 0, 
  DMA_CHANNEL1 = 1, 
  DMA_CHANNEL2 = 2, 
  DMA_CHANNEL_UNKNOWN = 3
};

enum __nesc_unnamed4268 {
  DMA_CHANNEL_AVAILABLE = 0, 
  DMA_CHANNEL_IN_USE = 1
};



enum __nesc_unnamed4269 {
  DMA0TSEL_SHIFT = 0, 
  DMA1TSEL_SHIFT = 4, 
  DMA2TSEL_SHIFT = 8, 
  DMATSEL_MASK = (uint16_t )0xf, 
  DMA0TSEL_MASK = 0xf, 
  DMA1TSEL_MASK = 0xf0, 
  DMA2TSEL_MASK = 0xf00
};
#line 103
#line 75
typedef enum __nesc_unnamed4270 {
  DMA_TRIGGER_DMAREQ = 0x0, 
  DMA_TRIGGER_TACCR2 = 0x1, 
  DMA_TRIGGER_TBCCR2 = 0x2, 





  DMA_TRIGGER_URXIFG0 = 0x3, 
  DMA_TRIGGER_UTXIFG0 = 0x4, 

  DMA_TRIGGER_DAC12IFG = 0x5, 
  DMA_TRIGGER_ADC12IFGx = 0x6, 
  DMA_TRIGGER_TACCR0 = 0x7, 
  DMA_TRIGGER_TBCCR0 = 0x8, 




  DMA_TRIGGER_URXIFG1 = 0x9, 
  DMA_TRIGGER_UTXIFG1 = 0xa, 

  DMA_TRIGGER_MULT = 0xb, 
  DMA_TRIGGER_DMAxIFG = 0xe, 


  DMA_TRIGGER_DMAE0 = 0xf
} dma_trigger_t;




#line 105
typedef struct dma_channel_trigger_s {
  unsigned int trigger : 4;
  unsigned int reserved : 12;
} __attribute((packed))  dma_channel_trigger_t;



enum __nesc_unnamed4271 {
  DISABLE_NMI = 0, 
  ENABLE_NMI = 1
};

enum __nesc_unnamed4272 {
  NOT_ROUND_ROBIN = 0, 
  ROUND_ROBIN = 1
};

enum __nesc_unnamed4273 {
  NOT_ON_FETCH = 0, 
  ON_FETCH = 1
};






#line 127
typedef struct dma_state_s {
  unsigned int enableNMI : 1;
  unsigned int roundRobin : 1;
  unsigned int onFetch : 1;
  unsigned int reserved : 13;
} __attribute((packed))  dma_state_t;





enum __nesc_unnamed4274 {
  DMADT_SHIFT = 12, 
  DMADT_MASK = 0x7
};








#line 143
typedef enum __nesc_unnamed4275 {
  DMA_SINGLE_TRANSFER = 0x0, 
  DMA_BLOCK_TRANSFER = 0x1, 
  DMA_BURST_BLOCK_TRANSFER = 0x2, 
  DMA_REPEATED_SINGLE_TRANSFER = 0x4, 
  DMA_REPEATED_BLOCK_TRANSFER = 0x5, 
  DMA_REPEATED_BURST_BLOCK_TRANSFER = 0x7
} dma_transfer_mode_t;


enum __nesc_unnamed4276 {
  DMASRCINCR_SHIFT = 8, 
  DMADSTINCR_SHIFT = 10, 
  DMAINCR_MASK = 0x3
};





#line 159
typedef enum __nesc_unnamed4277 {
  DMA_ADDRESS_UNCHANGED = 0x0, 
  DMA_ADDRESS_DECREMENTED = 0x2, 
  DMA_ADDRESS_INCREMENTED = 0x3
} dma_incr_t;




#line 165
typedef enum __nesc_unnamed4278 {
  DMA_WORD = 0x0, 
  DMA_BYTE = 0x1
} dma_byte_t;





#line 171
typedef enum __nesc_unnamed4279 {
  DMA_EDGE_SENSITIVE = 0x0, 
  DMA_LEVEL_SENSITIVE = 0x1
} dma_level_t;
#line 189
#line 176
typedef struct dma_channel_state_s {
  unsigned int request : 1;
  unsigned int abort : 1;
  unsigned int interruptEnable : 1;
  unsigned int interruptFlag : 1;
  unsigned int enable : 1;
  unsigned int level : 1;
  unsigned int srcByte : 1;
  unsigned int dstByte : 1;
  unsigned int srcIncrement : 2;
  unsigned int dstIncrement : 2;
  unsigned int transferMode : 3;
  unsigned int reserved2 : 1;
} __attribute((packed))  dma_channel_state_t;
typedef bool EvaluatorC__Notify__val_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__AdcConfigure__adc_config_t;
typedef bool /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__val_t;
enum /*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0____nesc_unnamed4280 {
  Msp430Adc12ClientC__0__ID = 0U
};
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__adc_config_t;
typedef bool /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__val_t;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOffSettleTimer__precision_tag;
typedef TMilli Msp430RefVoltGeneratorP__SwitchOnTimer__precision_tag;
typedef const msp430adc12_channel_config_t *Msp430RefVoltArbiterImplP__Config__adc_config_t;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4281 {
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
enum /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0____nesc_unnamed4282 {
  Msp430Adc12ClientAutoRVGC__0__ID = 1U
};
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__AdcConfigure__adc_config_t;
typedef bool /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__val_t;
enum /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0____nesc_unnamed4283 {
  Msp430Adc12ClientAutoDMAC__0__ID = 2U
};
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__adc_config_t;
typedef bool /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__val_t;
enum /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0____nesc_unnamed4284 {
  Msp430Adc12ClientAutoDMA_RVGC__0__ID = 3U
};
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t;
typedef bool /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__val_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__AdcConfigure__adc_config_t;
enum /*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1____nesc_unnamed4285 {
  Msp430Adc12ClientC__1__ID = 4U
};
typedef bool /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__val_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__adc_config_t;
enum /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1____nesc_unnamed4286 {
  Msp430Adc12ClientAutoRVGC__1__ID = 5U
};
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__adc_config_t;
typedef const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t;
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
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
# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb89a5a38b0);
# 52 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );


static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);
#line 54
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );
#line 50
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);





static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb89a5a38b0);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(msp430_compare_control_t control);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t time);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );



static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(msp430_compare_control_t control);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t time);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "../../../../tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 58 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb89a6ac450);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 58 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb89a6ac450);
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "../../../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );
#line 78
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );
#line 99
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void EvaluatorC__Notify__notify(
# 48 "EvaluatorC.nc"
uint8_t arg_0x7fb89a20b020, 
# 74 "../../../../tos/interfaces/Notify.nc"
EvaluatorC__Notify__val_t val);
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__runTask(void );
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__multipleDataReady(uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__singleDataReady(uint16_t data);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__runTask(void );
# 97 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static error_t Msp430Adc12ImplP__MultiChannel__getData(
# 42 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a193940);
# 86 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static error_t Msp430Adc12ImplP__MultiChannel__configure(
# 42 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a193940, 
# 86 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
const msp430adc12_channel_config_t *config, 
adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buffer, 
uint16_t numSamples, uint16_t jiffies);
#line 107
static void Msp430Adc12ImplP__MultiChannel__default__dataReady(
# 42 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a193940, 
# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__fired(void );
# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12ImplP__DMAExtension__start(
# 44 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a190760);
# 105 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12ImplP__DMAExtension__stop(
# 44 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a190760);
# 49 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__memOverflow(
# 43 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a192900);
# 54 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(
# 43 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a192900);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Msp430Adc12ImplP__Init__init(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__overflow(void );
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0);
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 106
static error_t Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t Msp430Adc12ImplP__SingleChannel__configureMultipleRepeat(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 177 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 227
static uint16_t * Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 138 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__fired(void );
# 63 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void HplAdc12P__HplAdc12__resetIFGs(void );
#line 118
static bool HplAdc12P__HplAdc12__isBusy(void );
#line 75
static void HplAdc12P__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void HplAdc12P__HplAdc12__startConversion(void );
#line 51
static void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t HplAdc12P__HplAdc12__getMem(uint8_t idx);





static void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);





static uint16_t HplAdc12P__HplAdc12__getIEFlags(void );
#line 123
static void HplAdc12P__HplAdc12__stopConversion(void );
#line 57
static void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a049360);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a048940);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a048940);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a04a110);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a04a110);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a04a110);
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__runTask(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__adc_config_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__getConfiguration(void );
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__multipleDataReady(uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__singleDataReady(uint16_t data);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__runTask(void );
# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);
# 83 "../../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__default__getConfiguration(
# 43 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f60770);
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(
# 40 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f64920);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(
# 40 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f64920);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(
# 40 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f64920);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(
# 38 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f65540);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__request(
# 38 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f65540);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__default__granted(
# 38 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f65540);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "../../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb899de33f0);
# 92 "../../../../tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb899de33f0);
# 73 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb899de33f0, 
# 73 "../../../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb899de33f0);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__adc_config_t /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__runTask(void );
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__multipleDataReady(uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__singleDataReady(uint16_t data);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__runTask(void );
# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
static void HplMsp430DmaP__DmaControl__clearRoundRobin(void );
#line 44
static void HplMsp430DmaP__DmaControl__setRoundRobin(void );
#line 43
static void HplMsp430DmaP__DmaControl__clearOnFetch(void );


static void HplMsp430DmaP__DmaControl__setENNMI(void );



static void HplMsp430DmaP__DmaControl__reset(void );
#line 42
static void HplMsp430DmaP__DmaControl__setOnFetch(void );




static void HplMsp430DmaP__DmaControl__clearENNMI(void );
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void );
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void );
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static error_t /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setTrigger(dma_trigger_t trigger);
#line 76
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setStateRaw(uint16_t state, uint16_t trigger, void *src, void *dest, uint16_t size);






static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
#line 71
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSrc(void *saddr);
#line 60
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__enableDMA(void );
#line 73
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSize(uint16_t sz);

static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size);
#line 72
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setDst(void *daddr);
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t success);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__default__transferDone(error_t success);
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t success);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t success);
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t success);
# 91 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__repeatTransfer(void *src_addr, void *dst_addr, 
uint16_t size);
#line 49
static error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 84
static error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__startTransfer(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__transferDone(error_t success);
#line 85
static void Msp430DmaControlP__HplChannel2__transferDone(error_t success);
# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void Msp430DmaControlP__Control__init(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel0__transferDone(error_t success);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12DMAP__SubSingleChannel__default__getData(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0);
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingle(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 106
static error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingleRepeat(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 227
static uint16_t * Msp430Adc12DMAP__SubSingleChannel__multipleDataReady(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12DMAP__SubSingleChannel__singleDataReady(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
#line 189
static error_t Msp430Adc12DMAP__SingleChannel__getData(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0);
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12DMAP__SingleChannel__configureSingle(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 106
static error_t Msp430Adc12DMAP__SingleChannel__configureSingleRepeat(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t Msp430Adc12DMAP__SingleChannel__configureMultipleRepeat(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 177 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 227
static uint16_t * Msp430Adc12DMAP__SingleChannel__default__multipleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 138
static error_t Msp430Adc12DMAP__SingleChannel__configureMultiple(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 138 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
#line 206
static error_t Msp430Adc12DMAP__SingleChannel__default__singleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void Msp430Adc12DMAP__DMAChannel__transferDone(error_t success);
# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12DMAP__AsyncAdcControl__default__start(
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bb8320);
# 105 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12DMAP__AsyncAdcControl__default__stop(
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bb8320);
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__runTask(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__adc_config_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__getConfiguration(void );
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__multipleDataReady(uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__singleDataReady(uint16_t data);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__runTask(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__adc_config_t /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__dataReady(uint16_t *buffer, uint16_t numSamples);
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__runTask(void );
#line 75
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__runTask(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__runTask(void );
# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__dataReady(uint16_t *buffer, uint16_t numSamples);
# 60 "../../../../tos/interfaces/Boot.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Boot__booted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__runTask(void );
#line 75
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__runTask(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__adc_config_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__getConfiguration(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__runTask(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__adc_config_t /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "../../../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "../../../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4287 {

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
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb89a5a38b0);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 91 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode);









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void );









static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider);




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fb89a5a38b0);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x);
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x);
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;


static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;


static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "../../../../tos/chips/msp430/McuSleepC.nc"
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
# 62 "../../../../tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "../../../../tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "../../../../tos/system/RealMainP.nc"
int main(void )   ;
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 58 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fb89a6ac450);
# 76 "../../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 63 "../../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4288 {

  SchedulerBasicP__NUM_TASKS = 18U, 
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
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "../../../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void );
#line 61
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 61 "../../../../tos/interfaces/Leds.nc"
static void EvaluatorC__Leds__led0Off(void );










static void EvaluatorC__Leds__led1On(void );




static void EvaluatorC__Leds__led1Off(void );
#line 94
static void EvaluatorC__Leds__led2Off(void );
#line 56
static void EvaluatorC__Leds__led0On(void );
#line 89
static void EvaluatorC__Leds__led2On(void );
# 53 "EvaluatorC.nc"
enum EvaluatorC____nesc_unnamed4289 {
  EvaluatorC__NUM_CLIENTS = 6U
};
int EvaluatorC__numSuccess = 0;

static inline void EvaluatorC__display(uint8_t client);
#line 75
static void EvaluatorC__Notify__notify(uint8_t client, bool val);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__notify(/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__val_t val);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData(void );
#line 84
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config);
#line 106
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 138
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__postTask(void );
# 70 "TestAdcSingleC.nc"
enum /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0____nesc_unnamed4290 {
#line 70
  TestAdcSingleC__0__getData = 0U
};
#line 70
typedef int /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0____nesc_sillytask_getData[/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData];








enum /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0____nesc_unnamed4291 {
#line 79
  TestAdcSingleC__0__signalFailure = 1U
};
#line 79
typedef int /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0____nesc_sillytask_signalFailure[/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure];
#line 66
const msp430adc12_channel_config_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__config = { 10, 0, 0, 3, 0, 0, 2, 0 };
uint8_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state;
uint8_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count = 0;
uint16_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__buffer[100];

enum /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0____nesc_unnamed4292 {
  TestAdcSingleC__0__SINGLE_DATA, 
  TestAdcSingleC__0__SINGLE_DATA_REPEAT, 
  TestAdcSingleC__0__MULTIPLE_DATA, 
  TestAdcSingleC__0__MULTIPLE_DATA_REPEAT
};


static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__runTask(void );




static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__assertData(uint16_t *data, uint16_t num);







static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Boot__booted(void );










static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__runTask(void );




static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__granted(void );
#line 135
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__singleDataReady(uint16_t data);
#line 161
static inline uint16_t */*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length);
# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static void Msp430Adc12ImplP__MultiChannel__dataReady(
# 42 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a193940, 
# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
uint16_t *buffer, uint16_t numSamples);
# 63 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void );
#line 82
static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx);
#line 106
static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void );
#line 75
static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl);
#line 128
static void Msp430Adc12ImplP__HplAdc12__startConversion(void );
#line 51
static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0);
#line 89
static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx);





static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask);





static uint16_t Msp430Adc12ImplP__HplAdc12__getIEFlags(void );
#line 123
static void Msp430Adc12ImplP__HplAdc12__stopConversion(void );
#line 57
static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port64__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port64__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port64__selectModuleFunc(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time);
# 46 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port62__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port62__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port62__selectModuleFunc(void );
# 49 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__memOverflow(
# 43 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a192900);
# 54 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(
# 43 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a192900);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port67__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port67__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port67__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port60__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port60__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port60__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port65__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port65__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port65__selectModuleFunc(void );
# 52 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void Msp430Adc12ImplP__TimerA__clear(void );


static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource);
#line 54
static void Msp430Adc12ImplP__TimerA__disableEvents(void );
#line 50
static void Msp430Adc12ImplP__TimerA__setMode(int mode);





static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider);
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void );
# 46 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control);
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
uint8_t arg_0x7fb89a1941c0, 
# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port63__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port63__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port63__selectModuleFunc(void );
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time);
# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void Msp430Adc12ImplP__Port61__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port61__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port61__selectModuleFunc(void );
#line 78
static void Msp430Adc12ImplP__Port66__makeInput(void );
#line 99
static void Msp430Adc12ImplP__Port66__selectIOFunc(void );
#line 92
static void Msp430Adc12ImplP__Port66__selectModuleFunc(void );
# 71 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
enum Msp430Adc12ImplP____nesc_unnamed4293 {
  Msp430Adc12ImplP__SINGLE_DATA = 1, 
  Msp430Adc12ImplP__SINGLE_DATA_REPEAT = 2, 
  Msp430Adc12ImplP__MULTIPLE_DATA = 4, 
  Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT = 8, 
  Msp430Adc12ImplP__MULTI_CHANNEL = 16, 
  Msp430Adc12ImplP__CONVERSION_MODE_MASK = 0x1F, 

  Msp430Adc12ImplP__ADC_BUSY = 32, 
  Msp430Adc12ImplP__USE_TIMERA = 64, 
  Msp430Adc12ImplP__ADC_OVERFLOW = 128
};

uint8_t Msp430Adc12ImplP__state;

uint16_t Msp430Adc12ImplP__resultBufferLength;
uint16_t * Msp430Adc12ImplP__resultBufferStart;
uint16_t Msp430Adc12ImplP__resultBufferIndex;
uint8_t Msp430Adc12ImplP__numChannels;
uint8_t Msp430Adc12ImplP__clientID;

static inline error_t Msp430Adc12ImplP__Init__init(void );
#line 109
static void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON);
#line 127
static void Msp430Adc12ImplP__startTimerA(void );
#line 148
static void Msp430Adc12ImplP__configureAdcPin(uint8_t inch);
#line 165
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch);
#line 182
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);
#line 225
static error_t Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t jiffies);
#line 277
static error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies);
#line 338
static error_t Msp430Adc12ImplP__SingleChannel__configureMultipleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint8_t length, uint16_t jiffies);
#line 400
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id);
#line 420
static error_t Msp430Adc12ImplP__MultiChannel__configure(uint8_t id, 
const msp430adc12_channel_config_t *config, 
adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buf, 
uint16_t numSamples, uint16_t jiffies);
#line 487
static error_t Msp430Adc12ImplP__MultiChannel__getData(uint8_t id);
#line 509
static void Msp430Adc12ImplP__stopConversion(void );
#line 528
static error_t Msp430Adc12ImplP__DMAExtension__start(uint8_t id);
#line 540
static inline error_t Msp430Adc12ImplP__DMAExtension__stop(uint8_t id);





static inline void Msp430Adc12ImplP__TimerA__overflow(void );
static inline void Msp430Adc12ImplP__CompareA0__fired(void );
static inline void Msp430Adc12ImplP__CompareA1__fired(void );

static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv);
#line 651
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data);




static uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples);




static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples);

static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id);
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id);
# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv);
# 51 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static volatile uint16_t HplAdc12P__ADC12CTL0 __asm ("0x01A0");
static volatile uint16_t HplAdc12P__ADC12CTL1 __asm ("0x01A2");
static volatile uint16_t HplAdc12P__ADC12IFG __asm ("0x01A4");
static volatile uint16_t HplAdc12P__ADC12IE __asm ("0x01A6");
static volatile uint16_t HplAdc12P__ADC12IV __asm ("0x01A8");

static inline adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)  ;

static inline uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)  ;
static inline uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)  ;
static inline uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)  ;
static inline adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)  ;

static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0);



static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1);



static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void );







static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl);



static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i);



static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i);



static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask);
static inline uint16_t HplAdc12P__HplAdc12__getIEFlags(void );

static inline void HplAdc12P__HplAdc12__resetIFGs(void );




static inline void HplAdc12P__HplAdc12__startConversion(void );




static void HplAdc12P__HplAdc12__stopConversion(void );
#line 118
static inline bool HplAdc12P__HplAdc12__isBusy(void );

void sig_ADC12_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000E)))  ;
# 49 "../../../../tos/system/RoundRobinResourceQueueC.nc"
enum /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4294 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 6U ? (6U - 1) / 8 + 1 : 0
};

uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a049360);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a048940);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a048940);
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "../../../../tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fb89a04a110);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "../../../../tos/system/SimpleArbiterP.nc"
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4295 {
#line 68
  SimpleArbiterP__0__grantedTask = 2U
};
#line 68
typedef int /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4296 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4297 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;



static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 96
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 131
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
#line 149
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__notify(/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__val_t val);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData(void );
#line 84
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config);
#line 106
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 138
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__postTask(void );
# 70 "TestAdcSingleC.nc"
enum /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1____nesc_unnamed4298 {
#line 70
  TestAdcSingleC__1__getData = 3U
};
#line 70
typedef int /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1____nesc_sillytask_getData[/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData];








enum /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1____nesc_unnamed4299 {
#line 79
  TestAdcSingleC__1__signalFailure = 4U
};
#line 79
typedef int /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1____nesc_sillytask_signalFailure[/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure];
#line 66
const msp430adc12_channel_config_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config = { 10, 1, 1, 1, 0, 0, 2, 0 };
uint8_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state;
uint8_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count = 0;
uint16_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__buffer[100];

enum /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1____nesc_unnamed4300 {
  TestAdcSingleC__1__SINGLE_DATA, 
  TestAdcSingleC__1__SINGLE_DATA_REPEAT, 
  TestAdcSingleC__1__MULTIPLE_DATA, 
  TestAdcSingleC__1__MULTIPLE_DATA_REPEAT
};


static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__runTask(void );




static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__assertData(uint16_t *data, uint16_t num);







static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Boot__booted(void );





static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__getConfiguration(void );




static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__runTask(void );




static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__granted(void );
#line 135
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__singleDataReady(uint16_t data);
#line 161
static inline uint16_t */*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length);
# 63 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void );
#line 118
static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void );
#line 51
static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0);
# 73 "../../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void );
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error);
# 92 "../../../../tos/lib/timer/Timer.nc"
static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void );
#line 73
static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void );
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error);
#line 138
static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error);
# 73 "../../../../tos/lib/timer/Timer.nc"
static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt);




static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void );
# 66 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
#line 53
typedef enum Msp430RefVoltGeneratorP____nesc_unnamed4301 {

  Msp430RefVoltGeneratorP__GENERATOR_OFF = 0, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE = 1, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE = 2, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING = 3, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING = 4, 

  Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING = 5, 
  Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING = 6
} 
Msp430RefVoltGeneratorP__state_t;

Msp430RefVoltGeneratorP__state_t Msp430RefVoltGeneratorP__m_state;


static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
static error_t Msp430RefVoltGeneratorP__switchOff(void );
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);


static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void );



static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void );



static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState);
#line 147
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState);
#line 173
static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result);






static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result);







static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void );
#line 205
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void );
#line 233
static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void );


static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv);



static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level);
#line 259
static error_t Msp430RefVoltGeneratorP__switchOff(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(
# 43 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f60770);
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__release(
# 40 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f64920);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Msp430RefVoltArbiterImplP__AdcResource__request(
# 40 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f64920);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Msp430RefVoltArbiterImplP__ClientResource__granted(
# 38 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
uint8_t arg_0x7fb899f65540);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void );
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void );
#line 130
static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void );
# 52 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
enum Msp430RefVoltArbiterImplP____nesc_unnamed4302 {
#line 52
  Msp430RefVoltArbiterImplP__switchOff = 5U
};
#line 52
typedef int Msp430RefVoltArbiterImplP____nesc_sillytask_switchOff[Msp430RefVoltArbiterImplP__switchOff];
#line 46
enum Msp430RefVoltArbiterImplP____nesc_unnamed4303 {
  Msp430RefVoltArbiterImplP__NO_OWNER = 0xFF
};
uint8_t Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
bool Msp430RefVoltArbiterImplP__ref2_5v;



static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client);
#line 71
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client);
#line 103
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error);








static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error);








static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client);
#line 141
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void );
#line 157
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error);



static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error);








static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client);
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client);








static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client);
const msp430adc12_channel_config_t Msp430RefVoltArbiterImplP__defaultConfig = { INPUT_CHANNEL_NONE, 0, 0, 0, 0, 0, 0, 0 };
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client);
# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "../../../../tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4304 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__0__from_size_type ) + 5, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__0__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "../../../../tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "../../../../tos/lib/timer/Counter.nc"
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "../../../../tos/lib/timer/TransformAlarmC.nc"
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4305 {

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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "../../../../tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "../../../../tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4306 {
#line 74
  AlarmToTimerC__0__fired = 6U
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "../../../../tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fb899de33f0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4307 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 7U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4308 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4309 {

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




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void );
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__notify(/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__val_t val);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData(void );
#line 84
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config);
#line 106
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 138
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__postTask(void );
# 70 "TestAdcSingleC.nc"
enum /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2____nesc_unnamed4310 {
#line 70
  TestAdcSingleC__2__getData = 8U
};
#line 70
typedef int /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2____nesc_sillytask_getData[/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData];








enum /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2____nesc_unnamed4311 {
#line 79
  TestAdcSingleC__2__signalFailure = 9U
};
#line 79
typedef int /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2____nesc_sillytask_signalFailure[/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure];
#line 66
const msp430adc12_channel_config_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__config = { 10, 0, 0, 3, 0, 0, 2, 0 };
uint8_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state;
uint8_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count = 0;
uint16_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__buffer[100];

enum /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2____nesc_unnamed4312 {
  TestAdcSingleC__2__SINGLE_DATA, 
  TestAdcSingleC__2__SINGLE_DATA_REPEAT, 
  TestAdcSingleC__2__MULTIPLE_DATA, 
  TestAdcSingleC__2__MULTIPLE_DATA_REPEAT
};


static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__runTask(void );




static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__assertData(uint16_t *data, uint16_t num);







static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Boot__booted(void );










static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__runTask(void );




static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__granted(void );
#line 135
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__singleDataReady(uint16_t data);
#line 161
static inline uint16_t */*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length);
# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
static void HplMsp430DmaP__Interrupt__fired(void );
# 50 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static volatile uint16_t HplMsp430DmaP__DMACTL0 __asm ("0x0122");
static volatile uint16_t HplMsp430DmaP__DMACTL1 __asm ("0x0124");
#line 63
void sig_XX_DMA_VECTOR_XX(void ) __attribute((wakeup)) __attribute((interrupt(0x0000)))  ;



static inline void HplMsp430DmaP__DmaControl__setOnFetch(void );



static inline void HplMsp430DmaP__DmaControl__clearOnFetch(void );



static inline void HplMsp430DmaP__DmaControl__setRoundRobin(void );


static inline void HplMsp430DmaP__DmaControl__clearRoundRobin(void );



static inline void HplMsp430DmaP__DmaControl__setENNMI(void );



static inline void HplMsp430DmaP__DmaControl__clearENNMI(void );
#line 100
static inline void HplMsp430DmaP__DmaControl__reset(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success);
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success);
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void );
#line 257
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void );
# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success);
# 56 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static volatile uint16_t /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMACTL0 __asm ("0x0122");






static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void );








static inline error_t /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setTrigger(dma_trigger_t trigger);
#line 176
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__enableDMA(void );
#line 204
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSrc(void *saddr);



static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setDst(void *daddr);



static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSize(uint16_t sz);



static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setState(dma_channel_state_t s, 
dma_channel_trigger_t t, 
void *src, void *dest, 
uint16_t size);




static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setStateRaw(uint16_t s, uint16_t t, 
void *src, void *dest, 
uint16_t size);
#line 257
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void );
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success);
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__default__transferDone(error_t error);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success);
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error);



static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error);
# 71 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSrc(void *saddr);
#line 60
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__enableDMA(void );
#line 73
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSize(uint16_t sz);

static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size);
#line 72
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setDst(void *daddr);
# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success);
# 51 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
dma_channel_state_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState;
dma_channel_trigger_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelTrigger;







static inline error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 92
static inline error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__startTransfer(void );




static error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__repeatTransfer(void *src_addr, 
void *dst_addr, 
uint16_t size);
#line 123
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error);
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel1__reset(void );
# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
static void Msp430DmaControlP__HplControl__clearRoundRobin(void );
#line 44
static void Msp430DmaControlP__HplControl__setRoundRobin(void );
#line 43
static void Msp430DmaControlP__HplControl__clearOnFetch(void );


static void Msp430DmaControlP__HplControl__setENNMI(void );



static void Msp430DmaControlP__HplControl__reset(void );
#line 42
static void Msp430DmaControlP__HplControl__setOnFetch(void );




static void Msp430DmaControlP__HplControl__clearENNMI(void );
# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
static void Msp430DmaControlP__HplChannel2__reset(void );
#line 83
static void Msp430DmaControlP__HplChannel0__reset(void );
# 55 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void );






static inline void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 76
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error);
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12DMAP__SubSingleChannel__getData(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0);
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t Msp430Adc12DMAP__SubSingleChannel__configureSingle(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config);
#line 106
static error_t Msp430Adc12DMAP__SubSingleChannel__configureSingleRepeat(
# 46 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbaca0, 
# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 227
static uint16_t * Msp430Adc12DMAP__SingleChannel__multipleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t * buffer, uint16_t numSamples);
#line 206
static error_t Msp430Adc12DMAP__SingleChannel__singleDataReady(
# 41 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bbe9c0, 
# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
uint16_t data);
# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
static void Msp430Adc12DMAP__DMAControl__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch);
#line 41
static void Msp430Adc12DMAP__DMAControl__init(void );
# 91 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
static error_t Msp430Adc12DMAP__DMAChannel__repeatTransfer(void *src_addr, void *dst_addr, 
uint16_t size);
#line 49
static error_t Msp430Adc12DMAP__DMAChannel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr);
#line 84
static error_t Msp430Adc12DMAP__DMAChannel__startTransfer(void );
# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12DMAP__AsyncAdcControl__start(
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bb8320);
# 105 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t Msp430Adc12DMAP__AsyncAdcControl__stop(
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
uint8_t arg_0x7fb899bb8320);




enum Msp430Adc12DMAP____nesc_unnamed4313 {
  Msp430Adc12DMAP__MULTIPLE_SINGLE, 
  Msp430Adc12DMAP__MULTIPLE_REPEAT, 
  Msp430Adc12DMAP__MULTIPLE_SINGLE_AGAIN
};




uint8_t Msp430Adc12DMAP__client;
uint8_t Msp430Adc12DMAP__mode;
uint16_t *Msp430Adc12DMAP__buffer;
uint16_t Msp430Adc12DMAP__numSamples;

static inline error_t Msp430Adc12DMAP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);





static inline error_t Msp430Adc12DMAP__SingleChannel__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t jiffies);





static error_t Msp430Adc12DMAP__configure(uint8_t id, const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies, uint8_t _mode);
#line 113
static inline error_t Msp430Adc12DMAP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies);




static inline error_t Msp430Adc12DMAP__SingleChannel__configureMultipleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint8_t length, uint16_t jiffies);




static error_t Msp430Adc12DMAP__SingleChannel__getData(uint8_t id);






static inline error_t Msp430Adc12DMAP__SubSingleChannel__singleDataReady(uint8_t id, uint16_t data);





static inline uint16_t *Msp430Adc12DMAP__SubSingleChannel__multipleDataReady(uint8_t id, uint16_t buf[], uint16_t num);





static inline void Msp430Adc12DMAP__DMAChannel__transferDone(error_t success);
#line 165
static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config);


static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, uint16_t jiffies);
#line 183
static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__getData(uint8_t id);


static inline error_t Msp430Adc12DMAP__SingleChannel__default__singleDataReady(uint8_t id, 
uint16_t data);


static inline uint16_t *Msp430Adc12DMAP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t buf[], uint16_t num);


static inline error_t Msp430Adc12DMAP__AsyncAdcControl__default__stop(uint8_t id);

static inline error_t Msp430Adc12DMAP__AsyncAdcControl__default__start(uint8_t id);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__notify(/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__val_t val);
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData(void );
#line 84
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config);
#line 106
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies);
#line 177
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies);
#line 138
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__postTask(void );
# 70 "TestAdcSingleC.nc"
enum /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3____nesc_unnamed4314 {
#line 70
  TestAdcSingleC__3__getData = 10U
};
#line 70
typedef int /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3____nesc_sillytask_getData[/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData];








enum /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3____nesc_unnamed4315 {
#line 79
  TestAdcSingleC__3__signalFailure = 11U
};
#line 79
typedef int /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3____nesc_sillytask_signalFailure[/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure];
#line 66
const msp430adc12_channel_config_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config = { 10, 1, 1, 1, 0, 0, 2, 0 };
uint8_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state;
uint8_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count = 0;
uint16_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__buffer[100];

enum /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3____nesc_unnamed4316 {
  TestAdcSingleC__3__SINGLE_DATA, 
  TestAdcSingleC__3__SINGLE_DATA_REPEAT, 
  TestAdcSingleC__3__MULTIPLE_DATA, 
  TestAdcSingleC__3__MULTIPLE_DATA_REPEAT
};


static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__runTask(void );




static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__assertData(uint16_t *data, uint16_t num);







static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Boot__booted(void );





static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__getConfiguration(void );




static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__runTask(void );




static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__granted(void );
#line 135
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__singleDataReady(uint16_t data);
#line 161
static inline uint16_t */*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length);
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void );
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void );
# 97 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__getData(void );
#line 86
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__configure(const msp430adc12_channel_config_t *config, 
adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buffer, 
uint16_t numSamples, uint16_t jiffies);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__postTask(void );
#line 67
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__notify(/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__val_t val);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__postTask(void );
# 75 "TestAdcMultiC.nc"
enum /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_unnamed4317 {
#line 75
  TestAdcMultiC__0__getData = 12U
};
#line 75
typedef int /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_sillytask_getData[/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData];

enum /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_unnamed4318 {
#line 77
  TestAdcMultiC__0__signalFailure = 13U
};
#line 77
typedef int /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_sillytask_signalFailure[/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure];




enum /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_unnamed4319 {
#line 82
  TestAdcMultiC__0__signalSuccess = 14U
};
#line 82
typedef int /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0____nesc_sillytask_signalSuccess[/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess];
#line 70
const msp430adc12_channel_config_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__config = { 10, 0, 0, 3, 0, 0, 2, 0 };
adc12memctl_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__memCtl = { 10, 0 };

uint16_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__buffer[100];
uint8_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__count = 0;


static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__runTask(void );




static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__runTask(void );




static inline bool /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__assertData(uint16_t *data, uint16_t num);
#line 105
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Boot__booted(void );





static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__runTask(void );




static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__granted(void );





static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__dataReady(uint16_t *buf, uint16_t numSamples);
# 97 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__getData(void );
#line 86
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__configure(const msp430adc12_channel_config_t *config, 
adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buffer, 
uint16_t numSamples, uint16_t jiffies);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__postTask(void );
#line 67
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__postTask(void );
# 74 "../../../../tos/interfaces/Notify.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__notify(/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__val_t val);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__release(void );
#line 88
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__request(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__postTask(void );
# 75 "TestAdcMultiC.nc"
enum /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_unnamed4320 {
#line 75
  TestAdcMultiC__1__getData = 15U
};
#line 75
typedef int /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_sillytask_getData[/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData];

enum /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_unnamed4321 {
#line 77
  TestAdcMultiC__1__signalFailure = 16U
};
#line 77
typedef int /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_sillytask_signalFailure[/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure];




enum /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_unnamed4322 {
#line 82
  TestAdcMultiC__1__signalSuccess = 17U
};
#line 82
typedef int /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1____nesc_sillytask_signalSuccess[/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess];
#line 70
const msp430adc12_channel_config_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__config = { 10, 1, 1, 1, 0, 0, 2, 0 };
adc12memctl_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__memCtl = { 10, 1 };

uint16_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__buffer[100];
uint8_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__count = 0;


static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__runTask(void );




static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__runTask(void );




static inline bool /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__assertData(uint16_t *data, uint16_t num);
#line 100
static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__getConfiguration(void );




static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Boot__booted(void );





static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__runTask(void );




static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__granted(void );





static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__dataReady(uint16_t *buf, uint16_t numSamples);
# 58 "../../../../tos/interfaces/AdcConfigure.nc"
static /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration(void );
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void );
# 408 "../../../../tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 546 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__TimerA__overflow(void )
#line 546
{
}

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  Msp430Adc12ImplP__TimerA__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fb89a5a38b0){
#line 39
  switch (arg_0x7fb89a5a38b0) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fb89a5a38b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4323 {
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

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

# 547 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA0__fired(void )
#line 547
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA0__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4324 {
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

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

# 548 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__CompareA1__fired(void )
#line 548
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  Msp430Adc12ImplP__CompareA1__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4325 {
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

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 114 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 177 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "../../../../tos/lib/timer/TransformCounterC.nc"
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

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
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
# 137 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 81 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

# 78 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4326 {
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

# 99 "../../../../tos/system/SchedulerBasicP.nc"
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 49 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "../../../../tos/lib/timer/Counter.nc"
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
# 81 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 54 "../../../../tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "../../../../tos/lib/timer/Counter.nc"
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
# 130 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 165 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
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
# 81 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
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

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4327 {
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




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4328 {
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




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4329 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4330 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4331 {
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

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4332 {
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

# 131 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "../../../../tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "../../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "../../../../tos/system/LedsP.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 36 "../../../../tos/platforms/telosb/hardware.h"
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

# 11 "../../../../tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
  __nop();
#line 12
  __nop();
}

# 89 "../../../../tos/platforms/telosb/hardware.h"
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

# 27 "../../../../tos/platforms/telosb/MotePlatformC.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 163 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 43 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 42 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 41 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 40 "../../../../tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
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

# 62 "../../../../tos/interfaces/Init.nc"
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
# 10 "../../../../tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
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
# 36 "../../../../tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "../../../../tos/interfaces/Scheduler.nc"
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
# 171 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__request(uint8_t client)
{
  return FAIL;
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__request(uint8_t arg_0x7fb899f64920){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fb899f64920) {
#line 88
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88
      break;
#line 88
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 88
      break;
#line 88
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 88
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__request(arg_0x7fb899f64920);
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
# 54 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__ClientResource__request(uint8_t client)
{
  return Msp430RefVoltArbiterImplP__AdcResource__request(client);
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 111 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__runTask(void )
{
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__request();
}

# 160 "../../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "../../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fb89a049360){
#line 53
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x7fb89a049360);
#line 53
}
#line 53
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "../../../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "../../../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__notify(/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(5U, val);
#line 74
}
#line 74
# 77 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__notify(FALSE);
}

# 109 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 94 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__clr();
#line 41
}
#line 41
# 104 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 94 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr();
#line 41
}
#line 41
# 89 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 79 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 61 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr();
#line 41
}
#line 41
# 74 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "../../../../tos/interfaces/Leds.nc"
inline static void EvaluatorC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 58 "EvaluatorC.nc"
static inline void EvaluatorC__display(uint8_t client)
{
  if (client & 0x1) {
    EvaluatorC__Leds__led0On();
    }
  else {
#line 63
    EvaluatorC__Leds__led0Off();
    }
#line 64
  if (client & 0x2) {
    EvaluatorC__Leds__led1On();
    }
  else {
#line 67
    EvaluatorC__Leds__led1Off();
    }
#line 68
  if (client & 0x4) {
    EvaluatorC__Leds__led2On();
    }
  else {
#line 71
    EvaluatorC__Leds__led2Off();
    }
}

# 82 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__runTask(void )
{
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Notify__notify(TRUE);
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 111 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__runTask(void )
{
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__request();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__notify(/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(4U, val);
#line 74
}
#line 74
# 77 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__notify(FALSE);
}

static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__runTask(void )
{
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Notify__notify(TRUE);
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 103 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__runTask(void )
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__request();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__notify(/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(3U, val);
#line 74
}
#line 74
# 79 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__notify(FALSE);
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 103 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__runTask(void )
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__request();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__notify(/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(2U, val);
#line 74
}
#line 74
# 79 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__notify(FALSE);
}

# 103 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "../../../../tos/lib/timer/AlarmToTimerC.nc"
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

# 129 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 65 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "../../../../tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "../../../../tos/lib/timer/Counter.nc"
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
# 86 "../../../../tos/lib/timer/TransformAlarmC.nc"
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0__Counter__get();
}

# 109 "../../../../tos/lib/timer/Alarm.nc"
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
# 96 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "../../../../tos/lib/timer/Timer.nc"
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
# 100 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
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

# 113 "../../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error);
#line 113
}
#line 113
# 170 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__ClientResource__default__granted(uint8_t client)
#line 170
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void Msp430RefVoltArbiterImplP__ClientResource__granted(uint8_t arg_0x7fb899f65540){
#line 102
  switch (arg_0x7fb899f65540) {
#line 102
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__granted();
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 102
      /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__granted();
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Msp430RefVoltArbiterImplP__ClientResource__default__granted(arg_0x7fb899f65540);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 103 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 113 "../../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(error_t error){
#line 113
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__startDone(error);
#line 113
}
#line 113
# 188 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOnTimer__fired(void )
#line 188
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(SUCCESS);
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING: 
        Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE;
      Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(SUCCESS);
      break;

      default: 
        return;
    }
}

# 73 "../../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 161 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error_t error)
{
}

# 138 "../../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_2_5V__stopDone(error);
#line 138
}
#line 138
# 157 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error_t error)
{
}

# 138 "../../../../tos/interfaces/SplitControl.nc"
inline static void Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(error_t error){
#line 138
  Msp430RefVoltArbiterImplP__RefVolt_1_5V__stopDone(error);
#line 138
}
#line 138
# 205 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__SwitchOffTimer__fired(void )
#line 205
{
  switch (Msp430RefVoltGeneratorP__m_state) {
      case Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(SUCCESS);
          }
        else {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      case Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING: 
        if (Msp430RefVoltGeneratorP__switchOff() == SUCCESS) {
            Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
            Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(SUCCESS);

            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__startOneShot(2048);
          }
        else 
#line 223
          {
            Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
          }
      break;

      default: 
        break;
    }
}

static inline void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired(void )
#line 233
{
}

# 204 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fb899de33f0){
#line 83
  switch (arg_0x7fb899de33f0) {
#line 83
    case 0U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOnTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      Msp430RefVoltGeneratorP__SwitchOffSettleTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fb899de33f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 118 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline bool HplAdc12P__HplAdc12__isBusy(void )
#line 118
{
#line 118
  return HplAdc12P__ADC12CTL1 & 0x0001;
}

# 118 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static bool Msp430RefVoltGeneratorP__HplAdc12__isBusy(void ){
#line 118
  unsigned char __nesc_result;
#line 118

#line 118
  __nesc_result = HplAdc12P__HplAdc12__isBusy();
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 57 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12ctl0_t HplAdc12P__int2adc12ctl0(uint16_t x)
#line 57
{
#line 57
  union __nesc_unnamed4333 {
#line 57
    uint16_t f;
#line 57
    adc12ctl0_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline adc12ctl0_t HplAdc12P__HplAdc12__getCtl0(void )
#line 72
{
  return HplAdc12P__int2adc12ctl0(HplAdc12P__ADC12CTL0);
}

# 63 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12ctl0_t Msp430RefVoltGeneratorP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4255 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl0cast2int(adc12ctl0_t x)
#line 59
{
#line 59
  union __nesc_unnamed4334 {
#line 59
    adc12ctl0_t f;
#line 59
    uint16_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}



static inline void HplAdc12P__HplAdc12__setCtl0(adc12ctl0_t control0)
#line 64
{
  HplAdc12P__ADC12CTL0 = HplAdc12P__adc12ctl0cast2int(control0);
}

# 51 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430RefVoltGeneratorP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
# 144 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 86 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__configure(const msp430adc12_channel_config_t *config, adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buffer, uint16_t numSamples, uint16_t jiffies){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = Msp430Adc12ImplP__MultiChannel__configure(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID, config, memctl, numMemctl, buffer, numSamples, jiffies);
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t Msp430Adc12ImplP__ADCArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 60 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint16_t HplAdc12P__adc12ctl1cast2int(adc12ctl1_t x)
#line 60
{
#line 60
  union __nesc_unnamed4335 {
#line 60
    adc12ctl1_t f;
#line 60
    uint16_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}






static inline void HplAdc12P__HplAdc12__setCtl1(adc12ctl1_t control1)
#line 68
{
  HplAdc12P__ADC12CTL1 = HplAdc12P__adc12ctl1cast2int(control1);
}

# 57 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setCtl1(adc12ctl1_t control1){
#line 57
  HplAdc12P__HplAdc12__setCtl1(control1);
#line 57
}
#line 57
# 92 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__setIEFlags(uint16_t mask)
#line 92
{
#line 92
  HplAdc12P__ADC12IE = mask;
}

# 95 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setIEFlags(uint16_t mask){
#line 95
  HplAdc12P__HplAdc12__setIEFlags(mask);
#line 95
}
#line 95
# 50 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setMode(int mode){
#line 50
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(mode);
#line 50
}
#line 50
# 101 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear(void )
{
  * (volatile uint16_t * )352U |= 4U;
}

# 52 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__clear(void ){
#line 52
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__clear();
#line 52
}
#line 52
# 111 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents(void )
{
  * (volatile uint16_t * )352U &= ~2U;
}

# 54 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__disableEvents(void ){
#line 54
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__disableEvents();
#line 54
}
#line 54
# 116 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(uint16_t clockSource)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(256U | 512U)) | ((clockSource << 8) & (256U | 512U));
}

# 55 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setClockSource(uint16_t clockSource){
#line 55
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setClockSource(clockSource);
#line 55
}
#line 55
# 121 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(uint16_t inputDivider)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0040 | 0x0080)) | ((inputDivider << 6) & (0x0040 | 0x0080));
}

# 56 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void Msp430Adc12ImplP__TimerA__setInputDivider(uint16_t inputDivider){
#line 56
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setInputDivider(inputDivider);
#line 56
}
#line 56
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4336 {
#line 57
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t x)
{
  * (volatile uint16_t * )354U = /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__CC2int(x);
}

# 46 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA0__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__setControl(control);
#line 46
}
#line 46
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )370U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA0__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__setEvent(time);
#line 41
}
#line 41
# 155 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )372U = x;
}

# 41 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void Msp430Adc12ImplP__CompareA1__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__setEvent(time);
#line 41
}
#line 41
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 0;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 0);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 1;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 1);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 2;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 2);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 3;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 3);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 4;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 4);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 5;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 5);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 6;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 6);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__makeInput();
#line 78
}
#line 78
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )55U |= 0x01 << 7;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectModuleFunc();
#line 92
}
#line 92
# 61 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )54U &= ~(0x01 << 7);
}

# 78 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__makeInput();
#line 78
}
#line 78
# 100 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__startConversion(void )
#line 100
{
  HplAdc12P__ADC12CTL0 |= 0x010;
  HplAdc12P__ADC12CTL0 |= 0x001 + 0x002;
}

# 128 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__startConversion(void ){
#line 128
  HplAdc12P__HplAdc12__startConversion();
#line 128
}
#line 128
# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4337 {
#line 57
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 100
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t x)
{
  * (volatile uint16_t * )356U = /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__CC2int(x);
}

# 46 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void Msp430Adc12ImplP__ControlA1__setControl(msp430_compare_control_t control){
#line 46
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__setControl(control);
#line 46
}
#line 46
# 165 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
#line 167
  return FAIL;
}

# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12DMAP__SubSingleChannel__configureSingle(uint8_t arg_0x7fb899bbaca0, const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  switch (arg_0x7fb899bbaca0) {
#line 84
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config);
#line 84
      break;
#line 84
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 84
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__default__configureSingle(arg_0x7fb899bbaca0, config);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 66 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{

  return Msp430Adc12DMAP__SubSingleChannel__configureSingle(id, config);
}

# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 204 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSrc(void *saddr)
#line 204
{
  * (volatile uint16_t *)498U = (uint16_t )saddr;
}

# 71 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSrc(void *saddr){
#line 71
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSrc(saddr);
#line 71
}
#line 71
# 208 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setDst(void *daddr)
#line 208
{
  * (volatile uint16_t *)500U = (uint16_t )daddr;
}

# 72 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setDst(void *daddr){
#line 72
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setDst(daddr);
#line 72
}
#line 72
# 212 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSize(uint16_t sz)
#line 212
{
  * (volatile uint16_t *)502U = sz;
}

# 73 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSize(uint16_t sz){
#line 73
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setSize(sz);
#line 73
}
#line 73
# 183 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__getData(uint8_t id)
{
#line 184
  return FAIL;
}

# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12DMAP__SubSingleChannel__getData(uint8_t arg_0x7fb899bbaca0){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  switch (arg_0x7fb899bbaca0) {
#line 189
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 189
      break;
#line 189
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 189
      __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 189
      break;
#line 189
    default:
#line 189
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__default__getData(arg_0x7fb899bbaca0);
#line 189
      break;
#line 189
    }
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 169 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SubSingleChannel__default__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, uint16_t jiffies)
{
#line 171
  return FAIL;
}

# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12DMAP__SubSingleChannel__configureSingleRepeat(uint8_t arg_0x7fb899bbaca0, const msp430adc12_channel_config_t * config, uint16_t jiffies){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  switch (arg_0x7fb899bbaca0) {
#line 106
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 106
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config, jiffies);
#line 106
      break;
#line 106
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 106
      __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config, jiffies);
#line 106
      break;
#line 106
    default:
#line 106
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__default__configureSingleRepeat(arg_0x7fb899bbaca0, config, jiffies);
#line 106
      break;
#line 106
    }
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 73 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SingleChannel__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t jiffies)
{

  return Msp430Adc12DMAP__SubSingleChannel__configureSingleRepeat(id, config, jiffies);
}

# 106 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config, jiffies);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 113 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies)
{
  return Msp430Adc12DMAP__configure(id, config, buf, length, jiffies, Msp430Adc12DMAP__MULTIPLE_SINGLE);
}

# 138 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureMultiple(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config, buffer, numSamples, jiffies);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)496U = 0;
  * (volatile uint16_t *)498U = 0;
  * (volatile uint16_t *)500U = 0;
  * (volatile uint16_t *)502U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel2__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__reset();
#line 83
}
#line 83
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)488U = 0;
  * (volatile uint16_t *)490U = 0;
  * (volatile uint16_t *)492U = 0;
  * (volatile uint16_t *)494U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel1__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__reset();
#line 83
}
#line 83
# 257 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset(void )
#line 257
{
  * (volatile uint16_t *)480U = 0;
  * (volatile uint16_t *)482U = 0;
  * (volatile uint16_t *)484U = 0;
  * (volatile uint16_t *)486U = 0;
}

# 83 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void Msp430DmaControlP__HplChannel0__reset(void ){
#line 83
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__reset();
#line 83
}
#line 83
# 100 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__reset(void )
#line 100
{
  HplMsp430DmaP__DMACTL0 = 0;
  HplMsp430DmaP__DMACTL1 = 0;
}

# 50 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__reset(void ){
#line 50
  HplMsp430DmaP__DmaControl__reset();
#line 50
}
#line 50
# 55 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__init(void )
#line 55
{
  Msp430DmaControlP__HplControl__reset();
  Msp430DmaControlP__HplChannel0__reset();
  Msp430DmaControlP__HplChannel1__reset();
  Msp430DmaControlP__HplChannel2__reset();
}

# 41 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void Msp430Adc12DMAP__DMAControl__init(void ){
#line 41
  Msp430DmaControlP__Control__init();
#line 41
}
#line 41
# 71 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearOnFetch(void )
#line 71
{
  HplMsp430DmaP__DMACTL1 &= ~0x0004;
}

# 43 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearOnFetch(void ){
#line 43
  HplMsp430DmaP__DmaControl__clearOnFetch();
#line 43
}
#line 43
# 67 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setOnFetch(void )
#line 67
{
  HplMsp430DmaP__DMACTL1 |= 0x0004;
}

# 42 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setOnFetch(void ){
#line 42
  HplMsp430DmaP__DmaControl__setOnFetch();
#line 42
}
#line 42
# 78 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearRoundRobin(void )
#line 78
{
  HplMsp430DmaP__DMACTL1 &= ~0x0002;
}

# 45 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearRoundRobin(void ){
#line 45
  HplMsp430DmaP__DmaControl__clearRoundRobin();
#line 45
}
#line 45
# 75 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setRoundRobin(void )
#line 75
{
  HplMsp430DmaP__DMACTL1 |= 0x0002;
}

# 44 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setRoundRobin(void ){
#line 44
  HplMsp430DmaP__DmaControl__setRoundRobin();
#line 44
}
#line 44
# 86 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__clearENNMI(void )
#line 86
{
  HplMsp430DmaP__DMACTL1 &= ~0x0001;
}

# 47 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__clearENNMI(void ){
#line 47
  HplMsp430DmaP__DmaControl__clearENNMI();
#line 47
}
#line 47
# 82 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
static inline void HplMsp430DmaP__DmaControl__setENNMI(void )
#line 82
{
  HplMsp430DmaP__DMACTL1 |= 0x0001;
}

# 46 "../../../../tos/chips/msp430/dma/HplMsp430DmaControl.nc"
inline static void Msp430DmaControlP__HplControl__setENNMI(void ){
#line 46
  HplMsp430DmaP__DmaControl__setENNMI();
#line 46
}
#line 46
# 62 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__Control__setFlags(bool enable_nmi, bool round_robin, 
bool on_fetch)
#line 63
{



  if (enable_nmi) {
#line 67
    Msp430DmaControlP__HplControl__setENNMI();
    }
  else {
#line 68
    Msp430DmaControlP__HplControl__clearENNMI();
    }
#line 69
  if (round_robin) {
#line 69
    Msp430DmaControlP__HplControl__setRoundRobin();
    }
  else {
#line 70
    Msp430DmaControlP__HplControl__clearRoundRobin();
    }
#line 71
  if (on_fetch) {
#line 71
    Msp430DmaControlP__HplControl__setOnFetch();
    }
  else {
#line 72
    Msp430DmaControlP__HplControl__clearOnFetch();
    }
}

# 42 "../../../../tos/chips/msp430/dma/Msp430DmaControl.nc"
inline static void Msp430Adc12DMAP__DMAControl__setFlags(bool enable_nmi, bool round_robin, bool on_fetch){
#line 42
  Msp430DmaControlP__Control__setFlags(enable_nmi, round_robin, on_fetch);
#line 42
}
#line 42
# 72 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline error_t /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setTrigger(dma_trigger_t trigger)
#line 72
{

  if (* (volatile uint16_t *)496U & 0x0010) {
    return FAIL;
    }
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMACTL0 = (/*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMACTL0 & ~3840) | ((
  trigger << 8) & 3840);

  return SUCCESS;
}

#line 224
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setStateRaw(uint16_t s, uint16_t t, 
void *src, void *dest, 
uint16_t size)
#line 226
{
  * (volatile uint16_t *)498U = (uint16_t )src;
  * (volatile uint16_t *)500U = (uint16_t )dest;
  * (volatile uint16_t *)502U = size;
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setTrigger((dma_trigger_t )t);
  * (volatile uint16_t *)496U = s;
}

#line 216
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setState(dma_channel_state_t s, 
dma_channel_trigger_t t, 
void *src, void *dest, 
uint16_t size)
#line 219
{
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setStateRaw(* (uint16_t *)&s, * (uint16_t *)&t, 
  src, dest, size);
}

# 75 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setState(dma_channel_state_t s, dma_channel_trigger_t t, void *src, void *dest, uint16_t size){
#line 75
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__setState(s, t, src, dest, size);
#line 75
}
#line 75
# 60 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__setupTransfer(dma_transfer_mode_t transfer_mode, 
dma_trigger_t trigger, 
dma_level_t level, 
void *src_addr, 
void *dst_addr, 
uint16_t size, 
dma_byte_t src_byte, 
dma_byte_t dst_byte, 
dma_incr_t src_incr, 
dma_incr_t dst_incr)
#line 69
{

  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.request = 0;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.abort = 0;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.interruptEnable = 1;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.interruptFlag = 0;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.enable = 0;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.level = level;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.srcByte = src_byte;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.dstByte = dst_byte;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.srcIncrement = src_incr;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.dstIncrement = dst_incr;
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState.transferMode = transfer_mode;

  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelTrigger.trigger = trigger;

  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setState(/*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelState, /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__gChannelTrigger, 
  src_addr, dst_addr, size);

  return SUCCESS;
}

# 49 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t Msp430Adc12DMAP__DMAChannel__setupTransfer(dma_transfer_mode_t transfer_mode, dma_trigger_t trigger, dma_level_t level, void *src_addr, void *dst_addr, uint16_t size, dma_byte_t src_byte, dma_byte_t dst_byte, dma_incr_t src_incr, dma_incr_t dst_incr){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__setupTransfer(transfer_mode, trigger, level, src_addr, dst_addr, size, src_byte, dst_byte, src_incr, dst_incr);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 176 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__enableDMA(void )
#line 176
{
  * (volatile uint16_t *)496U |= 0x0010;
}

# 60 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__enableDMA(void ){
#line 60
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__enableDMA();
#line 60
}
#line 60
# 92 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__startTransfer(void )
#line 92
{
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__enableDMA();
  return SUCCESS;
}

# 84 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t Msp430Adc12DMAP__DMAChannel__startTransfer(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__startTransfer();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 196 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__AsyncAdcControl__default__start(uint8_t id)
{
#line 197
  return FAIL;
}

# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
inline static error_t Msp430Adc12DMAP__AsyncAdcControl__start(uint8_t arg_0x7fb899bb8320){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  switch (arg_0x7fb899bb8320) {
#line 95
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 95
      __nesc_result = Msp430Adc12ImplP__DMAExtension__start(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 95
      break;
#line 95
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 95
      __nesc_result = Msp430Adc12ImplP__DMAExtension__start(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 95
      break;
#line 95
    default:
#line 95
      __nesc_result = Msp430Adc12DMAP__AsyncAdcControl__default__start(arg_0x7fb899bb8320);
#line 95
      break;
#line 95
    }
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 120 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SingleChannel__configureMultipleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint8_t length, uint16_t jiffies)
{
  return Msp430Adc12DMAP__configure(id, config, buf, length, jiffies, Msp430Adc12DMAP__MULTIPLE_REPEAT);
}

# 177 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureMultipleRepeat(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, config, buffer, numSamples, jiffies);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
# 180 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline error_t Msp430RefVoltArbiterImplP__AdcResource__default__release(uint8_t client)
#line 180
{
#line 180
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t Msp430RefVoltArbiterImplP__AdcResource__release(uint8_t arg_0x7fb899f64920){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fb899f64920) {
#line 120
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120
      break;
#line 120
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 120
      break;
#line 120
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 120
      __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = Msp430RefVoltArbiterImplP__AdcResource__default__release(arg_0x7fb899f64920);
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
# 66 "../../../../tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  unsigned int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "../../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "../../../../tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 6U) {
          i = 0;
          }
#line 85
        if (/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "../../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "../../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fb89a048940){
#line 65
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fb89a048940);
#line 65
}
#line 65
# 84 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID, config);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 106
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID, config, jiffies);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
#line 138
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultiple(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID, config, buffer, numSamples, jiffies);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 177
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultipleRepeat(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID, config, buffer, numSamples, jiffies);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
# 139 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

# 116 "../../../../tos/lib/timer/Alarm.nc"
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
# 74 "../../../../tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t Msp430RefVoltArbiterImplP__switchOff__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Msp430RefVoltArbiterImplP__switchOff);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 87 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__stop(void )
#line 87
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING);
}

# 130 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 91 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__stop(void )
#line 91
{
  return Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING);
}

# 130 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 141 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline void Msp430RefVoltArbiterImplP__switchOff__runTask(void )
{
  error_t stopped;

  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {
      if (Msp430RefVoltArbiterImplP__ref2_5v) {
        stopped = Msp430RefVoltArbiterImplP__RefVolt_2_5V__stop();
        }
      else {
#line 149
        stopped = Msp430RefVoltArbiterImplP__RefVolt_1_5V__stop();
        }
#line 150
      if (stopped == SUCCESS) {
        Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
        }
      else {
#line 153
        Msp430RefVoltArbiterImplP__switchOff__postTask();
        }
    }
}

# 164 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__request(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 103 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__runTask(void )
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__request();
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__notify(/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(1U, val);
#line 74
}
#line 74
# 79 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__notify(FALSE);
}

# 74 "../../../../tos/interfaces/Notify.nc"
inline static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__notify(/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__val_t val){
#line 74
  EvaluatorC__Notify__notify(0U, val);
#line 74
}
#line 74
# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData(void ){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID);
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
#line 177
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultipleRepeat(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID, config, buffer, numSamples, jiffies);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
#line 138
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureMultiple(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID, config, buffer, numSamples, jiffies);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 106
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID, config, jiffies);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
#line 84
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Msp430Adc12ImplP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID, config);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 108 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__granted(void )
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count = 5;
  switch (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state) 
    {
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingle(&/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__config) == SUCCESS) {
          /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
          }
#line 116
      break;
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureSingleRepeat(&/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__config, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
          }
#line 120
      break;
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultiple(&/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__config, /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__buffer, 100, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
          }
#line 124
      break;
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__configureMultipleRepeat(&/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__config, /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__buffer, 16, 200) == SUCCESS) {
          /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
          }
#line 128
      break;
      default: /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__release();
      /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__notify(TRUE);
      break;
    }
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData(void ){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  __nesc_result = Msp430Adc12DMAP__SingleChannel__getData(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
#line 177
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultipleRepeat(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint8_t numSamples, uint16_t jiffies){
#line 177
  unsigned char __nesc_result;
#line 177

#line 177
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureMultipleRepeat(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config, buffer, numSamples, jiffies);
#line 177

#line 177
  return __nesc_result;
#line 177
}
#line 177
#line 138
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultiple(const msp430adc12_channel_config_t * config, uint16_t * buffer, uint16_t numSamples, uint16_t jiffies){
#line 138
  unsigned char __nesc_result;
#line 138

#line 138
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureMultiple(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config, buffer, numSamples, jiffies);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 106
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingleRepeat(const msp430adc12_channel_config_t * config, uint16_t jiffies){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureSingleRepeat(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config, jiffies);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
#line 84
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingle(const msp430adc12_channel_config_t * config){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = Msp430Adc12DMAP__SingleChannel__configureSingle(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, config);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 108 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__granted(void )
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count = 5;
  switch (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state) 
    {
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingle(&/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__config) == SUCCESS) {
          /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
          }
#line 116
      break;
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureSingleRepeat(&/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__config, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
          }
#line 120
      break;
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultiple(&/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__config, /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__buffer, 100, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
          }
#line 124
      break;
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__configureMultipleRepeat(&/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__config, /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__buffer, 16, 200) == SUCCESS) {
          /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
          }
#line 128
      break;
      default: /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__release();
      /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Notify__notify(TRUE);
      break;
    }
}

# 97 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__getData(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Msp430Adc12ImplP__MultiChannel__getData(/*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 86
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__configure(const msp430adc12_channel_config_t *config, adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buffer, uint16_t numSamples, uint16_t jiffies){
#line 86
  unsigned char __nesc_result;
#line 86

#line 86
  __nesc_result = Msp430Adc12ImplP__MultiChannel__configure(/*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID, config, memctl, numMemctl, buffer, numSamples, jiffies);
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 116 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__granted(void )
{
  if (/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__configure(&/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__config, &/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__memCtl, 1, /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__buffer, 100, 0) == SUCCESS) {
    /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__getData();
    }
}

# 158 "../../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x7fb89a04a110){
#line 102
  switch (arg_0x7fb89a04a110) {
#line 102
    case /*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID:
#line 102
      /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__granted();
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 102
      /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__granted();
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID:
#line 102
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__granted();
#line 102
      break;
#line 102
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 102
      Msp430RefVoltArbiterImplP__AdcResource__granted(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x7fb89a04a110);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 164 "../../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fb89a048940){
#line 59
    /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x7fb89a048940);
#line 59
}
#line 59
# 149 "../../../../tos/system/SimpleArbiterP.nc"
static inline void /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 98 "TestAdcSingleC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__getConfiguration(void )
{
  return &/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config;
}

# 58 "../../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__adc_config_t /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4253 const *__nesc_result;
#line 58

#line 58
  __nesc_result = /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration(void )
{
  return /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfUp__getConfiguration();
}

# 98 "TestAdcSingleC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__getConfiguration(void )
{
  return &/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config;
}

# 58 "../../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__adc_config_t /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4253 const *__nesc_result;
#line 58

#line 58
  __nesc_result = /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration(void )
{
  return /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfUp__getConfiguration();
}

# 100 "TestAdcMultiC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__getConfiguration(void )
{
  return &/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__config;
}

# 58 "../../../../tos/interfaces/AdcConfigure.nc"
inline static /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__adc_config_t /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration(void ){
#line 58
  struct __nesc_unnamed4253 const *__nesc_result;
#line 58

#line 58
  __nesc_result = /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__AdcConfigure__getConfiguration();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 47 "../../../../tos/chips/msp430/adc12/Msp430Adc12ConfAlertC.nc"
static inline const msp430adc12_channel_config_t */*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration(void )
{
  return /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfUp__getConfiguration();
}

# 182 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static inline const msp430adc12_channel_config_t *
Msp430RefVoltArbiterImplP__Config__default__getConfiguration(uint8_t client)
{
  return &Msp430RefVoltArbiterImplP__defaultConfig;
}

# 58 "../../../../tos/interfaces/AdcConfigure.nc"
inline static Msp430RefVoltArbiterImplP__Config__adc_config_t Msp430RefVoltArbiterImplP__Config__getConfiguration(uint8_t arg_0x7fb899f60770){
#line 58
  struct __nesc_unnamed4253 const *__nesc_result;
#line 58

#line 58
  switch (arg_0x7fb899f60770) {
#line 58
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 58
      __nesc_result = /*TestAdcAppC.Wrapper1.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__0__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 58
      __nesc_result = /*TestAdcAppC.Wrapper3.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__1__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 58
      __nesc_result = /*TestAdcAppC.Wrapper5.Msp430Adc12ConfAlertC*/Msp430Adc12ConfAlertC__2__ConfSub__getConfiguration();
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = Msp430RefVoltArbiterImplP__Config__default__getConfiguration(arg_0x7fb899f60770);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 79 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_1_5V__start(void )
#line 79
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE);
}

# 104 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_1_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_1_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 73 "../../../../tos/lib/timer/Timer.nc"
inline static void Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 169 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "../../../../tos/lib/timer/Timer.nc"
inline static bool Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
inline static void Msp430RefVoltGeneratorP__SwitchOffTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 83 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline error_t Msp430RefVoltGeneratorP__RefVolt_2_5V__start(void )
#line 83
{
  return Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE);
}

# 104 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t Msp430RefVoltArbiterImplP__RefVolt_2_5V__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Msp430RefVoltGeneratorP__RefVolt_2_5V__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(/*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 103 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__runTask(void )
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__request();
}

#line 79
static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__runTask(void )
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Notify__notify(FALSE);
}

# 69 "../../../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 51 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setCtl0(adc12ctl0_t control0){
#line 51
  HplAdc12P__HplAdc12__setCtl0(control0);
#line 51
}
#line 51
#line 63
inline static adc12ctl0_t Msp430Adc12ImplP__HplAdc12__getCtl0(void ){
#line 63
  struct __nesc_unnamed4255 __nesc_result;
#line 63

#line 63
  __nesc_result = HplAdc12P__HplAdc12__getCtl0();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 95 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline void HplAdc12P__HplAdc12__resetIFGs(void )
#line 95
{
  HplAdc12P__ADC12IV = 0;
  HplAdc12P__ADC12IFG = 0;
}

# 106 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__resetIFGs(void ){
#line 106
  HplAdc12P__HplAdc12__resetIFGs();
#line 106
}
#line 106
#line 123
inline static void Msp430Adc12ImplP__HplAdc12__stopConversion(void ){
#line 123
  HplAdc12P__HplAdc12__stopConversion();
#line 123
}
#line 123
# 92 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__Init__init(void )
{
  adc12ctl0_t ctl0;

  /* atomic removed: atomic calls only */
#line 96
  {

    Msp430Adc12ImplP__HplAdc12__stopConversion();

    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();
    ctl0.adc12tovie = 1;
    ctl0.adc12ovie = 1;
    Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
  }
  return SUCCESS;
}

# 61 "../../../../tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4338 {
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

# 47 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "../../../../tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Msp430Adc12ImplP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 105 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Boot__booted(void )
{
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__count = 5;
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 105 "TestAdcMultiC.nc"
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Boot__booted(void )
{
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__count = 5;
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Boot__booted(void )
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state = /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SINGLE_DATA;
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Boot__booted(void )
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state = /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SINGLE_DATA;
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Boot__booted(void )
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state = /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SINGLE_DATA;
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__postTask();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "TestAdcSingleC.nc"
static inline void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Boot__booted(void )
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state = /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SINGLE_DATA;
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__postTask();
}

# 60 "../../../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Boot__booted();
#line 60
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Boot__booted();
#line 60
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Boot__booted();
#line 60
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Boot__booted();
#line 60
  /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Boot__booted();
#line 60
  /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Boot__booted();
#line 60
}
#line 60
# 402 "../../../../tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "../../../../tos/interfaces/McuPowerOverride.nc"
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
# 74 "../../../../tos/chips/msp430/McuSleepC.nc"
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

# 390 "../../../../tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 390
{
  return m1 < m2 ? m1 : m2;
}

# 112 "../../../../tos/chips/msp430/McuSleepC.nc"
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

# 76 "../../../../tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 80 "../../../../tos/system/SchedulerBasicP.nc"
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

# 72 "../../../../tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 88 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getMem(uint8_t i)
#line 88
{
  return ((volatile int *)0x0140)[i];
}

# 89 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getMem(uint8_t idx){
#line 89
  unsigned int __nesc_result;
#line 89

#line 89
  __nesc_result = HplAdc12P__HplAdc12__getMem(idx);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 61 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  uint8_t HplAdc12P__adc12memctl2int(adc12memctl_t x)
#line 61
{
#line 61
  union __nesc_unnamed4339 {
#line 61
    adc12memctl_t f;
#line 61
    uint8_t t;
  } 
#line 61
  c = { .f = x };

#line 61
  return c.t;
}

#line 80
static inline void HplAdc12P__HplAdc12__setMCtl(uint8_t i, adc12memctl_t memCtl)
#line 80
{
  ((volatile char *)0x0080)[i] = HplAdc12P__adc12memctl2int(memCtl);
}

# 75 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void Msp430Adc12ImplP__HplAdc12__setMCtl(uint8_t idx, adc12memctl_t memControl){
#line 75
  HplAdc12P__HplAdc12__setMCtl(idx, memControl);
#line 75
}
#line 75
# 62 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline  adc12memctl_t HplAdc12P__int2adc12memctl(uint8_t x)
#line 62
{
#line 62
  union __nesc_unnamed4340 {
#line 62
    uint8_t f;
#line 62
    adc12memctl_t t;
  } 
#line 62
  c = { .f = x };

#line 62
  return c.t;
}

#line 84
static inline adc12memctl_t HplAdc12P__HplAdc12__getMCtl(uint8_t i)
#line 84
{
  return HplAdc12P__int2adc12memctl(((volatile char *)0x0080)[i]);
}

# 82 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static adc12memctl_t Msp430Adc12ImplP__HplAdc12__getMCtl(uint8_t idx){
#line 82
  struct __nesc_unnamed4254 __nesc_result;
#line 82

#line 82
  __nesc_result = HplAdc12P__HplAdc12__getMCtl(idx);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(/*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 87 "TestAdcMultiC.nc"
static inline bool /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 90
  if (num != 100) {
    /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__postTask();
    }
#line 92
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
        /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__postTask();
        return FALSE;
      }
  return TRUE;
}

#line 122
static inline void /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__dataReady(uint16_t *buf, uint16_t numSamples)
{
  if (!/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__assertData(buf, numSamples)) {
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__postTask();
    }
  else {
#line 126
    if (/*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__count) {
        /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__count--;
        /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__getData();
      }
    else 
#line 129
      {
        /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__postTask();
        /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__Resource__release();
      }
    }
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__getData(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Msp430Adc12ImplP__MultiChannel__getData(/*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 87 "TestAdcMultiC.nc"
static inline bool /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 90
  if (num != 100) {
    /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__postTask();
    }
#line 92
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
        /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__postTask();
        return FALSE;
      }
  return TRUE;
}

#line 122
static inline void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__dataReady(uint16_t *buf, uint16_t numSamples)
{
  if (!/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__assertData(buf, numSamples)) {
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__postTask();
    }
  else {
#line 126
    if (/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__count) {
        /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__count--;
        /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__getData();
      }
    else 
#line 129
      {
        /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__postTask();
        /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__release();
      }
    }
}

# 662 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__MultiChannel__default__dataReady(uint8_t id, uint16_t *buffer, uint16_t numSamples)
#line 662
{
}

# 107 "../../../../tos/chips/msp430/adc12/Msp430Adc12MultiChannel.nc"
inline static void Msp430Adc12ImplP__MultiChannel__dataReady(uint8_t arg_0x7fb89a193940, uint16_t *buffer, uint16_t numSamples){
#line 107
  switch (arg_0x7fb89a193940) {
#line 107
    case /*TestAdcAppC.Wrapper4*/Msp430Adc12ClientC__1__ID:
#line 107
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__MultiChannel__dataReady(buffer, numSamples);
#line 107
      break;
#line 107
    case /*TestAdcAppC.Wrapper5*/Msp430Adc12ClientAutoRVGC__1__ID:
#line 107
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__dataReady(buffer, numSamples);
#line 107
      break;
#line 107
    default:
#line 107
      Msp430Adc12ImplP__MultiChannel__default__dataReady(arg_0x7fb89a193940, buffer, numSamples);
#line 107
      break;
#line 107
    }
#line 107
}
#line 107
# 186 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SingleChannel__default__singleDataReady(uint8_t id, 
uint16_t data)
{
#line 188
  return FAIL;
}

# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12DMAP__SingleChannel__singleDataReady(uint8_t arg_0x7fb899bbe9c0, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x7fb899bbe9c0) {
#line 206
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 206
      __nesc_result = /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__singleDataReady(data);
#line 206
      break;
#line 206
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 206
      __nesc_result = /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__singleDataReady(data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12DMAP__SingleChannel__default__singleDataReady(arg_0x7fb899bbe9c0, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 134 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__SubSingleChannel__singleDataReady(uint8_t id, uint16_t data)
{

  return Msp430Adc12DMAP__SingleChannel__singleDataReady(id, data);
}

# 651 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__SingleChannel__default__singleDataReady(uint8_t id, uint16_t data)
{
  return FAIL;
}

# 206 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t Msp430Adc12ImplP__SingleChannel__singleDataReady(uint8_t arg_0x7fb89a1941c0, uint16_t data){
#line 206
  unsigned char __nesc_result;
#line 206

#line 206
  switch (arg_0x7fb89a1941c0) {
#line 206
    case /*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID:
#line 206
      __nesc_result = /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__singleDataReady(data);
#line 206
      break;
#line 206
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 206
      __nesc_result = /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__singleDataReady(data);
#line 206
      break;
#line 206
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 206
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__singleDataReady(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, data);
#line 206
      break;
#line 206
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 206
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__singleDataReady(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, data);
#line 206
      break;
#line 206
    default:
#line 206
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__singleDataReady(arg_0x7fb89a1941c0, data);
#line 206
      break;
#line 206
    }
#line 206

#line 206
  return __nesc_result;
#line 206
}
#line 206
# 93 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static inline uint16_t HplAdc12P__HplAdc12__getIEFlags(void )
#line 93
{
#line 93
  return HplAdc12P__ADC12IE;
}

# 101 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static uint16_t Msp430Adc12ImplP__HplAdc12__getIEFlags(void ){
#line 101
  unsigned int __nesc_result;
#line 101

#line 101
  __nesc_result = HplAdc12P__HplAdc12__getIEFlags();
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 665 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(uint8_t id)
#line 665
{
}

# 54 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__conversionTimeOverflow(uint8_t arg_0x7fb89a192900){
#line 54
    Msp430Adc12ImplP__Overflow__default__conversionTimeOverflow(arg_0x7fb89a192900);
#line 54
}
#line 54
# 664 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__Overflow__default__memOverflow(uint8_t id)
#line 664
{
}

# 49 "../../../../tos/chips/msp430/adc12/Msp430Adc12Overflow.nc"
inline static void Msp430Adc12ImplP__Overflow__memOverflow(uint8_t arg_0x7fb89a192900){
#line 49
    Msp430Adc12ImplP__Overflow__default__memOverflow(arg_0x7fb89a192900);
#line 49
}
#line 49
# 550 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline void Msp430Adc12ImplP__HplAdc12__conversionDone(uint16_t iv)
{
  bool overflow = FALSE;
  uint16_t *resultBuffer;

  if (iv <= 4) {
      if (iv == 2) {
        Msp430Adc12ImplP__Overflow__memOverflow(Msp430Adc12ImplP__clientID);
        }
      else {
#line 559
        Msp430Adc12ImplP__Overflow__conversionTimeOverflow(Msp430Adc12ImplP__clientID);
        }
      if (! Msp430Adc12ImplP__HplAdc12__getCtl0().msc) {
        overflow = TRUE;
        }
#line 563
      if (Msp430Adc12ImplP__HplAdc12__getIEFlags() == 0) {
        return;
        }
    }
#line 566
  switch (Msp430Adc12ImplP__state & Msp430Adc12ImplP__CONVERSION_MODE_MASK) 
    {
      case Msp430Adc12ImplP__SINGLE_DATA: 
        Msp430Adc12ImplP__stopConversion();
      Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, Msp430Adc12ImplP__HplAdc12__getMem(0));
      break;
      case Msp430Adc12ImplP__SINGLE_DATA_REPEAT: 
        {
          error_t repeatContinue;

#line 575
          repeatContinue = Msp430Adc12ImplP__SingleChannel__singleDataReady(Msp430Adc12ImplP__clientID, 
          Msp430Adc12ImplP__HplAdc12__getMem(0));
          if (repeatContinue != SUCCESS) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 579
          break;
        }

      case Msp430Adc12ImplP__MULTI_CHANNEL: 
        {
          uint16_t i = 0;
#line 584
          uint16_t k;

#line 585
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 588
          ++i < Msp430Adc12ImplP__numChannels);
          Msp430Adc12ImplP__resultBufferIndex += Msp430Adc12ImplP__numChannels;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - Msp430Adc12ImplP__numChannels;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__MultiChannel__dataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
        }
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA: 
        {
          uint16_t i = 0;
#line 602
          uint16_t length;
#line 602
          uint16_t k;

#line 603
          resultBuffer = Msp430Adc12ImplP__resultBufferStart + Msp430Adc12ImplP__resultBufferIndex;
          if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 16) {
            length = 16;
            }
          else {
#line 607
            length = Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex;
            }
#line 608
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 610
          ++i < length);
          Msp430Adc12ImplP__resultBufferIndex += length;
          if (overflow || Msp430Adc12ImplP__resultBufferLength == Msp430Adc12ImplP__resultBufferIndex) {
              Msp430Adc12ImplP__stopConversion();
              resultBuffer -= Msp430Adc12ImplP__resultBufferIndex;
              k = Msp430Adc12ImplP__resultBufferIndex - length;
              Msp430Adc12ImplP__resultBufferIndex = 0;
              Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, resultBuffer, 
              overflow ? k : Msp430Adc12ImplP__resultBufferLength);
            }
          else {
#line 619
            if (Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex > 15) {
              return;
              }
            else 
#line 621
              {

                adc12memctl_t memctl = Msp430Adc12ImplP__HplAdc12__getMCtl(0);

#line 624
                memctl.eos = 1;
                Msp430Adc12ImplP__HplAdc12__setMCtl(Msp430Adc12ImplP__resultBufferLength - Msp430Adc12ImplP__resultBufferIndex, memctl);
              }
            }
        }
#line 628
      break;
      case Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT: 
        {
          uint8_t i = 0;

#line 632
          resultBuffer = Msp430Adc12ImplP__resultBufferStart;
          do {
              * resultBuffer++ = Msp430Adc12ImplP__HplAdc12__getMem(i);
            }
          while (
#line 635
          ++i < Msp430Adc12ImplP__resultBufferLength);

          Msp430Adc12ImplP__resultBufferStart = Msp430Adc12ImplP__SingleChannel__multipleDataReady(Msp430Adc12ImplP__clientID, 
          resultBuffer - Msp430Adc12ImplP__resultBufferLength, 
          overflow ? 0 : Msp430Adc12ImplP__resultBufferLength);
          if (!Msp430Adc12ImplP__resultBufferStart) {
            Msp430Adc12ImplP__stopConversion();
            }
#line 642
          break;
        }

      default: 
        Msp430Adc12ImplP__stopConversion();
      break;
    }
}

# 236 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static inline void Msp430RefVoltGeneratorP__HplAdc12__conversionDone(uint16_t iv)
#line 236
{
}

# 112 "../../../../tos/chips/msp430/adc12/HplAdc12.nc"
inline static void HplAdc12P__HplAdc12__conversionDone(uint16_t iv){
#line 112
  Msp430RefVoltGeneratorP__HplAdc12__conversionDone(iv);
#line 112
  Msp430Adc12ImplP__HplAdc12__conversionDone(iv);
#line 112
}
#line 112
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 0);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port60__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P60*/HplMsp430GeneralIOP__40__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 1);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port61__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P61*/HplMsp430GeneralIOP__41__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 2);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port62__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P62*/HplMsp430GeneralIOP__42__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 3);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port63__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P63*/HplMsp430GeneralIOP__43__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 4);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port64__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P64*/HplMsp430GeneralIOP__44__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 5);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port65__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P65*/HplMsp430GeneralIOP__45__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 6);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port66__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P66*/HplMsp430GeneralIOP__46__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )55U &= ~(0x01 << 7);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void Msp430Adc12ImplP__Port67__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P67*/HplMsp430GeneralIOP__47__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 140 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline uint16_t *Msp430Adc12DMAP__SubSingleChannel__multipleDataReady(uint8_t id, uint16_t buf[], uint16_t num)
{

  return 0;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData(void ){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  __nesc_result = Msp430Adc12ImplP__SingleChannel__getData(/*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID);
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 161 "TestAdcSingleC.nc"
static inline uint16_t */*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length)
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__assertData(buf, length);
  switch (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state) 
    {
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count) {
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count--;
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
            return 0;
          }
      break;
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count) {
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count--;
            return buf;
          }
    }
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__release();
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state++;
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__postTask();
  return 0;
}

#line 161
static inline uint16_t */*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length)
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__assertData(buf, length);
  switch (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state) 
    {
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count) {
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count--;
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
            return 0;
          }
      break;
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count) {
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count--;
            return buf;
          }
    }
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__release();
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state++;
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__postTask();
  return 0;
}

# 78 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel2__transferDone(error_t error)
#line 78
{
}

# 540 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static inline error_t Msp430Adc12ImplP__DMAExtension__stop(uint8_t id)
{
  Msp430Adc12ImplP__stopConversion();
  return SUCCESS;
}

# 194 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline error_t Msp430Adc12DMAP__AsyncAdcControl__default__stop(uint8_t id)
{
#line 195
  return FAIL;
}

# 105 "../../../../tos/interfaces/AsyncStdControl.nc"
inline static error_t Msp430Adc12DMAP__AsyncAdcControl__stop(uint8_t arg_0x7fb899bb8320){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  switch (arg_0x7fb899bb8320) {
#line 105
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 105
      __nesc_result = Msp430Adc12ImplP__DMAExtension__stop(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID);
#line 105
      break;
#line 105
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 105
      __nesc_result = Msp430Adc12ImplP__DMAExtension__stop(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 105
      break;
#line 105
    default:
#line 105
      __nesc_result = Msp430Adc12DMAP__AsyncAdcControl__default__stop(arg_0x7fb899bb8320);
#line 105
      break;
#line 105
    }
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 91 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static error_t Msp430Adc12DMAP__DMAChannel__repeatTransfer(void *src_addr, void *dst_addr, uint16_t size){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__repeatTransfer(src_addr, dst_addr, size);
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 161 "TestAdcSingleC.nc"
static inline uint16_t */*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length)
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__assertData(buf, length);
  switch (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state) 
    {
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count) {
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count--;
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
            return 0;
          }
      break;
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count) {
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count--;
            return buf;
          }
    }
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__release();
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state++;
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__postTask();
  return 0;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Msp430RefVoltArbiterImplP__ClientResource__release(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 189 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData(void ){
#line 189
  unsigned char __nesc_result;
#line 189

#line 189
  __nesc_result = Msp430Adc12DMAP__SingleChannel__getData(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID);
#line 189

#line 189
  return __nesc_result;
#line 189
}
#line 189
# 161 "TestAdcSingleC.nc"
static inline uint16_t */*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__multipleDataReady(uint16_t *buf, uint16_t length)
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__assertData(buf, length);
  switch (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state) 
    {
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count) {
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count--;
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
            return 0;
          }
      break;
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count) {
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count--;
            return buf;
          }
    }
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__release();
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state++;
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__postTask();
  return 0;
}

# 190 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline uint16_t *Msp430Adc12DMAP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t buf[], uint16_t num)
{
#line 192
  return 0;
}

# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
inline static uint16_t * Msp430Adc12DMAP__SingleChannel__multipleDataReady(uint8_t arg_0x7fb899bbe9c0, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x7fb899bbe9c0) {
#line 227
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 227
      __nesc_result = /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__multipleDataReady(buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 227
      __nesc_result = /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__multipleDataReady(buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12DMAP__SingleChannel__default__multipleDataReady(arg_0x7fb899bbe9c0, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 146 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static inline void Msp430Adc12DMAP__DMAChannel__transferDone(error_t success)
{
  uint8_t oldMode = Msp430Adc12DMAP__mode;
  uint16_t *new_buffer;

  if (oldMode != Msp430Adc12DMAP__MULTIPLE_REPEAT) {
      Msp430Adc12DMAP__AsyncAdcControl__stop(Msp430Adc12DMAP__client);
      Msp430Adc12DMAP__mode = Msp430Adc12DMAP__MULTIPLE_SINGLE_AGAIN;
    }
  new_buffer = Msp430Adc12DMAP__SingleChannel__multipleDataReady(Msp430Adc12DMAP__client, Msp430Adc12DMAP__buffer, Msp430Adc12DMAP__numSamples);
  if (oldMode == Msp430Adc12DMAP__MULTIPLE_REPEAT) {
      if (new_buffer) {
          Msp430Adc12DMAP__buffer = new_buffer;
          Msp430Adc12DMAP__DMAChannel__repeatTransfer((void *)0x0140, Msp430Adc12DMAP__buffer, Msp430Adc12DMAP__numSamples);
        }
      else {
#line 161
        Msp430Adc12DMAP__AsyncAdcControl__stop(Msp430Adc12DMAP__client);
        }
    }
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error_t success){
#line 107
  Msp430Adc12DMAP__DMAChannel__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel2__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)496U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)496U & 0x0008) {
      * (volatile uint16_t *)496U &= ~0x0008;
      * (volatile uint16_t *)496U &= ~0x0002;
      /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__DMA__transferDone(error);
    }
}

# 77 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel1__transferDone(error_t error)
#line 77
{
}

# 127 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel1P*/Msp430DmaChannelP__1__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel1__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)488U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)488U & 0x0008) {
      * (volatile uint16_t *)488U &= ~0x0008;
      * (volatile uint16_t *)488U &= ~0x0002;
      /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__DMA__transferDone(error);
    }
}

# 76 "../../../../tos/chips/msp430/dma/Msp430DmaControlP.nc"
static inline void Msp430DmaControlP__HplChannel0__transferDone(error_t error)
#line 76
{
}

# 127 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__default__transferDone(error_t error)
#line 127
{
}

# 107 "../../../../tos/chips/msp430/dma/Msp430DmaChannel.nc"
inline static void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error_t success){
#line 107
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__default__transferDone(success);
#line 107
}
#line 107
# 123 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static inline void /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(error_t error)
#line 123
{
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__Channel__transferDone(error);
}

# 85 "../../../../tos/chips/msp430/dma/HplMsp430DmaChannel.nc"
inline static void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error_t success){
#line 85
  /*Msp430DmaC.Channel0P*/Msp430DmaChannelP__0__HplChannel__transferDone(success);
#line 85
  Msp430DmaControlP__HplChannel0__transferDone(success);
#line 85
}
#line 85
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaXP.nc"
static inline void /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired(void )
#line 63
{
  error_t error = * (volatile uint16_t *)480U & 0x0002 ? FAIL : SUCCESS;

#line 65
  if (* (volatile uint16_t *)480U & 0x0008) {
      * (volatile uint16_t *)480U &= ~0x0008;
      * (volatile uint16_t *)480U &= ~0x0002;
      /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__DMA__transferDone(error);
    }
}

# 39 "../../../../tos/chips/msp430/dma/HplMsp430DmaInterrupt.nc"
inline static void HplMsp430DmaP__Interrupt__fired(void ){
#line 39
  /*HplMsp430DmaC.Dma0*/HplMsp430DmaXP__0__Interrupt__fired();
#line 39
  /*HplMsp430DmaC.Dma1*/HplMsp430DmaXP__1__Interrupt__fired();
#line 39
  /*HplMsp430DmaC.Dma2*/HplMsp430DmaXP__2__Interrupt__fired();
#line 39
}
#line 39
# 422 "../../../../tos/chips/msp430/msp430hardware.h"
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

# 11 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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

# 12 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
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

# 146 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fb89a5a38b0){
#line 39
  switch (arg_0x7fb89a5a38b0) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fb89a5a38b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 176 "../../../../tos/system/SchedulerBasicP.nc"
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

# 107 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

# 80 "../../../../tos/lib/timer/TransformCounterC.nc"
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

# 62 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
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

# 14 "../../../../tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "../../../../tos/system/RealMainP.nc"
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

# 175 "../../../../tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "../../../../tos/platforms/telosb/MotePlatformC.nc"
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

# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )49U |= 0x01 << 4;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )49U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )49U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 136 "../../../../tos/system/SchedulerBasicP.nc"
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

# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fb89a6ac450){
#line 75
  switch (arg_0x7fb89a6ac450) {
#line 75
    case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData:
#line 75
      /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure:
#line 75
      /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__runTask();
#line 75
      break;
#line 75
    case /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData:
#line 75
      /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure:
#line 75
      /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__runTask();
#line 75
      break;
#line 75
    case Msp430RefVoltArbiterImplP__switchOff:
#line 75
      Msp430RefVoltArbiterImplP__switchOff__runTask();
#line 75
      break;
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
    case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData:
#line 75
      /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure:
#line 75
      /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData:
#line 75
      /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure:
#line 75
      /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData:
#line 75
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure:
#line 75
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalFailure__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess:
#line 75
      /*TestAdcAppC.TestMulti1*/TestAdcMultiC__0__signalSuccess__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData:
#line 75
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__getData__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure:
#line 75
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalFailure__runTask();
#line 75
      break;
#line 75
    case /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess:
#line 75
      /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__signalSuccess__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fb89a6ac450);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 70 "../../../../tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "../../../../tos/system/RoundRobinResourceQueueC.nc"
static bool /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Msp430Adc12P.Arbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 75 "EvaluatorC.nc"
static void EvaluatorC__Notify__notify(uint8_t client, bool val)
{
  if (val) {
    EvaluatorC__numSuccess++;
    }
  else 
#line 79
    {
      if (client != 7) {
        EvaluatorC__display(client);
        }
#line 82
      EvaluatorC__numSuccess = -1000;
    }
  if (EvaluatorC__NUM_CLIENTS == EvaluatorC__numSuccess) {
      EvaluatorC__Leds__led0On();
      EvaluatorC__Leds__led1On();
      EvaluatorC__Leds__led2On();
    }
}

# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 57
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 57
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
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

# 259 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__switchOff(void )
#line 259
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 260
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 262
            EBUSY;

            {
#line 262
              __nesc_atomic_end(__nesc_atomic); 
#line 262
              return __nesc_temp;
            }
          }
        }
      else 
#line 264
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 266
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 270
            SUCCESS;

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
}

# 159 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 116 "TestAdcMultiC.nc"
static void /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__Resource__granted(void )
{
  if (/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__configure(&/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__config, &/*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__memCtl, 1, /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__buffer, 100, 0) == SUCCESS) {
    /*TestAdcAppC.TestMulti2*/TestAdcMultiC__1__MultiChannel__getData();
    }
}

# 420 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__MultiChannel__configure(uint8_t id, 
const msp430adc12_channel_config_t *config, 
adc12memctl_t *memctl, uint8_t numMemctl, uint16_t *buf, 
uint16_t numSamples, uint16_t jiffies)
{
  error_t result = ERESERVE;






  if ((((((((
#line 431
  !config || !memctl) || !numMemctl) || numMemctl > 15) || !numSamples) || 
  !buf) || jiffies == 1) || jiffies == 2) || numSamples % (numMemctl + 1) != 0) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 435
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 437
          EBUSY;

          {
#line 437
            __nesc_atomic_end(__nesc_atomic); 
#line 437
            return __nesc_temp;
          }
        }
#line 438
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = numSamples > numMemctl + 1 ? 3 : 1, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t firstMemctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 454
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 456
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__MULTI_CHANNEL;
          Msp430Adc12ImplP__resultBufferStart = (void *)0;
          Msp430Adc12ImplP__resultBufferLength = numSamples;
          Msp430Adc12ImplP__resultBufferStart = buf;
          Msp430Adc12ImplP__resultBufferIndex = 0;
          Msp430Adc12ImplP__numChannels = numMemctl + 1;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, firstMemctl);
          for (i = 0; i < numMemctl - 1 && i < 14; i++) {
              memctl[i].eos = 0;
              Msp430Adc12ImplP__HplAdc12__setMCtl(i + 1, memctl[i]);
            }
          memctl[i].eos = 1;
          Msp430Adc12ImplP__HplAdc12__setMCtl(i + 1, memctl[i]);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(mask << (i + 1));

          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 483
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 131 "../../../../tos/system/SimpleArbiterP.nc"
static uint8_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  {
    if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state != /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 134
        /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;

#line 134
        return __nesc_temp;
      }
#line 135
    {
      unsigned char __nesc_temp = 
#line 135
      /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId;

#line 135
      return __nesc_temp;
    }
  }
}

# 109 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP__prepareTimerA(uint16_t interval, uint16_t csSAMPCON, uint16_t cdSAMPCON)
{

  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
  Msp430Adc12ImplP__TimerA__clear();
  Msp430Adc12ImplP__TimerA__disableEvents();
  Msp430Adc12ImplP__TimerA__setClockSource(csSAMPCON);
  Msp430Adc12ImplP__TimerA__setInputDivider(cdSAMPCON);
  Msp430Adc12ImplP__ControlA0__setControl(ccResetSHI);
  Msp430Adc12ImplP__CompareA0__setEvent(interval - 1);
  Msp430Adc12ImplP__CompareA1__setEvent((interval - 1) / 2);
}

# 91 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__setMode(int mode)
{
  * (volatile uint16_t * )352U = (* (volatile uint16_t * )352U & ~(0x0020 | 0x0010)) | ((mode << 4) & (0x0020 | 0x0010));
}

# 487 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__MultiChannel__getData(uint8_t id)
{
  uint8_t i;

#line 490
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 490
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          if (!Msp430Adc12ImplP__resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 493
              EINVAL;

              {
#line 493
                __nesc_atomic_end(__nesc_atomic); 
#line 493
                return __nesc_temp;
              }
            }
#line 494
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 495
              EBUSY;

              {
#line 495
                __nesc_atomic_end(__nesc_atomic); 
#line 495
                return __nesc_temp;
              }
            }
#line 496
          Msp430Adc12ImplP__state |= Msp430Adc12ImplP__ADC_BUSY;
          Msp430Adc12ImplP__clientID = id;
          for (i = 0; i < Msp430Adc12ImplP__numChannels; i++) 
            Msp430Adc12ImplP__configureAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(i).inch);
          Msp430Adc12ImplP__HplAdc12__startConversion();
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
            Msp430Adc12ImplP__startTimerA();
            }
#line 503
          {
            unsigned char __nesc_temp = 
#line 503
            SUCCESS;

            {
#line 503
              __nesc_atomic_end(__nesc_atomic); 
#line 503
              return __nesc_temp;
            }
          }
        }
    }
#line 507
    __nesc_atomic_end(__nesc_atomic); }
#line 506
  return FAIL;
}

#line 148
static void Msp430Adc12ImplP__configureAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectModuleFunc();
#line 153
      Msp430Adc12ImplP__Port60__makeInput();
#line 153
      break;
      case 1: Msp430Adc12ImplP__Port61__selectModuleFunc();
#line 154
      Msp430Adc12ImplP__Port61__makeInput();
#line 154
      break;
      case 2: Msp430Adc12ImplP__Port62__selectModuleFunc();
#line 155
      Msp430Adc12ImplP__Port62__makeInput();
#line 155
      break;
      case 3: Msp430Adc12ImplP__Port63__selectModuleFunc();
#line 156
      Msp430Adc12ImplP__Port63__makeInput();
#line 156
      break;
      case 4: Msp430Adc12ImplP__Port64__selectModuleFunc();
#line 157
      Msp430Adc12ImplP__Port64__makeInput();
#line 157
      break;
      case 5: Msp430Adc12ImplP__Port65__selectModuleFunc();
#line 158
      Msp430Adc12ImplP__Port65__makeInput();
#line 158
      break;
      case 6: Msp430Adc12ImplP__Port66__selectModuleFunc();
#line 159
      Msp430Adc12ImplP__Port66__makeInput();
#line 159
      break;
      case 7: Msp430Adc12ImplP__Port67__selectModuleFunc();
#line 160
      Msp430Adc12ImplP__Port67__makeInput();
#line 160
      break;
    }
}

#line 127
static void Msp430Adc12ImplP__startTimerA(void )
{

  msp430_compare_control_t ccSetSHI = { 
  .ccifg = 0, .cov = 0, .out = 1, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccResetSHI = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 0, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };
  msp430_compare_control_t ccRSOutmod = { 
  .ccifg = 0, .cov = 0, .out = 0, .cci = 0, .ccie = 0, 
  .outmod = 7, .cap = 0, .clld = 0, .scs = 0, .ccis = 0, .cm = 0 };

  Msp430Adc12ImplP__ControlA1__setControl(ccResetSHI);
  Msp430Adc12ImplP__ControlA1__setControl(ccSetSHI);

  Msp430Adc12ImplP__ControlA1__setControl(ccRSOutmod);
  Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_UP_MODE);
}

# 108 "TestAdcSingleC.nc"
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__granted(void )
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count = 5;
  switch (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state) 
    {
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingle(&/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config) == SUCCESS) {
          /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
          }
#line 116
      break;
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureSingleRepeat(&/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
          }
#line 120
      break;
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultiple(&/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config, /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__buffer, 100, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
          }
#line 124
      break;
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__configureMultipleRepeat(&/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__config, /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__buffer, 16, 200) == SUCCESS) {
          /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
          }
#line 128
      break;
      default: /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__release();
      /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Notify__notify(TRUE);
      break;
    }
}

# 182 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureSingle(uint8_t id, 
const msp430adc12_channel_config_t *config)
{
  error_t result = ERESERVE;

  if (!config) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 190
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 192
          EBUSY;

          {
#line 192
            __nesc_atomic_end(__nesc_atomic); 
#line 192
            return __nesc_temp;
          }
        }
#line 193
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 0, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = 0, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 210
          ctl0.msc = 1;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__SINGLE_DATA;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0x01);
          result = SUCCESS;
        }
    }
#line 221
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 127 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static error_t Msp430Adc12DMAP__SingleChannel__getData(uint8_t id)
{
  if (Msp430Adc12DMAP__mode == Msp430Adc12DMAP__MULTIPLE_SINGLE_AGAIN) {
    Msp430Adc12DMAP__DMAChannel__repeatTransfer((void *)0x0140, Msp430Adc12DMAP__buffer, Msp430Adc12DMAP__numSamples);
    }
#line 131
  return Msp430Adc12DMAP__SubSingleChannel__getData(id);
}

# 97 "../../../../tos/chips/msp430/dma/Msp430DmaChannelP.nc"
static error_t /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__Channel__repeatTransfer(void *src_addr, 
void *dst_addr, 
uint16_t size)
#line 99
{
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSrc(src_addr);
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setDst(dst_addr);
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__setSize(size);
  /*Msp430DmaC.Channel2P*/Msp430DmaChannelP__2__HplChannel__enableDMA();
  return SUCCESS;
}

# 400 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__getData(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 402
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT && !Msp430Adc12ImplP__resultBufferStart) 
            {
              unsigned char __nesc_temp = 
#line 405
              EINVAL;

              {
#line 405
                __nesc_atomic_end(__nesc_atomic); 
#line 405
                return __nesc_temp;
              }
            }
#line 406
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
            {
              unsigned char __nesc_temp = 
#line 407
              EBUSY;

              {
#line 407
                __nesc_atomic_end(__nesc_atomic); 
#line 407
                return __nesc_temp;
              }
            }
#line 408
          Msp430Adc12ImplP__state |= Msp430Adc12ImplP__ADC_BUSY;
          Msp430Adc12ImplP__clientID = id;
          Msp430Adc12ImplP__configureAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
          Msp430Adc12ImplP__HplAdc12__startConversion();
          if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
            Msp430Adc12ImplP__startTimerA();
            }
#line 414
          {
            unsigned char __nesc_temp = 
#line 414
            SUCCESS;

            {
#line 414
              __nesc_atomic_end(__nesc_atomic); 
#line 414
              return __nesc_temp;
            }
          }
        }
    }
#line 418
    __nesc_atomic_end(__nesc_atomic); }
#line 417
  return FAIL;
}

#line 225
static error_t Msp430Adc12ImplP__SingleChannel__configureSingleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t jiffies)
{
  error_t result = ERESERVE;





  if ((!config || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 238
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 240
          EBUSY;

          {
#line 240
            __nesc_atomic_end(__nesc_atomic); 
#line 240
            return __nesc_temp;
          }
        }
#line 241
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 2, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 1 };

          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 258
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__SINGLE_DATA_REPEAT;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          Msp430Adc12ImplP__HplAdc12__setMCtl(0, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0x01);
          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 273
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 81 "../../../../tos/chips/msp430/adc12/Msp430Adc12DMAP.nc"
static error_t Msp430Adc12DMAP__configure(uint8_t id, const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies, uint8_t _mode)
{



  error_t result = Msp430Adc12DMAP__SubSingleChannel__configureSingleRepeat(id, config, jiffies);

#line 88
  if (result == SUCCESS) {
      Msp430Adc12DMAP__DMAControl__init();
      Msp430Adc12DMAP__DMAControl__setFlags(ENABLE_NMI, NOT_ROUND_ROBIN, ON_FETCH);
      Msp430Adc12DMAP__DMAChannel__setupTransfer(
      DMA_SINGLE_TRANSFER, 
      DMA_TRIGGER_ADC12IFGx, 
      DMA_EDGE_SENSITIVE, 
      (void *)0x0140, 
      buf, 
      length, 
      DMA_WORD, 
      DMA_WORD, 
      DMA_ADDRESS_UNCHANGED, 
      DMA_ADDRESS_INCREMENTED);

      Msp430Adc12DMAP__DMAChannel__startTransfer();
      Msp430Adc12DMAP__client = id;
      Msp430Adc12DMAP__mode = _mode;
      Msp430Adc12DMAP__buffer = buf;
      Msp430Adc12DMAP__numSamples = length;
      Msp430Adc12DMAP__AsyncAdcControl__start(id);
    }
  return result;
}

# 528 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__DMAExtension__start(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 530
    {
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          Msp430Adc12ImplP__HplAdc12__setIEFlags(0);
          Msp430Adc12ImplP__HplAdc12__resetIFGs();
          {
            unsigned char __nesc_temp = 
#line 534
            SUCCESS;

            {
#line 534
              __nesc_atomic_end(__nesc_atomic); 
#line 534
              return __nesc_temp;
            }
          }
        }
    }
#line 538
    __nesc_atomic_end(__nesc_atomic); }
#line 537
  return FAIL;
}

# 121 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static error_t Msp430RefVoltArbiterImplP__ClientResource__release(uint8_t client)
{
  error_t error;

#line 124
  if (Msp430RefVoltArbiterImplP__syncOwner == client) {
    Msp430RefVoltArbiterImplP__switchOff__postTask();
    }
#line 126
  error = Msp430RefVoltArbiterImplP__AdcResource__release(client);
#line 138
  return error;
}

# 96 "../../../../tos/system/SimpleArbiterP.nc"
static error_t /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*Msp430Adc12P.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 108 "TestAdcSingleC.nc"
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__granted(void )
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count = 5;
  switch (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state) 
    {
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingle(&/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config) == SUCCESS) {
          /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
          }
#line 116
      break;
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureSingleRepeat(&/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
          }
#line 120
      break;
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__MULTIPLE_DATA: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultiple(&/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config, /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__buffer, 100, 10) == SUCCESS) {
          /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
          }
#line 124
      break;
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__MULTIPLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__configureMultipleRepeat(&/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__config, /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__buffer, 16, 200) == SUCCESS) {
          /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
          }
#line 128
      break;
      default: /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__release();
      /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Notify__notify(TRUE);
      break;
    }
}

# 277 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static error_t Msp430Adc12ImplP__SingleChannel__configureMultiple(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint16_t length, uint16_t jiffies)
{
  error_t result = ERESERVE;





  if ((((!config || !buf) || !length) || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 290
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 292
          EBUSY;

          {
#line 292
            __nesc_atomic_end(__nesc_atomic); 
#line 292
            return __nesc_temp;
          }
        }
#line 293
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = length > 16 ? 3 : 1, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 309
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 311
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__MULTIPLE_DATA;
          Msp430Adc12ImplP__resultBufferStart = (void *)0;
          Msp430Adc12ImplP__resultBufferLength = length;
          Msp430Adc12ImplP__resultBufferStart = buf;
          Msp430Adc12ImplP__resultBufferIndex = 0;
          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          for (i = 0; i < length - 1 && i < 15; i++) 
            Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          memctl.eos = 1;
          Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(mask << i);

          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 334
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

static error_t Msp430Adc12ImplP__SingleChannel__configureMultipleRepeat(uint8_t id, 
const msp430adc12_channel_config_t *config, 
uint16_t *buf, uint8_t length, uint16_t jiffies)
{
  error_t result = ERESERVE;





  if (((((!config || !buf) || !length) || length > 16) || jiffies == 1) || jiffies == 2) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 351
    {
      if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__ADC_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 353
          EBUSY;

          {
#line 353
            __nesc_atomic_end(__nesc_atomic); 
#line 353
            return __nesc_temp;
          }
        }
#line 354
      if (Msp430Adc12ImplP__ADCArbiterInfo__userId() == id) {
          adc12ctl1_t ctl1 = { 
          .adc12busy = 0, 
          .conseq = 3, 
          .adc12ssel = config->adc12ssel, 
          .adc12div = config->adc12div, 
          .issh = 0, 
          .shp = 1, 
          .shs = jiffies == 0 ? 0 : 1, 
          .cstartadd = 0 };

          adc12memctl_t memctl = { 
          .inch = config->inch, 
          .sref = config->sref, 
          .eos = 0 };

          uint16_t i;
#line 370
          uint16_t mask = 1;
          adc12ctl0_t ctl0 = Msp430Adc12ImplP__HplAdc12__getCtl0();

#line 372
          ctl0.msc = jiffies == 0 ? 1 : 0;
          ctl0.sht0 = config->sht;
          ctl0.sht1 = config->sht;

          Msp430Adc12ImplP__state = Msp430Adc12ImplP__MULTIPLE_DATA_REPEAT;
          Msp430Adc12ImplP__resultBufferStart = (void *)0;
          Msp430Adc12ImplP__resultBufferLength = length;
          Msp430Adc12ImplP__resultBufferStart = buf;
          Msp430Adc12ImplP__resultBufferIndex = 0;

          Msp430Adc12ImplP__HplAdc12__setCtl0(ctl0);
          Msp430Adc12ImplP__HplAdc12__setCtl1(ctl1);
          for (i = 0; i < length - 1 && i < 15; i++) 
            Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          memctl.eos = 1;
          Msp430Adc12ImplP__HplAdc12__setMCtl(i, memctl);
          Msp430Adc12ImplP__HplAdc12__setIEFlags(mask << i);

          if (jiffies) {
              Msp430Adc12ImplP__state |= Msp430Adc12ImplP__USE_TIMERA;
              Msp430Adc12ImplP__prepareTimerA(jiffies, config->sampcon_ssel, config->sampcon_id);
            }
          result = SUCCESS;
        }
    }
#line 396
    __nesc_atomic_end(__nesc_atomic); }
  return result;
}

# 112 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__RefVolt_2_5V__startDone(error_t error)
{
  if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {


      Msp430RefVoltArbiterImplP__ClientResource__granted(Msp430RefVoltArbiterImplP__syncOwner);
    }
}

# 147 "../../../../tos/lib/timer/TransformAlarmC.nc"
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

# 147 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__stop(Msp430RefVoltGeneratorP__state_t nextState)
#line 147
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
    result = EALREADY;
    }
  else {
#line 152
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
        result = SUCCESS;
        Msp430RefVoltGeneratorP__m_state = nextState;
        Msp430RefVoltGeneratorP__SwitchOffTimer__startOneShot(20);
      }
    else {
#line 156
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOff()) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 160
              Msp430RefVoltGeneratorP__SwitchOnTimer__stop();
              Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__GENERATOR_OFF;
              Msp430RefVoltGeneratorP__signalStartDone(oldState, FAIL);
              Msp430RefVoltGeneratorP__signalStopDone(nextState, SUCCESS);
            }
        }
      else {
#line 165
        if (Msp430RefVoltGeneratorP__m_state == nextState) {
          result = SUCCESS;
          }
        else {
#line 168
          result = EBUSY;
          }
        }
      }
    }
#line 170
  return result;
}

static void Msp430RefVoltGeneratorP__signalStartDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 173
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__startDone(result);
    }
  else {
#line 177
    Msp430RefVoltGeneratorP__RefVolt_2_5V__startDone(result);
    }
}

#line 180
static void Msp430RefVoltGeneratorP__signalStopDone(Msp430RefVoltGeneratorP__state_t state, error_t result)
#line 180
{
  if (state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
    Msp430RefVoltGeneratorP__RefVolt_1_5V__stopDone(result);
    }
  else {
#line 184
    Msp430RefVoltGeneratorP__RefVolt_2_5V__stopDone(result);
    }
}

# 71 "../../../../tos/chips/msp430/adc12/Msp430RefVoltArbiterImplP.nc"
static void Msp430RefVoltArbiterImplP__AdcResource__granted(uint8_t client)
{
  const msp430adc12_channel_config_t *settings = Msp430RefVoltArbiterImplP__Config__getConfiguration(client);

#line 74
  if (settings->sref == REFERENCE_VREFplus_AVss || 
  settings->sref == REFERENCE_VREFplus_VREFnegterm) {
      error_t started;

#line 77
      if (Msp430RefVoltArbiterImplP__syncOwner != Msp430RefVoltArbiterImplP__NO_OWNER) {



          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
          return;
        }
      Msp430RefVoltArbiterImplP__syncOwner = client;
      if (settings->ref2_5v == REFVOLT_LEVEL_1_5) {
          Msp430RefVoltArbiterImplP__ref2_5v = FALSE;
          started = Msp430RefVoltArbiterImplP__RefVolt_1_5V__start();
        }
      else {
          Msp430RefVoltArbiterImplP__ref2_5v = TRUE;
          started = Msp430RefVoltArbiterImplP__RefVolt_2_5V__start();
        }
      if (started != SUCCESS) {
          Msp430RefVoltArbiterImplP__syncOwner = Msp430RefVoltArbiterImplP__NO_OWNER;
          Msp430RefVoltArbiterImplP__AdcResource__release(client);
          Msp430RefVoltArbiterImplP__AdcResource__request(client);
        }
    }
  else {
#line 100
    Msp430RefVoltArbiterImplP__ClientResource__granted(client);
    }
}

# 95 "../../../../tos/chips/msp430/adc12/Msp430RefVoltGeneratorP.nc"
static error_t Msp430RefVoltGeneratorP__start(Msp430RefVoltGeneratorP__state_t targetState)
#line 95
{
  error_t result;

  if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_STABLE) {
      if (targetState == Msp430RefVoltGeneratorP__m_state) {
          result = EALREADY;
        }
      else {
#line 101
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE) {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
            else 
#line 105
              {
                Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
          }
        }
    }
  else {
#line 110
    if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__GENERATOR_OFF) {
        if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {
            if (targetState == Msp430RefVoltGeneratorP__REFERENCE_1_5V_STABLE && Msp430RefVoltGeneratorP__SwitchOffSettleTimer__isRunning()) {
                Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
              }
            else {
              Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
              }
#line 117
            Msp430RefVoltGeneratorP__SwitchOffSettleTimer__stop();
            Msp430RefVoltGeneratorP__m_state = targetState + 2;
          }
      }
    else {
#line 120
      if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING || Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_2_5V_OFF_PENDING) {
          if ((result = Msp430RefVoltGeneratorP__switchOn(targetState)) == SUCCESS) {

              Msp430RefVoltGeneratorP__state_t oldState = Msp430RefVoltGeneratorP__m_state;

#line 124
              Msp430RefVoltGeneratorP__SwitchOffTimer__stop();
              Msp430RefVoltGeneratorP__signalStopDone(oldState, FAIL);
              if (targetState == Msp430RefVoltGeneratorP__m_state - 4) {
                  Msp430RefVoltGeneratorP__m_state = targetState;
                  Msp430RefVoltGeneratorP__signalStartDone(targetState, SUCCESS);
                }
              else {
#line 130
                if (Msp430RefVoltGeneratorP__m_state == Msp430RefVoltGeneratorP__REFERENCE_1_5V_OFF_PENDING) {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_2_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(17);
                  }
                else {
                    Msp430RefVoltGeneratorP__m_state = Msp430RefVoltGeneratorP__REFERENCE_1_5V_ON_PENDING;
                    Msp430RefVoltGeneratorP__SwitchOnTimer__startOneShot(70);
                  }
                }
            }
        }
      else {
#line 139
        if (Msp430RefVoltGeneratorP__m_state == targetState + 2) {
          result = SUCCESS;
          }
        else {
#line 142
          result = EBUSY;
          }
        }
      }
    }
#line 144
  return result;
}

#line 240
static error_t Msp430RefVoltGeneratorP__switchOn(uint8_t level)
#line 240
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    {
      if (Msp430RefVoltGeneratorP__HplAdc12__isBusy()) {
          {
            unsigned char __nesc_temp = 
#line 243
            EBUSY;

            {
#line 243
              __nesc_atomic_end(__nesc_atomic); 
#line 243
              return __nesc_temp;
            }
          }
        }
      else 
#line 245
        {
          adc12ctl0_t ctl0 = Msp430RefVoltGeneratorP__HplAdc12__getCtl0();

#line 247
          ctl0.enc = 0;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          ctl0.refon = 1;


          ctl0.r2_5v = level - 1;
          Msp430RefVoltGeneratorP__HplAdc12__setCtl0(ctl0);
          {
            unsigned char __nesc_temp = 
#line 254
            SUCCESS;

            {
#line 254
              __nesc_atomic_end(__nesc_atomic); 
#line 254
              return __nesc_temp;
            }
          }
        }
    }
#line 258
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "../../../../tos/chips/msp430/adc12/HplAdc12P.nc"
static void HplAdc12P__HplAdc12__stopConversion(void )
#line 105
{

  uint16_t ctl1 = HplAdc12P__ADC12CTL1;

#line 108
  HplAdc12P__ADC12CTL1 &= ~(0x0002 | 0x0004);
  HplAdc12P__ADC12CTL0 &= ~(0x001 + 0x002);
  HplAdc12P__ADC12CTL0 &= ~0x010;
  HplAdc12P__ADC12CTL1 |= ctl1 & (0x0002 | 0x0004);
}







__attribute((wakeup)) __attribute((interrupt(0x000E)))  void sig_ADC12_VECTOR(void )
#line 120
{
  HplAdc12P__HplAdc12__conversionDone(HplAdc12P__ADC12IV);
}

# 509 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static void Msp430Adc12ImplP__stopConversion(void )
{
  uint8_t i;

  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__USE_TIMERA) {
    Msp430Adc12ImplP__TimerA__setMode(MSP430TIMER_STOP_MODE);
    }
  Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(0).inch);
  if (Msp430Adc12ImplP__state & Msp430Adc12ImplP__MULTI_CHANNEL) {
      for (i = 1; i < Msp430Adc12ImplP__numChannels; i++) 
        Msp430Adc12ImplP__resetAdcPin(Msp430Adc12ImplP__HplAdc12__getMCtl(i).inch);
    }
  /* atomic removed: atomic calls only */
#line 521
  {
    Msp430Adc12ImplP__HplAdc12__stopConversion();
    Msp430Adc12ImplP__HplAdc12__resetIFGs();
    Msp430Adc12ImplP__state &= ~Msp430Adc12ImplP__ADC_BUSY;
  }
}

#line 165
static void Msp430Adc12ImplP__resetAdcPin(uint8_t inch)
{

  switch (inch) 
    {
      case 0: Msp430Adc12ImplP__Port60__selectIOFunc();
#line 170
      break;
      case 1: Msp430Adc12ImplP__Port61__selectIOFunc();
#line 171
      break;
      case 2: Msp430Adc12ImplP__Port62__selectIOFunc();
#line 172
      break;
      case 3: Msp430Adc12ImplP__Port63__selectIOFunc();
#line 173
      break;
      case 4: Msp430Adc12ImplP__Port64__selectIOFunc();
#line 174
      break;
      case 5: Msp430Adc12ImplP__Port65__selectIOFunc();
#line 175
      break;
      case 6: Msp430Adc12ImplP__Port66__selectIOFunc();
#line 176
      break;
      case 7: Msp430Adc12ImplP__Port67__selectIOFunc();
#line 177
      break;
    }
}

# 135 "TestAdcSingleC.nc"
static error_t /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__singleDataReady(uint16_t data)
{
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__assertData(&data, 1);
  switch (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state) 
    {
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count) {
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count--;
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SingleChannel__getData();
            return SUCCESS;
          }
      break;
      case /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count) {
            /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__count--;
            return SUCCESS;
          }
      break;
    }
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__Resource__release();
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__state++;
  /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__getData__postTask();
  return FAIL;
}

#line 84
static void /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 87
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
      /*TestAdcAppC.TestSingle3*/TestAdcSingleC__3__signalFailure__postTask();
      }
}

#line 135
static error_t /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__singleDataReady(uint16_t data)
{
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__assertData(&data, 1);
  switch (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state) 
    {
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count) {
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count--;
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SingleChannel__getData();
            return SUCCESS;
          }
      break;
      case /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count) {
            /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__count--;
            return SUCCESS;
          }
      break;
    }
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__Resource__release();
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__state++;
  /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__getData__postTask();
  return FAIL;
}

#line 84
static void /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 87
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
      /*TestAdcAppC.TestSingle2*/TestAdcSingleC__2__signalFailure__postTask();
      }
}

#line 135
static error_t /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__singleDataReady(uint16_t data)
{
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__assertData(&data, 1);
  switch (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state) 
    {
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count) {
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count--;
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__getData();
            return SUCCESS;
          }
      break;
      case /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count) {
            /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__count--;
            return SUCCESS;
          }
      break;
    }
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__Resource__release();
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__state++;
  /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__getData__postTask();
  return FAIL;
}

#line 84
static void /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 87
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
      /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__signalFailure__postTask();
      }
}

#line 135
static error_t /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__singleDataReady(uint16_t data)
{
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__assertData(&data, 1);
  switch (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state) 
    {
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SINGLE_DATA: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count) {
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count--;
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__getData();
            return SUCCESS;
          }
      break;
      case /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SINGLE_DATA_REPEAT: 
        if (/*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count) {
            /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__count--;
            return SUCCESS;
          }
      break;
    }
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__Resource__release();
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__state++;
  /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__getData__postTask();
  return FAIL;
}

#line 84
static void /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__assertData(uint16_t *data, uint16_t num)
{
  uint16_t i;

#line 87
  for (i = 0; i < num; i++) 
    if (!data[i] || data[i] >= 0xFFF) {
      /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__signalFailure__postTask();
      }
}

# 656 "../../../../tos/chips/msp430/adc12/Msp430Adc12ImplP.nc"
static uint16_t *Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(uint8_t id, 
uint16_t *buf, uint16_t numSamples)
{
  return 0;
}

# 227 "../../../../tos/chips/msp430/adc12/Msp430Adc12SingleChannel.nc"
static uint16_t * Msp430Adc12ImplP__SingleChannel__multipleDataReady(uint8_t arg_0x7fb89a1941c0, uint16_t * buffer, uint16_t numSamples){
#line 227
  unsigned int *__nesc_result;
#line 227

#line 227
  switch (arg_0x7fb89a1941c0) {
#line 227
    case /*TestAdcAppC.Wrapper0*/Msp430Adc12ClientC__0__ID:
#line 227
      __nesc_result = /*TestAdcAppC.TestSingle0*/TestAdcSingleC__0__SingleChannel__multipleDataReady(buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestAdcAppC.Wrapper1*/Msp430Adc12ClientAutoRVGC__0__ID:
#line 227
      __nesc_result = /*TestAdcAppC.TestSingle1*/TestAdcSingleC__1__SingleChannel__multipleDataReady(buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID:
#line 227
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__multipleDataReady(/*TestAdcAppC.Wrapper2*/Msp430Adc12ClientAutoDMAC__0__ID, buffer, numSamples);
#line 227
      break;
#line 227
    case /*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID:
#line 227
      __nesc_result = Msp430Adc12DMAP__SubSingleChannel__multipleDataReady(/*TestAdcAppC.Wrapper3*/Msp430Adc12ClientAutoDMA_RVGC__0__ID, buffer, numSamples);
#line 227
      break;
#line 227
    default:
#line 227
      __nesc_result = Msp430Adc12ImplP__SingleChannel__default__multipleDataReady(arg_0x7fb89a1941c0, buffer, numSamples);
#line 227
      break;
#line 227
    }
#line 227

#line 227
  return __nesc_result;
#line 227
}
#line 227
# 63 "../../../../tos/chips/msp430/dma/HplMsp430DmaP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0000)))  void sig_XX_DMA_VECTOR_XX(void )
#line 63
{
  HplMsp430DmaP__Interrupt__fired();
}

