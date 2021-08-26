/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.10) *
 *******************************************************************/
#ifndef __wrappedcryptoTYPES_H_
#define __wrappedcryptoTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void* (*pFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFpiipp_t)(void*, int32_t, int32_t, void*, void*);
typedef int32_t (*iFpplppi_t)(void*, void*, intptr_t, void*, void*, int32_t);
typedef int32_t (*iFppppipp_t)(void*, void*, void*, void*, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(OPENSSL_add_all_algorithms_conf, vFv_t) \
	GO(OPENSSL_add_all_algorithms_noconf, vFv_t) \
	GO(OpenSSL_add_all_ciphers, vFv_t) \
	GO(OpenSSL_add_all_digests, vFv_t) \
	GO(CRYPTO_set_id_callback, vFp_t) \
	GO(CRYPTO_set_locking_callback, vFp_t) \
	GO(sk_new, pFp_t) \
	GO(sk_pop_free, vFpp_t) \
	GO(PEM_read_bio_DSAPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_DSA_PUBKEY, pFpppp_t) \
	GO(PEM_read_bio_ECPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_EC_PUBKEY, pFpppp_t) \
	GO(PEM_read_bio_RSAPrivateKey, pFpppp_t) \
	GO(PEM_read_bio_RSA_PUBKEY, pFpppp_t) \
	GO(ENGINE_ctrl, iFpiipp_t) \
	GO(ENGINE_ctrl_cmd, iFpplppi_t) \
	GO(PEM_write_bio_DSAPrivateKey, iFppppipp_t) \
	GO(PEM_write_bio_ECPrivateKey, iFppppipp_t) \
	GO(PEM_write_bio_RSAPrivateKey, iFppppipp_t)

#endif // __wrappedcryptoTYPES_H_
