werewolf.o gcm.cache/werewolf.gcm: werewolf.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
werewolf.o gcm.cache/werewolf.gcm: enemy.c++m
werewolf.c++m: gcm.cache/werewolf.gcm
.PHONY: werewolf.c++m
gcm.cache/werewolf.gcm:| werewolf.o
CXX_IMPORTS += enemy.c++m
