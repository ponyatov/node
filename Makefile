all: vm

emul: vm/bin.bin
vm/bin.bin:
	cd vm ; $(MAKE)
