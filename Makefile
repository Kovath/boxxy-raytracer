# Boxxy Makefile - C++
# by Kevin Yang
#
# A cross-platform c++ makefile



# CONFIGURATION
PROJECT := raytracer

CC := g++
CCFLAGS := -Wall -O3
LDFLAGS := -Ilib

SRCFOLDER := src
OBJFOLDER := obj
#BINFOLDER :=
# ok so plans to add feature to determine where executable goes



# processing stuff
SRC := $(wildcard $(SRCFOLDER)/*.cpp)
OBJ := $(addprefix $(OBJFOLDER)/, $(notdir $(SRC:.cpp=.o)))

# perform any OS specific reqs
ifeq ($(OS), Windows_NT)
	RM = del /F /Q
else
	RM = rm -f
endif





# make options
.PHONY: all clean* build
all: $(OBJFOLDER) $(PROJECT)

clean:
	@$(RM) $(OBJFOLDER)\* $(PROJECT)*
clean-output:
	$(RM) $(OBJFOLDER)\* $(PROJECT)*
	
build: clean all

# targets that need to be done before project compilation
$(OBJFOLDER):
	@mkdir $@

# compile targets
$(PROJECT): $(OBJ)
	$(CC) $(CCFLAGS) -o $@ $^ $(LDFLAGS)
$(OBJFOLDER)/%.o: $(SRCFOLDER)/%.cpp
	$(CC) $(CCFLAGS) -o $@ -c $< $(LDFLAGS)