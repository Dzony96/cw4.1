#include "SygnalLoader.hpp"


vector <Probka> wczytaj(string n)
  {
      vector <Probka> tablica ;
      ifstream plik (n);
      string line;
      while (getline(plik,line))
      {
       stringstream ss(line);
    double _t, _x;
    ss >> _t;
    ss.ignore();
    ss >> _x;
    cout<< _t<<" "<< _x<<endl;
      }
      plik.close();
      return tablica;
  }
