#!/bin/bash
sudo gatttool -i hci0 -b B4:52:A9:1A:A7:E0 --char-write-req -a 0x0012 -n 0x4A4A4A


