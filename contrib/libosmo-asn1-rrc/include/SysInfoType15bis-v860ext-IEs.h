/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15bis_v860ext_IEs_H_
#define	_SysInfoType15bis_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_AddIonoModel;
struct UE_Positioning_GANSS_EarthOrientPara;

/* SysInfoType15bis-v860ext-IEs */
typedef struct SysInfoType15bis_v860ext_IEs {
	struct UE_Positioning_GANSS_AddIonoModel	*ue_Positioning_GANSS_AddIonoModel	/* OPTIONAL */;
	struct UE_Positioning_GANSS_EarthOrientPara	*ue_Positioning_GANSS_EarthOrientationPara	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15bis_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15bis_v860ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GANSS-AddIonoModel.h"
#include "UE-Positioning-GANSS-EarthOrientPara.h"

#endif	/* _SysInfoType15bis_v860ext_IEs_H_ */
#include <asn_internal.h>
