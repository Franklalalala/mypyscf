#if defined _OPENMP
#include <omp.h>
#else
#define omp_get_thread_num() 0
#define omp_get_num_threads() 1
#endif

#define HAVE_FFS
#define XCFUN_MAX_DERIV_ORDER 3
