cmd_spl/arch/arm/lib/crt0_arm_efi.o := arm-poky-linux-gnueabi-gcc  --sysroot=/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot -Wp,-MD,spl/arch/arm/lib/.crt0_arm_efi.o.d -nostdinc -isystem /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/bin/arm-poky-linux-gnueabi/../../lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/11.3.0/include -Ispl/include -Iinclude  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include    -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include -include /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h -D__KERNEL__ -D__UBOOT__ -DCONFIG_SPL_BUILD -D__ASSEMBLY__ -fno-PIE -g -DCONFIG_THUMB2_KERNEL -D__ARM__ -Wa,-mimplicit-it=always -mthumb -mthumb-interwork -mabi=aapcs-linux -mno-unaligned-access -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -mgeneral-regs-only -pipe -march=armv7-a -D__LINUX_ARM_ARCH__=7 -mtune=generic-armv7-a  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/mach-imx/include   -c -o spl/arch/arm/lib/crt0_arm_efi.o /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/lib/crt0_arm_efi.S

source_spl/arch/arm/lib/crt0_arm_efi.o := /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/lib/crt0_arm_efi.S

deps_spl/arch/arm/lib/crt0_arm_efi.o := \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
    $(wildcard include/config/spl/.h) \
    $(wildcard include/config/tpl/.h) \
    $(wildcard include/config/tools/.h) \
    $(wildcard include/config/tpl/build.h) \
    $(wildcard include/config/vpl/build.h) \
    $(wildcard include/config/spl/build.h) \
    $(wildcard include/config/spl/foo.h) \
    $(wildcard include/config/tools/foo.h) \
    $(wildcard include/config/tpl/foo.h) \
    $(wildcard include/config/vpl/foo.h) \
    $(wildcard include/config/spl/option.h) \
    $(wildcard include/config/spl/acme.h) \
    $(wildcard include/config/acme.h) \
    $(wildcard include/config/tpl/acme.h) \
    $(wildcard include/config/if/enabled/int.h) \
    $(wildcard include/config/spl/int/option.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/pe.h \

spl/arch/arm/lib/crt0_arm_efi.o: $(deps_spl/arch/arm/lib/crt0_arm_efi.o)

$(deps_spl/arch/arm/lib/crt0_arm_efi.o):
