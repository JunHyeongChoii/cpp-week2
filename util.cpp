#include <iostream>
#include <random>
#include <chrono>

int util()
{
 ///a1111
    int answer = 0;

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<int> dis(100, 999);
    answer = dis(gen);

    std::cout << "Answer is : " << answer << std::endl;
    
    return answer;
}