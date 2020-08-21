//
//  main.cpp
//  0815HW new
//
//  Created by 周姜妍 on 2020/8/20.
//  Copyright © 2020 Molly. All rights reserved.
//
#include <vector>
#include <iostream>
using namespace std;

void display(vector<int> v1) {
    cout << "Integers:" << endl;
    for (int n:v1) {
        if (n > 0 || n == 0)
        cout << n << endl;
        else
            cout << "error" <<endl;
    }
}

int main() {
    vector<int> v{27/(-10), (-27)%13, 27%(-9),27%2, (-27)/(-12) };
    vector<int> v1(v);
    display(v1);
}
