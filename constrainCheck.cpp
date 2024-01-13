#include<bits/stdc++.h>
#define in long long
using namespace std;
int main()
{
    in t;
    cin>>t;
    for(int k=0;k<t;k++){
        in t1;cin>>t1;
        vector<in>v1;
        vector<in>v2;
        vector<in>v3;
        
        
        for(in i=0;i<t1;i++){
            in x,y;
            cin>>x>>y;
            if(x==1) v1.push_back(y);
            if(x==2) v2.push_back(y);
            if(x==3) v3.push_back(y);
        }
        in lar = *max_element(v1.begin(), v1.end()); 
        in sm= *min_element(v2.begin(), v2.end()); 
        
        
        if(lar>=sm || (lar-sm)==1 || (sm-lar)==1) {
            cout<<0<<endl;
            continue;
        }
        
        
        in mn=0;
        for(int element:v3){
            if(element>=lar && element<=sm) mn++;
        }
        cout<<(sm-lar)-mn+1<<endl;
        
    
    
    }
}
