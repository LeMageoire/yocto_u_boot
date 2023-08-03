.section .rodata.splash.init,"a"
.balign 16
.global __splash_u_boot_logo_begin
__splash_u_boot_logo_begin:
.incbin "/home/lemageoire/fsl-community-bsp/build-openrex/tmp/work/imx6qdlsabresd-poky-linux-gnueabi/u-boot-fslc/2022.10+gitAUTOINC+cbd7eb17ac-r0/git/drivers/video/u_boot_logo.bmp" 
__splash_u_boot_logo_end:
.global __splash_u_boot_logo_end
.balign 16
