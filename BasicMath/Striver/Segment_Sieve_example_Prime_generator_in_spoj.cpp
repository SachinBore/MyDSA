#include <bits/stdc++.h>
using namespace std;

// Segmented Sieve Technique
int N = 1000000;
bool sieve[1000000+1];

void createSieve() {
    for(int i=2; i<=N; i++) {
        sieve[i] = true;
    }
    
    for(int i=2; i*i<=N; i++) {
        if(sieve[i] == true) {
            for(int j=i*i; j<=N; j+=i) {
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int size) {
    vector<int> ds;
    for(int i=2; i<=size; i++) {
        if(sieve[i]==true) ds.push_back(i);
    }
    return ds;
}
int main() {
    // O(10^6)
    createSieve();
    int t;
    cin>>t;
    while(t--) {
        int l, r;
        cin>>l>>r;
        
        // step 1 : generate all primes till sqrt(r)
        // O(10^6)
        vector<int> primes = generatePrimes(sqrt(r));
        
        // step 2 :
        // create a dummy array of size r-l+1 and mark everyone as 1
        // O(10^6)
        int dummy[r-l+1];
        bool flag = true;
        for(int i=0; i<r-l+1; i++) {
            if(l==0 && flag) {
                dummy[0] = 0;
                dummy[1] = 0;
                flag = false;
            }
            else if(l==1 && flag) {
                dummy[0] = 0;
                flag = false;
            }
            else dummy[i] = 1;
        }
        
        // step 3 : for all prime numbers
        // mark it's multiples as false
        // O(10^4)
        for(auto pr : primes) {
            int firstMultiple  = (l/pr)*pr;
            if(firstMultiple < l) firstMultiple += pr;
            
            // below loop is not a linear loop, approx. O(10^7)
            for(int j = max(firstMultiple, pr*pr); j<=r; j+=pr) {
                dummy[j-l] = 0;
            }
        }
        
        // step 4 : get all the primes
        // O(10^6)
        for(int i=0; i<r-l+1; i++) {
            if(dummy[i] == 1) {
                cout<<(i+l)<<endl;
            }
        }
        cout<<endl;
    }
}
