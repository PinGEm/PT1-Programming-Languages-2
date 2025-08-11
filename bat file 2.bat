@echo on

g++ -m32 -Wall -O2 -std=c++17 -c pt1.cpp
g++ -m32 -Wall -O2 -std=c++17 -c pt1_1.cpp
g++ -m32 -Wall -O2 -std=c++17 pt1_1.o pt1.o -o program

pause
exit