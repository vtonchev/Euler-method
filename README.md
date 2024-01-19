This program solves an ordinary differential equation in the form: dy/dx = y, with runtime inputed variables representing the initial conditions (X0, Y0)
It has also plotting capabilities for the solution.
1. Instalation
   - Make sure you have program "make" in order to run the Makefile. Execute this command in the folder of the Makefile:
   > make 
   - if you do not have make you can also compile the source by using the command inside the source folder: 
   > gcc main.c libs/pbPlots/pbPlots.c libs/pbPlots/supportLib.c -std=c99 -O3 -march=native -o main.o
3. Input parameters
    - X0 = initial conditions for x (ex. 0)
    - Y0 = the evaluation of the functions for X0 (ex. 1)
    - h = the step size (ex. 0.1)
    - xn = the right limit of the plot. (ex.1)
4. How to run
   - execute the program by typing in the command prompt: /{FOLDER_OF_THE_PROGRAM}/main.o (Make sure you have already compiled the program).
   - you would be prompted with 4 variables that you have to enter (ex. 0 0 0.1 1).
   - Voilà, you have the result in a table format inside the console, however you can also view the graph of the solution. It will be in a png format with tha name "graph.png" in the folder of the program(main.o) 
