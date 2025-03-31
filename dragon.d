dragon.o gcm.cache/dragon.gcm: dragon.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
dragon.o gcm.cache/dragon.gcm: enemy.c++m
dragon.c++m: gcm.cache/dragon.gcm
.PHONY: dragon.c++m
gcm.cache/dragon.gcm:| dragon.o
CXX_IMPORTS += enemy.c++m
