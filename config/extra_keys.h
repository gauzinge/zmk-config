// The default layout has 42 keys. Additional keys can be added by pre-setting
// any of the macros defined in this file to one or more keys before sourcing
// this file.

/* default layers (mac, win, col) */
#if !defined X_LOD // thumb row, left outer
#define X_LOD
#endif

#if !defined X_LID // thumb row, left inner
#define X_LID
#endif

#if !defined X_ROD // thumb row, right outer
#define X_ROD
#endif

#if !defined X_RID // thumb row, right outer
#define X_RID
#endif

/* nav layer mac */
#if !defined X_LOM // thumb row, left outer
#define X_LOM
#endif

#if !defined X_LIM // thumb row, left inner
#define X_LIM
#endif

#if !defined X_ROM // thumb row, right outer
#define X_ROM
#endif

#if !defined X_RIM // thumb row, right outer
#define X_RIM
#endif

/* nav layer win */
#if !defined X_LOW // thumb row, left outer
#define X_LOW
#endif

#if !defined X_LIW // thumb row, left inner
#define X_LIW
#endif

#if !defined X_ROW // thumb row, right outer
#define X_ROW
#endif

#if !defined X_RIW // thumb row, right outer
#define X_RIW
#endif

/* all other layers */
#if !defined X_LO // thumb row, left outer
#define X_LO
#endif

#if !defined X_LI // thumb row, left inner
#define X_LI
#endif

#if !defined X_RO // thumb row, right outer
#define X_RO
#endif

#if !defined X_RI // thumb row, right outer
#define X_RI
#endif
