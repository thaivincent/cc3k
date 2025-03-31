pile.o gcm.cache/pile.gcm: pile.cc gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
pile.o gcm.cache/pile.gcm: gold.c++m
pile.c++m: gcm.cache/pile.gcm
.PHONY: pile.c++m
gcm.cache/pile.gcm:| pile.o
CXX_IMPORTS += gold.c++m
