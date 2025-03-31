human.o gcm.cache/human.gcm: human.cc gcm.cache/playablecharacter.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/statuseffect.gcm
human.o gcm.cache/human.gcm: playablecharacter.c++m
human.c++m: gcm.cache/human.gcm
.PHONY: human.c++m
gcm.cache/human.gcm:| human.o
CXX_IMPORTS += playablecharacter.c++m
