observer.o gcm.cache/observer.gcm: observer.cc gcm.cache/subject.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/string.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/vector.gcm \
 gcm.cache/info.gcm \
 gcm.cache/./usr/local/gcc-14.2.0/include/c++/14.2.0/iostream.gcm
observer.o gcm.cache/observer.gcm: subject.c++m
observer.c++m: gcm.cache/observer.gcm
.PHONY: observer.c++m
gcm.cache/observer.gcm:| observer.o
CXX_IMPORTS += subject.c++m
