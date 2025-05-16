#include<iostream>
using namespace std;
int main()
{
int n; cin>>n;
int X = 0;
for(int i = 0; i<n; i++){
    string choice;
    cin>>choice;
    if(choice == "++X"){
        ++X;
    }
    if(choice == "X++"){
        X++;
    }
    if(choice == "--X"){
        --X;
    }
    if(choice == "X--"){
        X--;
    }
    
}
cout<<X<<endl;
return 0;
}