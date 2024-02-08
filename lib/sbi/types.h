/*
 * Copyright (C) 2019 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined(OGS_SBI_INSIDE) && !defined(OGS_SBI_COMPILATION)
#error "This header cannot be included directly."
#endif

#ifndef OGS_SBI_TYPES_H
#define OGS_SBI_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#define OGS_SBI_INTERFACE_NAME_SEPP "sepp"
#define OGS_SBI_INTERFACE_NAME_N32F "n32f"

typedef enum {
    OGS_SBI_SERVICE_TYPE_NULL = 0,

    OGS_SBI_SERVICE_TYPE_NNRF_NFM,
    OGS_SBI_SERVICE_TYPE_NNRF_DISC,
    OGS_SBI_SERVICE_TYPE_NNRF_OAUTH2,
    OGS_SBI_SERVICE_TYPE_NUDM_SDM,
    OGS_SBI_SERVICE_TYPE_NUDM_UECM,
    OGS_SBI_SERVICE_TYPE_NUDM_UEAU,
    OGS_SBI_SERVICE_TYPE_NUDM_EE,
    OGS_SBI_SERVICE_TYPE_NUDM_PP,
    OGS_SBI_SERVICE_TYPE_NUDM_NIDDAU,
    OGS_SBI_SERVICE_TYPE_NUDM_MT,
    OGS_SBI_SERVICE_TYPE_NAMF_COMM,
    OGS_SBI_SERVICE_TYPE_NAMF_EVTS,
    OGS_SBI_SERVICE_TYPE_NAMF_MT,
    OGS_SBI_SERVICE_TYPE_NAMF_LOC,
    OGS_SBI_SERVICE_TYPE_NSMF_PDUSESSION,
    OGS_SBI_SERVICE_TYPE_NSMF_EVENT_EXPOSURE,
    OGS_SBI_SERVICE_TYPE_NSMF_NIDD,
    OGS_SBI_SERVICE_TYPE_NAUSF_AUTH,
    OGS_SBI_SERVICE_TYPE_NAUSF_SORPROTECTION,
    OGS_SBI_SERVICE_TYPE_NAUSF_UPUPROTECTION,
    OGS_SBI_SERVICE_TYPE_NNEF_PFDMANAGEMENT,
    OGS_SBI_SERVICE_TYPE_NNEF_SMCONTEXT,
    OGS_SBI_SERVICE_TYPE_NNEF_EVENTEXPOSURE,
    OGS_SBI_SERVICE_TYPE_NPCF_AM_POLICY_CONTROL,
    OGS_SBI_SERVICE_TYPE_NPCF_SMPOLICYCONTROL,
    OGS_SBI_SERVICE_TYPE_NPCF_POLICYAUTHORIZATION,
    OGS_SBI_SERVICE_TYPE_NPCF_BDTPOLICYCONTROL,
    OGS_SBI_SERVICE_TYPE_NPCF_EVENTEXPOSURE,
    OGS_SBI_SERVICE_TYPE_NPCF_UE_POLICY_CONTROL,
    OGS_SBI_SERVICE_TYPE_NSMSF_SMS,
    OGS_SBI_SERVICE_TYPE_NNSSF_NSSELECTION,
    OGS_SBI_SERVICE_TYPE_NNSSF_NSSAIAVAILABILITY,
    OGS_SBI_SERVICE_TYPE_NUDR_DR,
    OGS_SBI_SERVICE_TYPE_NUDR_GROUP_ID_MAP,
    OGS_SBI_SERVICE_TYPE_NLMF_LOC,
    OGS_SBI_SERVICE_TYPE_N5G_EIR_EIC,
    OGS_SBI_SERVICE_TYPE_NBSF_MANAGEMENT,
    OGS_SBI_SERVICE_TYPE_NCHF_SPENDINGLIMITCONTROL,
    OGS_SBI_SERVICE_TYPE_NCHF_CONVERGEDCHARGING,
    OGS_SBI_SERVICE_TYPE_NCHF_OFFLINEONLYCHARGING,
    OGS_SBI_SERVICE_TYPE_NNWDAF_EVENTSSUBSCRIPTION,
    OGS_SBI_SERVICE_TYPE_NNWDAF_ANALYTICSINFO,
    OGS_SBI_SERVICE_TYPE_NGMLC_LOC,
    OGS_SBI_SERVICE_TYPE_NUCMF_PROVISIONING,
    OGS_SBI_SERVICE_TYPE_NUCMF_UECAPABILITYMANAGEMENT,
    OGS_SBI_SERVICE_TYPE_NHSS_SDM,
    OGS_SBI_SERVICE_TYPE_NHSS_UECM,
    OGS_SBI_SERVICE_TYPE_NHSS_UEAU,
    OGS_SBI_SERVICE_TYPE_NHSS_EE,
    OGS_SBI_SERVICE_TYPE_NHSS_IMS_SDM,
    OGS_SBI_SERVICE_TYPE_NHSS_IMS_UECM,
    OGS_SBI_SERVICE_TYPE_NHSS_IMS_UEAU,
    OGS_SBI_SERVICE_TYPE_NSEPP_TELESCOPIC,
    OGS_SBI_SERVICE_TYPE_NSORAF_SOR,
    OGS_SBI_SERVICE_TYPE_NSPAF_SECURED_PACKET,
    OGS_SBI_SERVICE_TYPE_NUDSF_DR,
    OGS_SBI_SERVICE_TYPE_NNSSAAF_NSSAA,

    OGS_SBI_MAX_NUM_OF_SERVICE_TYPE,
} ogs_sbi_service_type_e;

#define OGS_SBI_SERVICE_NAME_NNRF_NFM "nnrf-nfm"
#define OGS_SBI_SERVICE_NAME_NNRF_DISC "nnrf-disc"
#define OGS_SBI_SERVICE_NAME_NNRF_OAUTH2 "nnrf-oauth2"
#define OGS_SBI_SERVICE_NAME_NUDM_SDM "nudm-sdm"
#define OGS_SBI_SERVICE_NAME_NUDM_UECM "nudm-uecm"
#define OGS_SBI_SERVICE_NAME_NUDM_UEAU "nudm-ueau"
#define OGS_SBI_SERVICE_NAME_NUDM_EE "nudm-ee"
#define OGS_SBI_SERVICE_NAME_NUDM_PP "nudm-pp"
#define OGS_SBI_SERVICE_NAME_NUDM_NIDDAU "nudm-niddau"
#define OGS_SBI_SERVICE_NAME_NUDM_MT "nudm-mt"
#define OGS_SBI_SERVICE_NAME_NAMF_COMM "namf-comm"
#define OGS_SBI_SERVICE_NAME_NAMF_EVTS "namf-evts"
#define OGS_SBI_SERVICE_NAME_NAMF_MT "namf-mt"
#define OGS_SBI_SERVICE_NAME_NAMF_LOC "namf-loc"
#define OGS_SBI_SERVICE_NAME_NSMF_PDUSESSION "nsmf-pdusession"
#define OGS_SBI_SERVICE_NAME_NSMF_EVENT_EXPOSURE "nsmf-event-exposure"
#define OGS_SBI_SERVICE_NAME_NSMF_NIDD "nsmf-nidd"
#define OGS_SBI_SERVICE_NAME_NAUSF_AUTH "nausf-auth"
#define OGS_SBI_SERVICE_NAME_NAUSF_SORPROTECTION "nausf-sorprotection"
#define OGS_SBI_SERVICE_NAME_NAUSF_UPUPROTECTION "nausf-upuprotection"
#define OGS_SBI_SERVICE_NAME_NNEF_PFDMANAGEMENT "nnef-pfdmanagement"
#define OGS_SBI_SERVICE_NAME_NNEF_SMCONTEXT "nnef-smcontext"
#define OGS_SBI_SERVICE_NAME_NNEF_EVENTEXPOSURE "nnef-eventexposure"
#define OGS_SBI_SERVICE_NAME_NPCF_AM_POLICY_CONTROL "npcf-am-policy-control"
#define OGS_SBI_SERVICE_NAME_NPCF_SMPOLICYCONTROL "npcf-smpolicycontrol"
#define OGS_SBI_SERVICE_NAME_NPCF_POLICYAUTHORIZATION "npcf-policyauthorization"
#define OGS_SBI_SERVICE_NAME_NPCF_BDTPOLICYCONTROL "npcf-bdtpolicycontrol"
#define OGS_SBI_SERVICE_NAME_NPCF_EVENTEXPOSURE "npcf-eventexposure"
#define OGS_SBI_SERVICE_NAME_NPCF_UE_POLICY_CONTROL "npcf-ue-policy-control"
#define OGS_SBI_SERVICE_NAME_NSMSF_SMS "nsmsf-sms"
#define OGS_SBI_SERVICE_NAME_NNSSF_NSSELECTION "nnssf-nsselection"
#define OGS_SBI_SERVICE_NAME_NNSSF_NSSAIAVAILABILITY "nnssf-nssaiavailability"
#define OGS_SBI_SERVICE_NAME_NUDR_DR "nudr-dr"
#define OGS_SBI_SERVICE_NAME_NUDR_GROUP_ID_MAP "nudr-group-id-map"
#define OGS_SBI_SERVICE_NAME_NLMF_LOC "nlmf-loc"
#define OGS_SBI_SERVICE_NAME_N5G_EIR_EIC "n5g-eir-eic"
#define OGS_SBI_SERVICE_NAME_NBSF_MANAGEMENT "nbsf-management"
#define OGS_SBI_SERVICE_NAME_NCHF_SPENDINGLIMITCONTROL \
    "nchf-spendinglimitcontrol"
#define OGS_SBI_SERVICE_NAME_NCHF_CONVERGEDCHARGING "nchf-convergedcharging"
#define OGS_SBI_SERVICE_NAME_NCHF_OFFLINEONLYCHARGING "nchf-offlineonlycharging"
#define OGS_SBI_SERVICE_NAME_NNWDAF_EVENTSSUBSCRIPTION \
    "nnwdaf-eventssubscription"
#define OGS_SBI_SERVICE_NAME_NNWDAF_ANALYTICSINFO "nnwdaf-analyticsinfo"
#define OGS_SBI_SERVICE_NAME_NGMLC_LOC "ngmlc-loc"
#define OGS_SBI_SERVICE_NAME_NUCMF_PROVISIONING "nucmf-provisioning"
#define OGS_SBI_SERVICE_NAME_NUCMF_UECAPABILITYMANAGEMENT \
    "nucmf-uecapabilitymanagement"
#define OGS_SBI_SERVICE_NAME_NHSS_SDM "nhss-sdm"
#define OGS_SBI_SERVICE_NAME_NHSS_UECM "nhss-uecm"
#define OGS_SBI_SERVICE_NAME_NHSS_UEAU "nhss-ueau"
#define OGS_SBI_SERVICE_NAME_NHSS_EE "nhss-ee"
#define OGS_SBI_SERVICE_NAME_NHSS_IMS_SDM "nhss-ims-sdm"
#define OGS_SBI_SERVICE_NAME_NHSS_IMS_UECM "nhss-ims-uecm"
#define OGS_SBI_SERVICE_NAME_NHSS_IMS_UEAU "nhss-ims-ueau"
#define OGS_SBI_SERVICE_NAME_NSEPP_TELESCOPIC "nsepp-telescopic"
#define OGS_SBI_SERVICE_NAME_NSORAF_SOR "nsoraf-sor"
#define OGS_SBI_SERVICE_NAME_NSPAF_SECURED_PACKET "nspaf-secured-packet"
#define OGS_SBI_SERVICE_NAME_NUDSF_DR "nudsf-dr"
#define OGS_SBI_SERVICE_NAME_NNSSAAF_NSSAA "nnssaaf-nssaa"

#define OGS_SBI_SERVICE_NAME_N32C_HANDSHAKE "n32c-handshake"

#define OGS_SBI_SERVICE_NAME_NAMF_CALLBACK "namf-callback"
#define OGS_SBI_SERVICE_NAME_NSMF_CALLBACK "nsmf-callback"

OpenAPI_nf_type_e ogs_sbi_service_type_to_nf_type(
        ogs_sbi_service_type_e service_type);
const char *ogs_sbi_service_type_to_name(ogs_sbi_service_type_e service_type);
ogs_sbi_service_type_e ogs_sbi_service_type_from_name(const char *service_name);

typedef enum {
    OGS_SBI_APP_ERRNO_NULL = 0,

    /*
     * Nsmf_PDUService
     *
     * TS29.502
     * 6.1.7 Error Handling
     * 6.1.7.3 Application Errors
     */
    OGS_SBI_APP_ERRNO_N1_SM_ERRNO,
    OGS_SBI_APP_ERRNO_N2_SM_ERRNO,
    OGS_SBI_APP_ERRNO_SNSSAI_DENIED,
    OGS_SBI_APP_ERRNO_DNN_DENIED,
    OGS_SBI_APP_ERRNO_PDUTYPE_DENIED,
    OGS_SBI_APP_ERRNO_SSC_DENIED,
    OGS_SBI_APP_ERRNO_SUBSCRIPTION_DENIED,
    OGS_SBI_APP_ERRNO_DNN_NOT_SUPPORTED,
    OGS_SBI_APP_ERRNO_PDUTYPE_NOT_SUPPORTED,
    OGS_SBI_APP_ERRNO_SSC_NOT_SUPPORTED,
    OGS_SBI_APP_ERRNO_HOME_ROUTED_ROAMING_REQUIRED,
    OGS_SBI_APP_ERRNO_OUT_OF_LADN_SERVICE_AREA,
    OGS_SBI_APP_ERRNO_PRIORITIZED_SERVICES_ONLY,
    OGS_SBI_APP_ERRNO_PDU_SESSION_ANCHOR_CHANGE,
    OGS_SBI_APP_ERRNO_TARGET_MME_CAPABILITY,
    OGS_SBI_APP_ERRNO_NO_EPS_5GS_CONTINUITY,
    OGS_SBI_APP_ERRNO_UNABLE_TO_PAGE_UE,
    OGS_SBI_APP_ERRNO_UE_NOT_RESPONDING,
    OGS_SBI_APP_ERRNO_REJECTED_BY_UE,
    OGS_SBI_APP_ERRNO_REJECTED_DUE_VPLMN_POLICY,
    OGS_SBI_APP_ERRNO_HO_TAU_IN_PROGRESS,
    OGS_SBI_APP_ERRNO_INTEGRITY_PROTECTED_MDR_NOT_ACCEPTABLE,
    OGS_SBI_APP_ERRNO_EBI_EXHAUSTED,
    OGS_SBI_APP_ERRNO_EBI_REJECTED_LOCAL_POLICY,
    OGS_SBI_APP_ERRNO_EBI_REJECTED_NO_N26,
    OGS_SBI_APP_ERRNO_DEFAULT_EPS_BEARER_INACTIVE,
    OGS_SBI_APP_ERRNO_HANDOVER_RESOURCE_ALLOCATION_FAILURE,
    OGS_SBI_APP_ERRNO_LATE_OVERLAPPING_REQUEST,
    OGS_SBI_APP_ERRNO_DEFAULT_EBI_NOT_TRANSFERRED,
    OGS_SBI_APP_ERRNO_NOT_SUPPORTED_WITH_ISMF,
    OGS_SBI_APP_ERRNO_SERVICE_NOT_AUTHORIZED_BY_NEXT_HOP,
    OGS_SBI_APP_ERRNO_NO_DATA_FORWARDING,
    OGS_SBI_APP_ERRNO_S_NSSAI_UNAVAILABLE_DUE_TO_NSAC,
    OGS_SBI_APP_ERRNO_EXCEEDED_UE_SLICE_DATA_RATE,
    OGS_SBI_APP_ERRNO_EXCEEDED_SLICE_DATA_RATE,
    OGS_SBI_APP_ERRNO_CONTEXT_NOT_FOUND,
    OGS_SBI_APP_ERRNO_HIGHER_PRIORITY_REQUEST_ONGOING,
    OGS_SBI_APP_ERRNO_UE_IN_CM_IDLE_STATE,
    OGS_SBI_APP_ERRNO_INSUFFICIENT_RESOURCES_SLICE,
    OGS_SBI_APP_ERRNO_INSUFFICIENT_RESOURCES_SLICE_DNN,
    OGS_SBI_APP_ERRNO_DNN_CONGESTION,
    OGS_SBI_APP_ERRNO_S_NSSAI_CONGESTION,
    OGS_SBI_APP_ERRNO_PEER_NOT_RESPONDING,
    OGS_SBI_APP_ERRNO_NETWORK_FAILURE,
    OGS_SBI_APP_ERRNO_UPF_NOT_RESPONDING,
    OGS_SBI_APP_ERRNO_UE_NOT_REACHABLE,

    OGS_SBI_MAX_NUM_OF_APP_ERRNO,
} ogs_sbi_app_errno_e;

#define OGS_SBI_APP_STRERROR_N1_SM_ERROR "N1_SM_ERROR"
#define OGS_SBI_APP_STRERROR_N2_SM_ERROR "N2_SM_ERROR"
#define OGS_SBI_APP_STRERROR_SNSSAI_DENIED "SNSSAI_DENIED"
#define OGS_SBI_APP_STRERROR_DNN_DENIED "DNN_DENIED"
#define OGS_SBI_APP_STRERROR_PDUTYPE_DENIED "PDUTYPE_DENIED"
#define OGS_SBI_APP_STRERROR_SSC_DENIED "SSC_DENIED"
#define OGS_SBI_APP_STRERROR_SUBSCRIPTION_DENIED "SUBSCRIPTION_DENIED"
#define OGS_SBI_APP_STRERROR_DNN_NOT_SUPPORTED "DNN_NOT_SUPPORTED"
#define OGS_SBI_APP_STRERROR_PDUTYPE_NOT_SUPPORTED "PDUTYPE_NOT_SUPPORTED"
#define OGS_SBI_APP_STRERROR_SSC_NOT_SUPPORTED "SSC_NOT_SUPPORTED"
#define OGS_SBI_APP_STRERROR_HOME_ROUTED_ROAMING_REQUIRED "HOME_ROUTED_ROAMING_REQUIRED"
#define OGS_SBI_APP_STRERROR_OUT_OF_LADN_SERVICE_AREA "OUT_OF_LADN_SERVICE_AREA"
#define OGS_SBI_APP_STRERROR_PRIORITIZED_SERVICES_ONLY "PRIORITIZED_SERVICES_ONLY"
#define OGS_SBI_APP_STRERROR_PDU_SESSION_ANCHOR_CHANGE "PDU_SESSION_ANCHOR_CHANGE"
#define OGS_SBI_APP_STRERROR_TARGET_MME_CAPABILITY "TARGET_MME_CAPABILITY"
#define OGS_SBI_APP_STRERROR_NO_EPS_5GS_CONTINUITY "NO_EPS_5GS_CONTINUITY"
#define OGS_SBI_APP_STRERROR_UNABLE_TO_PAGE_UE "UNABLE_TO_PAGE_UE"
#define OGS_SBI_APP_STRERROR_UE_NOT_RESPONDING "UE_NOT_RESPONDING"
#define OGS_SBI_APP_STRERROR_REJECTED_BY_UE "REJECTED_BY_UE"
#define OGS_SBI_APP_STRERROR_REJECTED_DUE_VPLMN_POLICY "REJECTED_DUE_VPLMN_POLICY"
#define OGS_SBI_APP_STRERROR_HO_TAU_IN_PROGRESS "HO_TAU_IN_PROGRESS"
#define OGS_SBI_APP_STRERROR_INTEGRITY_PROTECTED_MDR_NOT_ACCEPTABLE "INTEGRITY_PROTECTED_MDR_NOT_ACCEPTABLE"
#define OGS_SBI_APP_STRERROR_EBI_EXHAUSTED "EBI_EXHAUSTED"
#define OGS_SBI_APP_STRERROR_EBI_REJECTED_LOCAL_POLICY "EBI_REJECTED_LOCAL_POLICY"
#define OGS_SBI_APP_STRERROR_EBI_REJECTED_NO_N26 "EBI_REJECTED_NO_N26"
#define OGS_SBI_APP_STRERROR_DEFAULT_EPS_BEARER_INACTIVE "DEFAULT_EPS_BEARER_INACTIVE"
#define OGS_SBI_APP_STRERROR_HANDOVER_RESOURCE_ALLOCATION_FAILURE "HANDOVER_RESOURCE_ALLOCATION_FAILURE"
#define OGS_SBI_APP_STRERROR_LATE_OVERLAPPING_REQUEST "LATE_OVERLAPPING_REQUEST"
#define OGS_SBI_APP_STRERROR_DEFAULT_EBI_NOT_TRANSFERRED "DEFAULT_EBI_NOT_TRANSFERRED"
#define OGS_SBI_APP_STRERROR_NOT_SUPPORTED_WITH_ISMF "NOT_SUPPORTED_WITH_ISMF"
#define OGS_SBI_APP_STRERROR_SERVICE_NOT_AUTHORIZED_BY_NEXT_HOP "SERVICE_NOT_AUTHORIZED_BY_NEXT_HOP"
#define OGS_SBI_APP_STRERROR_NO_DATA_FORWARDING "NO_DATA_FORWARDING"
#define OGS_SBI_APP_STRERROR_S_NSSAI_UNAVAILABLE_DUE_TO_NSAC "S_NSSAI_UNAVAILABLE_DUE_TO_NSAC"
#define OGS_SBI_APP_STRERROR_EXCEEDED_UE_SLICE_DATA_RATE "EXCEEDED_UE_SLICE_DATA_RATE"
#define OGS_SBI_APP_STRERROR_EXCEEDED_SLICE_DATA_RATE "EXCEEDED_SLICE_DATA_RATE"
#define OGS_SBI_APP_STRERROR_CONTEXT_NOT_FOUND "CONTEXT_NOT_FOUND"
#define OGS_SBI_APP_STRERROR_HIGHER_PRIORITY_REQUEST_ONGOING "HIGHER_PRIORITY_REQUEST_ONGOING"
#define OGS_SBI_APP_STRERROR_UE_IN_CM_IDLE_STATE "UE_IN_CM_IDLE_STATE"
#define OGS_SBI_APP_STRERROR_INSUFFICIENT_RESOURCES_SLICE "INSUFFICIENT_RESOURCES_SLICE"
#define OGS_SBI_APP_STRERROR_INSUFFICIENT_RESOURCES_SLICE_DNN "INSUFFICIENT_RESOURCES_SLICE_DNN"
#define OGS_SBI_APP_STRERROR_DNN_CONGESTION "DNN_CONGESTION"
#define OGS_SBI_APP_STRERROR_S_NSSAI_CONGESTION "S_NSSAI_CONGESTION"
#define OGS_SBI_APP_STRERROR_PEER_NOT_RESPONDING "PEER_NOT_RESPONDING"
#define OGS_SBI_APP_STRERROR_NETWORK_FAILURE "NETWORK_FAILURE"
#define OGS_SBI_APP_STRERROR_UPF_NOT_RESPONDING "UPF_NOT_RESPONDING"
#define OGS_SBI_APP_STRERROR_UE_NOT_REACHABLE "UE_NOT_REACHABLE"

const char *ogs_sbi_app_strerror(ogs_sbi_app_errno_e e);
ogs_sbi_app_errno_e ogs_sbi_app_errno(const char *str);

#ifdef __cplusplus
}
#endif

#endif /* OGS_SBI_TYPES_H */