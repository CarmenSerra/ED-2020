#include <iostream>
#include "list_linked_double.h"

int suma_elems(ListLinkedDouble<int> &l) {
  int suma = 0;
  for (int i = 0; i < l.size(); i++) {
    suma += l[i];
  }
  return suma;
}

#include <utility>

int suma_elems_iterator(const ListLinkedDouble<int> &l) {
  int suma = 0;
  for (int x : l) {
    suma += x;
  }
  return suma;
}
 
void mult_by_two(ListLinkedDouble<int> &l) {
  /*
  for (auto it = l.begin(); it != l.end(); ++it) {
    *it = *it * 2;
  }
  */

  for (int &x : l) {
    x *= 2;
  }
}

int main() {
  ListLinkedDouble<int> l;
  for (int i = 0; i < 10; i++) {
    l.push_back(i);
  }

  std::cout << l << std::endl;
  std::cout << suma_elems_iterator(l) << std::endl;
  mult_by_two(l);
  std::cout << l << std::endl;
  std::cout << suma_elems_iterator(l) << std::endl;

  return 0;
}