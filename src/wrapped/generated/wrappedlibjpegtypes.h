/*****************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09)
 *****************************************************************/
#ifndef __wrappedlibjpegTYPES_H_
#define __wrappedlibjpegTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef void (*vFpiL_t)(void*, int32_t, uintptr_t);
typedef void (*vFpip_t)(void*, int32_t, void*);
typedef uint32_t (*uFppu_t)(void*, void*, uint32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(jpeg_finish_decompress, iFp_t) \
	GO(jpeg_start_decompress, iFp_t) \
	GO(jpeg_std_error, pFp_t) \
	GO(jpeg_read_header, iFpi_t) \
	GO(jpeg_CreateDecompress, vFpiL_t) \
	GO(jpeg_set_marker_processor, vFpip_t) \
	GO(jpeg_read_scanlines, uFppu_t)

#endif // __wrappedlibjpegTYPES_H_