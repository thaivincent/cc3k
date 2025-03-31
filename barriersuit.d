barriersuit.o gcm.cache/barriersuit.gcm: barriersuit.cc \
 gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
barriersuit.o gcm.cache/barriersuit.gcm: item.c++m
barriersuit.c++m: gcm.cache/barriersuit.gcm
.PHONY: barriersuit.c++m
gcm.cache/barriersuit.gcm:| barriersuit.o
CXX_IMPORTS += item.c++m
