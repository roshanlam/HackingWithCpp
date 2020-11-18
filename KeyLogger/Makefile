TARGET          = keylogger
OFILES          = src/main.o \
				  src/runTests.o \
				  src/shutdown.o \
				  src/FileWriter/FileWriter.o \
				  src/FileWriter/fileWriterDestructor.o \
				  src/FileWriter/writeToFile.o \
				  src/Keylog/Keylog.o \
				  src/Keylog/keylogDestructor.o \
				  src/Keylog/run.o
CC              = g++
CFLAGS          = -Wall -g
LDFLAGS		=  -lX11 -lXmu -lm -lrt
PREFIX		= /usr/pkg
X11PREFIX	= /usr/X11R6
INCLUDES        = -I${X11PREFIX}/include -I${PREFIX}/include -I. -Iinclude/
LIBDIRS         = -L${X11PREFIX}/lib -L${PREFIX}/lib
all: ${TARGET}
${TARGET}: ${OFILES}
	${CC} ${LIBDIRS} ${OFILES} -o ${TARGET} ${LDFLAGS}
.cpp.o .c.o:
	${CC} ${INCLUDES} ${CFLAGS} -c $< -o $@
clean:
	rm -f ${OFILES} ${TARGET} Makefile.bak

re: clean all

MKDPDFLAGS	= -- ${CFLAGS} ${INCLUDES} -- *.c *.cpp
MKDPD		= makedepend
depend:
	${MKDPD} ${MKDPDFLAGS}
