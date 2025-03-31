elf.o gcm.cache/elf.gcm: elf.cc gcm.cache/playablecharacter.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/statuseffect.gcm
elf.o gcm.cache/elf.gcm: playablecharacter.c++m
elf.c++m: gcm.cache/elf.gcm
.PHONY: elf.c++m
gcm.cache/elf.gcm:| elf.o
CXX_IMPORTS += playablecharacter.c++m
