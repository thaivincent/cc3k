wa.o gcm.cache/wa.gcm: wa.cc gcm.cache/item.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/statuseffect.gcm
wa.o gcm.cache/wa.gcm: statuseffect.c++m item.c++m
wa.c++m: gcm.cache/wa.gcm
.PHONY: wa.c++m
gcm.cache/wa.gcm:| wa.o
CXX_IMPORTS += statuseffect.c++m item.c++m
