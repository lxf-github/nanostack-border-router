/*
 * Copyright (c) 2017 ARM Limited. All rights reserved.
 */

#ifndef _THREAD_BBR_EXT_
#define _THREAD_BBR_EXT_

#ifdef __cplusplus
extern "C" {
#endif

#if MBED_CONF_APP_THREAD_BBR_EXTENSION == 1

#include "../../thread_bbr_extension/thread_bbr_extension.h"

#else

#define thread_bbr_extension_mesh_interface_updated_ntf(thread_interface_id);
#define thread_bbr_extension_bb_interface_updated_ntf(bb_interface_id);
#define thread_bbr_extension_start(thread_interface_id, bb_interface_id);

/* mDNS, these can be removed once mDNS is available in MBED-OS 5.5(?) */
#define thread_border_router_mdns_responder_stop();
#define thread_border_router_mdns_responder_start(interface_id, eth_interface_id, instance_name);

#endif // MBED_CONF_APP_THREAD_BBR_EXTENSION

#ifdef __cplusplus
}
#endif
#endif /* _THREAD_BBR_EXT_ */

