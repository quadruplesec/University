#ifndef __Floatable_h__
#define __Floatable_h__

class Floatable {
public:
  Floatable(int id, const double mass)
      : id_(id), mass_(mass) { }
  int id() const { return id_; }
  double mass() const { return mass_; }
  virtual double buoyancy() const = 0;
private:
  int id_;
  double mass_;
};

#endif