#include <iostream>
#include <random>
#include <chrono>
#include <vector>

int util()
{
 ///a1111
    int answer = 0;
    std::vector <int> ans;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<int> dis(0, 9);
    for(int i = 0; i<4; i++)
    {
        int number = dis(gen);
        if( i == 0 && number == 0)
        {
            continue;
        }
        else if(i == 0 && number !=0)
        {
            ans.push_back(number);
            i++;
        }
        else
        {
            ans.push_back(number);
        }

    }
    answer = ans[0] * 100 + ans[1] * 10 + ans[2];

    
    
    return answer;
}