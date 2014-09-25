/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_LogicalChannelList_H_
#define	_LogicalChannelList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogicalChannelList_PR {
	LogicalChannelList_PR_NOTHING,	/* No components present */
	LogicalChannelList_PR_allSizes,
	LogicalChannelList_PR_configured,
	LogicalChannelList_PR_explicitList
} LogicalChannelList_PR;

/* Forward declarations */
struct LogicalChannelByRB;

/* LogicalChannelList */
typedef struct LogicalChannelList {
	LogicalChannelList_PR present;
	union LogicalChannelList_u {
		NULL_t	 allSizes;
		NULL_t	 configured;
		struct LogicalChannelList__explicitList {
			A_SEQUENCE_OF(struct LogicalChannelByRB) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} explicitList;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogicalChannelList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogicalChannelList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LogicalChannelByRB.h"

#endif	/* _LogicalChannelList_H_ */
#include <asn_internal.h>