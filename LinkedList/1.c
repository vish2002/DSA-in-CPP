#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25

void clear_screen() {
    system("cls");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int birdX = 10;
    int birdY = SCREEN_HEIGHT / 2;
    int birdVelocity = 0;
    int gravity = 1;

    int gap = 10;
    int wallX = SCREEN_WIDTH - 1;
    int wallY = 0;
    int wallGapY = SCREEN_HEIGHT / 3;
    int wallGapHeight = SCREEN_HEIGHT / 3;

    int score = 0;

    int quit = 0;

    while (!quit) {
        if (_kbhit()) {
            char key = _getch();
            if (key == ' ') {
                birdVelocity = -5;
            }
        }

        birdVelocity += gravity;
        birdY += birdVelocity;

        wallX--;

        if (wallX == 0) {
            wallX = SCREEN_WIDTH - 1;
            wallGapY = rand() % (SCREEN_HEIGHT - wallGapHeight);
            score++;
        }

        clear_screen();

        for (int y = 0; y < SCREEN_HEIGHT; y++) {
            for (int x = 0; x < SCREEN_WIDTH; x++) {
                if ((x == birdX && y == birdY) || (x == birdX && y == birdY + 1) || (x == birdX + 1 && y == birdY) || (x == birdX + 1 && y == birdY + 1)) {
                    printf("[]");
                }
                else if ((x == wallX && y < wallGapY) || (x == wallX && y >= wallGapY + wallGapHeight)) {
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("Score: %d\n", score);

        if (birdY < 0 || birdY + 1 >= SCREEN_HEIGHT) {
            quit = 1;
        }
        else if ((birdX == wallX && birdY < wallGapY) || (birdX == wallX && birdY + 1 >= wallGapY + wallGapHeight)) {
            quit = 1;
        }

        Sleep(50);
    }

    printf("Game over! Your score is: %d\n", score);

    return 0;
}
  