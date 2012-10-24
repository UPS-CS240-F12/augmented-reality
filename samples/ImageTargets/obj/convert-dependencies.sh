#!/bin/sh
# AUTO-GENERATED FILE, DO NOT EDIT!
if [ -f $1.org ]; then
  sed -e 's!^A:/SDKs/Cygwin/lib!/usr/lib!ig;s! A:/SDKs/Cygwin/lib! /usr/lib!ig;s!^A:/SDKs/Cygwin/bin!/usr/bin!ig;s! A:/SDKs/Cygwin/bin! /usr/bin!ig;s!^A:/SDKs/Cygwin/!/!ig;s! A:/SDKs/Cygwin/! /!ig;s!^E:!/cygdrive/e!ig;s! E:! /cygdrive/e!ig;s!^C:!/cygdrive/c!ig;s! C:! /cygdrive/c!ig;s!^A:!/cygdrive/a!ig;s! A:! /cygdrive/a!ig;' $1.org > $1 && rm -f $1.org
fi
