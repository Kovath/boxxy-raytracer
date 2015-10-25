# Boxxy Makefile - C++
# by Kevin Yang
#
# A cross-platform c++ makefile



# CONFIGURATION
PROJECT := raytracer

CC := g++
CCFLAGS := -std=c++11 -Wall -O3
LDFLAGS := -Ilib

SOURCES_FOLDER := src
OBJECTS_FOLDER := obj


# processing stuff
SOURCE_EXTENSION := .cpp
SOURCES := $(shell find $(SOURCES_FOLDER) -name '*$(SOURCE_EXTENSION)')
UNPREFIXED_SOURCES := $(patsubst $(SOURCES_FOLDER)/%, %, $(SOURCES))
UNPREFIXED_FOLDERS := $(dir $(UNPREFIXED_SOURCES))
OBJECTS := $(addprefix $(OBJECTS_FOLDER)/,$(UNPREFIXED_SOURCES:%$(SOURCE_EXTENSION)=%.o))
OBJECTS_SUBFOLDERS := $(addprefix $(OBJECTS_FOLDER)/, $UNPREFIXED_FOLDERS)



# make options
.PHONY: all clean* build
all: $(PROJECT)

clean:
	@rm -rf $(OBJECTS_FOLDER)/* $(PROJECT)*
build: clean all


# compile targets
$(PROJECT): $(OBJECTS)
	$(CC) $(CCFLAGS) -o $@ $^ $(LDFLAGS)
$(OBJECTS_FOLDER)/%.o: $(SOURCES_FOLDER)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CCFLAGS) -o $@ -c $< $(LDFLAGS)

