#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

//
class Lab 
{
private:
  int * rows;
  int * cols;
  vector<vector<char>> vec;

public:
Lab (int* row, int* col): rows(row), cols(col) {}

void gener_arr(int* row, int* col) {
  *rows = *row;
  *cols = *col;
  vec.clear();
  for (int i = 0; i < *rows; i++) {
      for (int j = 0; j < *cols; j++) {
        vec[i].push_back('#');
      }
  }
}

vector<vector<char>> give_arr() {return vec;}
char give_rows() {return *rows;}
char give_cols() {return *cols;}

};
//

class Unit
{
private:
  Unit* left;
  Unit* right;
  Unit* up;
  Unit* down;
  Unit* down_left;
  Unit* down_right;
  Unit* up_left;
  Unit* up_right;
  char value;
public:
  Unit (char& val, Unit* left, Unit* right, Unit* up, Unit* down, Unit* down_left, Unit* down_right, Unit* up_left, Unit* up_right) : 
  value(val), left(left), right(right), up(up), down(down), down_left(down_left), down_right(down_right), up_left(up_left), up_right(up_right)
  {}



};
//

int main () {
  // создание лабиринта рандомизацией (сделать функцию, использовать ее также в качестве регенерации лабиринта нажатием на клавишу), 
  // вывод на экран, проверка на ошибки, вывод на экран туториала

  // считывание ввода пользователя, создание функции перемещения по лабиринту (reprint массива с новым местоположением)
  // конец прохождения лабиринта: либо начать заново, если тупик; либо нахождение выхода из лабиринта - конец программы







    return 0;
}




/*
  # 0 # # #
  # # 0 # #
  # # & # # 
  # 0 # # #
  # 0 # # #
*/