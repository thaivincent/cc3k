compass.o gcm.cache/compass.gcm: compass.cc gcm.cache/item.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
compass.o gcm.cache/compass.gcm: item.c++m
compass.c++m: gcm.cache/compass.gcm
.PHONY: compass.c++m
gcm.cache/compass.gcm:| compass.o
CXX_IMPORTS += item.c++m
