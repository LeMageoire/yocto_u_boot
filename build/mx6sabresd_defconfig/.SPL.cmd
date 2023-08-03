cmd_SPL := ./tools/mkimage -n spl/u-boot-spl.cfgout -T imximage -e 0x00908000 -d spl/u-boot-spl.bin SPL >SPL.log  && cat SPL.log
