/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RepetitionPeriodLengthAndOffset_H_
#define	_RepetitionPeriodLengthAndOffset_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RepetitionPeriodLengthAndOffset_PR {
	RepetitionPeriodLengthAndOffset_PR_NOTHING,	/* No components present */
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod1,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod2,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod4,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod8,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod16,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod32,
	RepetitionPeriodLengthAndOffset_PR_repetitionPeriod64
} RepetitionPeriodLengthAndOffset_PR;

/* RepetitionPeriodLengthAndOffset */
typedef struct RepetitionPeriodLengthAndOffset {
	RepetitionPeriodLengthAndOffset_PR present;
	union RepetitionPeriodLengthAndOffset_u {
		NULL_t	 repetitionPeriod1;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod2 {
			NULL_t	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod2;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod4 {
			long	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod4;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod8 {
			long	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod8;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod16 {
			long	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod16;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod32 {
			long	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod32;
		struct RepetitionPeriodLengthAndOffset__repetitionPeriod64 {
			long	 length;
			long	 offset;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} repetitionPeriod64;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RepetitionPeriodLengthAndOffset_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RepetitionPeriodLengthAndOffset;

#ifdef __cplusplus
}
#endif

#endif	/* _RepetitionPeriodLengthAndOffset_H_ */
#include <asn_internal.h>