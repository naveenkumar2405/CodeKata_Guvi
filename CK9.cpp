#include <iostream>
using namespace std;
int main(){
int N,K=0,ar;
cin>>ar;
int temp[ar];
cin>>N;
for(int i=0;i<5;i++)
{
    cin>>temp[i];
}
for(int i=0;i<N;i++)
{
    K+=temp[i];
}
cout << K;
return 0;
}
