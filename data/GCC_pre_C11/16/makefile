# executable files for this directory
OBJECTS = Array.exe array-parms4.exe \
		  compare.exe compareDef.exe compareSpec.exe \
		  debug.exe multiset.exe overloaded.exe overSpec.exe qm.exe \
		  SP.exe special.exe specialized.exe \
		  useBlob.exe useChcking.exe Vecmain.exe

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

LOCFLAGS = -I../14

SP.o: DebugDelete.h

Vecmain.o: Vec.h

compareDef.exe: compareDef.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) compareDef.o ../14/Sales_data.o \
			-o compareDef.exe

qm.exe: qm.o build.o 
	$(CC) $(CCFLAGS) $(LOCFLAGS) qm.o build.o -o qm.exe

specialized.exe: debug.cc
	$(CC) -D SPECIALIZED $(CCFLAGS) $(LOCFLAGS) debug.cc -o specialized.exe

overloaded.exe: debug.o
	$(CC) -D OVERCHAR $(CCFLAGS) $(LOCFLAGS) debug.cc -o overloaded.exe

debug.exe: debug.o
	$(CC) -D DEBUG $(CCFLAGS) $(LOCFLAGS) debug.cc -o debug.exe

multiset.exe: multiset.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) multiset.o Sales_data.o \
	        -o multiset.exe

