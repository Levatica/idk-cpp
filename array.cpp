#include <iostream>

using namespce std;
int main(){
    array<int, 5> array;
    for(int i = 0; i <= 4; i++){
      array[i] = 1;
      cout << "array = [" << i << "] = " << array[i] " ";
      cout << "adress = " << &array[i] << endl;
    }
  return 0;
}
