# The point of this makefile is just to create the Main, and in the process
# update all the *.o files.

.KEEP_STATE:

OBJS = N50.o ChromInterval.o HumanGenome.o CopyNumberProfile.o FileParsers.o SAMStepper.o
LIB  = libJgtools.a



# compiler commands
CC      = g++
RM      = /bin/rm -rf
AR      = ar crv
BACKUPS = *~ \\\#*\\\#

# directories with .h's in them - the METAPHASE_BOOST_DIR and METAPHASE_SAMTOOLS_DIR environment variables must be set
INCLUDES = -I$(METAPHASE_BOOST_DIR) -I$(METAPHASE_SAMTOOLS_DIR)

# compiler flags
CFLAGS  = -Wall -ansi -pedantic -g -O3

# dependencies

.cc.o:  .cc
	$(CC) -c $< $(CFLAGS) $(INCLUDES)

all:    $(LIB)

$(LIB): $(OBJS)
	$(AR) $(LIB) $(OBJS); mv $(LIB) ..

clean: 
	$(RM) $(LIBS) $(OBJS) core .make.state

clobber: clean
	$(RM) $(BACKUPS)

                                                                               
