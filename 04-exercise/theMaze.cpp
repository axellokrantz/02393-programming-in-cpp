#include <iostream>
using namespace std;

// x, y = coordinates of a block.
typedef enum { wood, stone } material;
    struct tile {
    int x, y;
    bool isWall;
    material type;
};

#define NROWS 12
#define NCOLS 16

void printMaze(tile** playground, int playerX, int playerY){
    
    for (int i = 0; i < NROWS; i++){
        for (int j = 0; j < NCOLS; j++)
        {
            if (i == playerY && j == playerX)
                cout << 'O';      
            else if(playground[i][j].isWall)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
}

tile** createPlayground(){
    tile** playground = new tile*[NROWS];
    for (int i = 0; i < NROWS; i++) {
        playground[i] = new tile[NCOLS];
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j == 0 || i == (NROWS - 1) || (i == 0 && j != 3) || j == (NCOLS - 1));

            if (playground[i][j].isWall)
                playground[i][j].type = stone;
            else
                playground[i][j].type = wood;
        }
    }
    return playground;
}

bool isValidMove(tile** playground, int playerX, int playerY, char direction){

    if(direction == 'l' && playerX >= 1){
        return true;   
    }
    else if(direction == 'r' && playerX < NCOLS - 1){
          return true;
    }
    else if(direction == 'u' && playerY >= 0 && !playground[playerY][playerX].isWall){
        return true;
    }
    else if(direction == 'd' && playerY < NROWS - 1){
        return true;
    }
    return false;
}

int main() {
    int playerX = 5;
    int playerY = 5;
    string commands;
    bool quit = false;

    tile** playground = createPlayground();
    printMaze(playground, playerX, playerY);

       while(!quit && cin >> commands){
        for(char& command : commands){
            if(command == 'l' && isValidMove(playground, playerX - 1, playerY, 'l')){
                playerX--;
            }
            else if(command == 'r' && isValidMove(playground, playerX + 1, playerY, 'r')){
                playerX++;
            }
            else if(command == 'u' && isValidMove(playground, playerX, playerY - 1, 'u')){
                playerY--;
            }
            else if(command == 'd' && isValidMove(playground, playerX, playerY + 1, 'd')){
                playerY++;
            }
            else if(command == 'q'){
                quit = true;
                break;
            }
            printMaze(playground, playerX, playerY);
        }
    }
    return 0;
}