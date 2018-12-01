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
#line 315
static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
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
extern int memcmp(const void *arg_0x7fcac5f42250, const void *arg_0x7fcac5f42550, size_t arg_0x7fcac5f42810);


extern void *memset(void *arg_0x7fcac5f3e020, int arg_0x7fcac5f3e2a0, size_t arg_0x7fcac5f3e560);
#line 65
extern void *memset(void *arg_0x7fcac5f26060, int arg_0x7fcac5f262e0, size_t arg_0x7fcac5f265a0);
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

  void (*__cleanup)(struct _reent *arg_0x7fcac5ee7170);


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


  void (**_sig_func)(int arg_0x7fcac5ee2480);




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
uint16_t TOS_NODE_ID = 1;






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
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 439
extern volatile unsigned char U1CTL __asm ("__""U1CTL");

extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");



extern volatile unsigned char U1MCTL __asm ("__""U1MCTL");

extern volatile unsigned char U1BR0 __asm ("__""U1BR0");

extern volatile unsigned char U1BR1 __asm ("__""U1BR1");

extern const volatile unsigned char U1RXBUF __asm ("__""U1RXBUF");
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
# 52 "../../../../tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4253 {
  SEEK_BEGINNING = 0
};
# 40 "../../../../tos/chips/stm25p/Stm25p.h"
typedef storage_addr_t stm25p_addr_t;
typedef storage_len_t stm25p_len_t;

enum __nesc_unnamed4254 {
  STM25P_NUM_SECTORS = 16, 
  STM25P_SECTOR_SIZE_LOG2 = 16, 
  STM25P_SECTOR_SIZE = 1L << STM25P_SECTOR_SIZE_LOG2, 
  STM25P_SECTOR_MASK = 0xffff, 
  STM25P_PAGE_SIZE_LOG2 = 8, 
  STM25P_PAGE_SIZE = 1 << STM25P_PAGE_SIZE_LOG2, 
  STM25P_PAGE_MASK = STM25P_PAGE_SIZE - 1, 
  STM25P_INVALID_ADDRESS = 0xffffffff
};




#line 54
typedef struct stm25p_volume_info_t {
  uint8_t base;
  uint8_t size;
} stm25p_volume_info_t;
# 8 "build/telosb/StorageVolumes.h"
static const stm25p_volume_info_t STM25P_VMAP[1] = { 
{ .base = 0, .size = 4 } };
# 43 "../../../../tos/types/Leds.h"
enum __nesc_unnamed4255 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "../../../../tos/chips/cc2420/CC2420.h"
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
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4256 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

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


enum __nesc_unnamed4257 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "../../../../tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4258 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4259 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "../../../../tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4260 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4261 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4262 {
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
# 59 "../../../../tos/platforms/telosa/platform_message.h"
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
# 19 "../../../../tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 39 "../../../../tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4263 {
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
typedef struct __nesc_unnamed4264 {

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
typedef struct __nesc_unnamed4265 {

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
typedef struct __nesc_unnamed4266 {

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
# 33 "../../../../tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 41 "../../../../tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4267 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4268 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4269 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4270 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 91 "../../../../tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b);
# 56 "../../../../tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4271 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4272 {
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
typedef struct __nesc_unnamed4273 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4274 {
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
typedef struct __nesc_unnamed4275 {
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
typedef struct __nesc_unnamed4276 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4277 {
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
typedef enum __nesc_unnamed4278 {

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
typedef struct __nesc_unnamed4279 {
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
typedef struct __nesc_unnamed4280 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4281 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
#line 248
#line 240
typedef struct __nesc_unnamed4282 {
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
typedef struct __nesc_unnamed4283 {
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
typedef struct __nesc_unnamed4284 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4285 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4286 {
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

enum __nesc_unnamed4287 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4288 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
enum /*RandRWAppC.LogStorageC*/LogStorageC__0____nesc_unnamed4289 {
  LogStorageC__0__LOG_ID = 0U, LogStorageC__0__VOLUME_ID = 0U
};
typedef bool Stm25pLogP__Circular__val_t;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4290 {
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
typedef TMilli /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__precision_tag;
enum /*HplStm25pSpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4291 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4292 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef bool /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__val_t;
enum /*PlatformSerialC.UartC*/Msp430Uart1C__0____nesc_unnamed4293 {
  Msp430Uart1C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0____nesc_unnamed4294 {
  Msp430Usart1C__0__CLIENT_ID = 0U
};
# 60 "../../../../tos/interfaces/Boot.nc"
static void RandRWC__Boot__booted(void );
# 110 "../../../../tos/interfaces/AMSend.nc"
static void RandRWC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void RandRWC__SerialControl__startDone(error_t error);
#line 138
static void RandRWC__SerialControl__stopDone(error_t error);
# 75 "../../../../tos/interfaces/LogRead.nc"
static void RandRWC__LogRead__readDone(
#line 70
void * buf, 




storage_len_t len, error_t error);
#line 115
static void RandRWC__LogRead__seekDone(error_t error);
# 118 "../../../../tos/interfaces/LogWrite.nc"
static void RandRWC__LogWrite__syncDone(error_t error);
#line 100
static void RandRWC__LogWrite__eraseDone(error_t error);
#line 68
static void RandRWC__LogWrite__appendDone(
#line 61
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pLogP__Sector__default__read(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 101
static void Stm25pLogP__Sector__writeDone(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 101 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);









static error_t Stm25pLogP__Sector__default__erase(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 112 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);








static void Stm25pLogP__Sector__eraseDone(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 121 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pLogP__Sector__computeCrcDone(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 144 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 91
static error_t Stm25pLogP__Sector__default__write(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 91 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pLogP__Sector__default__getNumSectors(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0);
# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pLogP__Sector__readDone(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 75 "../../../../tos/interfaces/LogRead.nc"
static void Stm25pLogP__Read__default__readDone(
# 42 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58ee020, 
# 70 "../../../../tos/interfaces/LogRead.nc"
void * buf, 




storage_len_t len, error_t error);
#line 63
static error_t Stm25pLogP__Read__read(
# 42 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58ee020, 
# 57 "../../../../tos/interfaces/LogRead.nc"
void * buf, 





storage_len_t len);
#line 115
static void Stm25pLogP__Read__default__seekDone(
# 42 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58ee020, 
# 115 "../../../../tos/interfaces/LogRead.nc"
error_t error);
# 55 "../../../../tos/interfaces/Get.nc"
static Stm25pLogP__Circular__val_t Stm25pLogP__Circular__default__get(
# 47 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d2450);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Stm25pLogP__Init__init(void );
# 118 "../../../../tos/interfaces/LogWrite.nc"
static void Stm25pLogP__Write__default__syncDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 118 "../../../../tos/interfaces/LogWrite.nc"
error_t error);
#line 93
static error_t Stm25pLogP__Write__erase(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490);
# 100 "../../../../tos/interfaces/LogWrite.nc"
static void Stm25pLogP__Write__default__eraseDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 100 "../../../../tos/interfaces/LogWrite.nc"
error_t error);
#line 68
static void Stm25pLogP__Write__default__appendDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 61 "../../../../tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
#line 54
static error_t Stm25pLogP__Write__append(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 47 "../../../../tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len);
#line 111
static error_t Stm25pLogP__Write__sync(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pLogP__ClientResource__default__release(
# 46 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d3c90);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pLogP__ClientResource__default__request(
# 46 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d3c90);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pLogP__ClientResource__granted(
# 46 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d3c90);
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
uint8_t arg_0x7fcac5753110);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fcac5753110);
# 45 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "../../../../tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
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
uint8_t arg_0x7fcac59f9450);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 58 "../../../../tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fcac59f9450);
# 57 "../../../../tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t Stm25pSectorP__SplitControl__start(void );
#line 130
static error_t Stm25pSectorP__SplitControl__stop(void );
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pSectorP__Sector__read(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 101
static void Stm25pSectorP__Sector__default__writeDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 101 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);









static error_t Stm25pSectorP__Sector__erase(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 112 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);








static void Stm25pSectorP__Sector__default__eraseDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 121 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pSectorP__Sector__default__computeCrcDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 144 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 91
static error_t Stm25pSectorP__Sector__write(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 91 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pSectorP__Sector__getNumSectors(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020);
# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pSectorP__Sector__default__readDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pSectorP__Stm25pResource__granted(
# 47 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562d8d0);
# 48 "../../../../tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t Stm25pSectorP__Volume__default__getVolumeId(
# 45 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562ebf0);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pSectorP__SpiResource__granted(void );
# 144 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
static void Stm25pSectorP__Spi__sectorEraseDone(uint8_t sector, error_t error);
#line 77
static void Stm25pSectorP__Spi__readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 125
static void Stm25pSectorP__Spi__pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 101
static void Stm25pSectorP__Spi__computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);
#line 159
static void Stm25pSectorP__Spi__bulkEraseDone(error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSectorP__ClientResource__release(
# 43 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac5632ca0);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSectorP__ClientResource__request(
# 43 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac5632ca0);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pSectorP__ClientResource__default__granted(
# 43 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac5632ca0);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void Stm25pSectorP__signalDone_task__runTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
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
uint8_t arg_0x7fcac53d1020);
# 73 "../../../../tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fcac53d1020, 
# 73 "../../../../tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fcac53d1020);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stopDone(error_t error);
# 83 "../../../../tos/lib/timer/Timer.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__fired(void );
# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__runTask(void );
# 73 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__runTask(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__start(void );









static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__stop(void );
# 82 "../../../../tos/interfaces/SpiPacket.nc"
static void Stm25pSpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "../../../../tos/interfaces/Init.nc"
static error_t Stm25pSpiP__Init__init(void );
# 47 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
static error_t Stm25pSpiP__Spi__powerDown(void );
#line 66
static error_t Stm25pSpiP__Spi__read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
#line 136
static error_t Stm25pSpiP__Spi__sectorErase(uint8_t sector);
#line 55
static error_t Stm25pSpiP__Spi__powerUp(void );
#line 114
static error_t Stm25pSpiP__Spi__pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pSpiP__SpiResource__granted(void );
#line 120
static error_t Stm25pSpiP__ClientResource__release(void );
#line 88
static error_t Stm25pSpiP__ClientResource__request(void );
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5251110);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5251110);
# 70 "../../../../tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524e060, 
# 59 "../../../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524e060, 
# 75 "../../../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "../../../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524c110);
# 45 "../../../../tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524ee70);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524ee70);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524ee70);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5257e20);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5257e20);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5257e20);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
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
#line 99
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__set(void );




static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__set(void );
#line 99
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );




static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "../../../../tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );
#line 100
static void LedsP__Leds__led2Toggle(void );
#line 56
static void LedsP__Leds__led0On(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600);
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e794e0);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__makeOutput(void );
#line 40
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__set(void );
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__clr(void );




static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__set(void );
# 48 "../../../../tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t /*RandRWAppC.LogStorageC.BinderP*/Stm25pBinderP__0__Volume__getVolumeId(void );
# 55 "../../../../tos/interfaces/Get.nc"
static /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__val_t /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__get(void );
# 100 "../../../../tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d34b10, 
# 80 "../../../../tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d34b10, 
# 132 "../../../../tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 110
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d34b10, 
# 103 "../../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 126 "../../../../tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d31d10, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "../../../../tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "../../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf3640, 
# 67 "../../../../tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf3640, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf4960, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10, 
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10);
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10, 
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "../../../../tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
# 44 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b41ba0);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
# 44 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b41ba0);
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
# 49 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3b020);
# 48 "../../../../tos/interfaces/UartStream.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 44 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len);
#line 79
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 79 "../../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 95 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 53 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "../../../../tos/lib/timer/Counter.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b42930);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b42930);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b42930);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
# 51 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b36820, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
# 51 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b36820);
# 143 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart1P__Usart__enableUartRx(void );
#line 123
static void HplMsp430Usart1P__Usart__enableUart(void );
#line 97
static void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart1P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart1P__Usart__setUmctl(uint8_t umctl);
#line 133
static void HplMsp430Usart1P__Usart__enableUartTx(void );
#line 148
static void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 182
static void HplMsp430Usart1P__Usart__enableIntr(void );
#line 207
static void HplMsp430Usart1P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart1P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart1P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart1P__Usart__disableUart(void );
#line 174
static void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 158
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 138
static void HplMsp430Usart1P__Usart__disableUartTx(void );
# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t HplMsp430Usart1P__AsyncStdControl__start(void );









static error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600);
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );
# 62 "../../../../tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 53 "../../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 61 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__default__immediateRequested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__release(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__immediateRequest(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__default__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__isOwner(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__userId(void );
# 75 "../../../../tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void TelosSerialP__Resource__granted(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t TelosSerialP__StdControl__start(void );









static error_t TelosSerialP__StdControl__stop(void );
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 80 "../../../../tos/interfaces/AMSend.nc"
static error_t RandRWC__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

RandRWC__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t RandRWC__SerialControl__start(void );
# 72 "../../../../tos/interfaces/Leds.nc"
static void RandRWC__Leds__led1On(void );
#line 100
static void RandRWC__Leds__led2Toggle(void );
#line 56
static void RandRWC__Leds__led0On(void );
# 63 "../../../../tos/interfaces/LogRead.nc"
static error_t RandRWC__LogRead__read(
#line 57
void * buf, 





storage_len_t len);
# 93 "../../../../tos/interfaces/LogWrite.nc"
static error_t RandRWC__LogWrite__erase(void );
#line 54
static error_t RandRWC__LogWrite__append(
#line 47
void * buf, 






storage_len_t len);
#line 111
static error_t RandRWC__LogWrite__sync(void );
# 27 "RandRWC.nc"
enum RandRWC____nesc_unnamed4295 {
  RandRWC__SIZE = 1024L * 256, 
  RandRWC__NWRITES = RandRWC__SIZE / 512
};

uint16_t RandRWC__shiftReg;
uint16_t RandRWC__initSeed;
uint16_t RandRWC__mask;

static void RandRWC__done(void );


static uint16_t RandRWC__rand(void );
#line 55
static void RandRWC__resetSeed(void );





uint8_t RandRWC__data[512];
#line 61
uint8_t RandRWC__rdata[512];
int RandRWC__count;
#line 62
int RandRWC__testCount;
uint32_t RandRWC__len;
uint16_t RandRWC__offset;
message_t RandRWC__reportMsg;

static void RandRWC__report(error_t e);
#line 79
static inline void RandRWC__AMSend__sendDone(message_t *msg, error_t error);




static inline void RandRWC__fail(error_t e);




static inline void RandRWC__success(void );




static bool RandRWC__scheck(error_t r) __attribute((noinline)) ;





static inline bool RandRWC__bcheck(bool b);







static void RandRWC__setParameters(void );








static void RandRWC__nextRead(void );








static void RandRWC__LogRead__readDone(void *buf, storage_len_t rlen, error_t result) __attribute((noinline)) ;






static inline void RandRWC__LogRead__seekDone(error_t error);


static void RandRWC__nextWrite(void );
#line 154
static inline void RandRWC__LogWrite__appendDone(void *buf, storage_len_t y, bool recordsLost, error_t result);






static inline void RandRWC__LogWrite__eraseDone(error_t result);




static inline void RandRWC__LogWrite__syncDone(error_t result);




static inline void RandRWC__Boot__booted(void );









static inline void RandRWC__SerialControl__stopDone(error_t e);

static inline void RandRWC__SerialControl__startDone(error_t e);










enum RandRWC____nesc_unnamed4296 {
#line 194
  RandRWC__A_ERASE = 1, RandRWC__A_READ, RandRWC__A_WRITE
};
static void RandRWC__doAction(int act);
#line 215
const uint8_t RandRWC__actions[12] = { 
RandRWC__A_ERASE, 
RandRWC__A_READ, 
RandRWC__A_WRITE, 
RandRWC__A_READ, 
RandRWC__A_WRITE, 
RandRWC__A_WRITE, 
RandRWC__A_WRITE, 
RandRWC__A_READ, 
RandRWC__A_ERASE, 
RandRWC__A_READ, 
RandRWC__A_WRITE, 
RandRWC__A_WRITE };


static void RandRWC__done(void );
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static error_t Stm25pLogP__Sector__read(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 112
static error_t Stm25pLogP__Sector__erase(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 112 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors);
#line 91
static error_t Stm25pLogP__Sector__write(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0, 
# 91 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 56
static uint8_t Stm25pLogP__Sector__getNumSectors(
# 45 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d9ae0);
# 75 "../../../../tos/interfaces/LogRead.nc"
static void Stm25pLogP__Read__readDone(
# 42 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58ee020, 
# 70 "../../../../tos/interfaces/LogRead.nc"
void * buf, 




storage_len_t len, error_t error);
#line 115
static void Stm25pLogP__Read__seekDone(
# 42 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58ee020, 
# 115 "../../../../tos/interfaces/LogRead.nc"
error_t error);
# 55 "../../../../tos/interfaces/Get.nc"
static Stm25pLogP__Circular__val_t Stm25pLogP__Circular__get(
# 47 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d2450);
# 118 "../../../../tos/interfaces/LogWrite.nc"
static void Stm25pLogP__Write__syncDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 118 "../../../../tos/interfaces/LogWrite.nc"
error_t error);
#line 100
static void Stm25pLogP__Write__eraseDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 100 "../../../../tos/interfaces/LogWrite.nc"
error_t error);
#line 68
static void Stm25pLogP__Write__appendDone(
# 43 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58eb490, 
# 61 "../../../../tos/interfaces/LogWrite.nc"
void * buf, 






storage_len_t len, bool recordsLost, 
error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pLogP__ClientResource__release(
# 46 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d3c90);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pLogP__ClientResource__request(
# 46 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
uint8_t arg_0x7fcac58d3c90);







enum Stm25pLogP____nesc_unnamed4297 {
  Stm25pLogP__NUM_LOGS = 1U, 
  Stm25pLogP__BLOCK_SIZE = 4096, 
  Stm25pLogP__BLOCK_SIZE_LOG2 = 12, 
  Stm25pLogP__BLOCK_MASK = Stm25pLogP__BLOCK_SIZE - 1, 
  Stm25pLogP__BLOCKS_PER_SECTOR = STM25P_SECTOR_SIZE / Stm25pLogP__BLOCK_SIZE, 
  Stm25pLogP__MAX_RECORD_SIZE = 254, 
  Stm25pLogP__INVALID_HEADER = 0xff
};








#line 64
typedef enum Stm25pLogP____nesc_unnamed4298 {
  Stm25pLogP__S_IDLE, 
  Stm25pLogP__S_READ, 
  Stm25pLogP__S_SEEK, 
  Stm25pLogP__S_ERASE, 
  Stm25pLogP__S_APPEND, 
  Stm25pLogP__S_SYNC
} Stm25pLogP__stm25p_log_req_t;






#line 73
typedef struct Stm25pLogP__stm25p_log_state_t {
  storage_cookie_t cookie;
  void *buf;
  uint8_t len;
  Stm25pLogP__stm25p_log_req_t req;
} Stm25pLogP__stm25p_log_state_t;





#line 80
typedef struct Stm25pLogP__stm25p_log_info_t {
  stm25p_addr_t read_addr;
  stm25p_addr_t remaining;
  stm25p_addr_t write_addr;
} Stm25pLogP__stm25p_log_info_t;

Stm25pLogP__stm25p_log_state_t Stm25pLogP__m_log_state[Stm25pLogP__NUM_LOGS];
Stm25pLogP__stm25p_log_state_t Stm25pLogP__m_req;
Stm25pLogP__stm25p_log_info_t Stm25pLogP__m_log_info[Stm25pLogP__NUM_LOGS];
stm25p_addr_t Stm25pLogP__m_addr;
bool Stm25pLogP__m_records_lost;
uint8_t Stm25pLogP__m_header;
uint8_t Stm25pLogP__m_len;







#line 94
typedef enum Stm25pLogP____nesc_unnamed4299 {
  Stm25pLogP__S_SEARCH_BLOCKS, 
  Stm25pLogP__S_SEARCH_RECORDS, 
  Stm25pLogP__S_SEARCH_SEEK, 
  Stm25pLogP__S_HEADER, 
  Stm25pLogP__S_DATA
} Stm25pLogP__stm25p_log_rw_state_t;

Stm25pLogP__stm25p_log_rw_state_t Stm25pLogP__m_rw_state;

static error_t Stm25pLogP__newRequest(uint8_t client);
static void Stm25pLogP__continueReadOp(uint8_t client);
static void Stm25pLogP__continueAppendOp(uint8_t client);
static void Stm25pLogP__signalDone(uint8_t id, error_t error);

static inline error_t Stm25pLogP__Init__init(void );








static inline error_t Stm25pLogP__Read__read(uint8_t id, void *buf, storage_len_t len);
#line 152
static inline error_t Stm25pLogP__Write__erase(uint8_t id);




static inline error_t Stm25pLogP__Write__append(uint8_t id, void *buf, storage_len_t len);
#line 185
static inline error_t Stm25pLogP__Write__sync(uint8_t id);




static error_t Stm25pLogP__newRequest(uint8_t client);
#line 202
static uint8_t Stm25pLogP__calcSector(uint8_t client, stm25p_addr_t addr);




static stm25p_addr_t Stm25pLogP__calcAddr(uint8_t client, stm25p_addr_t addr);






static void Stm25pLogP__ClientResource__granted(uint8_t id);
#line 272
static void Stm25pLogP__continueReadOp(uint8_t client);
#line 313
static inline void Stm25pLogP__Sector__readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 418
static void Stm25pLogP__continueAppendOp(uint8_t client);
#line 446
static inline void Stm25pLogP__Sector__eraseDone(uint8_t id, uint8_t sector, 
uint8_t num_sectors, 
error_t error);
#line 470
static inline void Stm25pLogP__Sector__writeDone(uint8_t id, storage_addr_t addr, 
uint8_t *buf, 
storage_len_t len, 
error_t error);
#line 485
static void Stm25pLogP__signalDone(uint8_t id, error_t error);
#line 514
static inline void Stm25pLogP__Sector__computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error);

static inline void Stm25pLogP__Read__default__readDone(uint8_t id, void *data, storage_len_t len, error_t error);
static inline void Stm25pLogP__Read__default__seekDone(uint8_t id, error_t error);
static inline void Stm25pLogP__Write__default__eraseDone(uint8_t id, error_t error);
static inline void Stm25pLogP__Write__default__appendDone(uint8_t id, void *data, storage_len_t len, bool recordsLost, error_t error);
static inline void Stm25pLogP__Write__default__syncDone(uint8_t id, error_t error);


static inline uint8_t Stm25pLogP__Sector__default__getNumSectors(uint8_t id);
static inline error_t Stm25pLogP__Sector__default__read(uint8_t id, storage_addr_t addr, uint8_t *buf, storage_len_t len);
static inline error_t Stm25pLogP__Sector__default__write(uint8_t id, storage_addr_t addr, uint8_t *buf, storage_len_t len);
static inline error_t Stm25pLogP__Sector__default__erase(uint8_t id, uint8_t sector, uint8_t num_sectors);

static inline error_t Stm25pLogP__ClientResource__default__request(uint8_t id);
static inline error_t Stm25pLogP__ClientResource__default__release(uint8_t id);
static inline bool Stm25pLogP__Circular__default__get(uint8_t id);
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

enum Msp430ClockP____nesc_unnamed4300 {

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
uint8_t arg_0x7fcac5753110);
# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "../../../../tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "../../../../tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x7fcac5753110);
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
# 86 "../../../../tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
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
uint8_t arg_0x7fcac59f9450);
# 76 "../../../../tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 63 "../../../../tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4301 {

  SchedulerBasicP__NUM_TASKS = 15U, 
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
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void Stm25pSectorP__SplitControl__startDone(error_t error);
#line 138
static void Stm25pSectorP__SplitControl__stopDone(error_t error);
# 101 "../../../../tos/chips/stm25p/Stm25pSector.nc"
static void Stm25pSectorP__Sector__writeDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 101 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
#line 121
static void Stm25pSectorP__Sector__eraseDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 121 "../../../../tos/chips/stm25p/Stm25pSector.nc"
uint8_t sector, uint8_t num_sectors, error_t error);
#line 144
static void Stm25pSectorP__Sector__computeCrcDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 144 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, stm25p_len_t len, 
uint16_t crc, error_t error);
#line 78
static void Stm25pSectorP__Sector__readDone(
# 44 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562f020, 
# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, 
error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSectorP__Stm25pResource__release(
# 47 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562d8d0);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSectorP__Stm25pResource__request(
# 47 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562d8d0);
# 48 "../../../../tos/chips/stm25p/Stm25pVolume.nc"
static volume_id_t Stm25pSectorP__Volume__getVolumeId(
# 45 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac562ebf0);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSectorP__SpiResource__release(void );
#line 88
static error_t Stm25pSectorP__SpiResource__request(void );
# 47 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
static error_t Stm25pSectorP__Spi__powerDown(void );
#line 66
static error_t Stm25pSectorP__Spi__read(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
#line 136
static error_t Stm25pSectorP__Spi__sectorErase(uint8_t sector);
#line 55
static error_t Stm25pSectorP__Spi__powerUp(void );
#line 114
static error_t Stm25pSectorP__Spi__pageProgram(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);
# 102 "../../../../tos/interfaces/Resource.nc"
static void Stm25pSectorP__ClientResource__granted(
# 43 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
uint8_t arg_0x7fcac5632ca0);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t Stm25pSectorP__signalDone_task__postTask(void );
# 86 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
enum Stm25pSectorP____nesc_unnamed4302 {
#line 86
  Stm25pSectorP__signalDone_task = 0U
};
#line 86
typedef int Stm25pSectorP____nesc_sillytask_signalDone_task[Stm25pSectorP__signalDone_task];
#line 56
enum Stm25pSectorP____nesc_unnamed4303 {
  Stm25pSectorP__NO_CLIENT = 0xff
};







#line 60
typedef enum Stm25pSectorP____nesc_unnamed4304 {
  Stm25pSectorP__S_IDLE, 
  Stm25pSectorP__S_READ, 
  Stm25pSectorP__S_WRITE, 
  Stm25pSectorP__S_ERASE, 
  Stm25pSectorP__S_CRC
} Stm25pSectorP__stm25p_sector_state_t;
Stm25pSectorP__stm25p_sector_state_t Stm25pSectorP__m_state;





#line 69
typedef enum Stm25pSectorP____nesc_unnamed4305 {
  Stm25pSectorP__S_NONE, 
  Stm25pSectorP__S_START, 
  Stm25pSectorP__S_STOP
} Stm25pSectorP__stm25p_power_state_t;
Stm25pSectorP__stm25p_power_state_t Stm25pSectorP__m_power_state;

uint8_t Stm25pSectorP__m_client;
stm25p_addr_t Stm25pSectorP__m_addr;
stm25p_len_t Stm25pSectorP__m_len;
stm25p_len_t Stm25pSectorP__m_cur_len;
uint8_t *Stm25pSectorP__m_buf;
error_t Stm25pSectorP__m_error;
uint16_t Stm25pSectorP__m_crc;


static inline void Stm25pSectorP__signalDone(error_t error);


static error_t Stm25pSectorP__SplitControl__start(void );






static inline error_t Stm25pSectorP__SplitControl__stop(void );






static inline error_t Stm25pSectorP__ClientResource__request(uint8_t id);







static inline error_t Stm25pSectorP__ClientResource__release(uint8_t id);










static inline void Stm25pSectorP__Stm25pResource__granted(uint8_t id);




static inline uint8_t Stm25pSectorP__getVolumeId(uint8_t client);



static inline void Stm25pSectorP__SpiResource__granted(void );
#line 153
static stm25p_addr_t Stm25pSectorP__physicalAddr(uint8_t id, stm25p_addr_t addr);




static stm25p_len_t Stm25pSectorP__calcWriteLen(stm25p_addr_t addr);








static inline uint8_t Stm25pSectorP__Sector__getNumSectors(uint8_t id);



static error_t Stm25pSectorP__Sector__read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len);










static inline void Stm25pSectorP__Spi__readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);



static error_t Stm25pSectorP__Sector__write(uint8_t id, stm25p_addr_t addr, 
uint8_t *buf, 
stm25p_len_t len);
#line 202
static inline void Stm25pSectorP__Spi__pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);









static error_t Stm25pSectorP__Sector__erase(uint8_t id, uint8_t sector, 
uint8_t num_sectors);
#line 226
static inline void Stm25pSectorP__Spi__sectorEraseDone(uint8_t sector, error_t error);
#line 246
static inline void Stm25pSectorP__Spi__computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);




static inline void Stm25pSectorP__Spi__bulkEraseDone(error_t error);



static inline void Stm25pSectorP__signalDone(error_t error);




static inline void Stm25pSectorP__signalDone_task__runTask(void );
#line 284
static inline void Stm25pSectorP__ClientResource__default__granted(uint8_t id);
static inline void Stm25pSectorP__Sector__default__readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error);
static inline void Stm25pSectorP__Sector__default__writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error);
static inline void Stm25pSectorP__Sector__default__eraseDone(uint8_t id, uint8_t sector, uint8_t num_sectors, error_t error);
static inline void Stm25pSectorP__Sector__default__computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error);
static inline volume_id_t Stm25pSectorP__Volume__default__getVolumeId(uint8_t id);
# 49 "../../../../tos/system/FcfsResourceQueueC.nc"
enum /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4306 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "../../../../tos/system/ArbiterP.nc"
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4307 {
#line 75
  ArbiterP__0__grantedTask = 1U
};
#line 75
typedef int /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4308 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4309 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4310 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 204
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
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

enum /*CounterMilli32C.Transform*/TransformCounterC__0____nesc_unnamed4311 {

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

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__0____nesc_unnamed4312 {

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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4313 {
#line 74
  AlarmToTimerC__0__fired = 2U
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
uint8_t arg_0x7fcac53d1020);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4314 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 3U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4315 {

  VirtualizeTimerC__0__NUM_TIMERS = 1U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4316 {

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
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "../../../../tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 104 "../../../../tos/interfaces/SplitControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__start(void );
#line 130
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stop(void );
# 73 "../../../../tos/lib/timer/Timer.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__startOneShot(uint32_t dt);




static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__stop(void );
# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__postTask(void );
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__release(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__postTask(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__start(void );









static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__stop(void );
# 79 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
enum /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0____nesc_unnamed4317 {
#line 79
  DeferredPowerManagerP__0__startTask = 4U
};
#line 79
typedef int /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0____nesc_sillytask_startTask[/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask];







enum /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0____nesc_unnamed4318 {
#line 87
  DeferredPowerManagerP__0__timerTask = 5U
};
#line 87
typedef int /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0____nesc_sillytask_timerTask[/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask];
#line 75
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopping = FALSE;
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__requested = FALSE;
bool /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopTimer = FALSE;

static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__runTask(void );







static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__runTask(void );



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__requested(void );










static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__start(void );







static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__startDone(error_t error);



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__granted(void );



static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__fired(void );
#line 130
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stopDone(error_t error);










static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__stop(void );







static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 70 "../../../../tos/interfaces/SpiPacket.nc"
static error_t Stm25pSpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 45 "../../../../tos/interfaces/SpiByte.nc"
static uint8_t Stm25pSpiP__SpiByte__write(uint8_t tx);
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void Stm25pSpiP__CSN__makeOutput(void );
#line 40
static void Stm25pSpiP__CSN__set(void );
static void Stm25pSpiP__CSN__clr(void );
# 144 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
static void Stm25pSpiP__Spi__sectorEraseDone(uint8_t sector, error_t error);
#line 77
static void Stm25pSpiP__Spi__readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 125
static void Stm25pSpiP__Spi__pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error);
#line 101
static void Stm25pSpiP__Spi__computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error);
#line 159
static void Stm25pSpiP__Spi__bulkEraseDone(error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t Stm25pSpiP__SpiResource__release(void );
#line 88
static error_t Stm25pSpiP__SpiResource__request(void );
#line 102
static void Stm25pSpiP__ClientResource__granted(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void Stm25pSpiP__Hold__makeOutput(void );
#line 40
static void Stm25pSpiP__Hold__set(void );
# 56 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
enum Stm25pSpiP____nesc_unnamed4319 {
  Stm25pSpiP__CRC_BUF_SIZE = 16
};










#line 60
typedef enum Stm25pSpiP____nesc_unnamed4320 {
  Stm25pSpiP__S_READ = 0x03, 
  Stm25pSpiP__S_PAGE_PROGRAM = 0x02, 
  Stm25pSpiP__S_SECTOR_ERASE = 0xd8, 
  Stm25pSpiP__S_BULK_ERASE = 0xc7, 
  Stm25pSpiP__S_WRITE_ENABLE = 0x06, 
  Stm25pSpiP__S_POWER_ON = 0xab, 
  Stm25pSpiP__S_DEEP_SLEEP = 0xb9, 
  Stm25pSpiP__S_READ_STATUS = 0x05
} Stm25pSpiP__stm25p_cmd_t;

enum Stm25pSpiP____nesc_unnamed4321 {

  Stm25pSpiP__STM25PON = 0U
};

uint8_t Stm25pSpiP__m_cmd[4];

bool Stm25pSpiP__m_is_writing = FALSE;
bool Stm25pSpiP__m_computing_crc = FALSE;
bool Stm25pSpiP__m_init = FALSE;

stm25p_addr_t Stm25pSpiP__m_addr;
uint8_t *Stm25pSpiP__m_buf;
stm25p_len_t Stm25pSpiP__m_len;
stm25p_addr_t Stm25pSpiP__m_cur_addr;
stm25p_len_t Stm25pSpiP__m_cur_len;
uint8_t Stm25pSpiP__m_crc_buf[Stm25pSpiP__CRC_BUF_SIZE];
uint16_t Stm25pSpiP__m_crc;

static error_t Stm25pSpiP__newRequest(bool write, stm25p_len_t cmd_len);
static void Stm25pSpiP__signalDone(error_t error);

static uint8_t Stm25pSpiP__sendCmd(uint8_t cmd, uint8_t len);
#line 107
static inline error_t Stm25pSpiP__Init__init(void );









static inline error_t Stm25pSpiP__ClientResource__request(void );







static inline error_t Stm25pSpiP__ClientResource__release(void );







static inline stm25p_len_t Stm25pSpiP__calcReadLen(void );



static inline error_t Stm25pSpiP__Spi__powerDown(void );




static inline error_t Stm25pSpiP__Spi__powerUp(void );




static inline error_t Stm25pSpiP__Spi__read(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);
#line 163
static error_t Stm25pSpiP__Spi__pageProgram(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len);







static error_t Stm25pSpiP__Spi__sectorErase(uint8_t sector);










static error_t Stm25pSpiP__newRequest(bool write, stm25p_len_t cmd_len);










static void Stm25pSpiP__releaseAndRequest(void );




static void Stm25pSpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
#line 243
static inline void Stm25pSpiP__SpiResource__granted(void );
#line 257
static void Stm25pSpiP__signalDone(error_t error);
# 82 "../../../../tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524e060, 
# 75 "../../../../tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "../../../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524c110);
# 180 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524ee70);
# 88 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac524ee70);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x7fcac5257e20);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4322 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 6U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4323 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );






static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);







static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 173
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);

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
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 99
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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








static inline void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
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
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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
#line 65
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
#line 56
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__set(void );
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 46 "../../../../tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );
static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "../../../../tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );
#line 89
static inline void LedsP__Leds__led1On(void );
#line 114
static inline void LedsP__Leds__led2Toggle(void );
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
# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
#line 85
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600);
# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e794e0);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "../../../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4324 {
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
# 53 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 79 "../../../../tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "../../../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4325 {
#line 75
  ArbiterP__1__grantedTask = 7U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4326 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4327 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4328 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;



static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);



static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );





static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "../../../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__set(void );




static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__clr(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__set(void );
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__clr(void );




static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__makeOutput(void );
# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__set(void );
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__set(void );





static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 45 "../../../../tos/chips/stm25p/Stm25pBinderP.nc"
static inline volume_id_t /*RandRWAppC.LogStorageC.BinderP*/Stm25pBinderP__0__Volume__getVolumeId(void );
# 45 "../../../../tos/chips/stm25p/Stm25pLogConfigP.nc"
static inline bool /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__get(void );
# 75 "../../../../tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "../../../../tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d34b10, 
# 103 "../../../../tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7fcac4d31d10, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "../../../../tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "../../../../tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "../../../../tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "../../../../tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4329 {
#line 191
  SerialP__RunTx = 8U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4330 {
#line 322
  SerialP__startDoneTask = 9U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4331 {
#line 332
  SerialP__stopDoneTask = 10U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4332 {
#line 341
  SerialP__defaultSerialFlushTask = 11U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4333 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4334 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4335 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4336 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4337 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4338 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4339 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4340 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "../../../../tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf3640, 
# 96 "../../../../tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "../../../../tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf4960, 
# 71 "../../../../tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10, 
# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10);
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "../../../../tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7fcac4bf2b10, 
# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "../../../../tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4341 {
#line 158
  SerialDispatcherP__0__signalSendDone = 12U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4342 {
#line 275
  SerialDispatcherP__0__receiveTask = 13U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4343 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4344 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4345 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "../../../../tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "../../../../tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4346 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
# 49 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3b020);
# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset);
#line 179
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void );


static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void );
#line 224
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data);
#line 128
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void );
#line 174
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config);
# 79 "../../../../tos/interfaces/UartStream.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 79 "../../../../tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 95 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(
# 45 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b40920, 
# 53 "../../../../tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 97 "../../../../tos/interfaces/Resource.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 128 "../../../../tos/interfaces/Resource.nc"
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(
# 48 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b3ecb0);
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(
# 43 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
uint8_t arg_0x7fcac4b42930);
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len;
#line 59
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;
#line 60
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos;
#line 61
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
#line 77
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);








static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id);
#line 134
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
#line 147
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
#line 162
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id);
#line 208
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart1P__Interrupts__txDone(void );
# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
#line 92
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
#line 99
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
# 87 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0006)))  ;




void sig_UART1TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0004)))  ;



static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void );



static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset);
#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void );







static void HplMsp430Usart1P__Usart__disableUart(void );








static inline void HplMsp430Usart1P__Usart__enableUartTx(void );




static inline void HplMsp430Usart1P__Usart__disableUartTx(void );





static inline void HplMsp430Usart1P__Usart__enableUartRx(void );




static inline void HplMsp430Usart1P__Usart__disableUartRx(void );
#line 251
static void HplMsp430Usart1P__Usart__disableSpi(void );
#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void );
#line 359
static inline void HplMsp430Usart1P__Usart__disableIntr(void );
#line 377
static inline void HplMsp430Usart1P__Usart__enableIntr(void );






static inline void HplMsp430Usart1P__Usart__tx(uint8_t data);
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void );
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600, 
# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(
# 39 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x7fcac4e7a600);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "../../../../tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2____nesc_unnamed4347 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[1U];
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 61 "../../../../tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__immediateRequested(
# 55 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557fcf0);
# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__configure(
# 60 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac557c240);
# 53 "../../../../tos/interfaces/ResourceQueue.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__dequeue(void );
# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__immediateRequested(void );
# 102 "../../../../tos/interfaces/Resource.nc"
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__granted(
# 54 "../../../../tos/system/ArbiterP.nc"
uint8_t arg_0x7fcac5580a50);
# 67 "../../../../tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__postTask(void );
# 75 "../../../../tos/system/ArbiterP.nc"
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2____nesc_unnamed4348 {
#line 75
  ArbiterP__2__grantedTask = 14U
};
#line 75
typedef int /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2____nesc_sillytask_grantedTask[/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask];
#line 67
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2____nesc_unnamed4349 {
#line 67
  ArbiterP__2__RES_CONTROLLED, ArbiterP__2__RES_GRANTING, ArbiterP__2__RES_IMM_GRANTING, ArbiterP__2__RES_BUSY
};
#line 68
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2____nesc_unnamed4350 {
#line 68
  ArbiterP__2__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2____nesc_unnamed4351 {
#line 69
  ArbiterP__2__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_CONTROLLED;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__default_owner_id;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__reqResId;
#line 93
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__release(uint8_t id);
#line 133
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 74 "../../../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 120 "../../../../tos/interfaces/Resource.nc"
static error_t TelosSerialP__Resource__release(void );
#line 97
static error_t TelosSerialP__Resource__immediateRequest(void );
# 8 "../../../../tos/platforms/telosa/TelosSerialP.nc"
msp430_uart_union_config_t TelosSerialP__msp430_uart_telos_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 1, .urxwie = 0, .utxe = 1, .urxe = 1 } };

static inline error_t TelosSerialP__StdControl__start(void );


static inline error_t TelosSerialP__StdControl__stop(void );



static inline void TelosSerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
# 51 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
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

# 48 "../../../../tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
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
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x7fcac5753110){
#line 39
  switch (arg_0x7fcac5753110) {
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
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x7fcac5753110);
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
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4352 {
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

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4353 {
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

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "../../../../tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4354 {
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

# 208 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void )
#line 208
{
}

# 82 "../../../../tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow();
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
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4355 {
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
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4356 {
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
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4357 {
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
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4358 {
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
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4359 {
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
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4360 {
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
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4361 {
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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

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
# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

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
# 17 "../../../../tos/platforms/telosa/TelosSerialP.nc"
static inline void TelosSerialP__Resource__granted(void )
#line 17
{
}

# 218 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
#line 218
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x7fcac4b42930){
#line 102
  switch (arg_0x7fcac4b42930) {
#line 102
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 102
      TelosSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x7fcac4b42930);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 101 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
#line 101
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(id);
}

# 202 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__granted(uint8_t arg_0x7fcac5580a50){
#line 102
  switch (arg_0x7fcac5580a50) {
#line 102
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 102
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__default__granted(arg_0x7fcac5580a50);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__configure(uint8_t arg_0x7fcac557c240){
#line 59
  switch (arg_0x7fcac557c240) {
#line 59
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 59
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(arg_0x7fcac557c240);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__reqResId;
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId);
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__granted(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId);
}

# 19 "../../../../tos/platforms/telosa/TelosSerialP.nc"
static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void )
#line 19
{
  return &TelosSerialP__msp430_uart_telos_config;
}

# 214 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
#line 214
{
  return &msp430_uart_default_config;
}

# 39 "../../../../tos/chips/msp430/usart/Msp430UartConfigure.nc"
inline static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x7fcac4b3b020){
#line 39
  union __nesc_unnamed4281 *__nesc_result;
#line 39

#line 39
  switch (arg_0x7fcac4b3b020) {
#line 39
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 39
      __nesc_result = TelosSerialP__Msp430UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x7fcac4b3b020);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 359 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableIntr(void )
#line 359
{
  HplMsp430Usart1P__IE2 &= ~(0x20 | 0x10);
}

#line 347
static inline void HplMsp430Usart1P__Usart__clrIntr(void )
#line 347
{
  HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
}

#line 159
static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset)
#line 159
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
#line 163
    U1CTL &= ~0x01;
    }
}

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
#line 92
}
#line 92
# 220 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartTx(void )
#line 220
{
  HplMsp430Usart1P__UTXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x20;
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
#line 99
}
#line 99
# 236 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartRx(void )
#line 236
{
  HplMsp430Usart1P__ME2 &= ~0x10;
  HplMsp430Usart1P__URXD__selectIOFunc();
}

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
#line 92
}
#line 92
# 231 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableUartRx(void )
#line 231
{
  HplMsp430Usart1P__URXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 0x10;
}

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
#line 99
}
#line 99
# 225 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__disableUartTx(void )
#line 225
{
  HplMsp430Usart1P__ME2 &= ~0x20;
  HplMsp430Usart1P__UTXD__selectIOFunc();
}

#line 203
static inline void HplMsp430Usart1P__Usart__enableUart(void )
#line 203
{
  /* atomic removed: atomic calls only */
#line 204
  {
    HplMsp430Usart1P__UTXD__selectModuleFunc();
    HplMsp430Usart1P__URXD__selectModuleFunc();
  }
  HplMsp430Usart1P__ME2 |= 0x20 | 0x10;
}

#line 151
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
#line 151
{
  U1MCTL = control;
}

#line 140
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
#line 140
{
  /* atomic removed: atomic calls only */
#line 141
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

#line 283
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config)
#line 283
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P__U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P__U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P__Usart__setUmctl(config->uartRegisters.umctl);
}

static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config)
#line 293
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 295
    {
      HplMsp430Usart1P__Usart__resetUsart(TRUE);
      HplMsp430Usart1P__Usart__disableSpi();
      HplMsp430Usart1P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P__Usart__enableUart();
        }
      else {
#line 301
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P__Usart__disableUartTx();
            HplMsp430Usart1P__Usart__enableUartRx();
          }
        else {
#line 304
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P__Usart__disableUartRx();
              HplMsp430Usart1P__Usart__enableUartTx();
            }
          else 
#line 307
            {
              HplMsp430Usart1P__Usart__disableUart();
            }
          }
        }
#line 310
      HplMsp430Usart1P__Usart__resetUsart(FALSE);
      HplMsp430Usart1P__Usart__clrIntr();
      HplMsp430Usart1P__Usart__disableIntr();
    }
#line 313
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

# 174 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
#line 174
  HplMsp430Usart1P__Usart__setModeUart(config);
#line 174
}
#line 174
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
#line 99
}
#line 99
# 377 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__enableIntr(void )
#line 377
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 378
    {
      HplMsp430Usart1P__IFG2 &= ~(0x20 | 0x10);
      HplMsp430Usart1P__IE2 |= 0x20 | 0x10;
    }
#line 381
    __nesc_atomic_end(__nesc_atomic); }
}

# 182 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
#line 182
  HplMsp430Usart1P__Usart__enableIntr();
#line 182
}
#line 182
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 60 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

#line 172
static inline am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

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
inline static void RandRWC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 79 "RandRWC.nc"
static inline void RandRWC__AMSend__sendDone(message_t *msg, error_t error)
#line 79
{
  if (error != SUCCESS) {
    RandRWC__Leds__led0On();
    }
}

# 105 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result)
#line 105
{
  return;
}

# 110 "../../../../tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x7fcac4d34b10, message_t * msg, error_t error){
#line 110
  switch (arg_0x7fcac4d34b10) {
#line 110
    case 139:
#line 110
      RandRWC__AMSend__sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x7fcac4d34b10, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 101 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "../../../../tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x7fcac4bf3640, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fcac4bf3640) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x7fcac4bf3640, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

#line 212
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 109 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "../../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x7fcac4d31d10, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x7fcac4d31d10, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "../../../../tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x7fcac4bf4960, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fcac4bf4960) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x7fcac4bf4960, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x7fcac4bf2b10, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x7fcac4bf2b10) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x7fcac4bf2b10, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 51 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x7fcac4bf2b10){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x7fcac4bf2b10) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x7fcac4bf2b10);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 275 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 181 "RandRWC.nc"
static inline void RandRWC__SerialControl__stopDone(error_t e)
#line 181
{
}

# 138 "../../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  RandRWC__SerialControl__stopDone(error);
#line 138
}
#line 138
# 109 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void )
#line 109
{
  HplMsp430Usart1P__Usart__disableSpi();
  HplMsp430Usart1P__Usart__disableUart();
  return SUCCESS;
}

# 105 "../../../../tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "../../../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
inline static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "../../../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 128 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void ){
#line 128
  HplMsp430Usart1P__Usart__disableUart();
#line 128
}
#line 128
#line 179
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void ){
#line 179
  HplMsp430Usart1P__Usart__disableIntr();
#line 179
}
#line 179
#line 97
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart1P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 92 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 92
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart();
}

# 218 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(uint8_t arg_0x7fcac557c240){
#line 65
  switch (arg_0x7fcac557c240) {
#line 65
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 65
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__default__unconfigure(arg_0x7fcac557c240);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead != /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
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
      /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_BUSY && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId == id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__reqResId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Queue__dequeue();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__NO_RES;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_GRANTING;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__postTask();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__default_owner_id;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_CONTROLLED;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 213 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
#line 213
{
#line 213
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x7fcac4b3ecb0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fcac4b3ecb0) {
#line 120
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x7fcac4b3ecb0);
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
# 210 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 210
{
#line 210
  return FALSE;
}

# 128 "../../../../tos/interfaces/Resource.nc"
inline static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x7fcac4b3ecb0){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x7fcac4b3ecb0) {
#line 128
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x7fcac4b3ecb0);
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
# 77 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
#line 77
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 80
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
#line 82
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(id);
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 13 "../../../../tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__stop(void )
#line 13
{
  TelosSerialP__Resource__release();
  return SUCCESS;
}

# 105 "../../../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = TelosSerialP__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "../../../../tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 183 "RandRWC.nc"
static inline void RandRWC__SerialControl__startDone(error_t e)
#line 183
{
  if (e != SUCCESS) 
    {
      RandRWC__Leds__led0On();
      return;
    }

  RandRWC__testCount = 0;
  RandRWC__done();
}

# 113 "../../../../tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  RandRWC__SerialControl__startDone(error);
#line 113
}
#line 113
# 133 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__default_owner_id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_GRANTING) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_IMM_GRANTING) {
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__reqResId;
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 105 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void )
#line 105
{
  return SUCCESS;
}

# 95 "../../../../tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 74 "../../../../tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
#line 74
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 81 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
#line 81
}
#line 81
# 206 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "../../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__immediateRequested(uint8_t arg_0x7fcac557fcf0){
#line 61
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__default__immediateRequested(arg_0x7fcac557fcf0);
#line 61
}
#line 61
# 93 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceRequested__immediateRequested(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_CONTROLLED) {
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_IMM_GRANTING;
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId == id) {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 212 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 212
{
#line 212
  return FAIL;
}

# 97 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x7fcac4b3ecb0){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x7fcac4b3ecb0) {
#line 97
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x7fcac4b3ecb0);
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
# 65 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
#line 65
{
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

# 97 "../../../../tos/interfaces/Resource.nc"
inline static error_t TelosSerialP__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 10 "../../../../tos/platforms/telosa/TelosSerialP.nc"
static inline error_t TelosSerialP__StdControl__start(void )
#line 10
{
  return TelosSerialP__Resource__immediateRequest();
}

# 95 "../../../../tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TelosSerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void )
#line 58
{
#line 58
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    * (volatile uint8_t * )49U ^= 0x01 << 6;
#line 58
    __nesc_atomic_end(__nesc_atomic); }
}

# 58 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
#line 58
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle();
#line 58
}
#line 58
# 50 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
#line 50
{
#line 50
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

# 42 "../../../../tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__toggle(void ){
#line 42
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
#line 42
}
#line 42
# 114 "../../../../tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Toggle(void )
#line 114
{
  LedsP__Led2__toggle();
  ;
#line 116
  ;
}

# 100 "../../../../tos/interfaces/Leds.nc"
inline static void RandRWC__Leds__led2Toggle(void ){
#line 100
  LedsP__Leds__led2Toggle();
#line 100
}
#line 100
# 131 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

#line 97
static inline void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 97
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(m, len);
}

# 135 "../../../../tos/interfaces/AMSend.nc"
inline static void * RandRWC__AMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__getPayload(139, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 539 "../../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "../../../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "../../../../tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "../../../../tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x7fcac4bf2b10, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x7fcac4bf2b10) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x7fcac4bf2b10, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 111 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "../../../../tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 68 "../../../../tos/lib/serial/SerialActiveMessageP.nc"
static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "../../../../tos/interfaces/AMSend.nc"
inline static error_t RandRWC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(139, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 152 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Write__erase(uint8_t id)
#line 152
{
  Stm25pLogP__m_req.req = Stm25pLogP__S_ERASE;
  return Stm25pLogP__newRequest(id);
}

# 93 "../../../../tos/interfaces/LogWrite.nc"
inline static error_t RandRWC__LogWrite__erase(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = Stm25pLogP__Write__erase(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID);
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 91 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 91
{
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopping == FALSE) {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopTimer = TRUE;
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__postTask();
    }
  else {
#line 96
    /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__requested = TRUE;
    }
}

# 73 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 64 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
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

# 79 "../../../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "../../../../tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "../../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fcac557fcf0){
#line 53
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7fcac557fcf0);
#line 53
}
#line 53
# 77 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP__Stm25pResource__request(uint8_t arg_0x7fcac562d8d0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(arg_0x7fcac562d8d0);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 102 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP__ClientResource__request(uint8_t id)
#line 102
{
  return Stm25pSectorP__Stm25pResource__request(id);
}

# 528 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__ClientResource__default__request(uint8_t id)
#line 528
{
#line 528
  return FAIL;
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pLogP__ClientResource__request(uint8_t arg_0x7fcac58d3c90){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fcac58d3c90) {
#line 88
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 88
      __nesc_result = Stm25pSectorP__ClientResource__request(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Stm25pLogP__ClientResource__default__request(arg_0x7fcac58d3c90);
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
# 45 "../../../../tos/chips/stm25p/Stm25pBinderP.nc"
static inline volume_id_t /*RandRWAppC.LogStorageC.BinderP*/Stm25pBinderP__0__Volume__getVolumeId(void )
#line 45
{
  return 0;
}

# 289 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline volume_id_t Stm25pSectorP__Volume__default__getVolumeId(uint8_t id)
#line 289
{
#line 289
  return 0xff;
}

# 48 "../../../../tos/chips/stm25p/Stm25pVolume.nc"
inline static volume_id_t Stm25pSectorP__Volume__getVolumeId(uint8_t arg_0x7fcac562ebf0){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  switch (arg_0x7fcac562ebf0) {
#line 48
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 48
      __nesc_result = /*RandRWAppC.LogStorageC.BinderP*/Stm25pBinderP__0__Volume__getVolumeId();
#line 48
      break;
#line 48
    default:
#line 48
      __nesc_result = Stm25pSectorP__Volume__default__getVolumeId(arg_0x7fcac562ebf0);
#line 48
      break;
#line 48
    }
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 126 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline uint8_t Stm25pSectorP__getVolumeId(uint8_t client)
#line 126
{
  return Stm25pSectorP__Volume__getVolumeId(client);
}

#line 167
static inline uint8_t Stm25pSectorP__Sector__getNumSectors(uint8_t id)
#line 167
{
  return STM25P_VMAP[Stm25pSectorP__getVolumeId(id)].size;
}

# 523 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline uint8_t Stm25pLogP__Sector__default__getNumSectors(uint8_t id)
#line 523
{
#line 523
  return 0;
}

# 56 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static uint8_t Stm25pLogP__Sector__getNumSectors(uint8_t arg_0x7fcac58d9ae0){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  switch (arg_0x7fcac58d9ae0) {
#line 56
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 56
      __nesc_result = Stm25pSectorP__Sector__getNumSectors(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID);
#line 56
      break;
#line 56
    default:
#line 56
      __nesc_result = Stm25pLogP__Sector__default__getNumSectors(arg_0x7fcac58d9ae0);
#line 56
      break;
#line 56
    }
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "../../../../tos/chips/stm25p/Stm25pLogConfigP.nc"
static inline bool /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__get(void )
#line 45
{
  return 0;
}

# 530 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline bool Stm25pLogP__Circular__default__get(uint8_t id)
#line 530
{
#line 530
  return FALSE;
}

# 55 "../../../../tos/interfaces/Get.nc"
inline static Stm25pLogP__Circular__val_t Stm25pLogP__Circular__get(uint8_t arg_0x7fcac58d2450){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  switch (arg_0x7fcac58d2450) {
#line 55
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 55
      __nesc_result = /*RandRWAppC.LogStorageC.ConfigP*/Stm25pLogConfigP__0__Circular__get();
#line 55
      break;
#line 55
    default:
#line 55
      __nesc_result = Stm25pLogP__Circular__default__get(arg_0x7fcac58d2450);
#line 55
      break;
#line 55
    }
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 157 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Write__append(uint8_t id, void *buf, storage_len_t len)
#line 157
{

  uint16_t bytes_left = (uint16_t )Stm25pLogP__m_log_info[id].write_addr % Stm25pLogP__BLOCK_SIZE;

#line 160
  bytes_left = Stm25pLogP__BLOCK_SIZE - bytes_left;


  if (len > Stm25pLogP__MAX_RECORD_SIZE) {
    return EINVAL;
    }

  if (sizeof Stm25pLogP__m_header + len > bytes_left) {
    Stm25pLogP__m_log_info[id].write_addr += bytes_left;
    }

  if (!Stm25pLogP__Circular__get(id) && 
  (uint8_t )(Stm25pLogP__m_log_info[id].write_addr >> STM25P_SECTOR_SIZE_LOG2) >= 
  Stm25pLogP__Sector__getNumSectors(id)) {
    return ESIZE;
    }
  Stm25pLogP__m_records_lost = FALSE;
  Stm25pLogP__m_req.req = Stm25pLogP__S_APPEND;
  Stm25pLogP__m_req.buf = buf;
  Stm25pLogP__m_req.len = len;

  return Stm25pLogP__newRequest(id);
}

# 54 "../../../../tos/interfaces/LogWrite.nc"
inline static error_t RandRWC__LogWrite__append(void * buf, storage_len_t len){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = Stm25pLogP__Write__append(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, buf, len);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 118 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Read__read(uint8_t id, void *buf, storage_len_t len)
#line 118
{

  Stm25pLogP__m_req.req = Stm25pLogP__S_READ;
  Stm25pLogP__m_req.buf = buf;
  Stm25pLogP__m_req.len = len;
  Stm25pLogP__m_len = len;
  return Stm25pLogP__newRequest(id);
}

# 63 "../../../../tos/interfaces/LogRead.nc"
inline static error_t RandRWC__LogRead__read(void * buf, storage_len_t len){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = Stm25pLogP__Read__read(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, buf, len);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
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
inline static void RandRWC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 89 "RandRWC.nc"
static inline void RandRWC__success(void )
#line 89
{
  RandRWC__Leds__led1On();
  RandRWC__report(0x80);
}

# 56 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "../../../../tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "../../../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 48 "../../../../tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 284 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__ClientResource__default__granted(uint8_t id)
#line 284
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void Stm25pSectorP__ClientResource__granted(uint8_t arg_0x7fcac5632ca0){
#line 102
  switch (arg_0x7fcac5632ca0) {
#line 102
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 102
      Stm25pLogP__ClientResource__granted(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID);
#line 102
      break;
#line 102
    default:
#line 102
      Stm25pSectorP__ClientResource__default__granted(arg_0x7fcac5632ca0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 138 "../../../../tos/interfaces/SplitControl.nc"
inline static void Stm25pSectorP__SplitControl__stopDone(error_t error){
#line 138
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stopDone(error);
#line 138
}
#line 138
# 175 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x7fcac524ee70){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fcac524ee70) {
#line 120
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(/*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x7fcac524ee70);
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
# 116 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 125 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__ClientResource__release(void )
#line 125
{
  return Stm25pSpiP__SpiResource__release();
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Stm25pSpiP__ClientResource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 137 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__Spi__powerDown(void )
#line 137
{
  Stm25pSpiP__sendCmd(Stm25pSpiP__S_DEEP_SLEEP, 1);
  return SUCCESS;
}

# 47 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP__Spi__powerDown(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = Stm25pSpiP__Spi__powerDown();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 56 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 110 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__startDone(error_t error)
#line 110
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__release();
}

# 113 "../../../../tos/interfaces/SplitControl.nc"
inline static void Stm25pSectorP__SplitControl__startDone(error_t error){
#line 113
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__startDone(error);
#line 113
}
#line 113
# 142 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__Spi__powerUp(void )
#line 142
{
  Stm25pSpiP__sendCmd(Stm25pSpiP__S_POWER_ON, 5);
  return SUCCESS;
}

# 55 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP__Spi__powerUp(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = Stm25pSpiP__Spi__powerUp();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 130 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__SpiResource__granted(void )
#line 130
{
  error_t error;
  Stm25pSectorP__stm25p_power_state_t power_state = Stm25pSectorP__m_power_state;

#line 133
  Stm25pSectorP__m_power_state = Stm25pSectorP__S_NONE;
  if (power_state == Stm25pSectorP__S_START) {
      error = Stm25pSectorP__Spi__powerUp();
      Stm25pSectorP__SpiResource__release();
      Stm25pSectorP__SplitControl__startDone(error);
      return;
    }
  else {
#line 140
    if (power_state == Stm25pSectorP__S_STOP) {
        error = Stm25pSectorP__Spi__powerDown();
        Stm25pSectorP__SpiResource__release();
        Stm25pSectorP__SplitControl__stopDone(error);
        return;
      }
    }
#line 146
  Stm25pSectorP__ClientResource__granted(Stm25pSectorP__m_client);
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void Stm25pSpiP__ClientResource__granted(void ){
#line 102
  Stm25pSectorP__SpiResource__granted();
#line 102
}
#line 102
# 243 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline void Stm25pSpiP__SpiResource__granted(void )
#line 243
{
  if (Stm25pSpiP__m_init) {
      Stm25pSpiP__m_init = FALSE;
      Stm25pSpiP__Spi__powerDown();
      Stm25pSpiP__SpiResource__release();
    }
  else {
#line 249
    if (!Stm25pSpiP__m_is_writing) {
      Stm25pSpiP__ClientResource__granted();
      }
    else {
#line 251
      if (Stm25pSpiP__sendCmd(Stm25pSpiP__S_READ_STATUS, 2) & 0x1) {
        Stm25pSpiP__releaseAndRequest();
        }
      else {
#line 254
        Stm25pSpiP__signalDone(SUCCESS);
        }
      }
    }
}

# 180 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 180
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x7fcac5257e20){
#line 102
  switch (arg_0x7fcac5257e20) {
#line 102
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      Stm25pSpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x7fcac5257e20);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x7fcac5580a50){
#line 102
  switch (arg_0x7fcac5580a50) {
#line 102
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x7fcac5580a50);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 176 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 176
{
  return &msp430_spi_default_config;
}

# 39 "../../../../tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x7fcac524c110){
#line 39
  union __nesc_unnamed4277 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x7fcac524c110);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 357 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}

#line 151
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

# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 238 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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

# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 207 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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

# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "../../../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
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

# 7 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 265 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
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

# 168 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x7fcac557c240){
#line 59
  switch (arg_0x7fcac557c240) {
#line 59
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x7fcac557c240);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 190 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
}

# 53 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__clr();
#line 53
}
#line 53
# 49 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__clr();
}

# 41 "../../../../tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP__CSN__clr(void ){
#line 41
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__clr();
#line 41
}
#line 41
# 386 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 341 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~0x40;
}

# 197 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 330 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & 0x40) {
      return TRUE;
    }
  return FALSE;
}

# 192 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 382 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 134 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 45 "../../../../tos/interfaces/SpiByte.nc"
inline static uint8_t Stm25pSpiP__SpiByte__write(uint8_t tx){
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
# 60 "../../../../tos/system/FcfsResourceQueueC.nc"
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

# 53 "../../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
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
# 68 "../../../../tos/system/FcfsResourceQueueC.nc"
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

# 70 "../../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
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
# 97 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
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
# 124 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x7fcac557c240){
#line 65
  switch (arg_0x7fcac557c240) {
#line 65
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x7fcac557c240);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 208 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 204 "../../../../tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "../../../../tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x7fcac557fcf0){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x7fcac557fcf0);
#line 53
}
#line 53
# 64 "../../../../tos/system/FcfsResourceQueueC.nc"
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

# 79 "../../../../tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
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
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
                /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

# 73 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 147 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__Spi__read(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len)
#line 147
{
  Stm25pSpiP__m_cmd[0] = Stm25pSpiP__S_READ;
  Stm25pSpiP__m_addr = addr;
  Stm25pSpiP__m_buf = buf;
  Stm25pSpiP__m_len = len;
  return Stm25pSpiP__newRequest(FALSE, 4);
}

# 66 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static error_t Stm25pSectorP__Spi__read(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = Stm25pSpiP__Spi__read(addr, buf, len);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 70 "../../../../tos/interfaces/SpiPacket.nc"
inline static error_t Stm25pSpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 361 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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

# 180 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "../../../../tos/interfaces/TaskBasic.nc"
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
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 114 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 114
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__postTask();
}

# 46 "../../../../tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "../../../../tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fcac557c240){
#line 65
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fcac557c240);
#line 65
}
#line 65
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "../../../../tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline bool /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "../../../../tos/interfaces/ResourceQueue.nc"
inline static bool /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "../../../../tos/system/ArbiterP.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP__Stm25pResource__release(uint8_t arg_0x7fcac562d8d0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(arg_0x7fcac562d8d0);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 110 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP__ClientResource__release(uint8_t id)
#line 110
{
  if (Stm25pSectorP__m_client == id) {
      Stm25pSectorP__m_state = Stm25pSectorP__S_IDLE;
      Stm25pSectorP__m_client = Stm25pSectorP__NO_CLIENT;
      Stm25pSectorP__SpiResource__release();
      Stm25pSectorP__Stm25pResource__release(id);
      return SUCCESS;
    }
  return FAIL;
}

# 529 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__ClientResource__default__release(uint8_t id)
#line 529
{
#line 529
  return FAIL;
}

# 120 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pLogP__ClientResource__release(uint8_t arg_0x7fcac58d3c90){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fcac58d3c90) {
#line 120
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 120
      __nesc_result = Stm25pSectorP__ClientResource__release(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = Stm25pLogP__ClientResource__default__release(arg_0x7fcac58d3c90);
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
# 516 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Read__default__readDone(uint8_t id, void *data, storage_len_t len, error_t error)
#line 516
{
}

# 75 "../../../../tos/interfaces/LogRead.nc"
inline static void Stm25pLogP__Read__readDone(uint8_t arg_0x7fcac58ee020, void * buf, storage_len_t len, error_t error){
#line 75
  switch (arg_0x7fcac58ee020) {
#line 75
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 75
      RandRWC__LogRead__readDone(buf, len, error);
#line 75
      break;
#line 75
    default:
#line 75
      Stm25pLogP__Read__default__readDone(arg_0x7fcac58ee020, buf, len, error);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 84 "RandRWC.nc"
static inline void RandRWC__fail(error_t e)
#line 84
{
  RandRWC__Leds__led0On();
  RandRWC__report(e);
}

#line 100
static inline bool RandRWC__bcheck(bool b)
#line 100
{
  if (!b) {
    RandRWC__fail(FAIL);
    }
#line 103
  return b;
}

#line 133
static inline void RandRWC__LogRead__seekDone(error_t error)
#line 133
{
}

# 517 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Read__default__seekDone(uint8_t id, error_t error)
#line 517
{
}

# 115 "../../../../tos/interfaces/LogRead.nc"
inline static void Stm25pLogP__Read__seekDone(uint8_t arg_0x7fcac58ee020, error_t error){
#line 115
  switch (arg_0x7fcac58ee020) {
#line 115
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 115
      RandRWC__LogRead__seekDone(error);
#line 115
      break;
#line 115
    default:
#line 115
      Stm25pLogP__Read__default__seekDone(arg_0x7fcac58ee020, error);
#line 115
      break;
#line 115
    }
#line 115
}
#line 115
# 161 "RandRWC.nc"
static inline void RandRWC__LogWrite__eraseDone(error_t result)
#line 161
{
  if (RandRWC__scheck(result)) {
    RandRWC__done();
    }
}

# 518 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Write__default__eraseDone(uint8_t id, error_t error)
#line 518
{
}

# 100 "../../../../tos/interfaces/LogWrite.nc"
inline static void Stm25pLogP__Write__eraseDone(uint8_t arg_0x7fcac58eb490, error_t error){
#line 100
  switch (arg_0x7fcac58eb490) {
#line 100
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 100
      RandRWC__LogWrite__eraseDone(error);
#line 100
      break;
#line 100
    default:
#line 100
      Stm25pLogP__Write__default__eraseDone(arg_0x7fcac58eb490, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 185 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Write__sync(uint8_t id)
#line 185
{
  Stm25pLogP__m_req.req = Stm25pLogP__S_SYNC;
  return Stm25pLogP__newRequest(id);
}

# 111 "../../../../tos/interfaces/LogWrite.nc"
inline static error_t RandRWC__LogWrite__sync(void ){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = Stm25pLogP__Write__sync(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 154 "RandRWC.nc"
static inline void RandRWC__LogWrite__appendDone(void *buf, storage_len_t y, bool recordsLost, error_t result)
#line 154
{
  if (result == ESIZE) {
    RandRWC__scheck(RandRWC__LogWrite__sync());
    }
  else {
#line 157
    if (RandRWC__scheck(result)) {
      RandRWC__nextWrite();
      }
    }
}

# 519 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Write__default__appendDone(uint8_t id, void *data, storage_len_t len, bool recordsLost, error_t error)
#line 519
{
}

# 68 "../../../../tos/interfaces/LogWrite.nc"
inline static void Stm25pLogP__Write__appendDone(uint8_t arg_0x7fcac58eb490, void * buf, storage_len_t len, bool recordsLost, error_t error){
#line 68
  switch (arg_0x7fcac58eb490) {
#line 68
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 68
      RandRWC__LogWrite__appendDone(buf, len, recordsLost, error);
#line 68
      break;
#line 68
    default:
#line 68
      Stm25pLogP__Write__default__appendDone(arg_0x7fcac58eb490, buf, len, recordsLost, error);
#line 68
      break;
#line 68
    }
#line 68
}
#line 68
# 166 "RandRWC.nc"
static inline void RandRWC__LogWrite__syncDone(error_t result)
#line 166
{
  if (RandRWC__scheck(result)) {
    RandRWC__done();
    }
}

# 520 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Write__default__syncDone(uint8_t id, error_t error)
#line 520
{
}

# 118 "../../../../tos/interfaces/LogWrite.nc"
inline static void Stm25pLogP__Write__syncDone(uint8_t arg_0x7fcac58eb490, error_t error){
#line 118
  switch (arg_0x7fcac58eb490) {
#line 118
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 118
      RandRWC__LogWrite__syncDone(error);
#line 118
      break;
#line 118
    default:
#line 118
      Stm25pLogP__Write__default__syncDone(arg_0x7fcac58eb490, error);
#line 118
      break;
#line 118
    }
#line 118
}
#line 118
# 526 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Sector__default__erase(uint8_t id, uint8_t sector, uint8_t num_sectors)
#line 526
{
#line 526
  return FAIL;
}

# 112 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pLogP__Sector__erase(uint8_t arg_0x7fcac58d9ae0, uint8_t sector, uint8_t num_sectors){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  switch (arg_0x7fcac58d9ae0) {
#line 112
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 112
      __nesc_result = Stm25pSectorP__Sector__erase(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID, sector, num_sectors);
#line 112
      break;
#line 112
    default:
#line 112
      __nesc_result = Stm25pLogP__Sector__default__erase(arg_0x7fcac58d9ae0, sector, num_sectors);
#line 112
      break;
#line 112
    }
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t Stm25pSectorP__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Stm25pSectorP__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 256 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__signalDone(error_t error)
#line 256
{
  Stm25pSectorP__m_error = error;
  Stm25pSectorP__signalDone_task__postTask();
}

#line 246
static inline void Stm25pSectorP__Spi__computeCrcDone(uint16_t crc, stm25p_addr_t addr, 
stm25p_len_t len, error_t error)
#line 247
{
  Stm25pSectorP__m_crc = crc;
  Stm25pSectorP__signalDone(SUCCESS);
}

# 101 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP__Spi__computeCrcDone(uint16_t crc, stm25p_addr_t addr, stm25p_len_t len, error_t error){
#line 101
  Stm25pSectorP__Spi__computeCrcDone(crc, addr, len, error);
#line 101
}
#line 101
# 183 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Spi__readDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 184
{
  Stm25pSectorP__signalDone(error);
}

# 77 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP__Spi__readDone(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 77
  Stm25pSectorP__Spi__readDone(addr, buf, len, error);
#line 77
}
#line 77
#line 114
inline static error_t Stm25pSectorP__Spi__pageProgram(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 114
  unsigned char __nesc_result;
#line 114

#line 114
  __nesc_result = Stm25pSpiP__Spi__pageProgram(addr, buf, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 202 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Spi__pageProgramDone(stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 203
{
  addr += len;
  buf += len;
  Stm25pSectorP__m_cur_len -= len;
  if (!Stm25pSectorP__m_cur_len) {
    Stm25pSectorP__signalDone(SUCCESS);
    }
  else {
#line 210
    Stm25pSectorP__Spi__pageProgram(addr, buf, Stm25pSectorP__calcWriteLen(addr));
    }
}

# 125 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP__Spi__pageProgramDone(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 125
  Stm25pSectorP__Spi__pageProgramDone(addr, buf, len, error);
#line 125
}
#line 125
#line 136
inline static error_t Stm25pSectorP__Spi__sectorErase(uint8_t sector){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = Stm25pSpiP__Spi__sectorErase(sector);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 226 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Spi__sectorEraseDone(uint8_t sector, error_t error)
#line 226
{
  if (++Stm25pSectorP__m_cur_len < Stm25pSectorP__m_len) {
    Stm25pSectorP__Spi__sectorErase(STM25P_VMAP[Stm25pSectorP__getVolumeId(Stm25pSectorP__m_client)].base + Stm25pSectorP__m_addr + 
    Stm25pSectorP__m_cur_len);
    }
  else {
#line 231
    Stm25pSectorP__signalDone(error);
    }
}

# 144 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP__Spi__sectorEraseDone(uint8_t sector, error_t error){
#line 144
  Stm25pSectorP__Spi__sectorEraseDone(sector, error);
#line 144
}
#line 144
# 252 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Spi__bulkEraseDone(error_t error)
#line 252
{
}

# 159 "../../../../tos/chips/stm25p/Stm25pSpi.nc"
inline static void Stm25pSpiP__Spi__bulkEraseDone(error_t error){
#line 159
  Stm25pSectorP__Spi__bulkEraseDone(error);
#line 159
}
#line 159
# 251 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 251
{
}

# 82 "../../../../tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x7fcac524e060, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x7fcac524e060) {
#line 82
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 82
      Stm25pSpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x7fcac524e060, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 244 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
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

# 133 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline stm25p_len_t Stm25pSpiP__calcReadLen(void )
#line 133
{
  return Stm25pSpiP__m_cur_len < Stm25pSpiP__CRC_BUF_SIZE ? Stm25pSpiP__m_cur_len : Stm25pSpiP__CRC_BUF_SIZE;
}

# 104 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = Stm25pSectorP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 102 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__start(void )
#line 102
{
  return SUCCESS;
}

# 95 "../../../../tos/interfaces/StdControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 164 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "../../../../tos/lib/timer/Timer.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 79 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__runTask(void )
#line 79
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__stop();
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopTimer = FALSE;
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__start();
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__start() == EALREADY) {
    /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__ResourceDefaultOwner__release();
    }
}

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






static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "../../../../tos/lib/timer/Timer.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 87 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__runTask(void )
#line 87
{
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__startOneShot(1024);
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

# 173 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x7fcac524ee70){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fcac524ee70) {
#line 88
    case /*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(/*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x7fcac524ee70);
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
# 108 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*HplStm25pSpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 117 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__ClientResource__request(void )
#line 117
{
  return Stm25pSpiP__SpiResource__request();
}

# 88 "../../../../tos/interfaces/Resource.nc"
inline static error_t Stm25pSectorP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Stm25pSpiP__ClientResource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 95 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline error_t Stm25pSectorP__SplitControl__stop(void )
#line 95
{
  error_t error = Stm25pSectorP__SpiResource__request();

#line 97
  if (error == SUCCESS) {
    Stm25pSectorP__m_power_state = Stm25pSectorP__S_STOP;
    }
#line 99
  return error;
}

# 130 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = Stm25pSectorP__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 141 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__stop(void )
#line 141
{
  return SUCCESS;
}

# 105 "../../../../tos/interfaces/StdControl.nc"
inline static error_t /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__default__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 149 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 149
{
}

# 62 "../../../../tos/lib/power/PowerDownCleanup.nc"
inline static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 118 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static inline void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__fired(void )
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    {
      if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopTimer == FALSE) {
          /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopping = TRUE;
          /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__PowerDownCleanup__cleanup();
          /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__stop();
          if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stop() == EALREADY) {
            /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stopDone(SUCCESS);
            }
        }
    }
#line 128
    __nesc_atomic_end(__nesc_atomic); }
}

# 204 "../../../../tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "../../../../tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fcac53d1020){
#line 83
  switch (arg_0x7fcac53d1020) {
#line 83
    case 0U:
#line 83
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__TimerMilli__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fcac53d1020);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
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

# 121 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Stm25pResource__granted(uint8_t id)
#line 121
{
  Stm25pSectorP__m_client = id;
  Stm25pSectorP__SpiResource__request();
}

# 102 "../../../../tos/interfaces/Resource.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7fcac5580a50){
#line 102
  Stm25pSectorP__Stm25pResource__granted(arg_0x7fcac5580a50);
#line 102
}
#line 102
# 216 "../../../../tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "../../../../tos/interfaces/ResourceConfigure.nc"
inline static void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fcac557c240){
#line 59
    /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7fcac557c240);
#line 59
}
#line 59
# 190 "../../../../tos/system/ArbiterP.nc"
static inline void /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 525 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Sector__default__write(uint8_t id, storage_addr_t addr, uint8_t *buf, storage_len_t len)
#line 525
{
#line 525
  return FAIL;
}

# 91 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pLogP__Sector__write(uint8_t arg_0x7fcac58d9ae0, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  switch (arg_0x7fcac58d9ae0) {
#line 91
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 91
      __nesc_result = Stm25pSectorP__Sector__write(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID, addr, buf, len);
#line 91
      break;
#line 91
    default:
#line 91
      __nesc_result = Stm25pLogP__Sector__default__write(arg_0x7fcac58d9ae0, addr, buf, len);
#line 91
      break;
#line 91
    }
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 446 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Sector__eraseDone(uint8_t id, uint8_t sector, 
uint8_t num_sectors, 
error_t error)
#line 448
{
  if (Stm25pLogP__m_log_state[id].req == Stm25pLogP__S_ERASE) {
      Stm25pLogP__m_log_info[id].read_addr = 0;
      Stm25pLogP__m_log_info[id].write_addr = 0;
      Stm25pLogP__signalDone(id, error);
    }
  else {


      stm25p_addr_t volume_size = 
      STM25P_SECTOR_SIZE * (Stm25pLogP__Sector__getNumSectors(id) - 1);

#line 459
      if (Stm25pLogP__m_log_info[id].write_addr > volume_size) {
          stm25p_addr_t read_addr = Stm25pLogP__m_log_info[id].write_addr - volume_size;

#line 461
          if (Stm25pLogP__m_log_info[id].read_addr < read_addr) {
            Stm25pLogP__m_log_info[id].read_addr = read_addr;
            }
        }
#line 464
      Stm25pLogP__m_addr = Stm25pLogP__m_log_info[id].write_addr;
      Stm25pLogP__Sector__write(id, Stm25pLogP__calcAddr(id, Stm25pLogP__m_addr), (uint8_t *)&Stm25pLogP__m_addr, 
      sizeof Stm25pLogP__m_addr);
    }
}

# 287 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Sector__default__eraseDone(uint8_t id, uint8_t sector, uint8_t num_sectors, error_t error)
#line 287
{
}

# 121 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP__Sector__eraseDone(uint8_t arg_0x7fcac562f020, uint8_t sector, uint8_t num_sectors, error_t error){
#line 121
  switch (arg_0x7fcac562f020) {
#line 121
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 121
      Stm25pLogP__Sector__eraseDone(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, sector, num_sectors, error);
#line 121
      break;
#line 121
    default:
#line 121
      Stm25pSectorP__Sector__default__eraseDone(arg_0x7fcac562f020, sector, num_sectors, error);
#line 121
      break;
#line 121
    }
#line 121
}
#line 121
# 470 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Sector__writeDone(uint8_t id, storage_addr_t addr, 
uint8_t *buf, 
storage_len_t len, 
error_t error)
#line 473
{
  Stm25pLogP__m_log_info[id].write_addr += len;
  if (Stm25pLogP__m_rw_state == Stm25pLogP__S_HEADER) {
      if (len == sizeof Stm25pLogP__m_header) {
        Stm25pLogP__m_rw_state = Stm25pLogP__S_DATA;
        }
#line 478
      Stm25pLogP__continueAppendOp(id);
    }
  else {
      Stm25pLogP__signalDone(id, error);
    }
}

# 286 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Sector__default__writeDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error)
#line 286
{
}

# 101 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP__Sector__writeDone(uint8_t arg_0x7fcac562f020, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 101
  switch (arg_0x7fcac562f020) {
#line 101
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 101
      Stm25pLogP__Sector__writeDone(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, addr, buf, len, error);
#line 101
      break;
#line 101
    default:
#line 101
      Stm25pSectorP__Sector__default__writeDone(arg_0x7fcac562f020, addr, buf, len, error);
#line 101
      break;
#line 101
    }
#line 101
}
#line 101
# 514 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Sector__computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error)
#line 514
{
}

# 288 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Sector__default__computeCrcDone(uint8_t id, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error)
#line 288
{
}

# 144 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP__Sector__computeCrcDone(uint8_t arg_0x7fcac562f020, stm25p_addr_t addr, stm25p_len_t len, uint16_t crc, error_t error){
#line 144
  switch (arg_0x7fcac562f020) {
#line 144
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 144
      Stm25pLogP__Sector__computeCrcDone(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, addr, len, crc, error);
#line 144
      break;
#line 144
    default:
#line 144
      Stm25pSectorP__Sector__default__computeCrcDone(arg_0x7fcac562f020, addr, len, crc, error);
#line 144
      break;
#line 144
    }
#line 144
}
#line 144
# 524 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Sector__default__read(uint8_t id, storage_addr_t addr, uint8_t *buf, storage_len_t len)
#line 524
{
#line 524
  return FAIL;
}

# 68 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static error_t Stm25pLogP__Sector__read(uint8_t arg_0x7fcac58d9ae0, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  switch (arg_0x7fcac58d9ae0) {
#line 68
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID:
#line 68
      __nesc_result = Stm25pSectorP__Sector__read(/*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID, addr, buf, len);
#line 68
      break;
#line 68
    default:
#line 68
      __nesc_result = Stm25pLogP__Sector__default__read(arg_0x7fcac58d9ae0, addr, buf, len);
#line 68
      break;
#line 68
    }
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 313 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline void Stm25pLogP__Sector__readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len, error_t error)
#line 314
{

  Stm25pLogP__stm25p_log_info_t *log_info = &Stm25pLogP__m_log_info[id];


  switch (Stm25pLogP__m_rw_state) {
      case Stm25pLogP__S_SEARCH_BLOCKS: 
        {
          uint16_t block = addr >> Stm25pLogP__BLOCK_SIZE_LOG2;

          if (Stm25pLogP__m_addr != STM25P_INVALID_ADDRESS) {
              if (Stm25pLogP__m_addr < log_info->read_addr) {
                log_info->read_addr = Stm25pLogP__m_addr;
                }
#line 327
              if (Stm25pLogP__m_addr > log_info->write_addr) {
                log_info->write_addr = Stm25pLogP__m_addr;
                }
            }
          if (++block < Stm25pLogP__Sector__getNumSectors(id) * Stm25pLogP__BLOCKS_PER_SECTOR) {
              addr += Stm25pLogP__BLOCK_SIZE;
              Stm25pLogP__Sector__read(id, addr, (uint8_t *)&Stm25pLogP__m_addr, sizeof Stm25pLogP__m_addr);
            }
          else {
            if (log_info->read_addr == STM25P_INVALID_ADDRESS) {
                log_info->read_addr = 0;
                log_info->write_addr = 0;
                Stm25pLogP__ClientResource__granted(id);
              }
            else 
              {
                log_info->write_addr += sizeof Stm25pLogP__m_addr;
                Stm25pLogP__m_rw_state = Stm25pLogP__S_SEARCH_RECORDS;
                Stm25pLogP__Sector__read(id, Stm25pLogP__calcAddr(id, log_info->write_addr), &Stm25pLogP__m_header, 
                sizeof Stm25pLogP__m_header);
              }
            }
        }
#line 349
      break;

      case Stm25pLogP__S_SEARCH_RECORDS: 
        {

          uint16_t cur_block = log_info->write_addr >> Stm25pLogP__BLOCK_SIZE_LOG2;
          uint16_t new_block = (log_info->write_addr + sizeof Stm25pLogP__m_header + 
          Stm25pLogP__m_header) >> Stm25pLogP__BLOCK_SIZE_LOG2;

          if (Stm25pLogP__m_header != Stm25pLogP__INVALID_HEADER && cur_block == new_block) {
              log_info->write_addr += sizeof Stm25pLogP__m_header + Stm25pLogP__m_header;
              Stm25pLogP__Sector__read(id, Stm25pLogP__calcAddr(id, log_info->write_addr), 
              &Stm25pLogP__m_header, sizeof Stm25pLogP__m_header);
            }
          else 
            {
              Stm25pLogP__ClientResource__granted(id);
            }
        }
      break;

      case Stm25pLogP__S_SEARCH_SEEK: 
        {

          log_info->read_addr += sizeof Stm25pLogP__m_header + Stm25pLogP__m_header;

          if (log_info->read_addr < Stm25pLogP__m_log_state[id].cookie) {
              Stm25pLogP__Sector__read(id, Stm25pLogP__calcAddr(id, log_info->read_addr), &Stm25pLogP__m_header, 
              sizeof Stm25pLogP__m_header);
            }
          else 
            {
              log_info->remaining = log_info->read_addr - Stm25pLogP__m_log_state[id].cookie;
              log_info->read_addr = Stm25pLogP__m_log_state[id].cookie;
              Stm25pLogP__signalDone(id, error);
            }
        }
      break;

      case Stm25pLogP__S_HEADER: 
        {

          if (Stm25pLogP__m_header == Stm25pLogP__INVALID_HEADER) {
              log_info->read_addr += Stm25pLogP__BLOCK_SIZE;
              log_info->read_addr &= ~Stm25pLogP__BLOCK_MASK;
            }
          else {
              log_info->read_addr += sizeof Stm25pLogP__m_header;
              log_info->remaining = Stm25pLogP__m_header;
              Stm25pLogP__m_rw_state = Stm25pLogP__S_DATA;
            }
          Stm25pLogP__continueReadOp(id);
        }
      break;

      case Stm25pLogP__S_DATA: 
        {
          log_info->read_addr += len;
          log_info->remaining -= len;
          Stm25pLogP__m_len -= len;
          Stm25pLogP__m_rw_state = Stm25pLogP__S_HEADER;
          Stm25pLogP__continueReadOp(id);
          break;
        }
    }
}

# 285 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__Sector__default__readDone(uint8_t id, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error)
#line 285
{
}

# 78 "../../../../tos/chips/stm25p/Stm25pSector.nc"
inline static void Stm25pSectorP__Sector__readDone(uint8_t arg_0x7fcac562f020, stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len, error_t error){
#line 78
  switch (arg_0x7fcac562f020) {
#line 78
    case /*RandRWAppC.LogStorageC*/LogStorageC__0__VOLUME_ID:
#line 78
      Stm25pLogP__Sector__readDone(/*RandRWAppC.LogStorageC*/LogStorageC__0__LOG_ID, addr, buf, len, error);
#line 78
      break;
#line 78
    default:
#line 78
      Stm25pSectorP__Sector__default__readDone(arg_0x7fcac562f020, addr, buf, len, error);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 261 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static inline void Stm25pSectorP__signalDone_task__runTask(void )
#line 261
{
  switch (Stm25pSectorP__m_state) {
      case Stm25pSectorP__S_IDLE: 
        Stm25pSectorP__ClientResource__granted(Stm25pSectorP__m_client);
      break;
      case Stm25pSectorP__S_READ: 
        Stm25pSectorP__Sector__readDone(Stm25pSectorP__m_client, Stm25pSectorP__m_addr, Stm25pSectorP__m_buf, Stm25pSectorP__m_len, Stm25pSectorP__m_error);
      break;
      case Stm25pSectorP__S_CRC: 
        Stm25pSectorP__Sector__computeCrcDone(Stm25pSectorP__m_client, Stm25pSectorP__m_addr, Stm25pSectorP__m_len, 
        Stm25pSectorP__m_crc, Stm25pSectorP__m_error);
      break;
      case Stm25pSectorP__S_WRITE: 
        Stm25pSectorP__Sector__writeDone(Stm25pSectorP__m_client, Stm25pSectorP__m_addr, Stm25pSectorP__m_buf, Stm25pSectorP__m_len, Stm25pSectorP__m_error);
      break;
      case Stm25pSectorP__S_ERASE: 
        Stm25pSectorP__Sector__eraseDone(Stm25pSectorP__m_client, Stm25pSectorP__m_addr, Stm25pSectorP__m_len, Stm25pSectorP__m_error);
      break;
      default: 
        break;
    }
}

# 69 "../../../../tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 109 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static inline error_t Stm25pLogP__Init__init(void )
#line 109
{
  int i;

#line 111
  for (i = 0; i < Stm25pLogP__NUM_LOGS; i++) {
      Stm25pLogP__m_log_info[i].read_addr = STM25P_INVALID_ADDRESS;
      Stm25pLogP__m_log_info[i].write_addr = 0;
    }
  return SUCCESS;
}

# 56 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 7;
}

# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP__Hold__set(void ){
#line 40
  /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 48 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__set();
#line 48
}
#line 48
# 48 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__set();
}

# 40 "../../../../tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP__CSN__set(void ){
#line 40
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__set();
#line 40
}
#line 40
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 7;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P47*/HplMsp430GeneralIOP__31__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP__Hold__makeOutput(void ){
#line 46
  /*HplStm25pPinsC.HoldM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 4;
}

# 85 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__makeOutput();
#line 85
}
#line 85
# 54 "../../../../tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__HplGeneralIO__makeOutput();
}

# 46 "../../../../tos/interfaces/GeneralIO.nc"
inline static void Stm25pSpiP__CSN__makeOutput(void ){
#line 46
  /*HplStm25pPinsC.CSNM*/Msp430GpioC__3__GeneralIO__makeOutput();
#line 46
}
#line 46
# 107 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static inline error_t Stm25pSpiP__Init__init(void )
#line 107
{
  Stm25pSpiP__CSN__makeOutput();
  Stm25pSpiP__Hold__makeOutput();
  Stm25pSpiP__CSN__set();
  Stm25pSpiP__Hold__set();
  if (Stm25pSpiP__SpiResource__request() == SUCCESS) {
    Stm25pSpiP__m_init = TRUE;
    }
#line 114
  return SUCCESS;
}

# 55 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 57 "../../../../tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4362 {
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

# 55 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 216 "../../../../tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 55 "../../../../tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

# 62 "../../../../tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Stm25pSectorC.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Stm25pSpiP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Stm25pLogP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "../../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "../../../../tos/interfaces/SplitControl.nc"
inline static error_t RandRWC__SerialControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 171 "RandRWC.nc"
static inline void RandRWC__Boot__booted(void )
#line 171
{
  int i;

  RandRWC__resetSeed();
  for (i = 0; i < sizeof RandRWC__data; i++) 
    RandRWC__data[i++] = RandRWC__rand() >> 8;

  RandRWC__SerialControl__start();
}

# 60 "../../../../tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  RandRWC__Boot__booted();
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
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~0x40;
}

# 177 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 231 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
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

# 65 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x7fcac4e7a600, uint8_t data){
#line 54
  switch (arg_0x7fcac4e7a600) {
#line 54
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x7fcac4e7a600, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "../../../../tos/chips/msp430/usart/HplMsp430I2C0P.nc"
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

# 6 "../../../../tos/chips/msp430/usart/HplMsp430I2C.nc"
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
# 66 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x7fcac4e794e0){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x7fcac4e794e0);
#line 39
}
#line 39
# 59 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "../../../../tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 249 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 249
{
}

# 64 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x7fcac4e7a600){
#line 49
  switch (arg_0x7fcac4e7a600) {
#line 49
    case /*HplStm25pSpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x7fcac4e7a600);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 98 "../../../../tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 397 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 221 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 221
{
}

# 79 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x7fcac4b40920, uint8_t byte){
#line 79
  switch (arg_0x7fcac4b40920) {
#line 79
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 79
      HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
      break;
#line 79
    default:
#line 79
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x7fcac4b40920, byte);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 132 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 222 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 222
{
}

# 99 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x7fcac4b40920, uint8_t * buf, uint16_t len, error_t error){
#line 99
  switch (arg_0x7fcac4b40920) {
#line 99
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 99
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
      break;
#line 99
    default:
#line 99
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x7fcac4b40920, buf, len, error);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 134 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
#line 134
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;

#line 139
          /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 142
    {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

# 65 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(uint8_t arg_0x7fcac4e7a600, uint8_t data){
#line 54
  switch (arg_0x7fcac4e7a600) {
#line 54
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 54
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(arg_0x7fcac4e7a600, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "../../../../tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(), data);
    }
}

# 54 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 401 "../../../../tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "../../../../tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "../../../../tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "../../../../tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "../../../../tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "../../../../tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 220 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 220
{
}

# 57 "../../../../tos/interfaces/UartStream.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x7fcac4b40920, uint8_t * buf, uint16_t len, error_t error){
#line 57
  switch (arg_0x7fcac4b40920) {
#line 57
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
#line 57
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
      break;
#line 57
    default:
#line 57
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x7fcac4b40920, buf, len, error);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 384 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
#line 384
{
  HplMsp430Usart1P__U1TXBUF = data;
}

# 224 "../../../../tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart1P__Usart__tx(data);
#line 224
}
#line 224
# 162 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id)
#line 162
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 165
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
#line 168
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

#line 173
        /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 64 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(uint8_t arg_0x7fcac4e7a600){
#line 49
  switch (arg_0x7fcac4e7a600) {
#line 49
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
#line 49
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(arg_0x7fcac4e7a600);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "../../../../tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

# 49 "../../../../tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone();
#line 49
}
#line 49
# 65 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "../../../../tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "../../../../tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "../../../../tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "../../../../tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "../../../../tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
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
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x7fcac5753110){
#line 39
  switch (arg_0x7fcac5753110) {
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
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x7fcac5753110);
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fcac59f9450){
#line 75
  switch (arg_0x7fcac59f9450) {
#line 75
    case Stm25pSectorP__signalDone_task:
#line 75
      Stm25pSectorP__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
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
    case /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask:
#line 75
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__startTask__runTask();
#line 75
      break;
#line 75
    case /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask:
#line 75
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__timerTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask:
#line 75
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fcac59f9450);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 85 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
#line 85
{
  msp430_uart_union_config_t *config = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

#line 87
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

# 251 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
static void HplMsp430Usart1P__Usart__disableSpi(void )
#line 251
{
  /* atomic removed: atomic calls only */
#line 252
  {
    HplMsp430Usart1P__ME2 &= ~0x10;
    HplMsp430Usart1P__SIMO__selectIOFunc();
    HplMsp430Usart1P__SOMI__selectIOFunc();
    HplMsp430Usart1P__UCLK__selectIOFunc();
  }
}

#line 211
static void HplMsp430Usart1P__Usart__disableUart(void )
#line 211
{
  /* atomic removed: atomic calls only */
#line 212
  {
    HplMsp430Usart1P__ME2 &= ~(0x20 | 0x10);
    HplMsp430Usart1P__UTXD__selectIOFunc();
    HplMsp430Usart1P__URXD__selectIOFunc();
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

# 177 "../../../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId == id && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

# 230 "RandRWC.nc"
static void RandRWC__done(void )
#line 230
{
  uint8_t act = TOS_NODE_ID / 100;

  RandRWC__Leds__led2Toggle();

  switch (act) 
    {
      case 0: 
        if (RandRWC__testCount < sizeof RandRWC__actions) {
          RandRWC__doAction(RandRWC__actions[RandRWC__testCount]);
          }
        else {
#line 241
          RandRWC__success();
          }
#line 242
      break;

      case RandRWC__A_ERASE: case RandRWC__A_READ: case RandRWC__A_WRITE: 
            if (RandRWC__testCount) {
              RandRWC__success();
              }
            else {
#line 248
              RandRWC__doAction(act);
              }
#line 249
      break;

      default: 
        RandRWC__fail(FAIL);
      break;
    }
  RandRWC__testCount++;
}

#line 196
static void RandRWC__doAction(int act)
#line 196
{
  switch (act) 
    {
      case RandRWC__A_ERASE: 
        RandRWC__scheck(RandRWC__LogWrite__erase());
      break;
      case RandRWC__A_WRITE: 
        RandRWC__resetSeed();
      RandRWC__count = 0;
      RandRWC__nextWrite();
      break;
      case RandRWC__A_READ: 
        RandRWC__resetSeed();
      RandRWC__count = 0;
      RandRWC__nextRead();
      break;
    }
}

#line 94
static __attribute((noinline)) bool RandRWC__scheck(error_t r)
#line 94
{
  if (r != SUCCESS) {
    RandRWC__fail(r);
    }
#line 97
  return r == SUCCESS;
}

#line 67
static void RandRWC__report(error_t e)
#line 67
{
  uint8_t *msg = RandRWC__AMSend__getPayload(&RandRWC__reportMsg, 1);

  if (msg) 
    {
      msg[0] = e;
      if (RandRWC__AMSend__send(AM_BROADCAST_ADDR, &RandRWC__reportMsg, 1) == SUCCESS) {
        return;
        }
    }
#line 76
  RandRWC__Leds__led0On();
}

# 519 "../../../../tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 190 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static error_t Stm25pLogP__newRequest(uint8_t client)
#line 190
{

  if (Stm25pLogP__m_log_state[client].req != Stm25pLogP__S_IDLE) {
    return FAIL;
    }
  Stm25pLogP__ClientResource__request(client);
  Stm25pLogP__m_log_state[client] = Stm25pLogP__m_req;

  return SUCCESS;
}

# 55 "RandRWC.nc"
static void RandRWC__resetSeed(void )
#line 55
{
  RandRWC__shiftReg = 119 * 119 * (TOS_NODE_ID % 100 + 1);
  RandRWC__initSeed = RandRWC__shiftReg;
  RandRWC__mask = 137 * 29 * (TOS_NODE_ID % 100 + 1);
}

#line 136
static void RandRWC__nextWrite(void )
#line 136
{
  if (RandRWC__count++ == RandRWC__NWRITES) {
    RandRWC__scheck(RandRWC__LogWrite__sync());
    }
  else {
      error_t result;

#line 142
      RandRWC__setParameters();
      result = RandRWC__LogWrite__append(RandRWC__data + RandRWC__offset, RandRWC__len);
      if (result == ESIZE) {

          RandRWC__scheck(RandRWC__LogWrite__sync());
        }
      else {
          RandRWC__scheck(result);
        }
    }
}

#line 108
static void RandRWC__setParameters(void )
#line 108
{
  RandRWC__len = RandRWC__rand() >> 8;
  RandRWC__offset = RandRWC__rand() >> 9;
  if (RandRWC__len > 254) {
    RandRWC__len = 254;
    }
#line 113
  if (RandRWC__offset + RandRWC__len > sizeof RandRWC__data) {
    RandRWC__offset = sizeof RandRWC__data - RandRWC__len;
    }
}

#line 39
static uint16_t RandRWC__rand(void )
#line 39
{
  bool endbit;
  uint16_t tmpShiftReg;

  tmpShiftReg = RandRWC__shiftReg;
  endbit = (tmpShiftReg & 0x8000) != 0;
  tmpShiftReg <<= 1;
  if (endbit) {
    tmpShiftReg ^= 0x100b;
    }
#line 48
  tmpShiftReg++;
  RandRWC__shiftReg = tmpShiftReg;
  tmpShiftReg = tmpShiftReg ^ RandRWC__mask;

  return tmpShiftReg;
}

#line 117
static void RandRWC__nextRead(void )
#line 117
{
  if (RandRWC__count == RandRWC__NWRITES) {
    RandRWC__count = 0;
    }
#line 120
  if (RandRWC__count++ == 0) {
    RandRWC__resetSeed();
    }
#line 122
  RandRWC__setParameters();
  RandRWC__scheck(RandRWC__LogRead__read(RandRWC__rdata, RandRWC__len));
}

# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
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

# 357 "../../../../tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 147 "../../../../tos/chips/msp430/usart/Msp430UartP.nc"
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
#line 147
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 150
  if (len == 0) {
    return FAIL;
    }
  else {
#line 152
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 154
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

# 93 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static uint8_t Stm25pSpiP__sendCmd(uint8_t cmd, uint8_t len)
#line 93
{

  uint8_t tmp = 0;
  int i;

  Stm25pSpiP__CSN__clr();
  for (i = 0; i < len; i++) 
    tmp = Stm25pSpiP__SpiByte__write(cmd);
  Stm25pSpiP__CSN__set();

  return tmp;
}

# 57 "../../../../tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 4);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P44*/HplMsp430GeneralIOP__28__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 4;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 111 "../../../../tos/system/ArbiterP.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 247 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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

# 133 "../../../../tos/system/ArbiterP.nc"
static error_t /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state == /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
                /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__state = /*Stm25pSectorC.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 130 "../../../../tos/lib/power/DeferredPowerManagerP.nc"
static void /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__stopDone(error_t error)
#line 130
{
  if (/*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__requested == TRUE) {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__StdControl__start();
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__SplitControl__start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    {
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__requested = FALSE;
      /*Stm25pSectorC.PowerManagerC.PowerManager*/DeferredPowerManagerP__0__stopping = FALSE;
    }
#line 138
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static error_t Stm25pSectorP__SplitControl__start(void )
#line 88
{
  error_t error = Stm25pSectorP__SpiResource__request();

#line 90
  if (error == SUCCESS) {
    Stm25pSectorP__m_power_state = Stm25pSectorP__S_START;
    }
#line 92
  return error;
}

# 77 "../../../../tos/system/ArbiterP.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 214 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static void Stm25pLogP__ClientResource__granted(uint8_t id)
#line 214
{


  if (Stm25pLogP__m_log_info[id].read_addr == STM25P_INVALID_ADDRESS && 
  Stm25pLogP__m_log_state[id].req != Stm25pLogP__S_ERASE) {
      Stm25pLogP__m_rw_state = Stm25pLogP__S_SEARCH_BLOCKS;
      Stm25pLogP__Sector__read(id, 0, (uint8_t *)&Stm25pLogP__m_addr, sizeof Stm25pLogP__m_addr);
    }
  else 
    {
      switch (Stm25pLogP__m_log_state[id].req) {
          case Stm25pLogP__S_READ: 
            Stm25pLogP__m_rw_state = Stm25pLogP__m_log_info[id].remaining ? Stm25pLogP__S_DATA : Stm25pLogP__S_HEADER;
          Stm25pLogP__continueReadOp(id);
          break;
          case Stm25pLogP__S_SEEK: 
            {

              uint8_t numSectors = Stm25pLogP__Sector__getNumSectors(id);
              uint8_t readSector = 
              Stm25pLogP__m_log_state[id].cookie >> STM25P_SECTOR_SIZE_LOG2;
              uint8_t writeSector = ((
              Stm25pLogP__m_log_info[id].write_addr - 1) >> STM25P_SECTOR_SIZE_LOG2) + 1;

              if (writeSector - readSector > numSectors) {
                  Stm25pLogP__m_log_state[id].cookie = 
                  (storage_cookie_t )(writeSector - numSectors)
                   << STM25P_SECTOR_SIZE_LOG2;
                }
              Stm25pLogP__m_log_info[id].read_addr = Stm25pLogP__m_log_state[id].cookie & ~Stm25pLogP__BLOCK_MASK;
              Stm25pLogP__m_log_info[id].remaining = 0;
              Stm25pLogP__m_rw_state = Stm25pLogP__S_SEARCH_SEEK;
              if (Stm25pLogP__m_log_info[id].read_addr != Stm25pLogP__m_log_state[id].cookie) {
                  Stm25pLogP__m_log_info[id].read_addr += sizeof Stm25pLogP__m_addr;
                  Stm25pLogP__Sector__read(id, Stm25pLogP__calcAddr(id, Stm25pLogP__m_log_info[id].read_addr), 
                  &Stm25pLogP__m_header, sizeof Stm25pLogP__m_header);
                }
              else {
                Stm25pLogP__signalDone(id, SUCCESS);
                }
            }
#line 254
          break;
          case Stm25pLogP__S_ERASE: 
            Stm25pLogP__Sector__erase(id, 0, Stm25pLogP__Sector__getNumSectors(id));
          break;
          case Stm25pLogP__S_APPEND: 
            Stm25pLogP__m_rw_state = Stm25pLogP__S_HEADER;
          Stm25pLogP__continueAppendOp(id);
          break;
          case Stm25pLogP__S_SYNC: 
            Stm25pLogP__signalDone(id, SUCCESS);
          break;
          case Stm25pLogP__S_IDLE: 
            break;
        }
    }
}

# 171 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static error_t Stm25pSectorP__Sector__read(uint8_t id, stm25p_addr_t addr, uint8_t *buf, 
stm25p_len_t len)
#line 172
{

  Stm25pSectorP__m_state = Stm25pSectorP__S_READ;
  Stm25pSectorP__m_addr = addr;
  Stm25pSectorP__m_buf = buf;
  Stm25pSectorP__m_len = len;

  return Stm25pSectorP__Spi__read(Stm25pSectorP__physicalAddr(id, addr), buf, len);
}

# 182 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP__newRequest(bool write, stm25p_len_t cmd_len)
#line 182
{
  Stm25pSpiP__m_cmd[1] = Stm25pSpiP__m_addr >> 16;
  Stm25pSpiP__m_cmd[2] = Stm25pSpiP__m_addr >> 8;
  Stm25pSpiP__m_cmd[3] = Stm25pSpiP__m_addr;
  if (write) {
    Stm25pSpiP__sendCmd(Stm25pSpiP__S_WRITE_ENABLE, 1);
    }
#line 188
  Stm25pSpiP__CSN__clr();
  Stm25pSpiP__SpiPacket__send(Stm25pSpiP__m_cmd, (void *)0, cmd_len);
  return SUCCESS;
}

# 205 "../../../../tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
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

# 153 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static stm25p_addr_t Stm25pSectorP__physicalAddr(uint8_t id, stm25p_addr_t addr)
#line 153
{
  return addr + ((stm25p_addr_t )STM25P_VMAP[Stm25pSectorP__getVolumeId(id)].base
   << STM25P_SECTOR_SIZE_LOG2);
}

# 272 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static void Stm25pLogP__continueReadOp(uint8_t client)
#line 272
{

  stm25p_addr_t read_addr = Stm25pLogP__m_log_info[client].read_addr;
  uint8_t *buf;
  uint8_t len;


  if (Stm25pLogP__m_len == 0 || read_addr >= Stm25pLogP__m_log_info[client].write_addr) {
      Stm25pLogP__signalDone(client, SUCCESS);
      return;
    }

  buf = &Stm25pLogP__m_header;
  len = sizeof Stm25pLogP__m_header;

  if (Stm25pLogP__m_rw_state == Stm25pLogP__S_DATA) {

      if (Stm25pLogP__m_header == Stm25pLogP__INVALID_HEADER) {
          Stm25pLogP__m_rw_state = Stm25pLogP__S_HEADER;
          read_addr += Stm25pLogP__BLOCK_SIZE;
          read_addr &= ~Stm25pLogP__BLOCK_MASK;
        }
      else {
          buf = Stm25pLogP__m_log_state[client].buf + Stm25pLogP__m_log_state[client].len - Stm25pLogP__m_len;

          if (Stm25pLogP__m_log_info[client].remaining < Stm25pLogP__m_len) {
            len = Stm25pLogP__m_log_info[client].remaining;
            }
          else {
#line 300
            len = Stm25pLogP__m_len;
            }
        }
    }

  if (!((uint16_t )read_addr & Stm25pLogP__BLOCK_MASK)) {
    read_addr += sizeof Stm25pLogP__m_addr;
    }
  Stm25pLogP__m_log_info[client].read_addr = read_addr;
  Stm25pLogP__Sector__read(client, Stm25pLogP__calcAddr(client, read_addr), buf, len);
}

#line 485
static void Stm25pLogP__signalDone(uint8_t id, error_t error)
#line 485
{

  Stm25pLogP__stm25p_log_req_t req = Stm25pLogP__m_log_state[id].req;
  void *buf = Stm25pLogP__m_log_state[id].buf;
  storage_len_t len = Stm25pLogP__m_log_state[id].len;

  Stm25pLogP__ClientResource__release(id);
  Stm25pLogP__m_log_state[id].req = Stm25pLogP__S_IDLE;
  switch (req) {
      case Stm25pLogP__S_IDLE: 
        break;
      case Stm25pLogP__S_READ: 
        Stm25pLogP__Read__readDone(id, buf, len - Stm25pLogP__m_len, error);
      break;
      case Stm25pLogP__S_SEEK: 
        Stm25pLogP__Read__seekDone(id, error);
      break;
      case Stm25pLogP__S_ERASE: 
        Stm25pLogP__Write__eraseDone(id, error);
      break;
      case Stm25pLogP__S_APPEND: 
        Stm25pLogP__Write__appendDone(id, buf, len, Stm25pLogP__m_records_lost, error);
      break;
      case Stm25pLogP__S_SYNC: 
        Stm25pLogP__Write__syncDone(id, error);
      break;
    }
}

# 126 "RandRWC.nc"
static __attribute((noinline)) void RandRWC__LogRead__readDone(void *buf, storage_len_t rlen, error_t result)
#line 126
{
  if (RandRWC__len != 0 && rlen == 0) {
    RandRWC__done();
    }
  else {
#line 129
    if (RandRWC__scheck(result) && RandRWC__bcheck(rlen == RandRWC__len && buf == RandRWC__rdata && memcmp(RandRWC__data + RandRWC__offset, RandRWC__rdata, rlen) == 0)) {
      RandRWC__nextRead();
      }
    }
}

# 207 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static stm25p_addr_t Stm25pLogP__calcAddr(uint8_t client, stm25p_addr_t addr)
#line 207
{
  stm25p_addr_t result = Stm25pLogP__calcSector(client, addr);

#line 209
  result <<= STM25P_SECTOR_SIZE_LOG2;
  result |= addr & STM25P_SECTOR_MASK;
  return result;
}

#line 202
static uint8_t Stm25pLogP__calcSector(uint8_t client, stm25p_addr_t addr)
#line 202
{
  uint8_t sector = Stm25pLogP__Sector__getNumSectors(client);

#line 204
  return (uint8_t )((addr >> STM25P_SECTOR_SIZE_LOG2) % sector);
}

# 213 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static error_t Stm25pSectorP__Sector__erase(uint8_t id, uint8_t sector, 
uint8_t num_sectors)
#line 214
{

  Stm25pSectorP__m_state = Stm25pSectorP__S_ERASE;
  Stm25pSectorP__m_addr = sector;
  Stm25pSectorP__m_len = num_sectors;
  Stm25pSectorP__m_cur_len = 0;

  return Stm25pSectorP__Spi__sectorErase(STM25P_VMAP[Stm25pSectorP__getVolumeId(id)].base + Stm25pSectorP__m_addr + 
  Stm25pSectorP__m_cur_len);
}

# 171 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP__Spi__sectorErase(uint8_t sector)
#line 171
{
  Stm25pSpiP__m_cmd[0] = Stm25pSpiP__S_SECTOR_ERASE;
  Stm25pSpiP__m_addr = (stm25p_addr_t )sector << STM25P_SECTOR_SIZE_LOG2;
  return Stm25pSpiP__newRequest(TRUE, 4);
}

# 418 "../../../../tos/chips/stm25p/Stm25pLogP.nc"
static void Stm25pLogP__continueAppendOp(uint8_t client)
#line 418
{

  stm25p_addr_t write_addr = Stm25pLogP__m_log_info[client].write_addr;
  void *buf;
  uint8_t len;

  if (! (uint16_t )write_addr) {
      Stm25pLogP__m_records_lost = TRUE;
      Stm25pLogP__Sector__erase(client, Stm25pLogP__calcSector(client, write_addr), 1);
    }
  else {
      if (!((uint16_t )write_addr & Stm25pLogP__BLOCK_MASK)) {
          buf = & Stm25pLogP__m_log_info[client].write_addr;
          len = sizeof Stm25pLogP__m_addr;
        }
      else {
#line 433
        if (Stm25pLogP__m_rw_state == Stm25pLogP__S_HEADER) {
            buf = & Stm25pLogP__m_log_state[client].len;
            len = sizeof  Stm25pLogP__m_log_state[client].len;
          }
        else {
            buf = Stm25pLogP__m_log_state[client].buf;
            len = Stm25pLogP__m_log_state[client].len;
          }
        }
#line 441
      Stm25pLogP__Sector__write(client, Stm25pLogP__calcAddr(client, write_addr), buf, len);
    }
}

# 188 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static error_t Stm25pSectorP__Sector__write(uint8_t id, stm25p_addr_t addr, 
uint8_t *buf, 
stm25p_len_t len)
#line 190
{

  Stm25pSectorP__m_state = Stm25pSectorP__S_WRITE;
  Stm25pSectorP__m_addr = addr;
  Stm25pSectorP__m_buf = buf;
  Stm25pSectorP__m_len = Stm25pSectorP__m_cur_len = len;

  return Stm25pSectorP__Spi__pageProgram(Stm25pSectorP__physicalAddr(id, addr), buf, 
  Stm25pSectorP__calcWriteLen(addr));
}

# 163 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static error_t Stm25pSpiP__Spi__pageProgram(stm25p_addr_t addr, uint8_t *buf, stm25p_len_t len)
#line 163
{
  Stm25pSpiP__m_cmd[0] = Stm25pSpiP__S_PAGE_PROGRAM;
  Stm25pSpiP__m_addr = addr;
  Stm25pSpiP__m_buf = buf;
  Stm25pSpiP__m_len = len;
  return Stm25pSpiP__newRequest(TRUE, 4);
}

# 158 "../../../../tos/chips/stm25p/Stm25pSectorP.nc"
static stm25p_len_t Stm25pSectorP__calcWriteLen(stm25p_addr_t addr)
#line 158
{
  stm25p_len_t len = STM25P_PAGE_SIZE - (addr & STM25P_PAGE_MASK);

#line 160
  return Stm25pSectorP__m_cur_len < len ? Stm25pSectorP__m_cur_len : len;
}

# 193 "../../../../tos/chips/stm25p/Stm25pSpiP.nc"
static void Stm25pSpiP__releaseAndRequest(void )
#line 193
{
  Stm25pSpiP__SpiResource__release();
  Stm25pSpiP__SpiResource__request();
}

#line 257
static void Stm25pSpiP__signalDone(error_t error)
#line 257
{
  Stm25pSpiP__m_is_writing = FALSE;
  switch (Stm25pSpiP__m_cmd[0]) {
      case Stm25pSpiP__S_READ: 
        if (Stm25pSpiP__m_computing_crc) {
            Stm25pSpiP__m_computing_crc = FALSE;
            Stm25pSpiP__Spi__computeCrcDone(Stm25pSpiP__m_crc, Stm25pSpiP__m_addr, Stm25pSpiP__m_len, error);
          }
        else {
            Stm25pSpiP__Spi__readDone(Stm25pSpiP__m_addr, Stm25pSpiP__m_buf, Stm25pSpiP__m_len, error);
          }
      break;
      case Stm25pSpiP__S_PAGE_PROGRAM: 
        Stm25pSpiP__Spi__pageProgramDone(Stm25pSpiP__m_addr, Stm25pSpiP__m_buf, Stm25pSpiP__m_len, error);
      break;
      case Stm25pSpiP__S_SECTOR_ERASE: 
        Stm25pSpiP__Spi__sectorEraseDone(Stm25pSpiP__m_addr >> STM25P_SECTOR_SIZE_LOG2, error);
      break;
      case Stm25pSpiP__S_BULK_ERASE: 
        Stm25pSpiP__Spi__bulkEraseDone(error);
      break;
    }
}

#line 198
static void Stm25pSpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 198
{

  int i;

  switch (Stm25pSpiP__m_cmd[0]) {

      case Stm25pSpiP__S_READ: 
        if (tx_buf == Stm25pSpiP__m_cmd) {
            Stm25pSpiP__SpiPacket__send((void *)0, Stm25pSpiP__m_buf, Stm25pSpiP__m_len);
            break;
          }
        else {
#line 209
          if (Stm25pSpiP__m_computing_crc) {
              for (i = 0; i < len; i++) 
                Stm25pSpiP__m_crc = crcByte(Stm25pSpiP__m_crc, Stm25pSpiP__m_crc_buf[i]);
              Stm25pSpiP__m_cur_addr += len;
              Stm25pSpiP__m_cur_len -= len;
              if (Stm25pSpiP__m_cur_len) {
                  Stm25pSpiP__SpiPacket__send((void *)0, Stm25pSpiP__m_crc_buf, Stm25pSpiP__calcReadLen());
                  break;
                }
            }
          }
#line 219
      Stm25pSpiP__CSN__set();
      Stm25pSpiP__signalDone(SUCCESS);
      break;

      case Stm25pSpiP__S_PAGE_PROGRAM: 
        if (tx_buf == Stm25pSpiP__m_cmd) {
            Stm25pSpiP__SpiPacket__send(Stm25pSpiP__m_buf, (void *)0, Stm25pSpiP__m_len);
            break;
          }


      case Stm25pSpiP__S_SECTOR_ERASE: case Stm25pSpiP__S_BULK_ERASE: 
          Stm25pSpiP__CSN__set();
      Stm25pSpiP__m_is_writing = TRUE;
      Stm25pSpiP__releaseAndRequest();
      break;

      default: 
        break;
    }
}

# 91 "../../../../tos/system/crc.h"
static uint16_t crcByte(uint16_t crc, uint8_t b)
#line 91
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
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

# 96 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "../../../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) 
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






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "../../../../tos/chips/msp430/usart/HplMsp430Usart0P.nc"
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

# 96 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0006)))  void sig_UART1RX_VECTOR(void )
#line 96
{
  uint8_t temp = U1RXBUF;

#line 98
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

# 153 "../../../../tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_CONTROLLED) 
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

# 412 "../../../../tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 296 "../../../../tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 166 "../../../../tos/system/ArbiterP.nc"
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__state != /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__2__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "../../../../tos/chips/msp430/usart/HplMsp430Usart1P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0004)))  void sig_UART1TX_VECTOR(void )
#line 101
{
  HplMsp430Usart1P__Interrupts__txDone();
}

# 118 "../../../../tos/lib/serial/HdlcTranslateC.nc"
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  /* atomic removed: atomic calls only */
#line 120
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

#line 106
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

