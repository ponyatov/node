all: vm

vm: vm/bin.bin
vm/bin.bin:
	cd vm ; $(MAKE)
