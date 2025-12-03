#include <cstdlib>
#include <iostream>
#include <vector>
t

int main(){

    std::srand(314159);
    
    std::vector<int> vec;

    for (auto i = 1; i<=5 ; ++i)
        vec.push_back(rand() % 100);

    std::cout << "Vector size: " << vec.size() << std::endl;
    
    std::cout << "Vector elements: ";
    for (auto &elem : vec)
        std::cout << elem << " ";

    std::cout << std::endl;


    return 0;
}