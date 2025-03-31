merchant.o gcm.cache/merchant.gcm: merchant.cc gcm.cache/enemy.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm
merchant.o gcm.cache/merchant.gcm: enemy.c++m
merchant.c++m: gcm.cache/merchant.gcm
.PHONY: merchant.c++m
gcm.cache/merchant.gcm:| merchant.o
CXX_IMPORTS += enemy.c++m
