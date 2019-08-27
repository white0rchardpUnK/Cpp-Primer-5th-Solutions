# executable files for this directory
OBJECTS = badgetc.exe bits.exe findbook.exe \
		  game.exe getc.exe getput.exe manips.exe \
		  normalInts.exe no-skipws.exe point.exe \
		  prec.exe rand1.exe rand2.exe rand4.exe \
		  rand6.exe seed.exe seek.exe setw.exe \
		  skipws.exe tuple.exe 

# tells make to use the file "../GNU_makefile_template", which
# defines general rules for making .o and .exe files
include ../GNU_makefile_template

LOCFLAGS = -I../14 

findbook.exe: findbook.o ../14/Sales_data.o
	$(CC) $(CCFLAGS) -o findbook findbook.o ../14/Sales_data.o

