#ifndef __HANOI_PUZZLE_H__
#define __HANOI_PUZZLE_H__

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class Tower
{
public:
  Tower() {}          // build empty tower
  int top() const;    // disk at the top (0 if none)
  void add(int disk); // add disk to the top
  void remove();      // remove disk from the top (no effect if empty)
  const vector<int>& get_disks() const { return disks_; }
private:
  vector<int> disks_;
};

// stream output operator
ostream& operator<<(ostream& os, const Tower& t); 

// first: source tower (0, 1, or 2)
// second: destination tower (0, 1, or 2)
typedef pair<int,int> disk_move;

class HanoiPuzzle
{
public:
  HanoiPuzzle(int n_disks) {
    for (int i = n_disks; i > 0; i--) towers_[0].add(i);
  }
  void move(const vector<disk_move>& dmoves);
  const Tower* get_towers() const {
    return towers_;
  }
private:
  Tower towers_[3];
};

ostream& operator<<(ostream& os, const HanoiPuzzle& h) {
  const Tower* t = h.get_towers();
  return os << t[0] << t[1] << t[2];
}
#endif