enemy.o gcm.cache/enemy.gcm: enemy.cc gcm.cache/character.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
enemy.o gcm.cache/enemy.gcm: character.c++m
enemy.c++m: gcm.cache/enemy.gcm
.PHONY: enemy.c++m
gcm.cache/enemy.gcm:| enemy.o
CXX_IMPORTS += character.c++m
