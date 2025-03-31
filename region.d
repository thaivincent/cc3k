region.o gcm.cache/region.gcm: region.cc \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/vector.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
region.o gcm.cache/region.gcm: \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m info.c++m
region.c++m: gcm.cache/region.gcm
.PHONY: region.c++m
gcm.cache/region.gcm:| region.o
CXX_IMPORTS += /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 info.c++m
