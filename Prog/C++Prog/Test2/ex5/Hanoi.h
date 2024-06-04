#ifndef __HANOI_H__
#define __HANOI_H__

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Tower {
public:
  Tower() {}           // build empty tower
  int top() const;     // disk at the top (0 if none)
  void add(int disk);  // add disk to the top
  void remove();       // remove disk from the top (no effect if empty)
  string str() const;  // obtain string representation
private:
  vector<int> disks_;
};

struct disk_move {
  int from, to;        // tower numbers (0, 1, 2)
};

class Hanoi {
public:
  Hanoi(int n_disks) {
    for (int i = n_disks; i > 0; i--) towers_[0].add(i);
  }
  void move(const vector<disk_move>& dmoves);
  string str() const {
    ostringstream oss;
    oss << towers_[0].str() << towers_[1].str() << towers_[2].str();
    return oss.str();
  }
private:
  Tower towers_[3];
};

#endif