/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_EUTRA_MeasuredResults_v920ext_H_
#define	_EUTRA_MeasuredResults_v920ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Eutra-MeasuredResultList-v920ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-MeasuredResults-v920ext */
typedef struct EUTRA_MeasuredResults_v920ext {
	Eutra_MeasuredResultList_v920ext_t	 eutraMeasuredResultList_v920ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_MeasuredResults_v920ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_MeasuredResults_v920ext;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_MeasuredResults_v920ext_H_ */
#include <asn_internal.h>
