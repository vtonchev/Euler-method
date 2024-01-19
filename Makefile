# all: main gnuplot_i 

main: main.c
		gcc main.c gnuplot_i.c -o main
