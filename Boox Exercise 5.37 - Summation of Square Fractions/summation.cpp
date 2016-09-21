//
//  summation.cpp
//  Boox Exercise 5.37 - Summation of Square Fractions
//
//  Created by ax on 9/21/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Sum a Series of Square Fractions" << endl;
    
    double sum = 0.0, d1 = 624.0, d2 = 625.0;
    
    for (d2 = 625; d2 >= 2; d2--) {
        if (d2 > 2) {
            sum = sum + 1 / (pow(d1, 0.5) + pow(d2, 0.5));
        } else {
            sum = sum + 1 / (1 + pow(d2, 0.5));
        }
    }
    
    cout << "Sum total: " << sum << endl;
    
    return 0;
}
