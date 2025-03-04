#!/bin/bash
ifconfig | grep ether | cut -d " " -f 10
