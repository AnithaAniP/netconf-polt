/*
*  <:copyright-BRCM:2018-2020:Apache:standard
*  
*   Copyright (c) 2018-2020 Broadcom. All Rights Reserved
*  
*   The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
*  
*   Licensed under the Apache License, Version 2.0 (the "License");
*   you may not use this file except in compliance with the License.
*   You may obtain a copy of the License at
*  
*       http://www.apache.org/licenses/LICENSE-2.0
*  
*   Unless required by applicable law or agreed to in writing, software
*   distributed under the License is distributed on an "AS IS" BASIS,
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*   See the License for the specific language governing permissions and
*   limitations under the License.
*  
*  :>
*/
#include "omci_stack_model_funcs.h"

/* GAL Ethernet Profile */
bcmos_bool bcm_omci_gal_eth_prof_cfg_data_bounds_check(const bcm_omci_gal_eth_prof_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_gal_eth_prof_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_gal_eth_prof_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_gal_eth_prof_cfg_data_set_default(bcm_omci_gal_eth_prof_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_gal_eth_prof_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* GEM Interworking Termination Point */
bcmos_bool bcm_omci_gem_iw_tp_cfg_data_bounds_check(const bcm_omci_gem_iw_tp_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_gem_iw_tp_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_gem_iw_tp_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_gem_iw_tp_cfg_data_set_default(bcm_omci_gem_iw_tp_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_gem_iw_tp_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* GEM Port Network CTP */
bcmos_bool bcm_omci_gem_port_net_ctp_cfg_data_bounds_check(const bcm_omci_gem_port_net_ctp_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_gem_port_net_ctp_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_gem_port_net_ctp_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_gem_port_net_ctp_cfg_data_set_default(bcm_omci_gem_port_net_ctp_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_gem_port_net_ctp_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* IEEE 802.1p mapper service profile */
bcmos_bool bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_data_bounds_check(const bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_ieee_8021_p_mapper_svc_prof_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_data_set_default(bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_ieee_8021_p_mapper_svc_prof_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* MAC Bridge Port Configuration Data */
bcmos_bool bcm_omci_mac_bridge_port_config_data_cfg_data_bounds_check(const bcm_omci_mac_bridge_port_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_mac_bridge_port_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_mac_bridge_port_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_mac_bridge_port_config_data_cfg_data_set_default(bcm_omci_mac_bridge_port_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_mac_bridge_port_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* MAC Bridge Service Profile */
bcmos_bool bcm_omci_mac_bridge_svc_prof_cfg_data_bounds_check(const bcm_omci_mac_bridge_svc_prof_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_mac_bridge_svc_prof_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_mac_bridge_svc_prof_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_mac_bridge_svc_prof_cfg_data_set_default(bcm_omci_mac_bridge_svc_prof_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_mac_bridge_svc_prof_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* VLAN Tagging Filter Data */
bcmos_bool bcm_omci_vlan_tag_filter_data_cfg_data_bounds_check(const bcm_omci_vlan_tag_filter_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_vlan_tag_filter_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_vlan_tag_filter_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_vlan_tag_filter_data_cfg_data_set_default(bcm_omci_vlan_tag_filter_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_vlan_tag_filter_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* T-CONT */
bcmos_bool bcm_omci_tcont_cfg_data_bounds_check(const bcm_omci_tcont_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_tcont_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_tcont_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_tcont_cfg_data_set_default(bcm_omci_tcont_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_tcont_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Extended VLAN Tagging Operation Configuration Data */
bcmos_bool bcm_omci_ext_vlan_tag_oper_config_data_cfg_data_bounds_check(const bcm_omci_ext_vlan_tag_oper_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_ext_vlan_tag_oper_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_ext_vlan_tag_oper_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_ext_vlan_tag_oper_config_data_cfg_data_set_default(bcm_omci_ext_vlan_tag_oper_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_ext_vlan_tag_oper_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* priority queue-G */
bcmos_bool bcm_omci_priority_queue_g_cfg_data_bounds_check(const bcm_omci_priority_queue_g_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_priority_queue_g_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_priority_queue_g_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_priority_queue_g_cfg_data_set_default(bcm_omci_priority_queue_g_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_priority_queue_g_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Multicast GEM interworking termination point */
bcmos_bool bcm_omci_mcast_gem_iw_tp_cfg_data_bounds_check(const bcm_omci_mcast_gem_iw_tp_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_mcast_gem_iw_tp_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_mcast_gem_iw_tp_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_mcast_gem_iw_tp_cfg_data_set_default(bcm_omci_mcast_gem_iw_tp_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_mcast_gem_iw_tp_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Multicast Operations Profile */
bcmos_bool bcm_omci_mcast_operations_profile_cfg_data_bounds_check(const bcm_omci_mcast_operations_profile_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_mcast_operations_profile_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_mcast_operations_profile_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_mcast_operations_profile_cfg_data_set_default(bcm_omci_mcast_operations_profile_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_mcast_operations_profile_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Multicast subscriber config info */
bcmos_bool bcm_omci_mcast_subscriber_config_info_cfg_data_bounds_check(const bcm_omci_mcast_subscriber_config_info_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_mcast_subscriber_config_info_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_mcast_subscriber_config_info_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_mcast_subscriber_config_info_cfg_data_set_default(bcm_omci_mcast_subscriber_config_info_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_mcast_subscriber_config_info_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* PPTP Ethernet UNI */
bcmos_bool bcm_omci_pptp_eth_uni_cfg_data_bounds_check(const bcm_omci_pptp_eth_uni_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_pptp_eth_uni_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_pptp_eth_uni_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_pptp_eth_uni_cfg_data_set_default(bcm_omci_pptp_eth_uni_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_pptp_eth_uni_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Virtual Ethernet Interface Point */
bcmos_bool bcm_omci_virtual_eth_intf_point_cfg_data_bounds_check(const bcm_omci_virtual_eth_intf_point_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_virtual_eth_intf_point_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_virtual_eth_intf_point_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_virtual_eth_intf_point_cfg_data_set_default(bcm_omci_virtual_eth_intf_point_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_virtual_eth_intf_point_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ONU data */
bcmos_bool bcm_omci_onu_data_cfg_data_bounds_check(const bcm_omci_onu_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_onu_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_onu_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_onu_data_cfg_data_set_default(bcm_omci_onu_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_onu_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ONU-G (9.1.1) */
bcmos_bool bcm_omci_onu_g_cfg_data_bounds_check(const bcm_omci_onu_g_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_onu_g_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_onu_g_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_onu_g_cfg_data_set_default(bcm_omci_onu_g_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_onu_g_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ONU2-G (9.1.2) */
bcmos_bool bcm_omci_onu2_g_cfg_data_bounds_check(const bcm_omci_onu2_g_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_onu2_g_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_onu2_g_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_onu2_g_cfg_data_set_default(bcm_omci_onu2_g_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_onu2_g_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Software image (9.1.4) */
bcmos_bool bcm_omci_sw_image_cfg_data_bounds_check(const bcm_omci_sw_image_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_sw_image_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_sw_image_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_sw_image_cfg_data_set_default(bcm_omci_sw_image_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_sw_image_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ANI-G (9.2.1) */
bcmos_bool bcm_omci_ani_g_cfg_data_bounds_check(const bcm_omci_ani_g_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_ani_g_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_ani_g_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_ani_g_cfg_data_set_default(bcm_omci_ani_g_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_ani_g_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* GEM Port Network CTP PM(9.2.13) */
bcmos_bool bcm_omci_gem_port_net_ctp_pm_cfg_data_bounds_check(const bcm_omci_gem_port_net_ctp_pm_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_gem_port_net_ctp_pm_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_gem_port_net_ctp_pm_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_gem_port_net_ctp_pm_cfg_data_set_default(bcm_omci_gem_port_net_ctp_pm_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_gem_port_net_ctp_pm_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ETH FRAME UPSTREAM PM(9.3.30) */
bcmos_bool bcm_omci_eth_frame_upstream_pm_cfg_data_bounds_check(const bcm_omci_eth_frame_upstream_pm_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_eth_frame_upstream_pm_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_eth_frame_upstream_pm_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_eth_frame_upstream_pm_cfg_data_set_default(bcm_omci_eth_frame_upstream_pm_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_eth_frame_upstream_pm_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* ETH FRAME DOWNSTREAM PM(9.3.31) */
bcmos_bool bcm_omci_eth_frame_downstream_pm_cfg_data_bounds_check(const bcm_omci_eth_frame_downstream_pm_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_eth_frame_downstream_pm_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_eth_frame_downstream_pm_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_eth_frame_downstream_pm_cfg_data_set_default(bcm_omci_eth_frame_downstream_pm_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_eth_frame_downstream_pm_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* FEC PERFORMANCE PM DATA(9.2.9) */
bcmos_bool bcm_omci_fec_pm_cfg_data_bounds_check(const bcm_omci_fec_pm_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_fec_pm_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_fec_pm_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_fec_pm_cfg_data_set_default(bcm_omci_fec_pm_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_fec_pm_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* XG-PON TC PERFORMANCE PM DATA(9.2.15) */
bcmos_bool bcm_omci_xgpon_tc_pm_cfg_data_bounds_check(const bcm_omci_xgpon_tc_pm_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_xgpon_tc_pm_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_xgpon_tc_pm_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_xgpon_tc_pm_cfg_data_set_default(bcm_omci_xgpon_tc_pm_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_xgpon_tc_pm_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* IP Host Config Data (9.4.1) */
bcmos_bool bcm_omci_ip_host_config_data_cfg_data_bounds_check(const bcm_omci_ip_host_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_ip_host_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_ip_host_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_ip_host_config_data_cfg_data_set_default(bcm_omci_ip_host_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_ip_host_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* VoIP Line Status (9.9.11) */
bcmos_bool bcm_omci_voip_line_status_cfg_data_bounds_check(const bcm_omci_voip_line_status_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_voip_line_status_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_voip_line_status_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_voip_line_status_cfg_data_set_default(bcm_omci_voip_line_status_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_voip_line_status_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* VoIP Line Status (9.9.11) */
bcmos_bool bcm_omci_voip_media_profile_cfg_data_bounds_check(const bcm_omci_voip_media_profile_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_voip_media_profile_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_voip_media_profile_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_voip_media_profile_cfg_data_set_default(bcm_omci_voip_media_profile_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_voip_media_profile_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* SIP User Data (9.9.2) */
bcmos_bool bcm_omci_sip_user_data_cfg_data_bounds_check(const bcm_omci_sip_user_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_sip_user_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_sip_user_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_sip_user_data_cfg_data_set_default(bcm_omci_sip_user_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_sip_user_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* SIP Agent Config Data (9.9.3) */
bcmos_bool bcm_omci_sip_agent_config_data_cfg_data_bounds_check(const bcm_omci_sip_agent_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_sip_agent_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_sip_agent_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_sip_agent_config_data_cfg_data_set_default(bcm_omci_sip_agent_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_sip_agent_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Network Address (9.12.3) */
bcmos_bool bcm_omci_network_address_cfg_data_bounds_check(const bcm_omci_network_address_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_network_address_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_network_address_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_network_address_cfg_data_set_default(bcm_omci_network_address_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_network_address_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Large String (9.12.5) */
bcmos_bool bcm_omci_large_string_cfg_data_bounds_check(const bcm_omci_large_string_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_large_string_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_large_string_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_large_string_cfg_data_set_default(bcm_omci_large_string_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_large_string_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Authentication Security Method (9.12.4) */
bcmos_bool bcm_omci_authentication_security_method_cfg_data_bounds_check(const bcm_omci_authentication_security_method_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_authentication_security_method_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_authentication_security_method_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_authentication_security_method_cfg_data_set_default(bcm_omci_authentication_security_method_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_authentication_security_method_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Voice Service Profile (9.9.6) */
bcmos_bool bcm_omci_voice_service_profile_cfg_data_bounds_check(const bcm_omci_voice_service_profile_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_voice_service_profile_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_voice_service_profile_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_voice_service_profile_cfg_data_set_default(bcm_omci_voice_service_profile_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_voice_service_profile_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* VoIP config data (9.9.18) */
bcmos_bool bcm_omci_voip_config_data_cfg_data_bounds_check(const bcm_omci_voip_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_voip_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_voip_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_voip_config_data_cfg_data_set_default(bcm_omci_voip_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_voip_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* VoIP voice CTP (9.9.4) */
bcmos_bool bcm_omci_voip_voice_ctp_cfg_data_bounds_check(const bcm_omci_voip_voice_ctp_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_voip_voice_ctp_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_voip_voice_ctp_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_voip_voice_ctp_cfg_data_set_default(bcm_omci_voip_voice_ctp_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_voip_voice_ctp_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* TCP/UDP config data (9.4.3) */
bcmos_bool bcm_omci_tcp_udp_config_data_cfg_data_bounds_check(const bcm_omci_tcp_udp_config_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_tcp_udp_config_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_tcp_udp_config_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_tcp_udp_config_data_cfg_data_set_default(bcm_omci_tcp_udp_config_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_tcp_udp_config_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Network dial plan table (9.9.10) */
bcmos_bool bcm_omci_network_dial_plan_table_cfg_data_bounds_check(const bcm_omci_network_dial_plan_table_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_network_dial_plan_table_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_network_dial_plan_table_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_network_dial_plan_table_cfg_data_set_default(bcm_omci_network_dial_plan_table_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_network_dial_plan_table_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* RTP profile data (9.9.7) */
bcmos_bool bcm_omci_rtp_profile_data_cfg_data_bounds_check(const bcm_omci_rtp_profile_data_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_rtp_profile_data_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_rtp_profile_data_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_rtp_profile_data_cfg_data_set_default(bcm_omci_rtp_profile_data_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_rtp_profile_data_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Physical path termination point POTS UNI (9.9.1) */
bcmos_bool bcm_omci_pots_uni_cfg_data_bounds_check(const bcm_omci_pots_uni_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_pots_uni_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_pots_uni_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_pots_uni_cfg_data_set_default(bcm_omci_pots_uni_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_pots_uni_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Circuit pack (9.1.6) */
bcmos_bool bcm_omci_circuit_pack_cfg_data_bounds_check(const bcm_omci_circuit_pack_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_circuit_pack_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_circuit_pack_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_circuit_pack_cfg_data_set_default(bcm_omci_circuit_pack_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_circuit_pack_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

/* Enhanced Security Control (9.13.11) */
bcmos_bool bcm_omci_enhanced_security_control_cfg_data_bounds_check(const bcm_omci_enhanced_security_control_cfg_data *this, bcm_omci_presence_mask fields_present, bcm_omci_enhanced_security_control_cfg_id *failed_prop)
{
    return BCMOS_TRUE;
}

bcmos_bool bcm_omci_enhanced_security_control_key_bounds_check(const bcm_omci_me_key *this, bcm_omci_presence_mask fields_present, bcm_omci_me_key_id *failed_prop)
{
    return BCMOS_TRUE;
}

void bcm_omci_enhanced_security_control_cfg_data_set_default(bcm_omci_enhanced_security_control_cfg_data *this, bcm_omci_presence_mask fields_present)
{
}

bcmos_bool bcm_omci_enhanced_security_control_cfg_actions_check(bcm_omci_msg_type omci_msg_type)
{
    BUG_ON(BCM_OMCI_MSG_TYPE__BEGIN > omci_msg_type || BCM_OMCI_MSG_TYPE__END <= omci_msg_type);

    return BCMOS_TRUE;
}

