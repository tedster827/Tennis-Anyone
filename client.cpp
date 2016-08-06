/*
Teddy Williams
*/

#include <iostream>
using namespace std;

/*
Purpose: This function will find out how many games
can be played with the number of courts available.
Input: int P (Number of Players), int C (Number of Courts)
Output: (int) Number of games that can be played simultaneously.
*/
int solution(int P, int C) {
    // wrote code in C++11 (g++ 4.8.2)

    /*This if condition will check to see if the number
    of courts is greater than whats needed, if that's
    the case then simply return the needed amount.
    The number of courts needed is found by divding the
    number of players by two (two players per game).*/
    if(C > (P/2))
    {
       return(P/2);
    }
    else
    {
        return C;
    }
    return 0;
}
