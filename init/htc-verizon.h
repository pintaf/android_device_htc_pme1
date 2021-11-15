/* props/verizon: VERIZON WWE: VZW__001 */
static bool is_variant_verizon(std::string bootcid) {
    if (bootcid == "VZW__001") return true;
    return false;
}

static const char *htc_verizon_properties =
    "ro.telephony.default_network=10\n"
    "ro.cdma.home.operator.alpha=Verizon\n"
    "ro.cdma.home.operator.numeric=310012\n"
    "ro.telephony.ipv6_capability=1\n"
    "ro.ril.oem.ecclist=911,*911,#911\n"
    "ro.ril.enable.a52=0\n"
    "ro.ril.enable.a53=1\n"
    "ro.ril.enable.dtm=0\n"
    "ro.ril.enable.gea3=1\n"
    "ro.ril.gprsclass=12\n"
    "ro.ril.enable.managed.roaming=1\n"
    "ro.ril.enable.sdr=0\n"
    "ro.ril.enable.r8fd=1\n"
    "ro.ril.oem.show.act=0\n"
    "ro.ril.set.mtusize=1428\n"
    "ro.ril.air.enabled=0\n"
    "ro.ril.gsm.to.lte.blind.redir=0\n"
    "ro.ril.roaming_lte.plmn=302220,302610,45400,45402,45410,45418,26201\n"
    "ro.ril.wp.feature=1\n"
    "ro.cdma.data_retry_config=max_retries=infinite,0,0,60000,120000,480000,900000\n"
    "ro.gsm.data_retry_config=max_retries=infinite,0,0,60000,120000,480000,900000\n"
    "ro.gsm.2nd_data_retry_config=max_retries=infinite,0,0,60000,120000,480000,900000\n"
    "ro.ril.pdpnumber.policy.roaming=3\n"
    "ro.ril.hsxpa=4\n"
    "ro.ril.hsdpa.category=24\n"
    "ro.ril.hsupa.category=6\n"
    "ro.ril.disable.cpc=1\n"
    "ro.ril.att.feature=0\n"
    "ro.ril.vzw.feature=1\n"
    "ro.config.svlte1x=true\n"
    "ro.ril.radio.svn=1\n"
    "ro.ril.def.agps.mode=1\n"
    "ro.phone.save_timer=10000\n"
    "ro.ril.fast.dormancy.cdma.rule=0\n"
    "persist.radio.sib16_support=1\n"
    "ro.phone.vmnumber=*86\n"
    "telephony.lteOnCdmaDevice=1\n"
    "persist.rild.nitz_plmn=\n"
    "persist.rild.nitz_long_ons_0=\n"
    "persist.rild.nitz_long_ons_1=\n"
    "persist.rild.nitz_long_ons_2=\n"
    "persist.rild.nitz_long_ons_3=\n"
    "persist.rild.nitz_short_ons_0=\n"
    "persist.rild.nitz_short_ons_1=\n"
    "persist.rild.nitz_short_ons_2=\n"
    "persist.rild.nitz_short_ons_3=\n"
    "ril.subscription.types=NV,RUIM\n"
    "telephony.lteOnCdmaDevice=1\n"
    "telephony.lteOnCdmaDevice=0\n"
    "persist.radio.fill_eons=1\n"
    "persist.igps.sensor=on\n"
    "persist.radio.custom_ecc=1\n"
    "persist.radio.VT_ENABLE=1\n"
    "persist.radio.VT_HYBRID_ENABLE=1\n"
    "persist.radio.ROTATION_ENABLE=1\n"
    "persist.radio.RATE_ADAPT_ENABLE=1\n"
    "persist.radio.videopause.mode=1\n"
    "persist.radio.apm_sim_not_pwdn=0\n"
    "persist.radio.apm_mdm_not_pwdn=1\n"
    "persist.radio.cs_srv_type=1\n"
    "ro.telephony.default_network=10\n"
    "persist.radio.snapshot_timer=0\n"
    "telephony.lteOnCdmaDevice=1\n"
    "ro.gps.agps_provider=1\n"
    "vendor.rild.libpath=/system/vendor/lib64/libril-qc-qmi-1-cdma.so\n"
    "rild.vendor.libpath=/system/vendor/lib64/libril-qc-qmi-1-cdma.so\n"
;
