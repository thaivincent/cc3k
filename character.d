character.o gcm.cache/character.gcm: character.cc gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
character.o gcm.cache/character.gcm: directions.c++m info.c++m
character.c++m: gcm.cache/character.gcm
.PHONY: character.c++m
gcm.cache/character.gcm:| character.o
CXX_IMPORTS += directions.c++m info.c++m
