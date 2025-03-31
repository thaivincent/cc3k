subject.o gcm.cache/subject.gcm: subject.cc \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/string.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/vector.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
subject.o gcm.cache/subject.gcm: \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/string.c++m info.c++m
subject.c++m: gcm.cache/subject.gcm
.PHONY: subject.c++m
gcm.cache/subject.gcm:| subject.o
CXX_IMPORTS += /usr/local/gcc-14.2.0/include/c++/14.2.0/vector.c++m \
 /usr/local/gcc-14.2.0/include/c++/14.2.0/string.c++m info.c++m
