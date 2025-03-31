info.o gcm.cache/info.gcm: info.cc \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
info.o gcm.cache/info.gcm: \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.c++m
info.c++m: gcm.cache/info.gcm
.PHONY: info.c++m
gcm.cache/info.gcm:| info.o
CXX_IMPORTS += /usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.c++m
