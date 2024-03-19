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

    ///a
    while(true)
    {
        int number = dis(gen);

        ans.push_back(number);

        if(ans[0] == 0)
        {
            ans.pop_back();
        }

        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = 0; j < ans.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }
                else if(ans[i] == ans[j])
                {
                    ans.pop_back();
                }
            }
        }

        if(ans.size() == 3)
        {
            break;
        }
    }
    answer = ans[0] * 100 + ans[1] * 10 + ans[2];

    
    
    return answer;
}