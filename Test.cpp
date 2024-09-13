#include <iostream>
using namespace std;
void even_only(int a){
    int sum =0;
    int n=a;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"sum is =";
    cout<<sum;
}

int main(){
even_only(6);


}