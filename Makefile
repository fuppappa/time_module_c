DROID_KERNEL_DIR=/home/yfujeida/mydroid/kernel/msm
KERNEL_DIR=/usr/src/linux-headers-4.4.0-127-generic
obj-m += timemod.o
PWD := $(shell pwd)
VERBOSE = 0
timemod-objs := time.o
ANDROID_CSET = ARCH=arm CROSS_COMPILE=arm-eabi- 


default:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) KBUILD_VERBOSE=$(VERBOSE) modules


clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
