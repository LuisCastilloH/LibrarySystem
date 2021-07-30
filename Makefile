# @author Luis Castillo

CXX      	:= g++
# change these to proper directories where each file should be
SRCDIR   	:= src
OBJDIR   	:= obj
BINDIR   	:= bin

# compiling flags here
CXXFLAGS	:= -std=c++14 -Wall

# project name (generate executable with this name)
TARGET   	:= $(BINDIR)/LibrarySystem.out

SOURCES  	:= $(shell find $(SRCDIR) -name "*.cpp")
INCLUDES 	:= $(shell find $(SRCDIR) -name "*.h")
OBJECTS  	:= $(SOURCES:.cpp=.o)

.PHONY: all
all: $(OBJECTS) $(TARGET)

%.o : %.cpp
	@echo compiling $(patsubst src/%.o, obj/%.o, $@)
	$(CXX) $(CXXFLAGS) -c $< -o $(patsubst src/%.o, obj/%.o, $@)

$(TARGET) : $(patsubst $(SRCDIR)/%.o, $(OBJDIR)/%.o, $(OBJECTS))
	@echo Linking starting
	$(CXX) $(CXXFLAGS) $^ $(LDLIBS) -o $@
	@echo Linking complete!

.PHONY: clean
clean:
	rm -f obj/*.o bin/*

