#!/bin/sh
ifconfig | grep ether | sed 's/ether//g; s/[[:space:]]//g' | cut -c 1-17