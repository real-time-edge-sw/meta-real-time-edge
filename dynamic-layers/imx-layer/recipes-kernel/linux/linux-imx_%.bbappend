
KERNEL_SRC_rt-edge = "git://bitbucket.sw.nxp.com/dnind/industry-linux.git;protocol=ssh"
SRCBRANCH_rt-edge = "linux_5.10.y"
SRCREV_rt-edge = "eff6b3ede72b17edd1244209619078a39e32b9d3"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
SRC_URI_append_rt-edge = " \
    file://linux-rt.config \
    file://linux-imx8.config \
    file://linux-wifi.config \
    file://linux-baremetal.config \
    file://linux-selinux.config \
    file://linux-fec.config \
"

do_configure_prepend_rt-edge() {
    mkdir -p ${WORKDIR}/source-date-epoch
    date '+%s' > ${WORKDIR}/source-date-epoch/__source_date_epoch.txt
}
