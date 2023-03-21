# Dumb-Eight-Queens-
This C++ code solves the classic "Eight Queens Problem" by generating all possible combinations of eight queens on an 8x8 chessboard and checking each configuration for conflicts. The ok() function checks for conflicts between queens by comparing their positions in the same row, column, or diagonal. The main function uses nested loops to generate all possible combinations of positions for the eight queens and calls ok() to check each configuration. If a configuration is valid, the code prints out the solution in a user-friendly format, and the number of total solutions found is displayed at the end. The code generates all possible combinations, making it a "dumb" brute-force approach that is computationally expensive but conceptually simple.


