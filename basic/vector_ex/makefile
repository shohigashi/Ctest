# 1. compiler
CC = icpc

# 2. compiler option
CFLAGS =

# 3. execution file name
TARGET = a.out

# 4. source code list for compile
SRCS = ./*.cpp

# 5. object fiel name
OBJS = $(SRCS:.cpp=.o)

# 6. include path
INCDIR = 

# 7. library path

# 8. libraries
LIBS = 

# 9. generate target file
$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

# 10. generate object file
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

all: clean $(OBJS) $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET) *.d
