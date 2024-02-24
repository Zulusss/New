#include <stdio.h>

void printField(int x, int y, int player1X, int player1Y, int player2X, int player2Y, int ballX, int ballY);
int step1Player(char key, int playerY, int height);
int step2Player(char key, int playerY, int height);
int stepXBall(int ballX, int ballY, int player1X, int player1Y, int player2X, int player2Y, int speedX, int width);
int stepYBall(int ballY, int speedY, int height);

int main() {
    const int width = 80, height = 25;
    int initPlayer1X = 1, initPlayer1Y = height / 2;
    int initPlayer2X = 78, initPlayer2Y = height / 2;
    int initBallX = width / 2, initBallY = height / 2;

    int player1X = 1, player1Y = height / 2;
    int player2X = 78, player2Y = height / 2;
    int ballX = width / 2, ballY = height / 2;
    int ballSpeedX = -1, ballSpeedY = -1;

    int player1Points = 0, player2Points = 0;

    while(1) {
        char input = getchar();
        printf("\033[2J");
        player1Y = player1Y + step1Player(input, player1Y, height);
        player2Y = player2Y + step2Player(input, player2Y, height);

        int whoseKick = ballSpeedX == 1 ? 1 : 2;

        ballSpeedX = stepXBall(ballX, ballY, player1Y, player1X, player2X, player2Y, ballSpeedX, width);
        ballX += ballSpeedX;
        ballSpeedY = stepYBall(ballY, ballSpeedY, height);
        ballY += ballSpeedY;

        if(ballSpeedX == 0) {
            player1X = initPlayer1X;
            player1Y = initPlayer1Y;
            player2X = initPlayer2X;
            player2Y = initPlayer2Y;
            ballX = initBallX;
            ballY = initBallY;
            ballSpeedX = whoseKick == 1 ? -1 : 1;
            ballSpeedY = whoseKick == 1 ? -1 : 1;
            whoseKick == 1 ? player1Points++ : player2Points++;
        }

        printf("Счет %d:%d \n", player1Points, player2Points);

        if(player1Points == 21 || player2Points == 21) {
            const int whoWin = player1Points == 21 ? 1 : 2;
            printf("Победил игрок № %d\n", whoWin);

            return 0;
        }

        for(int y = 0; y < height; y++) {
            for(int x = 0; x < width; x++) {
                printField(x, y, player1X, player1Y, player2X, player2Y, ballX, ballY);
            }
            printf("\n");
        }
    }
    return 0;
}

void printField(int x, int y, int player1X, int player1Y, int player2X, int player2Y, int ballX, int ballY) {
    if ((player1Y == y || player1Y + 1 == y || player1Y - 1 == y) && (player1X == x)) {
        printf("|");
    } else if ((player2Y == y || player2Y + 1 == y || player2Y - 1 == y) && (player2X == x)) {
        printf("|");
    } else if (ballX == x && ballY == y) {
        printf("*");
    } else if (x == 0 || x == 79) {
        printf("|");
    } else if (y == 0 || y == 24){
        printf("-");
    } else {
        printf(" ");
    }
}

int stepXBall(int ballX, int ballY, int player1Y, int player1X, int player2X, int player2Y, int speedX, int width) {
    if ((ballY == player1Y || ballY == player1Y + 1 || ballY == player1Y - 1) && ((ballX - 1) == 1)) {
        return speedX == 1 ? -1 : 1;
    } else if ((ballY == player2Y || ballY == player2Y + 1 || ballY == player2Y - 1) && ((ballX + 1) == width - 1 )) {
        return speedX == 1 ? -1 : 1;
    } else if (ballX == width - 1 || ballX == 0) {
        return 0;
    } else return speedX;
}

int stepYBall(int ballY, int speedY, int height) {
    if (ballY == 1) {
        return 1;
    } else if (ballY == height - 1) {
        return -1;
    }
    else return speedY;
}

int step1Player(char key, int playerY, int height) {
    switch (key) {
    case 'a': {
        return (playerY - 2 == 0) ? 0 : -1;
    }
    case 'z': {
        return (playerY + 2 == height - 1) ? 0 : 1;
    }
    default:
        return 0;
    }
}

int step2Player(char key, int playerY, int height) {
    switch (key) {
    case 'k': {
        return (playerY - 2 == 0) ? 0 : -1;
    }
    case 'm': {
        return (playerY + 2 == height - 1) ? 0 : 1;
    }
    default:
        return 0;
    }
}