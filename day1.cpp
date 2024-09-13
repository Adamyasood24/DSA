#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    system("cls");
    int i= 1;
    int count=0;
    char c ='A';
    while (i<=n)
    {
        
        int j=0;
        while (j<n)
        {
      if(count<26){
       cout<<(char)(c+count)<<" ";
       j++;
       count++;}
        }
        cout<<"\n";
        i++;
    }
    


}
