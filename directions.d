directions.o gcm.cache/directions.gcm: directions.cc
directions.c++m: gcm.cache/directions.gcm
.PHONY: directions.c++m
gcm.cache/directions.gcm:| directions.o
