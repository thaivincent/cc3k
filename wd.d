wd.o gcm.cache/wd.gcm: wd.cc gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/statuseffect.gcm
wd.o gcm.cache/wd.gcm: statuseffect.c++m item.c++m
wd.c++m: gcm.cache/wd.gcm
.PHONY: wd.c++m
gcm.cache/wd.gcm:| wd.o
CXX_IMPORTS += statuseffect.c++m item.c++m
