#include <stdio.h>
#undef SHORT

class sound {
private:

public:
  sound();
  virtual ~sound();
  virtual void add(const int note) = 0;
  virtual void play(const double time)= 0;
};