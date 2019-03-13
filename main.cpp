//
//  main.cpp
//  Prime Factorisation
//
//  Created by Evan Crabtree on 16/12/2018.
//  Copyright © 2018 QuantumFluctuator. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    void primeFactors(int);
    int n;
    cout << "Enter number: ";
    cin >> n;
    primeFactors(n);
    cin.get();
    cin.get();
    
    return 0;
}

void primeFactors(int number) {
    while (number % 2 == 0) {
        cout << 2;
        printf(" ");
        number /= 2;
    }
    for (int index = 3; index <= number; index += 2) {
        while (number % index == 0) {
            cout << index;
            printf(" ");
            number /= index;
        }
    }
}
