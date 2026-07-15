#!/bin/bash

if [ -z "$1" ]; then
  echo "Usage: $0 <source.cpp>"
  exit 1
fi

mkdir -p build

g++ "$1" -o build/output && build/output
