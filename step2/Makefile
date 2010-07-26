.PHONY: all test clean

all:
	mkdir -p generated
	greg decadence.leg > generated/parser.c
	rock decadence.ooc generated/parser.c -outpath=generated -v

test:
	./decadence < tests/invalid.dec
	./decadence < tests/valid.dec
	./decadence < tests/multi.dec

clean:
	rm -rf generated decadence .libs
