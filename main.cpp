#include <iostream>

using namespace std;

int main()

{ 
    int a[15], i, k=0; int S=0; int n;
   
  cout<<"Введiть кількість елементів масиву (до 15):"; 
  cin >> n;    
  if (n>15) n=15;
  
  cout<<"Введiть 15 елементів масиву:\n"; 
   for (i=0; i<15; i++)

  {  cin >> a[i];

     if  (a[i]%2 !== 0)  {k++; S+=a[i];}

  }

  cout << "Кількість непарних елементів у масиві = " << k << endl;
  cout << "Cума непарних елементів у масиві = " << S << endl;


}


