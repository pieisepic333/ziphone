CPP = /usr/bin/c++
CPP_FLAGS = -g
FRAMEWORKS = -F/Library/Frameworks -framework CoreFoundation -F/System/Library/PrivateFrameworks -framework MobileDevice

PPC_FLAGS = -arch ppc -D__POWERPC__ -D__APPLE__
I386_FLAGS = -arch i386 -D__APPLE__


all:			iphonecomm

ppc:			iphonecomm.ppc

i386:			iphonecomm.i386

iphonecomm:		iphonecomm.i386 iphonecomm.ppc
			lipo -create -arch i386 iphonecomm.i386 -arch ppc iphonecomm.ppc -output $@

iphonecomm.i386:	iphonecomm.cpp privateFunctions.cpp GetPID.c
			$(CPP) $(FRAMEWORKS) $(CPP_FLAGS) $(I386_FLAGS) -o $@ iphonecomm.cpp privateFunctions.cpp GetPID.c

iphonecomm.ppc:		iphonecomm.cpp privateFunctions.cpp GetPID.c
			$(CPP) $(FRAMEWORKS) $(CPP_FLAGS) $(PPC_FLAGS) -o $@ iphonecomm.cpp privateFunctions.cpp GetPID.c

clean:
			rm -f iphonecomm iphonecomm.i386 iphonecomm.ppc

