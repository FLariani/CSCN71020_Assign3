#include <stdio.h>
#include <string.h>
#include "rpslib.h"

const char* rps_winner(const char* p1, const char* p2) {

    // Validate Inputs and Case Sensitivity
    int p1_ok = (p1 && (strcmp(p1, "Rock") == 0 || strcmp(p1, "Paper") == 0 || strcmp(p1, "Scissors") == 0));
    int p2_ok = (p2 && (strcmp(p2, "Rock") == 0 || strcmp(p2, "Paper") == 0 || strcmp(p2, "Scissors") == 0));
    if (!p1_ok || !p2_ok) return "Invalid";

    // Draw Condition
    if (strcmp(p1, p2) == 0) return "Draw";

    // Player 1 Wins
    if ((strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) ||
        (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0) ||
        (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0))
        return "Player1";

    // Otherwise Player 2 Wins
    return "Player2";
}
   



int main() {

}