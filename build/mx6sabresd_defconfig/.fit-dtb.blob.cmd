cmd_fit-dtb.blob := ./tools/mkimage -f auto -A arm -T firmware -C none -O u-boot -a 0 -e 0 -E -b arch/arm/dts/imx6q-sabresd.dtb -b arch/arm/dts/imx6qp-sabresd.dtb -b arch/arm/dts/imx6dl-sabresd.dtb -d /dev/null -B 0x8 -d dts/dt.dtb fit-dtb.blob >/dev/null  && cat /dev/null
