/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "ErrorMessage.h"

static int
errorReason_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
errorReason_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
errorReason_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	errorReason_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
errorReason_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	errorReason_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
errorReason_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	errorReason_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
errorReason_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	errorReason_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
errorReason_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	errorReason_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
errorReason_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	errorReason_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_errorReason_value2enum_2[] = {
	{ 0,	13,	"errorReserved" },
	{ 1,	28,	"errorInitVersionNotSupported" },
	{ 2,	19,	"errorInitServerFull" },
	{ 3,	20,	"errorInitAuthFailure" },
	{ 4,	24,	"errorInitPlayerNameInUse" },
	{ 5,	26,	"errorInitInvalidPlayerName" },
	{ 6,	26,	"errorInitServerMaintenance" },
	{ 7,	19,	"errorAvatarTooLarge" },
	{ 8,	24,	"errorAvatarUploadBlocked" },
	{ 256,	18,	"errorInvalidPacket" },
	{ 257,	17,	"errorInvalidState" },
	{ 258,	21,	"errorKickedFromServer" },
	{ 259,	21,	"errorBannedFromServer" },
	{ 260,	19,	"errorSessionTimeout" }
};
static unsigned int asn_MAP_errorReason_enum2value_2[] = {
	7,	/* errorAvatarTooLarge(7) */
	8,	/* errorAvatarUploadBlocked(8) */
	12,	/* errorBannedFromServer(259) */
	3,	/* errorInitAuthFailure(3) */
	5,	/* errorInitInvalidPlayerName(5) */
	4,	/* errorInitPlayerNameInUse(4) */
	2,	/* errorInitServerFull(2) */
	6,	/* errorInitServerMaintenance(6) */
	1,	/* errorInitVersionNotSupported(1) */
	9,	/* errorInvalidPacket(256) */
	10,	/* errorInvalidState(257) */
	11,	/* errorKickedFromServer(258) */
	0,	/* errorReserved(0) */
	13	/* errorSessionTimeout(260) */
};
static asn_INTEGER_specifics_t asn_SPC_errorReason_specs_2 = {
	asn_MAP_errorReason_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_errorReason_enum2value_2,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_errorReason_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_errorReason_2 = {
	"errorReason",
	"errorReason",
	errorReason_2_free,
	errorReason_2_print,
	errorReason_2_constraint,
	errorReason_2_decode_ber,
	errorReason_2_encode_der,
	errorReason_2_decode_xer,
	errorReason_2_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_errorReason_tags_2,
	sizeof(asn_DEF_errorReason_tags_2)
		/sizeof(asn_DEF_errorReason_tags_2[0]), /* 1 */
	asn_DEF_errorReason_tags_2,	/* Same as above */
	sizeof(asn_DEF_errorReason_tags_2)
		/sizeof(asn_DEF_errorReason_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_errorReason_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ErrorMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ErrorMessage, errorReason),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_errorReason_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"errorReason"
		},
};
static ber_tlv_tag_t asn_DEF_ErrorMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (255 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ErrorMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* errorReason at 621 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ErrorMessage_specs_1 = {
	sizeof(struct ErrorMessage),
	offsetof(struct ErrorMessage, _asn_ctx),
	asn_MAP_ErrorMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ErrorMessage = {
	"ErrorMessage",
	"ErrorMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ErrorMessage_tags_1,
	sizeof(asn_DEF_ErrorMessage_tags_1)
		/sizeof(asn_DEF_ErrorMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_ErrorMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_ErrorMessage_tags_1)
		/sizeof(asn_DEF_ErrorMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ErrorMessage_1,
	1,	/* Elements count */
	&asn_SPC_ErrorMessage_specs_1	/* Additional specs */
};

