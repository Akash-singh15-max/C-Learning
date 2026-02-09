#include<iostream>
#include<stdlib.h>
#include<time.h>
#define BOARD_SIZE 3
#define X 'X'
#define O 'O'
using namespace std;
typedef struct 
{
    int player;
    int computer;
    int draw;   
}Score;
int difficulty;
Score score = {.player=0,.computer=0,.draw=0};
int input_difficulty();
void clear_screen();
void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
void play_game();
int check_win(char board[BOARD_SIZE][BOARD_SIZE],int player);
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]);
void player_move(char board[BOARD_SIZE][BOARD_SIZE]);
void computer_move(char board[BOARD_SIZE][BOARD_SIZE]);
int is_valid_move(char board[BOARD_SIZE][BOARD_SIZE],int row, int col);
int main(){
    srand(time(NULL));
    input_difficulty();
    clear_screen();
    int choice;
    do
    {
        play_game();
        cout<<"Do you want to play again (1 for yes, 0 for no): ";
        cin>>choice;
    } while (choice==1);
    cout<<"Bye Bye, Thanks for playing"<<endl;
    return 0;
}
int input_difficulty(){
    while (1)
    {
        cout<<"\nEnter the difficulty level:"<<endl;
        cout<<"1. Human (Standard)"<<endl;
        cout<<"2. God (Impossible to win)"<<endl;
        cout<<"Enter your choice of your difficulty level: ";
        cin>>difficulty;
        if (difficulty!=1 && difficulty!=2)
        {
            cout<<"Incorrect choice, choose from 1 or 2:";
        }
        else{
            break;
        }
    }
    
}
void clear_screen(){
    system("cls");
}
void print_board(char board[BOARD_SIZE][BOARD_SIZE]){
    clear_screen();
    cout<<"Score:-      Player X: "<<score.player<<"    Computer: "<<score.computer<<"    Draw: "<<score.draw<<endl;
    cout<<"Tic Tac Toe\n"<<endl;
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        cout<<endl;
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ",board[i][j]);
            if (j<BOARD_SIZE-1)
            {
                cout<<"|";
            }
            
        }
        if (i<BOARD_SIZE-1)
        {
            cout<<"\n---+---+---";
        }
        
    }
    cout<<endl;
}
int check_win(char board[BOARD_SIZE][BOARD_SIZE], char player){
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0]==player && board[i][1]==player && board[i][2]==player)
        {
            return 1;
        }
        if (board[0][i]==player && board[1][i]==player && board[2][i]==player)
        {
            return 1;
        }
        
    }
    if (board[0][0]==player && board[1][1]==player && board[2][2]==player ||
        board[0][2]==player && board[1][1]==player && board[2][0]==player)
    {
        return 1;
    }
    return 0;
}
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]){
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j]==' ')
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}
void play_game(){
    char board[BOARD_SIZE][BOARD_SIZE]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    char current_player=rand()%2==0?X:O;
    while (1)
    {
        print_board(board);
        if (current_player==X)
        {
            player_move(board);
            print_board(board);
            if (check_win(board,X))
            {
                score.player++;
                print_board(board);
                cout<<"Congralutation, you have won!!!"<<endl;
                break;
            }
            current_player=O;
        }
        else{
            computer_move(board);
            print_board(board);
            if (check_win(board,O))
            {
                score.computer++;
                print_board(board);
                cout<<"I won! But you played well..."<<endl;
                break;
            }
            current_player=X;
        }
        if (check_draw(board))
        {
            score.draw++;
            print_board(board);
            cout<<"It's a draw"<<endl;
            break;
        }
        
    }
    
}
int is_valid_move(char board[BOARD_SIZE][BOARD_SIZE],int row, int col){
    return !(row<0 || col<0 ||
             row>2 || col>2 ||
             board[row][col]!=' ');
}
void player_move(char board[BOARD_SIZE][BOARD_SIZE]){
    int count = 0,x,y;
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j]==' ')
            {
                count++;
                x = i;
                y = j;
            }
            
        }
        
    }
    if (count==1)
    {
        board[x][y]=X;
        return;
    }
    int row, col;
    do
    {
        cout<<"Player X's turn: "<<endl;
        cout<<"Enter row and col (1-3) for X: ";
        cin>>row>>col;
        row--;
        col--;
    } while (!is_valid_move(board,row,col));
    board[row][col]=X;
}
void computer_move(char board[BOARD_SIZE][BOARD_SIZE]){
    // 1. play for immediate win
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j]==' ')
            {
                board[i][j]=O;
                if (check_win(board,O))
                {
                    return;
                }
                board[i][j]=' ';
            }
            
        }
        
    }
    // 2. Check for immediate block
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j]==' ')
            {
                board[i][j]=X;
                if (check_win(board,X))
                {
                    board[i][j]=O;
                    return;
                }
                board[i][j]=' ';
            }
            
        }
        
    }
    // God mode
    if (difficulty==2)
    {
        // 3. Play centre if available
        if (board[1][1]==' ')
        {
            board[1][1]=O;
            return;
        }
        // 4. Play corner if available
        int corner[4][2]={
            {0,0},
            {0,2},
            {2,0},
            {2,2}
        };
        for (int i = 0; i < 4; i++)
        {
            if (board[corner[i][0]][corner[i][1]]==' ')
            {
                board[corner[i][0]][corner[i][1]]=O;
                return;
            }
            
        }
        
    }
    // 5. Play first available move
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (board[i][j]==' ')
            {
                board[i][j]=O;
                return;
            }
            
        }
        
    }
    
}