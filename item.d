item.o gcm.cache/item.gcm: item.cc gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
item.o gcm.cache/item.gcm: info.c++m
item.c++m: gcm.cache/item.gcm
.PHONY: item.c++m
gcm.cache/item.gcm:| item.o
CXX_IMPORTS += info.c++m
