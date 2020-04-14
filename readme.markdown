ArtemisObjC
===========

## updated for GNUstep

No external dependancies:

CoreFoundation classes only exist in Apple products. This version is meant to run on other platforms. Rather than try to install one of the dodgy version of CFLite or OpenCFLite, I've added a version of CFBitVector culled from https://github.com/gnustep/libs-corebase. 

Currently testing on Unix: FreeBSD 12 - GhostBSD/NomadBSD

## build

```
cd ./Artemis-lib/Artemis-lib/Classes
gmake
```

## install

```
sudo cp ./Artemis-Lib/Artemis-Lib/Classes/Artemis.framework/Versions/Current/libArtemis.so /usr/local/lib/libArtemis.so
sudo cp ./Artemis-Lib/Artemis-Lib/Classes/Artemis.framework/Versions/Current/libArtemis.so.1 /usr/local/lib/libArtemis.so.1
sudo cp ./Artemis-Lib/Artemis-Lib/Classes/Artemis.framework/Versions/Current/libArtemis.so.1.0 /usr/local/lib/libArtemis.so.1.0

sudo cp -r ./Artemis-Lib/Artemis-Lib/Classes/Artemis.framework/Headers/ /usr/local/include/Artemis/
```
