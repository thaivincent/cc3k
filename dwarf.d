dwarf.o gcm.cache/dwarf.gcm: dwarf.cc gcm.cache/playablecharacter.gcm \
 gcm.cache/character.gcm gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/directions.gcm gcm.cache/gold.gcm gcm.cache/item.gcm \
 gcm.cache/statuseffect.gcm
dwarf.o gcm.cache/dwarf.gcm: playablecharacter.c++m
dwarf.c++m: gcm.cache/dwarf.gcm
.PHONY: dwarf.c++m
gcm.cache/dwarf.gcm:| dwarf.o
CXX_IMPORTS += playablecharacter.c++m
