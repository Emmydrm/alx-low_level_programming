#!/bin/bash
wget -q https://github.com/Emmydrm/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$PWD/win.so
