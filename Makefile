CXX=g++-14.2.0 
CXXFLAGS=-std=c++20 -Wall -O -g -MMD -Werror=vla -fmodules-ts # use -MMD to generate dependencies
SOURCES=info.cc  item.cc gold.cc directions.cc character.cc  enemy.cc \
        playablecharacter.cc tile.cc map.cc human.cc goblin.cc  \
	  	$(wildcard *-impl.cc) main.cc   # list of all .cc files in the current directory
OBJECTS=${SOURCES:.cc=.o}  # .o files depend upon .cc files with same names
DEPENDS=${OBJECTS:.o=.d}   # .d file is list of dependencies for corresponding .cc file
EXEC=a4q2

# First target in the makefile is the default target.
$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

%.o: %.cc 
	$(CXX) -c $< -o $@ $(CXXFLAGS) 

-include ${DEPENDS}

.PHONY: clean
clean:
	rm  -f $(OBJECTS) $(DEPENDS) $(EXEC)
