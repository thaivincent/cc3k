troll.o gcm.cache/troll.gcm: troll.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
troll.o gcm.cache/troll.gcm: enemy.c++m
troll.c++m: gcm.cache/troll.gcm
.PHONY: troll.c++m
gcm.cache/troll.gcm:| troll.o
CXX_IMPORTS += enemy.c++m
