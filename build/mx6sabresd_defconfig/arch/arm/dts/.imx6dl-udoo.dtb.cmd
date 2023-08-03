cmd_arch/arm/dts/imx6dl-udoo.dtb := mkdir -p arch/arm/dts/ ; (cat /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6dl-udoo.dts; ) > arch/arm/dts/.imx6dl-udoo.dtb.pre.tmp;  gcc  -isystem/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/include -E -Wp,-MD,arch/arm/dts/.imx6dl-udoo.dtb.d.pre.tmp -nostdinc -Iinclude  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include    -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include -include /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/include -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include -D__ASSEMBLY__ -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/dts/.imx6dl-udoo.dtb.dts.tmp arch/arm/dts/.imx6dl-udoo.dtb.pre.tmp ; ./scripts/dtc/dtc -O dtb -o arch/arm/dts/imx6dl-udoo.dtb -b 0 -i /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/ -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-graph_port -Wno-unique_unit_address -Wno-simple_bus_reg -Wno-pci_device_reg -Wno-pci_bridge -Wno-pci_device_bus_num  -a 0x8 -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-graph_port -Wno-unique_unit_address -Wno-simple_bus_reg -Wno-pci_device_reg -Wno-pci_bridge -Wno-pci_device_bus_num  -d arch/arm/dts/.imx6dl-udoo.dtb.d.dtc.tmp arch/arm/dts/.imx6dl-udoo.dtb.dts.tmp || (echo "Check /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/build/mx6sabresd_defconfig/arch/arm/dts/.imx6dl-udoo.dtb.pre.tmp for errors" && false) ; sed "s:arch/arm/dts/.imx6dl-udoo.dtb.pre.tmp:/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6dl-udoo.dts:" arch/arm/dts/.imx6dl-udoo.dtb.d.pre.tmp arch/arm/dts/.imx6dl-udoo.dtb.d.dtc.tmp > arch/arm/dts/.imx6dl-udoo.dtb.d

source_arch/arm/dts/imx6dl-udoo.dtb := /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6dl-udoo.dts

deps_arch/arm/dts/imx6dl-udoo.dtb := \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
    $(wildcard include/config/spl/.h) \
    $(wildcard include/config/tpl/.h) \
    $(wildcard include/config/tools/.h) \
    $(wildcard include/config/tpl/build.h) \
    $(wildcard include/config/vpl/build.h) \
    $(wildcard include/config/spl/build.h) \
    $(wildcard include/config/tools/foo.h) \
    $(wildcard include/config/spl/foo.h) \
    $(wildcard include/config/tpl/foo.h) \
    $(wildcard include/config/vpl/foo.h) \
    $(wildcard include/config/option.h) \
    $(wildcard include/config/acme.h) \
    $(wildcard include/config/spl/acme.h) \
    $(wildcard include/config/tpl/acme.h) \
    $(wildcard include/config/if/enabled/int.h) \
    $(wildcard include/config/int/option.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6dl.dtsi \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/interrupt-controller/irq.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6dl-pinfunc.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6qdl.dtsi \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/clock/imx6qdl-clock.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/input/input.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/input/linux-event-codes.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/interrupt-controller/arm-gic.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/dts/imx6qdl-udoo.dtsi \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dt-bindings/gpio/gpio.h \

arch/arm/dts/imx6dl-udoo.dtb: $(deps_arch/arm/dts/imx6dl-udoo.dtb)

$(deps_arch/arm/dts/imx6dl-udoo.dtb):
