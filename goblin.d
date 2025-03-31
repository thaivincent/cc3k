goblin.o gcm.cache/goblin.gcm: goblin.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
goblin.o gcm.cache/goblin.gcm: enemy.c++m
goblin.c++m: gcm.cache/goblin.gcm
.PHONY: goblin.c++m
gcm.cache/goblin.gcm:| goblin.o
CXX_IMPORTS += enemy.c++m
