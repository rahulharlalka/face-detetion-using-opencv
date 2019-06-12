#include<bits/stdc++.h>
#define bada long long int
#define khtm "\n"
#define fr(i,a,n) for(i=a;i<n;i++)
#define frr(i,a,n) for(i=n;i>a;i--)
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/

int main (){
    fast
        int i,t;
    cin>>t;
    while(t--){
        int n,c=0,count=0;
        cin>>n;
        char str[n];
        cin >> str;
        while(str[c]!='\0'){
            if(str[c]=='P')
                count++;
            c++;
        }
        int p;
        p=ceil(0.75*n);
        if(count<p){
                int k=0;
            fr(i,2,n-3){

            if(str[i]=='A'&&(str[i-1]=='P'||str[i-2]=='P')&&(str[i+1]=='P'||str[i+2]=='P'))
                 k++;
            }
        if(k>=p-count)
            cout<<p-count<<khtm;
        else cout<<-1<<khtm;
    }

    else cout<<0<<khtm;

    }

    return 0;
}

