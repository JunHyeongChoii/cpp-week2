#include <iostream>
#include <random>

int util()
{
 ///a
    int answer = 0;

    std::random_device rd;
    
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dis(100,999);

    answer = dis(gen);

    std::cout << "Answer is : " << answer << std::endl;
    
    return answer;
}