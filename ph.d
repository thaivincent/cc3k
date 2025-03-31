ph.o gcm.cache/ph.gcm: ph.cc gcm.cache/permpotion.gcm gcm.cache/item.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
ph.o gcm.cache/ph.gcm: permpotion.c++m
ph.c++m: gcm.cache/ph.gcm
.PHONY: ph.c++m
gcm.cache/ph.gcm:| ph.o
CXX_IMPORTS += permpotion.c++m
