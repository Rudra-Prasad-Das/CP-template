#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
#define MOD 1000000007
#define pii pair<long long,long long>
#define vii vector<long long>
#define mii unordered_map<long long,long long>
#define sii unordered_set<long long>
#define Ford(i,ei,n) for(int (i)=ei;(i)>=(n);(i)--)
#define For(i,si,n) for(int (i)=(si);(i)<(n);(i)++)
#define all(s)  (s).begin(),(s).end() 
#define inf 1e18
#define accept(ar,n) for(int q=0;q<(n);q++)cin>>(ar)[q];
#define print(ar,n) for(int q=0;q<(n);q++)cout<<(ar)[q]<<' '; 
int  pow(int a,int n,int M){
 if(n==0) return 1;
 else if(n%2==0) return pow((a*a)%M,n/2,M);
 else return (a*pow((a*a)%M,(n-1)/2,M))%M;
 }

int add(int a,int b,int M){
   return (a+b)%M;
  }

int sub(int a,int b,int M){
   return (a-b+M)%M;
   }

int mult(int a,int b,int M){
   return (a*b)%M; 
   }
// int d, x, y;//initialise if using extended Euclid
void extendedEuclid(lli A, lli B) {
    if(B == 0){d = A;x = 1;y = 0;
    }
else{
   extendedEuclid(B, A%B);
   int temp = x; x = y;y = temp - (A/B)*y;
   }
 } 
int modInverse(int A, int M){
   extendedEuclid(A,M); 
   return (x%M+M)%M;
  } 
int find(int a,vector<int> &par){
	if(a==par[a]){
		return a;
	}
	return a=find(par[a]);
}
int uni(int a,int b,vector<int> &par){
	a=find(a);
	b=find(b);
	if(a!=b){
		par[a]=b;
	}
}  
int isSub(string &a,string &b){
	if(b.find(a)!=string::npos){
		return b.find(a);
	}
	return -1;
}                                          
//JBM   
signed main(){
   int t=1;
   cin>>t;
   while(t--){
   
   }
}
   
