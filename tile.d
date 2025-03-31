tile.o gcm.cache/tile.gcm: tile.cc \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/vector.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
tile.o gcm.cache/tile.gcm: \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m info.c++m
tile.c++m: gcm.cache/tile.gcm
.PHONY: tile.c++m
gcm.cache/tile.gcm:| tile.o
CXX_IMPORTS += /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 info.c++m
