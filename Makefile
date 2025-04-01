CXX = g++-14.2.0
CXXFLAGS = -std=c++20 -fmodules-ts -Wall -g


SOURCES = subject.cc observer.cc statuseffect.cc info.cc item.cc gold.cc directions.cc character.cc enemy.cc goblin.cc \
          playablecharacter.cc region.cc tile.cc human.cc map.cc stairs.cc $(wildcard *-impl.cc) main.cc
OBJECTS = $(SOURCES:.cc=.o)
DEPENDS = $(OBJECTS:.o=.d)
EXEC = cck3+

all: $(EXEC)

$(PCM): $(MODULE_INTERFACE)
	$(CXX) $(CXXFLAGS) -x c++-module-interface $(MODULE_INTERFACE) -o $(PCM)

$(EXEC): $(PCM) $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPENDS)

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(DEPENDS) $(EXEC) $(PCM)