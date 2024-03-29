
#ifndef BIT2_INCLUDED
#define BIT2_INCLUDED

#define T Bit2_T
typedef struct T *T;

extern T        Bit2_new    (int width, int height);

extern void     Bit2_free   (T *bitmap);

extern void     Bit2_put    (T bitmap, int i, int j, void *p);
extern void    *Bit2_get    (T bitmap, int i, int j);

extern void     Bit2_map_row_major  (T bitmap, 
                           void apply(int i, int j, Bit2_T a, int b, void *p1),
                           void *p);
extern void     Bit2_map_col_major  (T bitmap, 
                           void apply(int i, int j, Bit2_T a, int b, void *p1),
                           void *p);

Bit2_free

#undef T

#endif