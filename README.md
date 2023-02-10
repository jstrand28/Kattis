# Kattis Problems Solved

## Index
- [Libraries](#libraries---what-i-use-in-library)
  - [iomanip](#iomanip)
  - [string](#string)
  - [math](#math)
- [Functions](#functions-designed-for-solutions)
  - [Get Number](#get-number)
  - [Get Vowels](#get-vowels)
  - [Get Number of Decimal Places](#get-number-of-decimal-places)
  -[Get Max](#get-max)
- [Problem Descriptions](#problem-description)
- [C Problems](#c)
- [Python Problems](#python)
- [C++ Problems](#c-1)

## Libraries - What I use in Library

#### iomanip
```bash
#include <iomanip>

cout << fixed << setprecision(num);
```
#### string
```bash
#include <string>

\\init string
string str;

\\find length of string
int len = str.length();

\\read data to string
getline(cin, input_name);
```

#### cmath
```bash
#include <cmath>

pow(num1, num2);
```

#### vector
```bash
#include <vector>

//init
vector <int> name;

//store variables in a for loop
name.pushback(var)

//sends iter to the end
name.end()

//sends iter to the beginning
name.begin()
```

#### algorithm

```bash
#include <algorithm>

//reverse array or vector
reverse(vector.begin(), vector.end());
```

[return](#index)

## Functions Designed for Solutions

#### Get Number

```bash
int getNum(char x){
  int y = 0;
  y = int(x - '0');
  return y;
}
```

#### Get Vowels

```bash
int getVowel(char x){
    int count= 0;
    if(x == 'a' || x == 'A'){
        count++;
    }
    else if(x== 'e' || x == 'E'){
        count++;
    }
    else if(x == 'I' || x == 'i'){
        count++;
    }
    else if(x== 'O' || x == 'o'){
        count++;
    }
    else if(x== 'U' || x== 'u'){
        count++;
    }
    return count;
}
```

#### Get Number of Decimal Places
```bash
int getNumberDecimal(float x){
    int count=0;
    x = x-int(x);
    if(x < 1){
        do{
            count++;
            x*= 10;
            x = x -int(x);
        }while(x != 0);
    }
    return count;
}
```

#### Get Max

```bash
int getMax(int n, int arr[], int last_max){
    int max= 0;
    for(int i=0;i<n;i++){
        if(last_max > arr[i] || last_max == 0){
            if(max < arr[i]){
                max = arr[i];
            }
        }
    }
    return max;
}
```

#### Harshad Numbers

```bash
int checkHarshad(int n)
{
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}
```

[return](#index)

### Problem Description

- [Hello World!](https://open.kattis.com/problems/hello)
- [Which is Greater?](https://open.kattis.com/problems/whichisgreater)
- [Greetings!](https://open.kattis.com/problems/greetings2)
- [GCVWR](https://open.kattis.com/problems/gcvwr)
- [FYI](https://open.kattis.com/problems/fyi)
- [Finding An A](https://open.kattis.com/problems/findingana)
- [Electrical Outlets](https://open.kattis.com/problems/electricaloutlets)
- [Echo Echo Echo](https://open.kattis.com/problems/echoechoecho)
- [Dice Cup](https://open.kattis.com/problems/dicecup)
- [Chanukah Challenge](https://open.kattis.com/problems/chanukah)
- [Betting](https://open.kattis.com/problems/betting)
- [Batter Up](https://open.kattis.com/problems/batterup)
- [Autori](https://open.kattis.com/problems/autori)
- [Odd Echo](https://open.kattis.com/problems/oddecho)
- [Building Pyramids](https://open.kattis.com/problems/buildingpyramids)
- [Two-sum](https://open.kattis.com/problems/twosum)
- [Trik](https://open.kattis.com/problems/trik)
- [Triangle Area](https://open.kattis.com/problems/trianglearea)
- [Transit Woes](https://open.kattis.com/problems/transitwoes)
- [Tarifa](https://open.kattis.com/problems/tarifa)
- [Take Two Stones](https://open.kattis.com/problems/taketwostones)
- [Stuck In a Time Loop](https://open.kattis.com/problems/stuckinatimeloop)
- [Stopwatch](https://open.kattis.com/problems/stopwatch)
- [Sort Two Numbers](https://open.kattis.com/problems/sorttwonumbers)
- [Solving for Carrots](https://open.kattis.com/problems/solvingforcarrots)
- [Sibice](https://open.kattis.com/problems/sibice)
- [Shattered Cake](https://open.kattis.com/problems/shatteredcake)
- [Quality-Adjusted Life-Year](https://open.kattis.com/problems/qaly)
- [Provinces and Gold](https://open.kattis.com/problems/provincesandgold)
- [Pot](https://open.kattis.com/problems/pot)
- [Pet](https://open.kattis.com/problems/pet)
- [Oddities](https://open.kattis.com/problems/oddities)
- [N-sum](https://open.kattis.com/problems/nsum)
- [Nasty Hacks](https://open.kattis.com/problems/nastyhacks)
- [Magic Trik](https://open.kattis.com/problems/magictrik)
- [Last Factorial Digit](https://open.kattis.com/problems/lastfactorialdigit)
- [Laptop Sticker](https://open.kattis.com/problems/laptopsticker)
- [Knot Knowledge](https://open.kattis.com/problems/knotknowledge)
- [Jumbo Javelin](https://open.kattis.com/problems/jumbojavelin)
- [Janitor Troubles](https://open.kattis.com/problems/janitortroubles)
- [IsItHalloween.com](https://open.kattis.com/problems/isithalloween)
- [Hissing Microphone](https://open.kattis.com/problems/hissingmicrophone)
- [Grass Seed Inc.](https://github.com/jstrand28/Kattis/blob/main/Grass_seed_Inc.c)
- [FizzBuzz](https://open.kattis.com/problems/fizzbuzz)
- [Filip](https://open.kattis.com/problems/filip)
- [Faktor](https://open.kattis.com/problems/faktor)
- [Digit Swap](https://open.kattis.com/problems/digitswap)
- [Cold-puter Science](https://open.kattis.com/problems/cold)
- [Add Two Numbers](https://open.kattis.com/problems/addtwonumbers)
- [Tetration](https://open.kattis.com/problems/tetration)
- [Sum Kind of Problem](https://open.kattis.com/problems/sumkindofproblem)
- [Speed Limit](https://open.kattis.com/problems/speedlimit)
- [Speeding](https://open.kattis.com/problems/speeding)
- [Simon Says](https://open.kattis.com/problems/simonsays)
- [Seven Wonders](https://open.kattis.com/problems/sevenwonders)
- [R2](https://open.kattis.com/problems/r2)
- [Quadrant Selection](https://open.kattis.com/problems/quadrant)
- [Number Fun](https://open.kattis.com/problems/numberfun)
- [Ladder](https://open.kattis.com/problems/ladder)
- [Job Expenses](https://open.kattis.com/problems/jobexpenses)
- [Grading](https://open.kattis.com/problems/grading)
- [3D Printed Statue](https://open.kattis.com/problems/3dprinter)
- [99 Problems](https://open.kattis.com/problems/99problems)
- [Aaah!](https://open.kattis.com/problems/aaah)
- [ABC](https://open.kattis.com/problems/abc)
- [Above Average](https://open.kattis.com/problems/aboveaverage)
- [A Different Problem](https://open.kattis.com/problems/different)
- [Alex and Barb](https://open.kattis.com/problems/alexandbarb)
- [A Multiplication Game](https://open.kattis.com/problems/amultiplicationgame?editsubmit=9485732)
- [Akcija](https://open.kattis.com/problems/akcija?editsubmit=9542451)
- [Lost Lineup](https://open.kattis.com/problems/lostlineup?editsubmit=9543447)
- [Roll Call](https://open.kattis.com/problems/rollcall?editsubmit=9545018)
- [Average Speed](https://open.kattis.com/problems/averagespeed?editsubmit=9545412)
- [Abstract Painting](https://open.kattis.com/problems/abstractpainting?editsubmit=9549389)
- [Bootstrapping Numbers](https://open.kattis.com/problems/bootstrappingnumber?editsubmit=9549938)
- [Jack-O'-Lantern Juxtaposition](https://open.kattis.com/problems/jackolanternjuxtaposition)
- [Knight Packing](https://open.kattis.com/problems/knightpacking)
- [Rating_problems](https://open.kattis.com/problems/ratingproblems?editsubmit=10297488)
- [Baby Panda](https://open.kattis.com/problems/babypanda?editsubmit=10339565)
- [Alchemy 101](https://open.kattis.com/problems/alchemy101?editsubmit=10340468)
- [From A to B](https://open.kattis.com/problems/fromatob?editsubmit=10346726)
- [Homework](https://open.kattis.com/problems/heimavinna?editsubmit=10347241)
- [ACM Contest Scoring](https://open.kattis.com/problems/acm?editsubmit=10365026)
- [Amsterdamn Distance](https://open.kattis.com/problems/amsterdamdistance)
- [Planina](https://open.kattis.com/problems/planina?editsubmit=10371704)
- [Heart Rate](https://open.kattis.com/problems/heartrate?editsubmit=10381977)
- [Eye of Sauron](https://open.kattis.com/problems/eyeofsauron)
- [Cryptographer's Conundrum](https://open.kattis.com/problems/conundrum?editsubmit=10391809)
- [Piece of Cake!](https://open.kattis.com/problems/pieceofcake2?editsubmit=10412078)
- [Zoom](https://open.kattis.com/problems/zoom?editsubmit=10412837)
- [Count the Vowels](https://open.kattis.com/problems/countthevowels?editsubmit=10412933)
- [Sum Squared Digits Function](https://open.kattis.com/problems/sumsquareddigits?editsubmit=10413297)
- [Double Password](https://open.kattis.com/problems/doublepassword?editsubmit=10413455)
- [Metronome](https://open.kattis.com/problems/metronome)
- [A List Game](https://open.kattis.com/problems/listgame)
- [Another Brick in the Wall](https://open.kattis.com/problems/anotherbrick)
- [Poker Hand](https://open.kattis.com/problems/pokerhand)
- [Not Amused](https://open.kattis.com/problems/notamused)
- [A Real Challenge](https://open.kattis.com/problems/areal)
- [A Furious Cocktail](https://open.kattis.com/problems/cocktail)
- [Alphabet Spam](https://open.kattis.com/problems/alphabetspam)
- [Datum](https://open.kattis.com/problems/datum)
- [Harshad Numbers](https://open.kattis.com/problems/harshadnumbers)
- [Soylent](https://open.kattis.com/problems/soylent)
- [Reverse](https://open.kattis.com/problems/ofugsnuid)
- [Final Exam](https://open.kattis.com/problems/finalexam)
- [Rectangle Area](https://open.kattis.com/problems/rectanglearea)

[return](#index)

##### C

- [3dPrinter.c](https://github.com/jstrand28/Kattis/blob/main/3dPrinter.c)
- [ABC.c](https://github.com/jstrand28/Kattis/blob/main/ABC.c)
- [ADifferentProblem.c](https://github.com/jstrand28/Kattis/blob/main/ADifferentProblem.c)
- [Aaaah.c](https://github.com/jstrand28/Kattis/blob/main/Aaaah.c)
- [AlexandBarb.c](https://github.com/jstrand28/Kattis/blob/main/AlexandBarb.c)
- [Autori.c](https://github.com/jstrand28/Kattis/blob/main/Autori.c)
- [Batter_Up.c](https://github.com/jstrand28/Kattis/blob/main/Batter_Up.c)
- [Beeproblem.c](https://github.com/jstrand28/Kattis/blob/main/Beeproblem.c)
- [Bela.c](https://github.com/jstrand28/Kattis/blob/main/Bela.c)
- [Betting.c](https://github.com/jstrand28/Kattis/blob/main/Betting.c)
- [Carrot.c](https://github.com/jstrand28/Kattis/blob/main/Carrot.c)
- [Chanikah_Challenge.c](https://github.com/jstrand28/Kattis/blob/main/Chanukah_Challenge.c)
- [Cold-puter_Science.c](https://github.com/jstrand28/Kattis/blob/main/Cold-puter_Science.c)
- [Dice_cup.c](https://github.com/jstrand28/Kattis/blob/main/Dice_cup.c)
- [Electrical_Outlets.c](https://github.com/jstrand28/Kattis/blob/main/Electrical_Outlets.c)
- [FYI.c](https://github.com/jstrand28/Kattis/blob/main/FYI.c)
- [Faktor.c](https://github.com/jstrand28/Kattis/blob/main/Faktor.c)
- [Finding_an_a.c](https://github.com/jstrand28/Kattis/blob/main/Finding_an_a.c)
- [FizzBuzz.c](https://github.com/jstrand28/Kattis/blob/main/FizzBuzz.c)
- [Flip.c](https://github.com/jstrand28/Kattis/blob/main/Flip.c)
- [GCvWR.c](https://github.com/jstrand28/Kattis/blob/main/GCvWR.c)
- [Grass_seed_Inc.c](https://github.com/jstrand28/Kattis/blob/main/Grass_seed_Ink.c)
- [Greater.c](https://github.com/jstrand28/Kattis/blob/main/Greater.c)
- [Greetings.c](https://github.com/jstrand28/Kattis/blob/main/Greetings.c)
- [Hello_world.c](https://github.com/jstrand28/Kattis/blob/main/Hello_world.c)
- [ITSHALLOWEEN.c](https://github.com/jstrand28/Kattis/blob/main/ITISHALLOWEEN.c)
- [JanitorTroubles.c](https://github.com/jstrand28/Kattis/blob/main/JanitorTroubles.c)
- [Job expenses.c](https://github.com/jstrand28/Kattis/blob/main/Job%20expenses.c)
- [Jumbo_Javeline.c](https://github.com/jstrand28/Kattis/blob/main/Jumbo_Javeline.c)
- [Laptop_stickers.c](https://github.com/jstrand28/Kattis/blob/main/Laptop_sticker.c)
- [Last factorial digit.c](https://github.com/jstrand28/Kattis/blob/main/Last%20factorial%20digit.c)
- [N-sum.c](https://github.com/jstrand28/Kattis/blob/main/N-sum.c)
- [Nasty_hacks.c](https://github.com/jstrand28/Kattis/blob/main/Nasty_hacks.c)
- [Number_fun.c](https://github.com/jstrand28/Kattis/blob/main/Number_fun.c)
- [R2.c](https://github.com/jstrand28/Kattis/blob/main/R2.c)
- [ReversedBinaryNumbers.c](https://github.com/jstrand28/Kattis/blob/main/ReversedBinaryNumbers.c)
- [Seven Wonders.c](https://github.com/jstrand28/Kattis/blob/main/Seven%20Wonders.c)
- [Sibice.c](https://github.com/jstrand28/Kattis/blob/main/Sibice.c)
- [Simon_says.c](https://github.com/jstrand28/Kattis/blob/main/Simon_says.c)
- [Sort_Two_Numbers.c](https://github.com/jstrand28/Kattis/blob/main/Sort_Two_Numbers.c)
- [Stuck_in_a_time_loop.c](https://github.com/jstrand28/Kattis/blob/main/Stuck_in_a_time_loop.c)
- [Sumkindofproblem.c](https://github.com/jstrand28/Kattis/blob/main/Sumkindofproblem.c)
- [Two-sum.c](https://github.com/jstrand28/Kattis/blob/main/Two-sum.c)
- [aboveaverage.c](https://github.com/jstrand28/Kattis/blob/main/aboveaverage.c)
- [add_two_number's.c](https://github.com/jstrand28/Kattis/blob/main/add_two_number's.c)
- [assignment 1.c](https://github.com/jstrand28/Kattis/blob/main/assignment%201.c)
- [digit_swap.c](https://github.com/jstrand28/Kattis/blob/main/digit_swap.c)
- [echo.c](https://github.com/jstrand28/Kattis/blob/main/echo.c)
- [grading.c](https://github.com/jstrand28/Kattis/blob/main/grading.c)
- [hissingmicrophone.c](https://github.com/jstrand28/Kattis/blob/main/hissingmicrophone.c)
- [knot knowledge.c](https://github.com/jstrand28/Kattis/blob/main/knot%20knowledge.c)
- [ladder.c](https://github.com/jstrand28/Kattis/blob/main/ladder.c)
- [magictrik.c](https://github.com/jstrand28/Kattis/blob/main/magictrik.c)
- [odd_echo.c](https://github.com/jstrand28/Kattis/blob/main/odd_echo.c)
- [oddities.c](https://github.com/jstrand28/Kattis/blob/main/oddities.c)
- [pet.c](https://github.com/jstrand28/Kattis/blob/main/pet.c)
- [pot.c](https://github.com/jstrand28/Kattis/blob/main/pot.c)
- [provinencesandgold.c](https://github.com/jstrand28/Kattis/blob/main/provinencesandgold.c)
- [pyramids.c](https://github.com/jstrand28/Kattis/blob/main/pyramids.c)
- [qaly.c](https://github.com/jstrand28/Kattis/blob/main/qaly.c)
- [quadrant.c](https://github.com/jstrand28/Kattis/blob/main/quadrant.c)
- [shattered_Cake.c](https://github.com/jstrand28/Kattis/blob/main/shattered_Cake.c)
- [spavana.c](https://github.com/jstrand28/Kattis/blob/main/spavana.c)
- [speeding.c](https://github.com/jstrand28/kattis/blob/main/speeding.c)
- [speedlimit.c](https://github.com/jstrand28/Kattis/blob/main/speedlimit.c)
- [square_peg.c](https://github.com/jstrand28/Kattis/blob/main/square_peg.c)
- [stopwatch.c](https://github.com/jstrand28/Kattis/blob/main/stopwatch.c)
- [take_two_stones.c](https://github.com/jstrand28/Kattis/blob/main/take_two_stones.c)
- [tarifa.c](https://github.com/jstrand28/Kattis/blob/main/tarifa.c)
- [tetration.c](https://github.com/jstrand28/Kattis/blob/main/tetration.c)
- [transitwoes.c](https://github.com/jstrand28/Kattis/blob/main/transitwoes.c)
- [turbo.c](https://github.com/jstrand28/Kattis/blob/main/turbo.c)
- [Akcija.c](https://github.com/jstrand28/Kattis/blob/main/akcija.c)
- [LostLineup.c](https://github.com/jstrand28/Kattis/blob/main/LostLineup.c)

[return](#index)

##### Python

- [HelloWorld.py](https://github.com/jstrand28/Kattis/blob/main/HelloWorld.py)
- [akcija.py](https://github.com/jstrand28/Kattis/blob/main/akcija.py)
- [RollCall.py](https://github.com/jstrand28/Kattis/blob/main/RollCall.py)
- [AbstractPainting.py](https://github.com/jstrand28/Kattis/blob/main/AbstractPainting.py)
- [BootstrappingNumbers.py](https://github.com/jstrand28/Kattis/blob/main/BootstrappingNumbers.py)
- [Not_Amused.py](https://github.com/jstrand28/Kattis/blob/main/Not_Amused.py)
- [A_Furious_Cocktail.py](https://github.com/jstrand28/Kattis/blob/main/A_Furious_Cocktail.py)

[return](#index)

##### C++

- [99problems.cpp](https://github.com/jstrand28/Kattis/blob/main/99problems.cpp)
- [AMultiplicationGame.cpp](https://github.com/jstrand28/Kattis/blob/main/AMultiplicationGame.cpp)
- [AverageSpeed.cpp](https://github.com/jstrand28/Kattis/blob/main/AverageSpeed.cpp)
- [2048.cpp](https://github.com/jstrand28/Kattis/blob/main/2048.cpp)
- [Knight_packing.cpp](https://github.com/jstrand28/Kattis/blob/main/Knight_Packing.cpp)
- [jackolanternjuxtaposition.cpp](https://github.com/jstrand28/Kattis/blob/main/jackolanternjuxtaposition.cpp)
- [Rating_problems](https://github.com/jstrand28/Kattis/blob/main/Rating_Problems.cpp)
- [BabyPanda.cpp](https://github.com/jstrand28/Kattis/blob/main/BabyPanda.cpp)
- [Alchemy_101.cpp](https://github.com/jstrand28/Kattis/blob/main/Alchemy_101.cpp)
- [From_A_to_B.cpp](https://github.com/jstrand28/Kattis/blob/main/From_A_to_B.cpp)
- [Homework.cpp](https://github.com/jstrand28/Kattis/blob/main/Homework.cpp)
- [Amsterdamn_distance.cpp](https://github.com/jstrand28/Kattis/blob/main/Amsterdam_distance.cpp)
- [ACM_Contest_scoring.cpp](https://github.com/jstrand28/Kattis/blob/main/ACM_Contest_Scoring.cpp)
- [Panina.cpp](https://github.com/jstrand28/Kattis/blob/main/planina.cpp)
- [Heart_rate.cpp](https://github.com/jstrand28/Kattis/blob/main/Heart_rate.cpp)
- [Eye_of_Sauron.cpp](https://github.com/jstrand28/Kattis/blob/main/Eye_of_Sauron.cpp)
- [Crytographers_Conundrum.cpp](https://github.com/jstrand28/Kattis/blob/main/Cryptographers_Conundrum.cpp)
- [Piece_of_Cake.cpp](https://github.com/jstrand28/Kattis/blob/main/Piece_of_Cake.cpp)
- [Zoom.cpp](https://github.com/jstrand28/Kattis/blob/main/Zoom.cpp)
- [Count_the_Vowels.cpp](https://github.com/jstrand28/Kattis/blob/main/Count_the_Vowels.cpp)
- [Sum_Squared_Digits_Function.cpp](https://github.com/jstrand28/Kattis/blob/main/Sum_Squared_Digits_Function.cpp)
- [Double_Password.cpp](https://github.com/jstrand28/Kattis/blob/main/Double_Password.cpp)
- [Metronome.cpp](https://github.com/jstrand28/Kattis/blob/main/Metronome.cpp)
- [A_List_Game.cpp](https://github.com/jstrand28/Kattis/blob/main/A_List_Game.cpp)
- [Another_Brick_in_the_wall.cpp](https://github.com/jstrand28/Kattis/blob/main/Another_Brick_in_the_wall.cpp)
- [Poker_Hand.cpp](https://github.com/jstrand28/Kattis/blob/main/Poker_Hand.cpp)
- [A_Real_Challenge.cpp](https://github.com/jstrand28/Kattis/blob/main/A_Real_Challenge.cpp)
- [A_Furious_Cocktail.cpp](https://github.com/jstrand28/Kattis/blob/main/A_Furious_Cocktail.cpp)
- [Alphabet_Spam.cpp](https://github.com/jstrand28/Kattis/blob/main/Alphabet_Spam.cpp)
- [Datum.cpp](https://github.com/jstrand28/Kattis/blob/main/Datum.cpp)
- [Harshad_Numbers.cpp](https://github.com/jstrand28/Kattis/blob/main/Harshad_Numbers.cpp)
- [Soylent.cpp](https://github.com/jstrand28/Kattis/blob/main/Soylent.cpp)
- [Reverse.cpp](https://github.com/jstrand28/Kattis/blob/main/Reverse.cpp)
- [Final_Exam.cpp](https://github.com/jstrand28/Kattis/blob/main/Final_Exam.cpp)
- [Rectangle_Area.cpp](https://github.com/jstrand28/Kattis/blob/main/Rectangle_Area.cpp)

[return](#index)
