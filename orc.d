orc.o gcm.cache/orc.gcm: orc.cc gcm.cache/playablecharacter.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/statuseffect.gcm
orc.o gcm.cache/orc.gcm: playablecharacter.c++m
orc.c++m: gcm.cache/orc.gcm
.PHONY: orc.c++m
gcm.cache/orc.gcm:| orc.o
CXX_IMPORTS += playablecharacter.c++m
