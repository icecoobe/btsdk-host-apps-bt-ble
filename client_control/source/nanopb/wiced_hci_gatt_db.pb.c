/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Wed Oct 31 16:42:06 2018. */

#include "wiced_hci_gatt_db.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t wiced_hci_gatt_db_gatt_db_primary_service_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_db_primary_service, handle, handle, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, CALLBACK, OTHER, wiced_hci_gatt_db_gatt_db_primary_service, uuid, handle, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_secondary_service_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_db_secondary_service, handle, handle, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, CALLBACK, OTHER, wiced_hci_gatt_db_gatt_db_secondary_service, uuid, handle, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_included_service_fields[5] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_db_included_service, handle, handle, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, CALLBACK, OTHER, wiced_hci_gatt_db_gatt_db_included_service, uuid, handle, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_included_service, svc_handle, uuid, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_included_service, end_grp, svc_handle, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_characteristic_fields[6] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_db_characteristic, handle, handle, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_characteristic, handle_val, handle, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_characteristic, prop, handle_val, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_characteristic, perm, prop, 0),
    PB_FIELD(  5, BYTES   , SINGULAR, CALLBACK, OTHER, wiced_hci_gatt_db_gatt_db_characteristic, uuid, perm, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_descriptor_fields[4] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_db_descriptor, handle, handle, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_descriptor, perm, handle, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, wiced_hci_gatt_db_gatt_db_descriptor, uuid, perm, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_set_advert_data_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, CALLBACK, FIRST, wiced_hci_gatt_db_gatt_db_set_advert_data, p_data, p_data, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, wiced_hci_gatt_db_gatt_db_set_advert_data, size, p_data, 0),
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_db_init_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t wiced_hci_gatt_db_gatt_start_stop_advert_fields[2] = {
    PB_FIELD(  1, BOOL    , SINGULAR, STATIC  , FIRST, wiced_hci_gatt_db_gatt_start_stop_advert, start, start, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */