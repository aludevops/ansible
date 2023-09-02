/***********************************************************************************************************************************
LZ4 Decompress

Decompress IO from the lz4 format.
***********************************************************************************************************************************/
#ifdef HAVE_LIBLZ4

#ifndef COMMON_COMPRESS_LZ4_DECOMPRESS_H
#define COMMON_COMPRESS_LZ4_DECOMPRESS_H

#include "common/io/filter/filter.h"

/***********************************************************************************************************************************
Filter type constant
***********************************************************************************************************************************/
#define LZ4_DECOMPRESS_FILTER_TYPE                                  "lz4Decompress"
    STRING_DECLARE(LZ4_DECOMPRESS_FILTER_TYPE_STR);

/***********************************************************************************************************************************
Constructors
***********************************************************************************************************************************/
IoFilter *lz4DecompressNew(void);

#endif

#endif // HAVE_LIBLZ4