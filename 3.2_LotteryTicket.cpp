#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    string string1;
    string string2;
    string string3;
    string string4;
	string string5;
	string string6;

    random_device generator;

    uniform_int_distribution<int> lotteryOne(1, 9);
	string1 = to_string(lotteryOne(generator));
    uniform_int_distribution<int> lotteryTwo(1, 9);
    string2 = to_string(lotteryTwo(generator));
    uniform_int_distribution<int> lotteryThree(1, 9);
    string3 = to_string(lotteryThree(generator));
    uniform_int_distribution<int> lotteryFour(1, 9);
    string4 = to_string(lotteryFour(generator));
    uniform_int_distribution<int> lotteryFive(1, 9);
    string5 = to_string(lotteryFive(generator));
    uniform_int_distribution<int> lotterySix(1, 9);
    string6 = to_string(lotterySix(generator));

    string final = string1 + string2 + string3 + string4 + string5 + string6;
    cout << final << endl;

    return 0;
}