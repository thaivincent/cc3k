rh.o gcm.cache/rh.gcm: rh.cc gcm.cache/permpotion.gcm gcm.cache/item.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
rh.o gcm.cache/rh.gcm: permpotion.c++m
rh.c++m: gcm.cache/rh.gcm
.PHONY: rh.c++m
gcm.cache/rh.gcm:| rh.o
CXX_IMPORTS += permpotion.c++m
