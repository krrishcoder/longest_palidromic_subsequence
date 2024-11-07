






















################################################## RECURSIVE #######################################################################

#include <iostream>
#include <string>


using namespace std;

int lps(string x, int n , int m){
    
    if(n == x.length()+1 || m ==0 ){
        return 0;
    }
    
    if(x[n-1] == x[m-1]){
        return 1 + lps(x, n+1, m-1);
    }else{
        return max( lps(x, n, m-1), lps(x, n+1,m));
    }
}


int main() {
    
    string s = "agbcba";
    
    cout<<"lps : "<<lps(s,1,s.length());


    return 0;
}
