#pragma once

#define LIBTRANSISTOR_RESULT(code) (((code) << 8) | 0xDD)

// Misc
#define LIBTRANSISTOR_ERR_UNSPECIFIED LIBTRANSISTOR_RESULT(1)
#define LIBTRANSISTOR_ERR_UNIMPLEMENTED LIBTRANSISTOR_RESULT(2)
#define LIBTRANSISTOR_ERR_OUT_OF_MEMORY LIBTRANSISTOR_RESULT(3)

// IPC
#define LIBTRANSISTOR_ERR_UNSUPPORTED_BUFFER_TYPE LIBTRANSISTOR_RESULT(1001)
#define LIBTRANSISTOR_ERR_TOO_MANY_BUFFERS LIBTRANSISTOR_RESULT(1002)
#define LIBTRANSISTOR_ERR_INVALID_REQUEST_TYPE LIBTRANSISTOR_RESULT(1003)
#define LIBTRANSISTOR_ERR_TOO_MANY_HANDLES LIBTRANSISTOR_RESULT(1004)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_ADDRESS LIBTRANSISTOR_RESULT(1005)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_SIZE LIBTRANSISTOR_RESULT(1006)
#define LIBTRANSISTOR_ERR_INVALID_PROTECTION LIBTRANSISTOR_RESULT(1007)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_TYPE LIBTRANSISTOR_RESULT(1008)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_MAGIC LIBTRANSISTOR_RESULT(1009)
#define LIBTRANSISTOR_ERR_INVALID_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1010)
#define LIBTRANSISTOR_ERR_UNEXPECTED_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1011)
#define LIBTRANSISTOR_ERR_UNEXPECTED_PID LIBTRANSISTOR_RESULT(1012)
#define LIBTRANSISTOR_ERR_UNEXPECTED_COPY_HANDLES LIBTRANSISTOR_RESULT(1013)
#define LIBTRANSISTOR_ERR_UNEXPECTED_MOVE_HANDLES LIBTRANSISTOR_RESULT(1014)
#define LIBTRANSISTOR_ERR_ALREADY_A_DOMAIN LIBTRANSISTOR_RESULT(1015)
#define LIBTRANSISTOR_ERR_CANT_SEND_OBJECT_ACROSS_DOMAINS LIBTRANSISTOR_RESULT(1016)
#define LIBTRANSISTOR_ERR_CANT_SEND_DOMAIN_OBJECT_TO_SESSION LIBTRANSISTOR_RESULT(1017)
#define LIBTRANSISTOR_ERR_TOO_MANY_OBJECTS LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_DOMAIN_HEADER_COMMAND LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_OBJECTS LIBTRANSISTOR_RESULT(1019)
#define LIBTRANSISTOR_ERR_CANT_CLOSE_SESSIONS_LIKE_DOMAIN_OBJECTS LIBTRANSISTOR_RESULT(1020)
#define LIBTRANSISTOR_ERR_MALFORMED_CLOSE_REQUEST LIBTRANSISTOR_RESULT(1021)

// SM
#define LIBTRANSISTOR_ERR_SM_NOT_INITIALIZED LIBTRANSISTOR_RESULT(2001)
#define LIBTRANSISTOR_ERR_SM_SERVICE_NAME_TOO_LONG LIBTRANSISTOR_RESULT(2002)

// BSD
#define LIBTRANSISTOR_ERR_BSD_ERRNO_SET LIBTRANSISTOR_RESULT(3001)
#define LIBTRANSISTOR_ERR_BSD_BUFFER_TOO_SMALL LIBTRANSISTOR_RESULT(3002)
#define LIBTRANSISTOR_ERR_BSD_INVALID_MAGIC LIBTRANSISTOR_RESULT(3003)

// NV
#define LIBTRANSISTOR_ERR_NV_INITIALIZE_FAILED LIBTRANSISTOR_RESULT(4001)
#define LIBTRANSISTOR_ERR_NV_OPEN_FAILED LIBTRANSISTOR_RESULT(4002)

// Parcel
#define LIBTRANSISTOR_ERR_PARCEL_INVALID_BINDER_TYPE LIBTRANSISTOR_RESULT(5001)
#define LIBTRANSISTOR_ERR_PARCEL_DATA_TOO_BIG LIBTRANSISTOR_RESULT(5002)
