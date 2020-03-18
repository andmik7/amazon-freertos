/*
 * $ Copyright Cypress Semiconductor $
 */
#ifndef MBEDTLS_USER_CONFIG_H
#define MBEDTLS_USER_CONFIG_H

#define MBEDTLS_DES_C
#define MBEDTLS_MD4_C
#define MBEDTLS_MD5_C
#define MBEDTLS_SHA1_C
#define MBEDTLS_TLS_DEFAULT_ALLOW_SHA1_IN_CERTIFICATES
#define MBEDTLS_SSL_EXPORT_KEYS
#define MBEDTLS_SSL_PROTO_TLS1
#define MBEDTLS_SSL_PROTO_TLS1_1
#undef MBEDTLS_POLY1305_C
#undef MBEDTLS_CHACHAPOLY_C
#undef MBEDTLS_CHACHA20_C

#endif /* MBEDTLS_USER_CONFIG_H */
