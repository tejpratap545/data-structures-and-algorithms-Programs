#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;
//#include <boost/math/common_factor.hpp> 
void display(std::deque<int> dq)
{
    for(auto i=dq.begin();i!=dq.end();i++)
        std::cout<<*i<<"\n";
}
int main()
{
     std::cout<<"gcd of two numbers is "<< __gcd(2920000330322,3222929229292);
     cout<<"\nnow the vectors \n";
    std::vector<float> myvector{1, 2, 3, 4, 5 };
    std::vector<float>new_vector;
    for(auto it = myvector.begin();it!=myvector.end();it++)
        std::cout<<*it<<"\n";
    new_vector.assign(myvector.begin(),myvector.begin()+3) ;
    std::cout<<"new vector\n";
    for(auto it = new_vector.begin();it!=new_vector.end();it++)
        std::cout<<*it<<"\n";
    std::cout<<*(myvector.end());
    std::cout<<"\n"<<myvector.size();
    //myvector.reserve();
    myvector.assign(3,100.78);
    std::cout<<"after asssinging 100 3 times";
    for(auto it = myvector.begin();it!=myvector.end();it++)
        std::cout<<*it<<"\n";
    std::cout<<"adding 878 3 times in myvetors at position 3\n";
    myvector.insert(myvector.begin()+2,3,878);
    for(auto it = myvector.begin();it!=myvector.end();it++)
        std::cout<<*it<<"\n";
    std::list<int> l1;
    std::cout<<"\n Double ended queue\n";
    std::deque<int> dq1{23,67,90,78,38,282};
    display(dq1);
    //dq1.insert(3,100);
    return 1;
    
    }
