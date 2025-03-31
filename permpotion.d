permpotion.o gcm.cache/permpotion.gcm: permpotion.cc gcm.cache/item.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
permpotion.o gcm.cache/permpotion.gcm: item.c++m
permpotion.c++m: gcm.cache/permpotion.gcm
.PHONY: permpotion.c++m
gcm.cache/permpotion.gcm:| permpotion.o
CXX_IMPORTS += item.c++m
