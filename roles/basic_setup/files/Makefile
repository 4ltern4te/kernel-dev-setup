obj-m+=hello_world.o

KERNEL_DIR = $(shell echo ${KERNEL})

ifneq ($(KERNEL_DIR),)
	ALL = make -C $(KERNEL_DIR) M=$(PWD) modules
	CLEAN = make -C $(KERNEL_DIR) M=$(PWD) modules
else
	ALL = make -C /usr/src/kernels/$(shell uname -r)/ M=$(PWD) modules
	CLEAN = make -C /usr/src/kernels/$(shell uname -r)/ M=$(PWD) clean
endif

all:
	$(ALL)
clean:
	$(CLEAN)
