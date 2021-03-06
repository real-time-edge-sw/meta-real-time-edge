LICENSE = "NXP-Binary-EULA & GPLv2 & BSD-3-Clause"
LIC_FILES_CHKSUM = "file://licenses/EULA.txt;md5=358cdbb1e99e9302cf3abc0152a1ade4 \
                    file://licenses/COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://licenses/BSD-3-Clause;md5=5cc0aa6b0086f08ef02006d8a2679704 \
"

GENAVB_TSN_URL = "git://github.com/NXP/GenAVB_TSN.git;protocol=http"

SRC_URI = "${GENAVB_TSN_URL};nobranch=1 "

SRCREV = "32c2550d163ceb76e21941fb7297f12a18dbe319"

PV = "4.4+git${SRCPV}"

S = "${WORKDIR}/git"

GENAVB_TSN_CONFIG ?= "endpoint_tsn"
GENAVB_TSN_CONFIG_imx8mp-lpddr4-evk = "endpoint_tsn"
GENAVB_TSN_CONFIG_ls1028ardb = "bridge"

GENAVB_TSN_TARGET ?= "linux_imx8"
GENAVB_TSN_TARGET_imx8mp-lpddr4-evk = "linux_imx8"
GENAVB_TSN_TARGET_ls1028ardb = "linux_ls1028"

