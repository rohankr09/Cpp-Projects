This C++ code implements a simple console-based Tic-Tac-Toe game. It uses various C++ concepts and features, including:

**1) Arrays:** The code uses a 2D character array (board[3][3]) to represent the game board. It keeps track of the positions of 'X' (the 
                player) and 'O' (the computer) on the board.

**2) Functions:** The code is organized into several functions, each responsible for a specific aspect of the game. These functions include 
                  resetBoard(), printBoard(), checkFreeSpaces(), playerMove(), computerMove(), checkWinner(), and printWinner().

**3) Loops:** The code uses for loops to iterate over rows and columns of the game board when checking for a winner, counting free spaces, 
              and printing the board.

**4) Randomization:** The srand(time(0)) and rand() functions are used to generate random moves for the computer player.

**5) Touppercase Function:** The toupper() function from the <cctype> header is used to convert user input to uppercase to handle both 
                             lowercase and uppercase 'Y' for replaying the game.
**6) Constants:** Constants like PLAYER and COMPUTER are defined to represent player and computer symbols.

**7) Error Handling:** The code includes simple error handling, such as displaying an "Invalid move!" message when the player selects an 
                       already occupied position.

Overall, the code demonstrates basic game logic, user input/output, randomization, and control structures commonly used in C++ programming for simple games. 



*********************************************************************************************************



Here are some screenshots of the terminal after executing the program


![Tictactoe-1](https://github.com/rohankr09/Cpp-Projects/assets/112258054/cafb8391-028c-47d8-9466-c65b12c2fd72)
![Tictactoe-2](https://github.com/rohankr09/Cpp-Projects/assets/112258054/04f3cc07-bc31-4afc-8668-9076b1c5d7ac)




Thank You...😊 
