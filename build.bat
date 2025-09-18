@echo off

mkdir out

g++ src\main.cpp src\solution.cpp -o out\solve

g++ test\test.cpp -o test\test.exe