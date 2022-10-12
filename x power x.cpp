#include<simplecpp>

main_program{
turtleSim();
  cout << "how many sides = ";
  int nsides;
  cin >> nsides;
  repeat(nsides){

   forward(100); right(-360/nsides);
  }

wait(10);
 }
