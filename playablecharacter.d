playablecharacter.o gcm.cache/playablecharacter.gcm: playablecharacter.cc \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/statuseffect.gcm
playablecharacter.o gcm.cache/playablecharacter.gcm: character.c++m \
 gold.c++m statuseffect.c++m
playablecharacter.c++m: gcm.cache/playablecharacter.gcm
.PHONY: playablecharacter.c++m
gcm.cache/playablecharacter.gcm:| playablecharacter.o
CXX_IMPORTS += character.c++m gold.c++m statuseffect.c++m
