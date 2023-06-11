#!/bin/bash

# Create the bin directory if it doesn't exist
mkdir -p bin

# Find all .cpp files in subfolders
cpp_files=$(find . -name "*.cpp" -type f)

# Compile all .cpp files into object files and move them to bin directory
for file in $cpp_files; do
  object_file="bin/$(basename "${file%.*}").o"
  g++ -c "$file" -o "$object_file"
done

# Link all object files into a single executable
g++ bin/*.o -o bin/main.exe
