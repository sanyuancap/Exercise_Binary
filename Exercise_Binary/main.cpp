//
//  main.cpp
//  Exercise_Binary
//
//  Created by ChengJY on 14-2-28.
//  Copyright (c) 2014年 ChengJY. All rights reserved.
//

#include <iostream>


//获得int型最大值
int getMaxInt(){
    return (1 << 31) - 1;//2147483647， 由于优先级关系，括号不可省略
}
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << getMaxInt()<<"\n";
    return 0;
}

