textdisplay.o gcm.cache/textdisplay.gcm: textdisplay.cc \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/cstddef.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/vector.gcm \
 gcm.cache/observer.gcm gcm.cache/subject.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/string.gcm \
 gcm.cache/info.gcm
textdisplay.o gcm.cache/textdisplay.gcm: subject.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/cstddef.c++m observer.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.c++m
textdisplay.c++m: gcm.cache/textdisplay.gcm
.PHONY: textdisplay.c++m
gcm.cache/textdisplay.gcm:| textdisplay.o
CXX_IMPORTS += subject.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/cstddef.c++m observer.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.c++m
