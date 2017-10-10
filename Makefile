all: emul

emul: emul/log.log
emul/log.log:
	cd emul ; $(MAKE)