/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CPCH_Parameters_H_
#define	_CPCH_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BackoffControlParams.h"
#include "PowerControlAlgorithm.h"
#include "DL-DPCCH-BER.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InitialPriorityDelayList;

/* CPCH-Parameters */
typedef struct CPCH_Parameters {
	struct InitialPriorityDelayList	*initialPriorityDelayList	/* OPTIONAL */;
	BackoffControlParams_t	 backoffControlParams;
	PowerControlAlgorithm_t	 powerControlAlgorithm;
	DL_DPCCH_BER_t	 dl_DPCCH_BER;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CPCH_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CPCH_Parameters;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InitialPriorityDelayList.h"

#endif	/* _CPCH_Parameters_H_ */
#include <asn_internal.h>