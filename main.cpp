#include <iostream>
#include <map>

class Game{
    public:
        bool isFinished;
        std::map<int, int> grid;
        int victor;
        void init(){
            this->grid = {16, 16};
        };
        void echo(){ 
            std::cout << grid[0];
        }
};

class Piece{
    public:
        std::map<int, int> position;
        bool isCaptured;

        void move(std::map<int, int> cords){
            this-> position = {cords};
        };
};


int main(){
    while (true)
    {
        /* code */
        Game gameOne;
        gameOne.init();



    }
    
    return 0;
}