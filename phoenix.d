phoenix.o gcm.cache/phoenix.gcm: phoenix.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
phoenix.o gcm.cache/phoenix.gcm: enemy.c++m
phoenix.c++m: gcm.cache/phoenix.gcm
.PHONY: phoenix.c++m
gcm.cache/phoenix.gcm:| phoenix.o
CXX_IMPORTS += enemy.c++m
