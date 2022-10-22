#pragma once
#include <iostream>
using namespace std;
class LuckyNumber
{
public:
    static void Run()
    {
        lucky();
    }

private:
    static void lucky()
    {
        char alphabet[26] = { 'A','B','C','D','E','F','G',H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};

        //                 {1,2,3,4,5,8,3,5,1,1,2,3,4,5,7,8,1,2,3,4,6,6,6,5,1,7} };
        std::cout << "Enter your name:" << std::endl;
        string name;
        std::cin >> name;
        for (auto i : name) {
            std::cout << i << std::endl;
            for (int j= 0; j < sizeof(alphabet); j++)
            {
                if (i==alphabet[j])
                {

                }
            }
        }

    }

};

