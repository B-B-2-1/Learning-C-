#include<iostream>
#include<conio.h>
#include<vector>
#include <Windows.h>
using namespace std;

struct PixelPosition{
    int x;
    int y;
};
PixelPosition fruitPosition;
vector<PixelPosition> snake;
vector<char> canvas;
bool gameOver;
char gO[] = {'#','G','a','m','e',' ','O','v','e','r','#'};
const int width = 20,height = 20;
enum Dir{stop = 0,left,right,up,down} dir;

void setup(){
    system("cls");
    gameOver = false;
    dir = stop;
    PixelPosition head({width/2,height/2});
    snake.push_back(head);
    fruitPosition.x = rand() % width;
    fruitPosition.y = rand() % height;
}
void setCanvas(){
    for(int i = 0;i<width+2;i++){
        //cout<<'#';
        canvas.push_back('#');
    }
    //cout<<endl;
    canvas.push_back('\n');

    for(int i=0;i<height;i++)
        for(int j=0;j<width;j++){
            
            if (j==0)//cout<<'#';
                canvas.push_back('#');

            char C = ' ';
            for(int pos = 0;pos<snake.size();pos++){
                if (j==snake[pos].x && i==snake[pos].y){
                    if(pos==0)
                        C='0';
                    else 
                       C='o';
                }
                else if(j==fruitPosition.x && i==fruitPosition.y)
                    C='F';
            }
            //cout<<C;
            canvas.push_back(C);

            if(j==width-1){
                //cout<<'#'<<endl;
                canvas.push_back('#');
                canvas.push_back('\n');
            }
        }
    for(int i = 0;i<width+2;i++){
        //cout<<'#';
        canvas.push_back('#');
    }
    //cout<<endl;
    canvas.push_back('\n');

}
void drawCanvas(){
    for(int i=0;i<canvas.size();i++)
        cout<<canvas[i];
}
void clearCanvas(){
    canvas.clear();
}
void setGameoverCanvas(){
    int startx = (width-11)/2+1;
    int starty = (height/2-1);
    for(int i=startx+starty*(width+3);i<startx+starty*(width+3)+11;i++)
        canvas[i] = '#';
    starty++;
    for(int i=startx+starty*(width+3);i<startx+starty*(width+3)+11;i++)
        canvas[i] = gO[i-(startx+starty*(width+3))];
    starty++;
    for(int i=startx+starty*(width+3);i<startx+starty*(width+3)+11;i++)
        canvas[i] = '#';
}
void input(){

    if(kbhit())
        switch (_getch()){
            case 'a': if(dir!=Dir::right) dir = Dir::left;
            break;
            case 'd': if(dir!=Dir::left) dir = Dir::right;
            break;
            case 'w': if(dir!=Dir::down) dir = Dir::up;
                break;
            case 's': if(dir!=Dir::up) dir = Dir::down;
                break;
            case 'x': gameOver = true;
                break;
            default:
                break;
        }

}

void moveSnakeBody(){
    for(int pos=snake.size()-1;pos>0;pos--){
        snake[pos].x = snake[pos-1].x;
        snake[pos].y = snake[pos-1].y;
    }
}

void logic(){
    bool gotFruit=false;
    if (snake[0].x == fruitPosition.x && snake[0].y == fruitPosition.y){
        fruitPosition.x = rand() % width;
        fruitPosition.y = rand() % height;
        PixelPosition px({0,0});
        snake.push_back(px);

    }

    moveSnakeBody();
    
    switch (dir){
        case Dir::left: snake[0].x--;
        break;
        case Dir::right: snake[0].x++;
        break;
        case Dir::up: snake[0].y--;
        break;
        case Dir::down: snake[0].y++;
        break;
        default:
        break;
    }

    for (int pos = 1; pos < snake.size(); pos++){
        if(snake[pos].x == snake[0].x && snake[pos].y == snake[0].y)
        gameOver = true;
    }
    

    if (snake[0].x<0 || snake[0].x>width-1 || snake[0].y<0 || snake[0].y>height)
        gameOver = true;
}

int main(){
    setup();
    while(!gameOver){
        system("CLS");
        clearCanvas();
        setCanvas();
        drawCanvas();
        input();
        logic();
        Sleep(10);
    }
    if (gameOver){
        system("CLS");
        setGameoverCanvas();
        drawCanvas();
    }
    
}
