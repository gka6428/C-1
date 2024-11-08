#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    char board[3][3];
    int x, y, k, i;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            board[x][y] = ' ';
        }
    }

    for (k = 0; k < 9; k++)
    {
        printf("(x, y) 좌표: ");
        scanf("%d %d", &x, &y);
        if (board[x][y] != ' ')
        {
            printf("상대방(혹은 자신이)이 둔 곳은 놓을 수 없습니다.\n");
            k += -1;
            continue;
        }
        else if ((x<0 or x>=3) or (y<0 or y>=3))
        {
            printf("보드판의 위치(0~2, 0~2)를 벗어나는 곳에는 둘 수 없습니다.\n");
            k += -1;
            continue;
        }
        board[x][y] = (k % 2 == 0) ? 'X' : 'O';

        for (i = 0; i < 3; i++)
        {
            printf("---|---|---\n");
            printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        }
        printf("---|---|---\n");

        if (k >= 3)
        {
            // 가로승리
            for (i = 0; i < 3; i++)
            {
                if ((board[i][0] == board[i][1]) and (board[i][1] == board[i][2]))
                {
                    break;
                }
            }
            // 세로승리
            for (i = 0; i < 3; i++)
            {
                if ((board[0][i] == board[1][i]) and (board[1][i] == board[2][i]))
                {
                    break;
                }
            }
            // 대각선승리
            if ((board[0][0] == board[1][1]) and (board[1][1] == board[2][2]))
            {
                break;
            }
            else if ((board[0][2] == board[1][1]) and (board[1][1] == board[2][0]))
            {
                break;
            }
        }
    }
    
    printf("게임 종료\n");
    return 0;
}