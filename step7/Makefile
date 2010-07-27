.PHONY: all test clean

all:
	mkdir -p generated
	greg decadence.leg > generated/parser.c
	rock -sourcepath=source decadence.ooc generated/parser.c -outpath=generated -v -g -nolines

test:
	./decadence tests/number.dec
	./decadence tests/plus.dec
	./decadence tests/multiline.dec

clean:
	rm -rf generated decadence .libs
