gold.o gcm.cache/gold.gcm: gold.cc gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
gold.o gcm.cache/gold.gcm: item.c++m
gold.c++m: gcm.cache/gold.gcm
.PHONY: gold.c++m
gcm.cache/gold.gcm:| gold.o
CXX_IMPORTS += item.c++m
