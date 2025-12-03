#include "random_vector.h"
#include <random>
#include <algorithm>
// TODO: add any include you might require

RandomVector::RandomVector(int size, double max_val) { 
  // TODO: Write your code here
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(0.0, max_val);
  for (int i = 0; i < size; ++i) {
      vect.push_back(dis(gen));
  }
}

void RandomVector::print(){
  // TODO: Write your code here
  for (const auto& val : vect) {
      std::cout << val << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;
}

double RandomVector::mean(){
  // TODO: Write your code here
  double sum = 0.0;
  for (const auto& val : vect) {
      sum += val;
  }
  return sum / vect.size();
}

double RandomVector::max(){
  // TODO: Write your code here
  double maximum = vect[0];
  for (const auto& val : vect) {
      if (val > maximum) {
          maximum = val;
      }
  }
  return maximum;
}
double RandomVector::max_algo(){
  // TODO: Write your code here
  double maximum = vect[0];
  for (const auto& val : vect) {
      maximum = std::max(maximum, val);
  }
  return maximum;
}

double RandomVector::min(){
  //TODO:  Write your code here
  double minimum = vect[0];
  for (const auto& val : vect) {
      if (val < minimum) {
          minimum = val;
      }
  }
  return minimum;
}
double RandomVector::min_algo(){
  // TODO: Write your code here
  double minimum = vect[0];
  for (const auto& val : vect) {
      minimum = std::min(minimum, val);
  }
  return minimum;
}

void RandomVector::printHistogram(int bins){
  // TODO: Write your code here
  double min_val = min();
  double max_val = max();
  double bin_size = (max_val - min_val) / bins;
  std::vector<int> histogram(bins, 0);
  int bin_i = 0;
  for (const auto& val : vect) {
    int bin_index = 0;
    for (int i = 0; i < bins; ++i) {
      if (static_cast<int>((val - min_val) / bin_size) < (i +1)) {
          bin_index = i;
          break;
      }
    }
      histogram[bin_index]++;
      // bin_i= bin_index;
  }
  int max_histo_count_elment =0;
  for (const auto& cont: histogram) {
      if (cont > max_histo_count_elment){
          max_histo_count_elment = cont;
      }
  }
  std::cout << "max num of element" << max_histo_count_elment << std::endl;
  int line_num = max_histo_count_elment;
  for (int i = 0; i < max_histo_count_elment; ++i) {
      for (int j = 0; j < bins; ++j) {
          if (histogram[j] >= line_num) {
              std::cout << "*** ";
          } else {
              std::cout << "    ";
          }
      }
      std::cout << std::endl;
      line_num--;
  }

}
