#include <iostream>
#include <cmath>

int edadPerro(int);

int main()
{
  using namespace std;
  
  int anyosPerrunos;
  cout << "Introduce la edad real de tu perro:" << endl;
  cin >> anyosPerrunos;
  
  int anyosHumanizados = edadPerro(anyosPerrunos);
  
  cout << "La edad humana de tu perro es " << anyosHumanizados << endl;
  system("pause");
  return 0;
}

int edadPerro(int pEdad)
{
  return 7 * pEdad;
}
