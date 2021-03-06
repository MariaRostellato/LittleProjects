#include "dati.h"

int main()
{
  TstackLIFO *pozzi[3];
  for (int i = 0; i < 3; i++)
  {
    pozzi[i] = new TstackLIFO(5);
  }
  Tpozzo p;
  for (int i = 0; i < 30; i++)
  {
    creaPozzo(&p);
    addPozzo(pozzi, p);
  }
  stampaPozzi(pozzi);
  
  cout << "Second part" << endl;
  while (!pozzi[0]->stackIsEmpty())
  {
    p = pozzi[0]->pop();
    p.stampa();
  }
}
