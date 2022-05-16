#include <iostream>
using namespace std;

int main() {
cout << "Hello World!\n";

int num = 3;
int num2= 1;
do {
  cout << num2 << " x " <<num<< "= "<<num*num2<<"\n";
  num2++;
}
while (num2 < 11);
return 0;
}