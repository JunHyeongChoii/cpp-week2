#include <iostream>

int game(int answer);
int util();

int main()
{
    int answer = 0;

    answer = util();

    int ans = 0;

    ans = game(answer);

    if(ans == 1)
    {
        std::cout << "You Win!" << std::endl;

    }
    else
    {
        std::cout << "You Lose!" << std::endl;
    }

    return 0;
}