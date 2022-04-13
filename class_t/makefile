# 1. compiler
CC = icpc

# 2. compiler option
CFLAGS = -g -Wall -O2 -std=c++20

# 3. execution file name
TARGET = a.out

# 4. object directly for output
OBJDIR = ./obj

# 5. source code list for compile
SRCS = $(wildcard *.cpp)

# 6. object fiel name
OBJS = $(addprefix $(OBJDIR)/,  $(SRCS:.cpp=.o))

# 7. include path
INCDIR = 

# 8. library path
LIBDIR = 

# 9. libraries
LIBS = 

# 10. generate target file
$(TARGET): $(OBJS)
#	@if [ ! -d $(OBJDIR) ]; \
			then echo "mkdir -p $(OBJDIR)"; mkdir -p $(OBJDIR) ;\
	fi
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

# 11. generate object file
#$(OBJS): $(SRCS)
$(OBJDIR)/%.o: %.cpp
	@if [ ! -d $(OBJDIR) ]; \
       then echo "mkdir -p $(OBJDIR)"; mkdir -p $(OBJDIR); \
  fi
	$(CC) $(CFLAGS) $(INCDIR) $(LIBS) -o $@ -c $<

#		@[ -d $(OBJDIR) ]
#		$(CC) $(CFLAGS) $(INCDIR) -o $@ -c $<

#all: clean $(OBJS) $(TARGET)
all: clean $(TARGET)

clean:
	-rm -f $(OBJS) $(TARGET) *.d
