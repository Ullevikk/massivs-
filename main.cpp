#include <iostream>
using namespace std; 

int main() {
 int n;
 int mas[100];
 cout << "Ievadit n!\n";
 cin >> n;

 cout << "Ievadit massiva elementus! \n";
 for (int i=0; i<n; i++)
  {
    cin >> mas[i];
  }
 
 cout << "______________________ \n";
 
 for (int i=0; i<n; i++)
  {
    cout << mas[i] << "\n";
  }
}