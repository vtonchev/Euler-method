main: main.c
		# gcc -c main.c  -std=c99 -O3 -march=native -o out/main.o
		# gcc -c libs/pbPlots/pbPlots.c -std=c99 -O3 -march=native -o ./out/pbPlots.o
    # gcc -c libs/pbPlots/supportLib.c -std=c99 -O3 -march=native -o ./out/supportLib.o
		gcc main.c libs/pbPlots/pbPlots.c libs/pbPlots/supportLib.c -std=c99 -O3 -march=native -o main.o
