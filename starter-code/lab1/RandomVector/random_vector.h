#include <iostream>
#include <vector>

class RandomVector{
  std::vector<double> vect;
  
  public:
    RandomVector(int size, double max_val = 1);
    void print();
    double mean();
    double max();
    double min();
    double mean_algo();
    double max_algo();
    double min_algo();
    void printHistogram(int bins);
};