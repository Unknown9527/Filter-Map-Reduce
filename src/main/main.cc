#include <iostream>
#include "src/lib/solution.h"

// print the vector
void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

// Vector Rotation
int main()
{
    Solution solution;

    // filter Odd Number
    vector<int> input0 = {1,2,3,4,5,6,7,8,9};    
    vector<int> result = solution.FilterOdd(input0);
    PrintVector(result);

    // vector index square
    vector<int> input1 = {1,2,3,4,5};
    vector<int> result1 = solution.IntSquare(input1);
    PrintVector(result1);

    // voctor index sum up
    vector<int> input2 = {1,2,3,4,5};
    int result2 = solution.VecAccumulate(input2);
    
    cout << result2 << endl;
    return EXIT_SUCCESS;
};


