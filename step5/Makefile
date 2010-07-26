.PHONY: all test clean

all:
	mkdir -p generated
	greg decadence.leg > generated/parser.c
	rock decadence.ooc generated/parser.c -outpath=generated -v -g

test:
	./decadence tests/number.dec
	./decadence tests/plus.dec
	./decadence tests/multiline.dec

clean:
	rm -rf generated decadence .libs
