FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append = " \
	file://0001-ethtool-Update-headers-from-the-kernel.patch \
	file://0002-ethtool-add-support-for-configuring-frame-preemption.patch \
	file://0003-ethtool-add-support-for-configuring-frame-preemption.patch \
	file://0004-ethtool-Add-configure-to-compile-preempt-file.patch \
"
