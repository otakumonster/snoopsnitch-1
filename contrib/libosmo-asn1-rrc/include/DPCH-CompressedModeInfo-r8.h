/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DPCH_CompressedModeInfo_r8_H_
#define	_DPCH_CompressedModeInfo_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TGP-SequenceList-r8.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DPCH-CompressedModeInfo-r8 */
typedef struct DPCH_CompressedModeInfo_r8 {
	TGP_SequenceList_r8_t	 tgp_SequenceList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DPCH_CompressedModeInfo_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DPCH_CompressedModeInfo_r8;

#ifdef __cplusplus
}
#endif

#endif	/* _DPCH_CompressedModeInfo_r8_H_ */
#include <asn_internal.h>
