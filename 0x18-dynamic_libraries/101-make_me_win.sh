#!/bin/bash
wget -P /tmp https://github.com/St-Pardon/alx-low_level_programming/raw/master/0x18-dynamic_libraries/my-inject.so
export LD_PRELOAD=/tmp/my-inject.so
