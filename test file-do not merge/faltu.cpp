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
        bada i,n,m,a,b,z,j;
    cin>>n>>m>>a>>b>>z;
   bada l=2*n;
    bada A[l];
    for(i=0;i<l;i++)
        cin>>A[i];

    bada X[n],Y[n];
     for(i=0;i<l;i++){
         if(i%2==0)
        X[(i/2)]=A[i];
         else
         Y[(i/2)]=A[i];
     }
    bada m_m=0;
    fr(i,0,n){
    if ((X[i] - a) * (X[i] - a) + (Y[i] - b) * (Y[i] - b) <= z * z)
        m_m++;

        }
    bada q=0;
    fr(i,0,n){
        for(j=0;j<z;j++){
    if ((X[i] - a) * (X[i] - a) + (Y[i] - b) * (Y[i] - b) == j*j )
        q++;
        }
        }
    cout<<q<<khtm;
    if(m_m>=m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

