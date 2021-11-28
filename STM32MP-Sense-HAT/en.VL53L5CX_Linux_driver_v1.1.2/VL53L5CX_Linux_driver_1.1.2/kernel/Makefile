obj-m+= stmvl53l5cx.o
stmvl53l5cx-objs+= stmvl53l5cx_module.o stmvl53l5cx_i2c.o
all :
	make -C /home/mpu/Developer-Package/ecosystem-3.0.0/stm32mp1-openstlinux-5.10-dunfell-mp1-21-03-31/sources/arm-ostl-linux-gnueabi/linux-stm32mp-5.10.10-r0/linux-5.10.10  M=$(PWD) modules
clean :
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
#dtb:
#	sudo rm -f /boot/overlays/stmvl53l5cx.dtb
#	dtc -I dts -O dtb -o stmvl53l5cx.dtb stmvl53l5cx.dts
#	sudo cp stmvl53l5cx.dtb /boot/overlays/stmvl53l5cx.dtb
#insert :
#	sudo insmod stmvl53l5cx.ko
#remove :
#	sudo rmmod stmvl53l5cx
