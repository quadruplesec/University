#ifndef __CAR_SALE_H__
#define __CAR_SALE_H__

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct accessory {
  string name;       // e.g. "AI driving mode"
  unsigned char tax; // e.g. 0, 10, 20, ... (0 to 100)
};

class CarSale {
public:
  CarSale(const string& model, double base_price);
  string model() const;
  double base_price() const;
  void add(const accessory& a);
  int free_accessories() const;
  double final_price() const;
private:
  string model_;
  double base_price_;
  vector<accessory> acc_;
};


void print(const CarSale& r) {
   cout << fixed << setprecision(2) << r.model() << ' ' 
        << r.free_accessories() << ' ' << r.base_price() << ' '  << r.final_price()  << endl;
}

#endif
