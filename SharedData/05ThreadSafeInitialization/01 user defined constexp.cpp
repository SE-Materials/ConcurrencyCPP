// constexpr.cpp

#include <iostream>

class MyDouble{
  private:
    double myVal1;
    double myVal2;
  public:
    constexpr MyDouble(double v1,double v2):myVal1(v1),myVal2(v2){}
    constexpr double getSum() const { return myVal1 + myVal2; }
    double getDiff() const { return myVal1 - myVal2; }
};

int main() {

  constexpr double myStatVal = 2.0;
  constexpr MyDouble myStatic(10.5, myStatVal);
  constexpr double sumStat= myStatic.getSum();
  std::cout << "SumStat: "<<sumStat << std::endl;

  double diffStat = myStatic.getDiff();
  std::cout << "DiffStat: " << diffStat << std::endl;
}