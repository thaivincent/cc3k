CXX=g++-14.2.0 -std=c++20 -fmodules-ts  
CXXFLAGS=-Wall -g                      
SOURCES=info.cc subject.cc observer.cc statuseffect.cc item.cc gold.cc directions.cc character.cc enemy.cc goblin.cc \
          playablecharacter.cc region.cc tile.cc human.cc map.cc stairs.cc $(wildcard *-impl.cc) main.cc 
OBJECTS = $(SOURCES:.cc=.o)
DEPENDS = $(OBJECTS:.o=.d)
HEADERS=iostream fstream vector sstream string variant algorithm chrono cstddef random stdexcept       
EXEC=cc3k                             


all: headers ${SOURCES}
	${CXX} ${CXXFLAGS} ${SOURCES} -o ${EXEC} 


headers:
	${CXX} ${CXXFLAGS} -c -x c++-system-header ${HEADERS}

$(PCM): $(MODULE_INTERFACE)
	$(CXX) $(CXXFLAGS) -x c++-module-interface $(MODULE_INTERFACE) -o $(PCM)

$(EXEC): $(PCM) $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)


%.o: %.cc
	${CXX} ${CXXFLAGS} -c $< -o $@

-include $(DEPENDS)

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(DEPENDS) $(EXEC) $(PCM)

