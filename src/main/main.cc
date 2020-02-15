#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution s;
    vector<int> v={1,2,3,4,5,6};
    vector<int> v1=s.Filter(v);
    cout<<"filter"<<endl;
    for(auto it=v1.begin();it!=v1.end();it++)
        cout<<" "<<*it<<endl;
    vector<int> in={1,2,3,4};
    vector<int> out=s.Map(in);
    cout<<"map"<<endl;
    for(auto it=out.begin();it!=out.end();it++)
        cout<<" "<<*it<<endl;    
    cout<<"sum= "<<s.Sum(v)<<endl;    
    return EXIT_SUCCESS;
}