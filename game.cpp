#include <iostream>
#include <vector>

int game(int answer)
{
 
    std::vector <int> ans;


    int aa = answer / 100;
    int ab = (answer % 100 - answer % 10) / 10;
    int ac = answer % 10;

    ans.push_back(aa);
    ans.push_back(ab);
    ans.push_back(ac);

    while(true)
    {
        int strike = 0;
        int ball = 0;
        int guess;

        std::cout << "Enter a guess: ";
        std::cin >> guess;

        if(guess == answer)
        {
            return 1;
        }

        std::vector <int> gus;

        int ga = guess / 100;
        int gb = (guess % 100 - guess % 10)/10;
        int gc = guess % 10;

        gus.push_back(ga);
        gus.push_back(gb);
        gus.push_back(gc);
       // 159 510
        for(int i = 0 ; i<3; i++)
        {
            if(ans[i] == gus[i])
            {
                strike +=1;
                continue;
            }

            for(int j = 0; j<3; j++)
            {
                if(ans[i] == gus[j])
                {
                    ball+=1;
                    break;
                }
            }
        }
        std::cout << "Strikes: " << strike << ", Balls: " << ball << std::endl;

    }
    
    return 0;
}