vampire.o gcm.cache/vampire.gcm: vampire.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
vampire.o gcm.cache/vampire.gcm: enemy.c++m
vampire.c++m: gcm.cache/vampire.gcm
.PHONY: vampire.c++m
gcm.cache/vampire.gcm:| vampire.o
CXX_IMPORTS += enemy.c++m
