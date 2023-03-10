#!/bin/sh


dwmblocks&
sleep 0.5
xrandr -s 2560x1080
picom&
feh --bg-scale /home/sebastian/background/minimal1.jpg

