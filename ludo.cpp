#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Function to display the current state of the board
void displayBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Function to roll the die
int rollDie() {
    return rand() % 6 + 1;
}

// Function to move a piece
void movePiece(std::vector<std::vector<char>>& board, int player, int roll) {
    int currentX = -1, currentY = -1;
    char playerChar = 'A' + player - 1;

    // Find the current position of the player's piece
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            if (board[i][j] == playerChar) {
                currentX = i;
                currentY = j;
                board[i][j] = '.';
                break;
            }
        }
    }

    // Calculate new position based on the roll
    int newPosition = (currentX * 2 + currentY + roll) % 4;
    int newX = newPosition / 2;
    int newY = newPosition % 2;

    // Move the piece
    board[newX][newY] = playerChar;
}

int main() {
    srand(time(0));

    // Initialize a 2x2 board
    std::vector<std::vector<char>> board(2, std::vector<char>(2, '.'));

    // Set initial positions for two players
    board[0][0] = 'A';  // Player 1
    board[1][1] = 'B';  // Player 2

    // Display initial board state
    std::cout << "Initial board state:\n";
    displayBoard(board);

    // Simulate 10 turns
    for (int turn = 1; turn <= 10; ++turn) {
        std::cout << "Turn " << turn << std::endl;

        // Player 1's turn
        int roll = rollDie();
        std::cout << "Player 1 rolls a " << roll << std::endl;
        movePiece(board, 1, roll);
        displayBoard(board);

        // Player 2's turn
        roll = rollDie();
        std::cout << "Player 2 rolls a " << roll << std::endl;
        movePiece(board, 2, roll);
        displayBoard(board);
    }

    return 0;
}

