#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int d;
  cin>>d;
  float numeri[d];
  for(int i=0;i<d;i++){
    cin>>numeri[i];
  }
  cout << funz(numeri,d)<<endl;
  return 0;
}
