cmd_u-boot-nodtb.bin := arm-poky-linux-gnueabi-objcopy --gap-fill=0xff -j .text -j .secure_text -j .secure_data -j .rodata -j .hash -j .data -j .got -j .got.plt -j __u_boot_list -j .rel.dyn -j .binman_sym_table -j .text_rest -j .dtb.init.rodata -j .efi_runtime -j .efi_runtime_rel -O binary   u-boot u-boot-nodtb.bin
