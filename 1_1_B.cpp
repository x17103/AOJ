//
//  main.cpp
//  X Cubic
//
//  Created by x17103xx on 2019/05/10.
//  Copyright © 2019年 AIT. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[]) {
    int  x, sum;
    scanf("%d", &x);
    if(1 <= x && x <= 100){
        sum = x * x * x;
        printf("%d\n", sum);
    }
    return 0;
}
