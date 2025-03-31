ba.o gcm.cache/ba.gcm: ba.cc gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/statuseffect.gcm
ba.o gcm.cache/ba.gcm: statuseffect.c++m item.c++m
ba.c++m: gcm.cache/ba.gcm
.PHONY: ba.c++m
gcm.cache/ba.gcm:| ba.o
CXX_IMPORTS += statuseffect.c++m item.c++m
