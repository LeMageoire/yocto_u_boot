cmd_spl/common/spl/spl_legacy.o := arm-poky-linux-gnueabi-gcc  --sysroot=/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot -Wp,-MD,spl/common/spl/.spl_legacy.o.d -nostdinc -isystem /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/bin/arm-poky-linux-gnueabi/../../lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/11.3.0/include -Ispl/include -Iinclude  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include    -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include -include /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/common/spl -Ispl/common/spl -D__KERNEL__ -D__UBOOT__ -DCONFIG_SPL_BUILD -Wall -Wstrict-prototypes -Wno-format-security -fno-builtin -ffreestanding -std=gnu11 -fshort-wchar -fno-strict-aliasing -fno-PIE -Os -fno-stack-protector -fno-delete-null-pointer-checks -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-maybe-uninitialized -fmacro-prefix-map=/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/= -g -fstack-usage -Wno-format-nonliteral -Wno-address-of-packed-member -Wno-unused-but-set-variable -Werror=date-time -Wno-packed-not-aligned -ffunction-sections -fdata-sections -fno-stack-protector -D__ARM__ -Wa,-mimplicit-it=always -mthumb -mthumb-interwork -mabi=aapcs-linux -mno-unaligned-access -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -mgeneral-regs-only -pipe -march=armv7-a -D__LINUX_ARM_ARCH__=7 -mtune=generic-armv7-a  -I/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/mach-imx/include    -DKBUILD_BASENAME='"spl_legacy"'  -DKBUILD_MODNAME='"spl_legacy"' -c -o spl/common/spl/spl_legacy.o /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/common/spl/spl_legacy.c

source_spl/common/spl/spl_legacy.o := /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/common/spl/spl_legacy.c

deps_spl/common/spl/spl_legacy.o := \
    $(wildcard include/config/spl/legacy/image/crc/check.h) \
    $(wildcard include/config/spl/lzma.h) \
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
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/common.h \
  include/config.h \
    $(wildcard include/config/boarddir.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/config_uncmd_spl.h \
    $(wildcard include/config/spl/dm.h) \
    $(wildcard include/config/dm/serial.h) \
    $(wildcard include/config/dm/i2c.h) \
    $(wildcard include/config/dm/stdio.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/configs/mx6sabresd.h \
    $(wildcard include/config/spl.h) \
    $(wildcard include/config/mxc/uart/base.h) \
    $(wildcard include/config/sys/fsl/usdhc/num.h) \
    $(wildcard include/config/cmd/pci.h) \
    $(wildcard include/config/pcie/imx/perst/gpio.h) \
    $(wildcard include/config/pcie/imx/power/gpio.h) \
    $(wildcard include/config/power/pfuze100.h) \
    $(wildcard include/config/power/pfuze100/i2c/addr.h) \
    $(wildcard include/config/cmd/usb.h) \
    $(wildcard include/config/mxc/usb/portsc.h) \
    $(wildcard include/config/mxc/usb/flags.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/configs/imx6_spl.h \
    $(wildcard include/config/spl/mmc.h) \
    $(wildcard include/config/sys/monitor/len.h) \
    $(wildcard include/config/spl/sata.h) \
    $(wildcard include/config/sys/sata/fat/boot/partition.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/configs/mx6sabre_common.h \
    $(wildcard include/config/sys/fsl/esdhc/addr.h) \
    $(wildcard include/config/support/emmc/boot.h) \
    $(wildcard include/config/preboot.h) \
    $(wildcard include/config/extra/env/settings.h) \
    $(wildcard include/config/sys/load/addr.h) \
    $(wildcard include/config/sys/mmc/env/dev.h) \
    $(wildcard include/config/sys/sdram/base.h) \
    $(wildcard include/config/sys/init/ram/addr.h) \
    $(wildcard include/config/sys/init/ram/size.h) \
    $(wildcard include/config/imx/hdmi.h) \
    $(wildcard include/config/imx/video/skip.h) \
    $(wildcard include/config/usbd/hs.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/stringify.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/configs/mx6_common.h \
    $(wildcard include/config/mx6ul.h) \
    $(wildcard include/config/mx6ull.h) \
    $(wildcard include/config/sc/timer/clk.h) \
    $(wildcard include/config/sys/l2cache/off.h) \
    $(wildcard include/config/sys/l2/pl310.h) \
    $(wildcard include/config/sys/pl310/base.h) \
    $(wildcard include/config/mxc/gpt/hclk.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/sizes.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/const.h \
  include/asm/arch/imx-regs.h \
    $(wildcard include/config/mx6sl.h) \
    $(wildcard include/config/mx6sx.h) \
    $(wildcard include/config/mx6sll.h) \
    $(wildcard include/config/sys/fsl/sec/offset.h) \
    $(wildcard include/config/sys/fsl/sec/addr.h) \
    $(wildcard include/config/sys/fsl/jr0/offset.h) \
    $(wildcard include/config/sys/fsl/jr0/addr.h) \
    $(wildcard include/config/mx6dl.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/mach-imx/regs-lcdif.h \
    $(wildcard include/config/mx28.h) \
    $(wildcard include/config/mx7.h) \
    $(wildcard include/config/mx7ulp.h) \
    $(wildcard include/config/imx8m.h) \
    $(wildcard include/config/imxrt.h) \
    $(wildcard include/config/mx23.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/mach-imx/regs-common.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/posix_types.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/stddef.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/spl/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/compiler_attributes.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/posix_types.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/types.h \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/phys/64bit.h) \
    $(wildcard include/config/dma/addr/t/64bit.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/int-ll64.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/11.3.0/include/stdbool.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/bitops.h \
    $(wildcard include/config/sandbox.h) \
    $(wildcard include/config/sandbox/bits/per/long.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/bitsperlong.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kernel.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/printk.h \
    $(wildcard include/config/loglevel.h) \
    $(wildcard include/config/log.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/log.h \
    $(wildcard include/config/log/max/level.h) \
    $(wildcard include/config/spl/log.h) \
    $(wildcard include/config/spl/log/max/level.h) \
    $(wildcard include/config/panic/hang.h) \
    $(wildcard include/config/log/error/return.h) \
    $(wildcard include/config/logf/file.h) \
    $(wildcard include/config/logf/line.h) \
    $(wildcard include/config/logf/func.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/stdio.h \
    $(wildcard include/config/tpl/serial.h) \
    $(wildcard include/config/spl/serial.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/11.3.0/include/stdarg.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linker_lists.h \
    $(wildcard include/config/linker/list/align.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dm/uclass-id.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/list.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/poison.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/bitops.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/bitops/__ffs.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/bitops/__fls.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/bitops/fls.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/bitops/fls64.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/proc-armv/system.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/mach-imx/gpio.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/config.h \
    $(wildcard include/config/arch/ls1021a.h) \
    $(wildcard include/config/fsl/layerscape.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/kconfig.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/config_fallbacks.h \
    $(wildcard include/config/spl/pad/to.h) \
    $(wildcard include/config/spl/max/size.h) \
    $(wildcard include/config/sys/baudrate/table.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/errno.h \
    $(wildcard include/config/errno/str.h) \
    $(wildcard include/config/spl/errno/str.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/errno.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/time.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/typecheck.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/string.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/string.h \
    $(wildcard include/config/spl/use/arch/memcpy.h) \
    $(wildcard include/config/spl/use/arch/memmove.h) \
    $(wildcard include/config/spl/use/arch/memset.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/linux_string.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/u-boot.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/u-boot.h \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/mpc8xx.h) \
    $(wildcard include/config/e500.h) \
    $(wildcard include/config/mpc86xx.h) \
    $(wildcard include/config/m68k.h) \
    $(wildcard include/config/mpc83xx.h) \
    $(wildcard include/config/extra/clock.h) \
    $(wildcard include/config/nr/dram/banks.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/u-boot-arm.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/vsprintf.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/image.h \
    $(wildcard include/config/lmb.h) \
    $(wildcard include/config/timestamp.h) \
    $(wildcard include/config/cmd/date.h) \
    $(wildcard include/config/fit/signature.h) \
    $(wildcard include/config/spl/fit/signature.h) \
    $(wildcard include/config/fit/cipher.h) \
    $(wildcard include/config/spl/fit/cipher.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/compiler.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/recipe-sysroot-native/usr/lib/arm-poky-linux-gnueabi/gcc/arm-poky-linux-gnueabi/11.3.0/include/stddef.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/byteorder.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/byteorder/little_endian.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/byteorder/swab.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/byteorder/generic.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lmb.h \
    $(wildcard include/config/lmb/use/max/regions.h) \
    $(wildcard include/config/lmb/max/regions.h) \
    $(wildcard include/config/lmb/memory/regions.h) \
    $(wildcard include/config/lmb/reserved/regions.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/command.h \
    $(wildcard include/config/sys/help/cmd/width.h) \
    $(wildcard include/config/sys/longhelp.h) \
    $(wildcard include/config/auto/complete.h) \
    $(wildcard include/config/cmd/run.h) \
    $(wildcard include/config/cmd/memory.h) \
    $(wildcard include/config/cmd/i2c.h) \
    $(wildcard include/config/cmd/itest.h) \
    $(wildcard include/config/cmd/setexpr.h) \
    $(wildcard include/config/cmd/bootd.h) \
    $(wildcard include/config/cmd/bootm.h) \
    $(wildcard include/config/cmd/nvedit/efi.h) \
    $(wildcard include/config/cmdline.h) \
    $(wildcard include/config/needs/manual/reloc.h) \
    $(wildcard include/config/sys/maxargs.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/env.h \
    $(wildcard include/config/env/import/fdt.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/compiler.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/hash.h \
    $(wildcard include/config/spl/sha384.h) \
    $(wildcard include/config/spl/sha512.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/libfdt.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/libfdt_env.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/../../scripts/dtc/libfdt/libfdt.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/../../scripts/dtc/libfdt/libfdt_env.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/../../scripts/dtc/libfdt/fdt.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/fdt_support.h \
    $(wildcard include/config/of/libfdt.h) \
    $(wildcard include/config/arch/fixup/fdt/memory.h) \
    $(wildcard include/config/usb/ehci/fsl.h) \
    $(wildcard include/config/usb/xhci/fsl.h) \
    $(wildcard include/config/sys/fsl/sec/compat.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/sys/fdt/pad.h) \
    $(wildcard include/config/of/board/setup.h) \
    $(wildcard include/config/board/rng/seed.h) \
    $(wildcard include/config/of/system/setup.h) \
    $(wildcard include/config/fdt/fixup/partitions.h) \
    $(wildcard include/config/fman/enet.h) \
    $(wildcard include/config/fsl/mc/enet.h) \
    $(wildcard include/config/cmd/pstore.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/abuf.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/pci.h \
    $(wildcard include/config/sys/pci/64bit.h) \
    $(wildcard include/config/dm/pci/compat.h) \
    $(wildcard include/config/mpc85xx.h) \
    $(wildcard include/config/pci/sriov.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/pci_ids.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dm/pci.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/u-boot/hash-checksum.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/u-boot/sha1.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/u-boot/sha256.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/u-boot/sha512.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/malloc.h \
    $(wildcard include/config/spl/sys/malloc/simple.h) \
    $(wildcard include/config/valgrind.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/spl.h \
    $(wildcard include/config/tpl.h) \
    $(wildcard include/config/vpl.h) \
    $(wildcard include/config/spl/load/fit.h) \
    $(wildcard include/config/spl/load/fit/full.h) \
    $(wildcard include/config/spl/text/base.h) \
    $(wildcard include/config/sys/text/base.h) \
    $(wildcard include/config/sys/mmcsd/raw/mode/u/boot/use/partition.h) \
    $(wildcard include/config/sys/uboot/start.h) \
    $(wildcard include/config/spl/panic/on/raw/image.h) \
    $(wildcard include/config/spl/raw/image/support.h) \
    $(wildcard include/config/spl/display/print.h) \
    $(wildcard include/config/spl/libcommon/support.h) \
    $(wildcard include/config/spl/stack/r/malloc/simple/len.h) \
    $(wildcard include/config/spl/board/init.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/binman_sym.h \
    $(wildcard include/config/spl/binman/symbols.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/global_data.h \
    $(wildcard include/config/fsl/esdhc.h) \
    $(wildcard include/config/fsl/esdhc/imx.h) \
    $(wildcard include/config/u/qe.h) \
    $(wildcard include/config/at91family.h) \
    $(wildcard include/config/spl/sys/icache/off.h) \
    $(wildcard include/config/spl/sys/dcache/off.h) \
    $(wildcard include/config/sys/mem/reserve/secure.h) \
    $(wildcard include/config/resv/ram.h) \
    $(wildcard include/config/arch/omap2plus.h) \
    $(wildcard include/config/fsl/lsch3.h) \
    $(wildcard include/config/sys/fsl/has/dp/ddr.h) \
    $(wildcard include/config/arch/imx8.h) \
    $(wildcard include/config/imx/sentinel.h) \
    $(wildcard include/config/lto.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-generic/global_data.h \
    $(wildcard include/config/lcd.h) \
    $(wildcard include/config/dm/video.h) \
    $(wildcard include/config/post.h) \
    $(wildcard include/config/board/types.h) \
    $(wildcard include/config/spl/pre/console/buffer.h) \
    $(wildcard include/config/dm.h) \
    $(wildcard include/config/spl/of/platdata/driver/rt.h) \
    $(wildcard include/config/spl/of/platdata/rt.h) \
    $(wildcard include/config/timer.h) \
    $(wildcard include/config/spl/of/live.h) \
    $(wildcard include/config/spl/multi/dtb/fit.h) \
    $(wildcard include/config/trace.h) \
    $(wildcard include/config/spl/sys/i2c/legacy.h) \
    $(wildcard include/config/spl/sys/malloc/f/len.h) \
    $(wildcard include/config/pci/bootdelay.h) \
    $(wildcard include/config/console/record.h) \
    $(wildcard include/config/bootstage.h) \
    $(wildcard include/config/spl/bloblist.h) \
    $(wildcard include/config/spl/handoff.h) \
    $(wildcard include/config/translation/offset.h) \
    $(wildcard include/config/generate/acpi/table.h) \
    $(wildcard include/config/spl/generate/smbios/table.h) \
    $(wildcard include/config/spl/event.h) \
    $(wildcard include/config/spl/event/dynamic.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/event_internal.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/event.h \
    $(wildcard include/config/spl/event/debug.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/dm/ofnode_decl.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/fdtdec.h \
    $(wildcard include/config/of/embed.h) \
    $(wildcard include/config/of/board.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/membuff.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/build_bug.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/asm-offsets.h \
  spl/include/generated/generic-asm-offsets.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/spl.h \
    $(wildcard include/config/arch/exynos4.h) \
    $(wildcard include/config/arch/exynos5.h) \
    $(wildcard include/config/arch/k3.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/handoff.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/mmc.h \
    $(wildcard include/config/spl/mmc/hs200/support.h) \
    $(wildcard include/config/spl/mmc/uhs/support.h) \
    $(wildcard include/config/spl/dm/mmc.h) \
    $(wildcard include/config/spl/mmc/hs400/es/support.h) \
    $(wildcard include/config/mmc/pwrseq.h) \
    $(wildcard include/config/spl/mmc/hs400/support.h) \
    $(wildcard include/config/dm/mmc.h) \
    $(wildcard include/config/spl/blk.h) \
    $(wildcard include/config/spl/mmc/write.h) \
    $(wildcard include/config/spl/mmc/hw/partitioning.h) \
    $(wildcard include/config/spl/dm/regulator.h) \
    $(wildcard include/config/blk.h) \
    $(wildcard include/config/cmd/bkops/enable.h) \
    $(wildcard include/config/mmc/spi.h) \
    $(wildcard include/config/sys/mmc/env/part.h) \
    $(wildcard include/config/sys/mmc/max/blk/count.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/dma-direction.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/part.h \
    $(wildcard include/config/spl/partition/uuids.h) \
    $(wildcard include/config/partition/type/guid.h) \
    $(wildcard include/config/dos/partition.h) \
    $(wildcard include/config/spl/partitions.h) \
    $(wildcard include/config/spl/fs/ext4.h) \
    $(wildcard include/config/spl/fs/fat.h) \
    $(wildcard include/config/sys/mmcsd/raw/mode/u/boot/partition.h) \
    $(wildcard include/config/spl/efi/partition.h) \
    $(wildcard include/config/spl/dos/partition.h) \
    $(wildcard include/config/partitions.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/blk.h \
    $(wildcard include/config/sys/64bit/lba.h) \
    $(wildcard include/config/lba48.h) \
    $(wildcard include/config/spl/block/cache.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/efi.h \
    $(wildcard include/config/efi/stub/64bit.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/efi/ram/size.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/linux/linkage.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/arch/arm/include/asm/linkage.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/ide.h \
    $(wildcard include/config/sys/ide/maxdevice.h) \
    $(wildcard include/config/sys/ide/maxbus.h) \
    $(wildcard include/config/sys/ata/base/addr.h) \
    $(wildcard include/config/of/ide/fixup.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/uuid.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/part_efi.h \
    $(wildcard include/config/efi/partition/entries/numbers.h) \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/LzmaTypes.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/../../lib/lzma/Types.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/LzmaDec.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/../../lib/lzma/LzmaDec.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/../../lib/lzma/Types.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/LzmaTools.h \
  /home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/include/lzma/../../lib/lzma/LzmaTools.h \

spl/common/spl/spl_legacy.o: $(deps_spl/common/spl/spl_legacy.o)

$(deps_spl/common/spl/spl_legacy.o):
