main: main.c
		gcc main.c libs/pbPlots/pbPlots.c libs/pbPlots/supportLib.c -std=c99 -O3 -march=native -o main.o
