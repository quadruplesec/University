#ifndef __Airport_h__
#define __Airport_h__

#include <string>
#include <vector>

struct airplane {
  std::string id;      // "TP170" => unique value
  std::string airline; // "TAP", ...
};

class Airport {
public:
  // constructor
  Airport(const std::string& name, const std::string& city);

  // member functions
  std::string name() const;
  std::string city() const;
  void land(const airplane& ap);
  void takeoff(const std::string& id); 
  int count_airplanes(const std::string& airline) const;

private:
  std::string name_;
  std::string city_;
  std::vector<airplane> airplanes_;
};

#endif