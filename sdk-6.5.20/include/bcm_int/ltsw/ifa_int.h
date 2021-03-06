/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_IFA_INT_H
#define BCMINT_LTSW_IFA_INT_H

#include <sal/sal_types.h>

/*! HA subcomponent id for TX byte state counter ID. */
#define BCMINT_IFA_TX_BYTE_STAT_SUB_COMP_ID (1)

/*!
 * \brief IFA LT id.
 */
typedef enum bcmint_ifa_lt_id_s {

    /*! IFA egress attributes 2 table. */
    BCMINT_LTSW_IFA_LT_EGR_IFA_ATTRIBUTES_2 = 0,

    /*! IFA 2 protocol number table. */
    BCMINT_LTSW_IFA_LT_R_IFA_2_PROTOCOL_NUMBER = 1

} bcmint_ifa_lt_id_t;

#define BCMINT_IFA_LT_ID_STR \
{ \
    "EGR_IFA_ATTRIBUTES_2", \
    "R_IFA_2_PROTOCOL_NUMBER" \
}

/*!
 * \brief EGR_IFA_ATTRIBUTES_2 LT fields.
 */
typedef enum bcmint_ifa_fld_egr_ifa_attr_2_s {

    /*! IFA_REQUEST_VECTOR. */
    BCMINT_LTSW_IFA_FLD_EGR_IFA_ATTR_2_IFA_REQUEST_VECTOR = 0,

    /*! IFA_NODE_LENGTH. */
    BCMINT_LTSW_IFA_FLD_EGR_IFA_ATTR_2_IFA_NODE_LENGTH = 1

} bcmint_ifa_fld_egr_ifa_attr_2_t;

#define BCMINT_IFA_FLD_EGR_IFA_ATTR_2_STR \
{ \
    "IFA_REQUEST_VECTOR", \
    "IFA_NODE_LENGTH" \
}

/*!
 * \brief R_IFA_2_PROTOCOL_NUMBER LT fields.
 */
typedef enum bcmint_ifa_fld_r_ifa_2_pro_num_s {

    /*! VALUE. */
    BCMINT_LTSW_IFA_FLD_R_IFA_2_PROTOCOL_NUMBER_VALUE = 0

} bcmint_ifa_fld_r_ifa_2_pro_num_t;

#define BCMINT_IFA_FLD_R_IFA_2_PRO_NUM_STR \
{ \
    "VALUE" \
}

/*!
 * \brief IFA LT field description.
 */
typedef struct bcmint_ifa_fld_s {

    /*! LT field name. */
    const char *name;

} bcmint_ifa_fld_t;

/*!
 * \brief IFA LT description.
 */
typedef struct bcmint_ifa_lt_s {

    /*! LT name. */
    const char *name;

    /*! Bitmap of valid fields. */
    uint64_t fld_bmp;

    /*! LT fields. */
    const bcmint_ifa_fld_t *flds;

} bcmint_ifa_lt_t;

/*!
 * \brief IFA LT description.
 */
typedef struct bcmint_ifa_lt_db_s {

    /*! LT bitmap. */
    uint32_t lt_bmp;

    /*! LT array. */
    const bcmint_ifa_lt_t *lts;

} bcmint_ifa_lt_db_t;

/*!
 * \brief Get IFA LT info.
 *
 * \param [in] unit Unit Number.
 * \param [in] lt_id IFA LT ID.
 * \param [out] lt_info IFA LT info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmint_ifa_lt_get(
    int unit,
    bcmint_ifa_lt_id_t lt_id,
    const bcmint_ifa_lt_t **lt_info);

#endif /* BCMINT_LTSW_IFA_INT_H */
