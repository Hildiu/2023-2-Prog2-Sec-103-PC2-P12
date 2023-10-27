#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;

  do{
    cout << "Numero de datos : ";
    cin >> n;
  }while(n<6);
  srand(time(nullptr));
  vector<int> v;
  for(int c=0; c<n; c++)
    v.push_back(rand() % 10);
  cout <<"\nVector 1:\n";
  for(const auto i:v)
    cout << i << "  ";
  //--- armando vector con el vecino mas fuerte
  vector<int> vMasFuerte;
  for(int c=0; c<v.size()-1; c++)
    if( v[c] >=v[c+1])
      vMasFuerte.push_back(v[c]);
    else
      vMasFuerte.push_back(v[c+1]);
  cout << "\nVector Vecino mas fuerte\n";
  for(const auto i:vMasFuerte)
    cout << i << "  ";

  return 0;
}
