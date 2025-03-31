dhoard.o gcm.cache/dhoard.gcm: dhoard.cc gcm.cache/gold.gcm \
 gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
dhoard.o gcm.cache/dhoard.gcm: gold.c++m
dhoard.c++m: gcm.cache/dhoard.gcm
.PHONY: dhoard.c++m
gcm.cache/dhoard.gcm:| dhoard.o
CXX_IMPORTS += gold.c++m
