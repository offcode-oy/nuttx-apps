
#include <stdlib.h>

#include "core/nng_impl.h"

#ifdef NNG_HAVE_ARC4RANDOM

uint32_t
nni_random(void)
{
	uint32_t r;

	arc4random_buf(&r, sizeof(r));
	return r;
}

#endif
