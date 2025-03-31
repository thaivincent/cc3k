mhoard.o gcm.cache/mhoard.gcm: mhoard.cc gcm.cache/gold.gcm \
 gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
mhoard.o gcm.cache/mhoard.gcm: gold.c++m
mhoard.c++m: gcm.cache/mhoard.gcm
.PHONY: mhoard.c++m
gcm.cache/mhoard.gcm:| mhoard.o
CXX_IMPORTS += gold.c++m
