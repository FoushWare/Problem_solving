
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:27                                                           *
    DATE:8/27/2017                                                         *
   Author: Ahmed Fouad (Foush)


#include <bits/stdc++.h>

//macro//
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define ll long long int
#define ld long double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
//this is for stop sync with input/output in c  to not to overhead and slow the program
std::ios_base::sync_with_stdio(false);
*************************************************************************/
#include <iostream>

using namespace std;
/* the problem statement
 *
Problem Statement for QuizShow


Problem Statement

You are a contestant on a TV quiz show. Throughout the game, you and your 2 opponents have accumulated points by answering trivia questions. At the end of the game, the three of you are given one final question. Before you hear the question, each contestant must decide how many points he or she wishes to wager. Each contestant who answers the question correctly will gain a number of points equal to his or her wager, while the others will lose a number of points equal to their respective wagers. The contestant who ends up with the highest score after the final question wins the game.

It has come to the point in the game where you must select your wager. You can bet any amount between zero and your current score, inclusive. Given your current score, the scores of your two opponents, and how much you believe each of your opponents will wager, compute how much you should wager in order to have the highest probability of winning the game. Assume that you and your opponents each independently have a 50% chance of answering the final question correctly.

You will be given the three scores as a int[], scores. The first element is your score, the next element is your first opponent's score, and the last element is your second opponent's score. You will also be given wager1 and wager2, the amount of your first and second opponents' wagers, respectively.

Your goal is to maximize your chance of winning uncontested. As far as you're concerned, ending in a tie is as bad as losing. If there are multiple wagers that give you the same highest probability of winning, return the smallest such wager. If you have no chance of winning, return zero.


Definition

Class:	QuizShow
Method:	wager
Parameters:	int[], int, int
Returns:	int
Method signature:	int wager(int[] scores, int wager1, int wager2)
(be sure your method is public)


Constraints
-	scores will contain exactly 3 elements.
-	Each element of scores will be between 0 and 10000, inclusive.
-	wager1 will be between 0 and scores[1], inclusive.
-	wager2 will be between 0 and scores[2], inclusive.

Examples
0)

{ 100, 100, 100 }
25
75
Returns: 76
If you bet 76, you have a 50% chance of winning. In this case, it doesn't matter if your opponents are right or wrong. If you are right, you win. Otherwise, you lose. If you wager less than 76, your chance of winning drops below 50%, and if you wager more, your chance of winning will not increase. Therefore, the correct answer is 76.
1)

{ 10, 50, 60 }
30
41
Returns: 0
Even if your opponents are both wrong, they will end up with 20 and 19 points. Since you cannot win (even if you wager 10), the correct answer is 0.
2)

{ 10, 50, 60 }
31
41
Returns: 10
This is the same as the previous example, except in this case your opponents will each end up with 19 points if they are both wrong. Now, you have a 12.5% chance of winning if you wager 10.
3)

{ 2, 2, 12 }
0
10
Returns: 1
4)

{ 10000, 10000, 10000 }
9998
9997
Returns: 9999
5)

{ 5824, 4952, 6230 }
364
287
Returns: 694
This problem statement is the exclusive and proprietary property of TopCoder, Inc. Any unauthorized use or reproduction of this information without the prior written consent of TopCoder, Inc. is strictly prohibited. (c)2010, TopCoder, Inc. All rights reserved.




This problem was used for:
       Single Round Match 223 Round 1 - Division I, Level One
*/
/*the pesudocode i'll write c++ code tomorrow cause i'm tired

int wager (vector  scores, int wager1, int wager2)
{
 int best, bet, odds, wage, I, J, K;
 best = 0; bet = 0;

 for (wage = 0; wage ≤ scores[0]; wage++)
 {
  odds = 0;
  //  in 'odds' we keep the number of favorable outcomes
  for (I = -1; I ≤ 1; I = I + 2)
   for (J = -1; J ≤ 1; J = J + 2)
    for (K = -1; K ≤ 1; K = K + 2)
     if (scores[0] + I * wage > scores[1] + J * wager1  &&
      scores[0] + I * wage > scores[2] + K * wager2)   { odds++; }
  if (odds > best)  { bet = wage ; best = odds; }
  //  a better wager has been found
 }
 return bet;
}


*/

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
