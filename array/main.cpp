//
//  main.cpp
//  array
//
//  Created by 20141105039 on 15/12/2.
//  Copyright (c) 2015年 20141105039. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[2];
    int b[3];
    a[0]=12;
    a[1]=15;
    a[2]=25;
    b[0]=2;
    b[1]=3;
    b[2]=4;
    printf("%x %x %x",&a[0],&a[1],&a[2]);
    printf("%x %x %x",&b[0],&b[1],&b[2]);
    return 0;
}
