#include <iostream>
#include <map>
#include <memory>
#include <tuple>
#include <vector>

class Piece {
public:
  std::map<int, int> position;
  bool isCaptured;
  virtual void move(int x, int y) { this->position[x] = y; };
  std::string name = "base piece";
  virtual void echo() { std::cout << this->name << "\n"; }
};

class Pawn : public Piece {
public:
  std::string name = "pawn";
  void move(int x, int y) override { this->position[x] = y; }
  void echo() override { std::cout << this->name << "\n"; }
};

// class Game {
// public:
//   bool isFinished;
//   std::vector < std::vector<Piece> grid;
//   int victor;
//   void init() { this->grid = {{new Piece p1, Pawn p2}}; };
//   void echo() {
//     for (int i = 0; i < grid.size(); i++) {
//       std::vector<int> row = this->grid[i];
//       for (int j = 0; j < row.size(); j++) {
//         std::cout << row[j];
//       }
//       std::cout << "\n";
//     }
//   };
// };

int main() {
  while (true) {
    /* code */

    Piece p1;
    Pawn pawn1;
    p1.echo();
    pawn1.echo();
    break;
  }

  return 0;
}