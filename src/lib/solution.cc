#include "solution.h"
#include <map>
#include <numeric>    

using namespace std;

vector<int> Solution::FilterOdd (vector<int> & input0){
    // create a vector for rotating
    vector<int> result0 = input0;
    vector<int> temp(result0.size());

    auto it = copy_if(result0.begin(), result0.end(), temp.begin(), [](int i){return i % 2 == 0;});

    temp.resize(distance(temp.begin(), it));


return temp;
}

vector<int> Solution::IntSquare (vector<int> & input1){
    vector<int> result1 = input1;
    vector<int> temp1(result1.size());

    auto it = transform(result1.begin(), result1.end(),temp1.begin(), [](int i){return i*i;});

    temp1.resize(distance(temp1.begin(), it));

    return temp1;
}

int Solution::VecAccumulate (vector<int> & input2){
    vector<int> result2 = input2;
    vector<int> temp2(result2.size());

    int it = accumulate(result2.begin(), result2.end(),0);

    return it;
}


