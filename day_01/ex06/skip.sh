#!/bin/sh
ls -l | nl | awk 'NR%2!=0' | cut -c8-
