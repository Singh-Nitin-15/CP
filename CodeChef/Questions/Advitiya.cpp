#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 string x = "ADVITIYA"
 int count = 0;
 //ADVITIYA
    for(int i = 0; i<s.size(); i++){
       if(i==0 && s[i] != 'A'){
            count+=26-(s[i]-'A');
       }
       else if(i == 1 && s[i]!='D'){
            if(s[i]<'D'){
                    count+='D'-s[i];
            }else{
                count+= 26 - (s[i]-'D');
            }
       }
            else if(i == 2 && s[i]!='V'){
            if(s[i]<'V'){
                    count+='V'-s[i];
            }else{
                count+= 26 - (s[i]-'V');
            }
       }

                else if(i == 3 && s[i]!='I'){
            if(s[i]<'I'){
                    count+='I'-s[i];
            }else{
                count+= 26 - (s[i]-'I');
            }
       }

                    else if(i == 4 && s[i]!='T'){
            if(s[i]<'T'){
                    count+='T'-s[i];
            }else{
                count+= 26 - (s[i]-'T');
            }
       }

                else if(i == 5 && s[i]!='I'){
            if(s[i]<'I'){
                    count+='I'-s[i];
            }else{
                count+= 26 - (s[i]-'I');
            }
       }
            else if(i == 6 && s[i]!='Y'){
            if(s[i]<'Y'){
                    count+='Y'-s[i];
            }else{
                count+= 26 - (s[i]-'Y');
            }
       }
       else if(i==7 && s[i] != 'A'){
            count+=26-(s[i]-'A');
       }
              
    }
    cout<<count<<endl;

}
return 0;
}