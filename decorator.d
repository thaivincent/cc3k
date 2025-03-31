decorator.o gcm.cache/decorator.gcm: decorator.cc gcm.cache/character.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/statuseffect.gcm
decorator.o gcm.cache/decorator.gcm: character.c++m statuseffect.c++m
decorator.c++m: gcm.cache/decorator.gcm
.PHONY: decorator.c++m
gcm.cache/decorator.gcm:| decorator.o
CXX_IMPORTS += character.c++m statuseffect.c++m
