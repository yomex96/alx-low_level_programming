#!/bin/bash
wget -p .. https://raw.githubusercontent.com/yomex96/alx-low_level_programming/master/0x18-dynamic_libraries/libhacks.so
export LD_PRELOAD="$PWD/../libhacks.so"
