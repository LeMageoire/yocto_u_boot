cmd_spl/common/built-in.o :=  rm -f spl/common/built-in.o; arm-poky-linux-gnueabi-ar cDPrsT spl/common/built-in.o spl/common/fdt_support.o spl/common/usb.o spl/common/usb_hub.o spl/common/bouncebuf.o spl/common/console.o spl/common/dlmalloc.o spl/common/malloc_simple.o spl/common/hash.o spl/common/memsize.o spl/common/stdio.o spl/common/cli.o spl/common/command.o spl/common/s_record.o spl/common/xyzModem.o