/*
 * ---------------------------------------------------
 *                ESTRUCTURAS DE DATOS
 * ---------------------------------------------------
 *              Manuel Montenegro Montes
 *              Facultad de Informática
 *         Universidad Complutense de Madrid
 * ---------------------------------------------------
 */

#include <iostream>
#include <sstream>
#include "bintree.h"

int main() {
  /*
  BinTree<std::string> left("3");
  BinTree<std::string> right(BinTree<std::string>("9"), "*",  BinTree<std::string>("7"));
  BinTree<std::string> tree(left, "+", right);
  */

  BinTree<std::string> tree = { { "3" } , "+", { { "9" } , "*", { "7 " }} };

  std::cout << tree << std::endl;

  std::istringstream istr("(((. 9 .) + (. 5 .)) * ((. 10 .) + (. 6 .)))");
  BinTree<std::string> other = read_tree<std::string>(istr);
  std::cout << other << std::endl;

  return 0;
}
