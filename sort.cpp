//
//  main.cpp
//  firstex
//
//  Created by mac on 08/02/2019.
//  Copyright © 2019 mac. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool Compare(const string& lhs, const string& rhs)
{
    if(lhs.size()>rhs.size())
    {
        return 0;
    }
    if(lhs.size()<rhs.size())
    {
        return 1;
    }
    else
    {
        if(lhs<=rhs)
        {
            return 1;
        }
        return 0;
    }
}

int main(){
    vector<string> a;
    a.push_back("1000");
    a.push_back("45678");
    a.push_back("1");
    a.push_back("5");
    a.push_back("876");
    sort(a.begin(), a.end(), Compare);
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
