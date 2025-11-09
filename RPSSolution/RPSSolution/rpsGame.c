#include <stdio.h>
#include <string.h>
#include "rpslib.h"

const char* rps_winner(const char* p1, const char* p2) {
    (void)p1; (void)p2;
    int valid1 = 0, valid2 = 0;

    if (strcmp(p1, p2) == 0) // Draw condition
        return "Draw";
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0) // P1 R vs S win for P1
        return "Player1";
    if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Paper") == 0) // P1 S vs P win for P1
        return "Player1";
    if (strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0)    // P1 P vs R win for P1
        return "Player1";
    if (strcmp(p1, "Scissors") == 0 && strcmp(p2, "Rock") == 0) // P1 S vs R win for P2
        return "Player2";
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Paper") == 0) // P1 R vs P win for P2
        return "Player2";

    if (p1 != 0 && (strcmp(p1, "Rock") == 0 || strcmp(p1, "Paper") == 0 || strcmp(p1, "Scissors") == 0))
        valid1 = 1; //player 1 is valid

    if (p2 != 0 && (strcmp(p2, "Rock") == 0 || strcmp(p2, "Paper") == 0 || strcmp(p2, "Scissors") == 0))
        valid2 = 1; //player 2 is valid

    if (!valid1 || !valid2) // if neither is valid return "invalid"
        return "Invalid";
} 


   



int main() {

}