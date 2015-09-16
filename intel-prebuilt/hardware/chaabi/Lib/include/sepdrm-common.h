/**********************************************************************
 * Copyright (C) 2011 Intel Corporation. All rights reserved.

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 * http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **********************************************************************/

#ifndef __DRM_COMMON_H__
#define __DRM_COMMON_H__


#define DRM_ERROR_BASE 0x00A0B000
#define FKP_ERROR_BASE 0x00A0B100
#define SEP_ERROR_BASE 0x00A0B230
typedef enum {
	DRM_SUCCESSFUL,				// 0
	DRM_FAIL_UNSUPPORTED = DRM_ERROR_BASE+1,
	DRM_FAIL_BUFFER_TOO_SMALL,
	DRM_FAIL_NULL_PARAM,
	DRM_FAIL_INVALID_PARAM,
	DRM_FAIL_UNKNOWN_ERROR,
	DRM_FAIL_MEMORY_ALLOC,
	DRM_FAIL_MEMCPY,
	DRM_FAIL_INVALID_MSG,
	DRM_FAIL_NULLMSGIN,
	DRM_FAIL_SESSIONNOTINITIALIZED,			// 10
	DRM_FAIL_CLIENTMISMATCH,
	DRM_FAIL_VERSION_MISMATCH,
	DRM_FAIL_NOT_INITIALIZED,
	DRM_FAIL_RESOURCE_LIMIT_EXCEEDED,
	DRM_FAIL_PEM_ENCODING,
	DRM_FAIL_PEM_DECODING,
	DRM_FAIL_FWCOMM_INVALID_STATE,
	DRM_FAIL_CLIENT_STATE_INVALID,
	DRM_FAIL_MEI_SETUP,
	DRM_FAIL_MEI_OPEN,				// 20
	DRM_FAIL_MEI_CLOSE,
	DRM_FAIL_MEI_QUERY,
	DRM_FAIL_MEI_CLIENT_CONNECT,
	DRM_FAIL_MEI_READ,
	DRM_FAIL_MEI_WRITE,
	DRM_FAIL_MEI_ACCESS,
	/* PAVP FW Access Errors */
	DRM_FAIL_PAVP_CLOSE_SESSION,
	DRM_FAIL_AUX_DEVICE_SETUP,
	DRM_FAIL_AUX_DEVICE_EXECUTE,
	DRM_FAIL_QUERY_PAVP_GUID,			// 30
	DRM_FAIL_CREATE_PAVP_SERVICE,
	DRM_FAIL_PAVP_NOT_INITIALIZED,
	DRM_FAIL_SET_PAVP_MEMORY_MODE,
	DRM_FAIL_PAVP_MEMORY_MODE_UNAVAILABLE,
	/* EPID Errors */
	DRM_FAIL_DERIVE_KEYS_FAILED,
	DRM_FAIL_CRYPTO_DATA_GEN,
	DRM_FAIL_PCH_HMAC_INVALID,
	DRM_FAIL_PCH_CERTIFICATE_INVALID,
	DRM_FAIL_PCH_SIGNATURE_INVALID,
	DRM_FAIL_AES_DECRYPT,				// 40
	DRM_FAIL_TIME_HMAC,
	DRM_FAIL_NO_SESSION,
	DRM_FAIL_NO_KEY_EXCHANGE,
	DRM_FAIL_NO_CERTINFO,
	/* Client Session Errors */
	DRM_FAIL_CLIENT_SESSION,
	DRM_FAIL_CLIENT_SETTIME,
	DRM_FAIL_CLIENT_CLOSE,
	DRM_FAIL_CLIENT_BIND,
	DRM_FAIL_CLIENT_GET,
	/* MV Firmware Errors */
	DRM_FAIL_FW_SESSION,				// 50
	DRM_FAIL_FW_SETTIME,
	DRM_FAIL_FW_CLOSE,
	DRM_FAIL_FW_BIND,
	DRM_FAIL_FW_GET,
	DRM_FAIL_INVALID_SESSION,
	DRM_FAIL_SESSION_MISMATCH,
	DRM_FAIL_BIND_KEY,
	DRM_FAIL_GET_KEY,
	DRM_FAIL_LOAD_BOUND_KEY,
	DRM_FAIL_INV_STREAM_KEY,			// 60
	DRM_FAIL_GET_CAPS,

	/* System Errors */
	DRM_FAIL_SYSTEM_ERROR,
	DRM_FAIL_MODULE_LOAD,
	DRM_FAIL_MODULE_INIT,

	/* CRL-related */
	DRM_FAIL_CRL_DECODE,
	DRM_FAIL_CERT_UNSUPPORTED_VALUE,
	DRM_FAIL_CRL_INVALID_DATA,
	DRM_FAIL_CRL_CRYPTO,
	DRM_FAIL_CRL_MISSING_DATA,
	DRM_FAIL_CRL_PATH_NOT_FOUND,			// 70
	DRM_FAIL_CRL_PATH_ERROR,
	DRM_FAIL_CRL_NOT_FOUND,
	DRM_FAIL_CRL_OPEN,
	DRM_FAIL_CRL_READ,
	DRM_FAIL_CRL_SIGNATURE,
	DRM_FAIL_CRL_ISSUE_TIME,
	DRM_FAIL_CRL_CERT_REVOKED,

	/* Switchable Graphics */
	DRM_FAIL_SG_LOAD_LIBRARY,
	DRM_FAIL_SG_QUERY_ADAPTERS,
	DRM_FAIL_SG_NOT_SUPPORTED,			// 80
	DRM_FAIL_SG_QUERY_STATE,
	DRM_FAIL_SG_SWITCH_ADAPTER,

	/* Chaabi FW errors */
	DRM_FAIL_SESSION_KEY_GEN,
	DRM_FAIL_SESSION_KEY_PROG,
	DRM_FAIL_SESSION_LICRESPONSE_FAIL,
	DRM_FAIL_SESSION_CEK_FAIL,
	DRM_FAIL_SESSION_SECURE_CLOCK_FAIL,
	DRM_FAIL_VIDEO_ID_ALREADY_INITIALIZED,
	DRM_FAIL_VIDEO_ID_NOT_INITIALIZED,
	DRM_FAIL_MEMORY_ALREADY_ALLOCATED,		// 90
	DRM_FAIL_PARTIAL_MEMORY_ALLOCATED,
	DRM_FAIL_MEMORY_NOT_ALLOCATED,
	DRM_FAIL_IMR_NOT_DEFINED_IN_SMIP,
	DRM_FAIL_AES_FAILURE,
	DRM_FAIL_DCB_FAILURE,
	DRM_FAIL_SRTC_TOD_ERROR,
	DRM_FAIL_SRTC_INPUT_INVALID,
	DRM_FAIL_SRTC_READ,
	DRM_FAIL_SRTC_GENERATE_NONCE,
	DRM_FAIL_SRTC_GENERATE_SECRET_KEY,		// 100
	DRM_FAIL_SRTC_WRAP_TID,
	DRM_FAIL_SRTC_WRAP_TID_SIZE_FAIL,
	DRM_FAIL_SRTC_RESP_TID_MISMATCH,
	DRM_FAIL_SRTC_RESPONSE_TIMEOUT,
	DRM_FAIL_SRTC_RESP_SIGN_VERIFY,
	DRM_FAIL_REPROVISION_IED_KEY,
	DRM_FAIL_GET_DERIVE_CHAABI_WRAPPKEY,
	DRM_FAIL_PROVISION_MODEL_KEY,
	/* Audio decryption errors */
	DRM_FAIL_AUDIO_DATA_NOT_VALID,
	DRM_FAIL_AUDIO_DATA_TOO_SMALL,                  // 110
	DRM_FAIL_AUDIO_DMA_POINTER_NULL,
	DRM_FAIL_AUDIO_SHARED_AREA_ADDRESS_IS_ZERO,
	/* Video decryption errors */
	DRM_FAIL_VIDEO_CIPHERTEXT_STEALING_SIZE_WRONG,
	/* an operation failed at the SEP protocol level */
	DRM_FAIL_SEP_DRIVER_OP,
	DRM_FAIL_SCHEDULER,
	DRM_FAIL_DATA_EXCEEDS_SEPMSG_PAYLOAD,
	DRM_FAIL_INVALID_SEPMSG_DATALEN,
	/* Widevine Errors */
	DRM_FAIL_INPUT_BUFFER_TOO_SHORT,
	DRM_FAIL_KEYBOX_INVALID_NOT_PROVISIONED,
	DRM_FAIL_KEYBOX_INVALID_BAD_PROVISIONING,
	DRM_FAIL_KEYBOX_INVALID_BAD_MAGIC,
	DRM_FAIL_KEYBOX_INVALID_BAD_CRC,
	DRM_FAIL_WV_NO_ASSET_KEY,
	DRM_FAIL_WV_NO_CEK,
	/**/
	DRM_FAIL_WV_SESSION_NALU_PARSE_FAILURE,
	DRM_FAIL_GENERATE_RANDOM_NUMBER_FAILURE,
} sec_result_t;

#define FKP_SUCCESSFUL 0
#define DRM_GET_WV_KBOX_SUCCESS 0
typedef enum
{
	/* General FKP errors */
	FKP_PARAMETER_ERROR = FKP_ERROR_BASE+1,	/* 0x00A0B101 */
	FKP_KEY_FORMAT_ERROR,
	FKP_BUFFER_TOOSMALL_ERROR,
	FKP_CMAC_MISSMATCH_ERROR,
	FKP_UNKNOWN_KEY_ERROR,
	FKP_WRAPKEY_NOTLOADED_ERROR,
	FKP_FAILED_DERIVE_CHAABI_WRAPPKEY,
	FKP_WRAP_KEY_FORMAT_ERROR,
	FKP_WRAP_KEY_CONTAINERSMALL_ERROR,
	FKP_WRAP_KEY_WRAP_RUNTIME_BUFFERSMALL_ERROR,			// 10
	FKP_NO_MEMORY_ERROR,
	FKP_KEY_NOT_LOADED_UNLOAD_ERROR,
	FKP_LOAD_COMMAND_FAILED_DUETO_EXISTING_KEYLOADED_ERROR,
	FKP_FAILED_GEN_IV_ERROR,
	FKP_CRYS_RND_RESETSEED_ERROR,
	FKP_CRYS_RND_GENERATEVECTOR_ERROR,				// 16
	/* Playready FKP errors */
	FKP_PR_FAILED_BUILD_PRIVATE_KEY = FKP_ERROR_BASE+64,		// 64
	FKP_PR_FAILED_PROCESS_RESPONSE_FAILURE,
	FKP_PR_LICENSE_CONTENT_KEY_LEGNTH_ERROR,
	FKP_PR_LICENSE_RESPONSE_NO_SIGNATURE,
	FKP_PR_LICENSE_RESPONSE_NO_CEK,
	FKP_PR_LICENSE_OMAC_MISMATCH,
	FKP_PR_LICENSE_NOMEMORY,					// 70
	FKP_PR_LICENSE_WRONG_EXPIRATION,
	FKP_PR_LICENSE_CEK_NODE_WRONG,
	FKP_PR_LICENSE_RCVCEKBUFFER_TOOSMALL,
	FKP_PR_LICENSE_XMR_ERROR,
	FKP_PR_LICENSE_XMR_ENCRYTEDKEYLEN_ERROR,
	FKP_PR_LICENSE_NOTLOADED_ERROR,
	FKP_PR_CERT_NO_BASIC_INFOR,
	FKP_PR_CERT_INVALID_PARAMETER,
	FKP_PR_CERT_INTERNAL_OPERATION_ERROR,
	FKP_PR_CERT_WRONG_BASIC_SIZE,					// 80
	FKP_PR_CERT_UNEXPECTED_DEVICE_TYPE_TOSIGN,
	FKP_PR_CERT_INVALID_SECURELEVEL_ERROR,
	FKP_PR_CERT_INVALID_TYPE_ERROR,
	FKP_PR_CERT_INVALID_PUBLICKEYENTRY,
	FKP_PR_CERT_INVALID_PUBLICKEYNUMBER,
	FKP_PR_CERT_INVALID_PUBLICKEYTYPE,
	FKP_PR_CERT_INVALID_PUBLICKENLENGTH,
	FKP_PR_CERT_INVALID_PUBLICKUSAGE,
	FKP_PR_CERT_CORRUPT_CERT,
	FKP_PR_CERT_KEYUSAGEDUPLICATE,					// 90
	FKP_PR_CERT_PRDEFINE_PUBKEYLEN_ERROR,
	FKP_PR_GENKEY_BUFFERTOOSMALL,
	FKP_PR_GENKEY_NOMEMORY,
	FKP_PR_CERT_GENKEYNOTCALLED,
	FKP_PR_CERT_PUBLICKEY_MISMATCH,
	FKP_PR_CERT_KEYFORMAT_ISNOTTESTED,
	FKP_PR_CERT_NOPRIVATEFOUND,
	FKP_PR_CERT_UNKNOW_PRIVATE_BUFFER,
	FKP_PR_CERT_REACHUPBOUNDOFTRY,
	FKP_PR_SECCLOCK_INVALID_PARAMETER_ERROR,			// 100
	FKP_PR_SECCLOCK_RESPONSESIZE_ERROR,
	FKP_PR_SECCLOCK_BUFFERTOOSMALL_ERROR,
	FKP_PR_SECCLOCK_DECODECERT_ERROR,
	FKP_PR_SECCLOCK_PARAMETER_ERROR,
	FKP_PR_SECCLOCK_NO_CERTINRESPONSE_ERROR,
	FKP_PR_SECCLOCK_SERVER_CERT_TOODEEP,
	FKP_PR_SECCLOCK_DECODE64_SIGNATURE_ERROR,
	FKP_PR_SECCLOCK_NODATANODE_IN_RESPONSE_ERROR,
	FKP_PR_BASE64_INVALID_B64SIZE,
	FKP_PR_ILLEAGBASE64_CONTENT,					// 110
	FKP_PR_BASE64_BUFFER_TOOSMALL,
	FKP_PR_TIMESTRING_BUFFER_TOOSMALL,
	FKP_PR_TIMESTRING_FORMATERROR,
	FKP_PR_SECCLOCK_INVALIDMONTH,
} FKP_RESULT;

typedef enum {
	SEP_SUCCESS,				// 0
	SEP_FAIL_INVALID_PARAM = SEP_ERROR_BASE,
	SEP_FAIL_UNSUPPORTED,
	SEP_FAIL_UNKNOWN_SUB_OPCODE,
	SEP_FAIL_SEP_DRIVER_OP,
	SEP_FAIL_DRIVER_OP,
	SEP_FAIL_NOT_BOOTING,
	SEP_FAIL_UMIP_STORAGE_NOT_VALID,
	SEP_FAIL_INVALID_SEPMSG_DATA,
	SEP_FAIL_SIGNED_OS_REPLAY,
	SEP_FAIL_SCU_PLATFORM_HANDOFF,
	SEP_FAIL_DCU_LOCKED,
	SEP_FAIL_DCU_ACCESS,
	SEP_FAIL_UMIP_READ_FAILURE,
	SEP_FAIL_UMIP_WRITE_FAILURE,
	SEP_FAIL_MEMORY_NOT_ALLOCATED,
	SEP_FAIL_ID_READ,
	SEP_FAIL_KEYBOX_PROVISION,
	SEP_FAIL_EFUSE_DWORD_INDEX_LOCKED,
	SEP_FAIL_EFUSE_HMAC_FAILURE,
	SEP_FAIL_EFUSE_SET_ATTRIBUTE_FAILURE,
	SEP_FAIL_EFUSE_GET_ATTRIBUTE_FAILURE,
	SEP_FAIL_EFUSE_TABLE_INTEGRITY_FAILURE,
	SEP_FAIL_GET_UNIQUE_ID,
	SEP_FAIL_OTP_KEY_HASH_FAILURE,
} SEP_RETURN;

typedef enum {
	NF_SUBOPCODE_PROVISION_KEY 	= 0x1001,
	NF_SUBOPCODE_LOAD_KEY		= 0x1002,
	NF_SUBOPCODE_INVALIDATE_KEY	= 0x1003,
	NF_SUBOPCODE_PR_CREATE_SESSION	= 0x1004,
	NF_SUBOPCODE_PR_CLOSE_SESSION	= 0x1005,
	NF_SUBOPCODE_PR_GEN_CHALLANGE	= 0x1006,
	NF_SUBOPCODE_PR_PROCESS_RESP	= 0x1007,
	NF_SUBOPCODE_DRM_ALLOC_DEC_BUF	= 0x1008,
	NF_SUBOPCODE_DRM_FREE_DEC_BUF	= 0x1009,
	NF_SUBOPCODE_CHECK_VID_PATH	= 0x100A,
	NF_SUBOPCODE_DRM_DEC_VIDEO	= 0x100B,
} NF_OPCODES_t;

#endif // __DRM_VOMMON_H__