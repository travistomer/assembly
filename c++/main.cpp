//
//  multiplesOf.cpp
//  project-euler
//
//  Created by Travis Tomer on 2/6/21.
//

#include <iostream>


int multiplesOf(int range, int num) {
    int sum = 0;
    
    for (int i = 1; i < range; i++) {
        if (i % num == 0) {
            sum += i;
        }
    }
    
    return sum;
}


int main(int argc, const char * argv[]) {
    
    int sum = multiplesOf(1000, 3) + multiplesOf(1000, 5) - multiplesOf(1000, 15);
    
    std::cout << "Sum of multiples: " << sum << std::endl;
    
    return 0;
}
