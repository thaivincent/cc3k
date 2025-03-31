bd.o gcm.cache/bd.gcm: bd.cc gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/statuseffect.gcm
bd.o gcm.cache/bd.gcm: statuseffect.c++m item.c++m
bd.c++m: gcm.cache/bd.gcm
.PHONY: bd.c++m
gcm.cache/bd.gcm:| bd.o
CXX_IMPORTS += statuseffect.c++m item.c++m
