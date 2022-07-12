#!/bin/bash
wget -P /tmp https://github.com/St-Pardon/alx-low_level_programming/raw/master/0x18-dynamic_libraries/my_inject.so
export LD_PRELOAD=/tmp/my_inject.so
