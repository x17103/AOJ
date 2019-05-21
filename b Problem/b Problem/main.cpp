//
//  main.cpp
//  b Problem
//
//  Created by x17103xx on 2019/05/13.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a, b, d, r;
    double f, x, y;
    scanf("%d %d", &a, &b);
    d = a / b;
    r = a % b;
    x = a;
    y = b;
    f = x / y;
    printf("%d %d %f\n", d, r, f);
    return 0;
}
