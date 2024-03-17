#include <iostream>
#include <random>
#include <chrono>
#include <vector>

int util()
{
 ///a1111
    int answer = 0;
    std::vecotr <int> ans;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<int> dis(0, 9);
    for(int i = 0; i<4; i++)
    {
        int number = dis(gen);
        if( i == 0 && number == 0)
        {
            continue
        }
        else if(i == 0 && number !=0)
        {
            asd.push_back(number);
            i++;
        }
        else
        {
            asd.push_back(number);
        }

    }
    answer = asd[0] * 100 + asd[1] * 10 + asd[2];

    
    
    return answer;
}