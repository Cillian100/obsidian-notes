#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
  return (x > y) ? x : y;
}

int main(){
  cout << myMax<int>(3, 7) << endl;
  cout << myMax<float>(3.5, 7.5) << endl;

  return 0;
}
