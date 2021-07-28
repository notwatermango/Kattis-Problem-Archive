#include <iostream>
#include <map>
using namespace std;

int prime[] = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 	101, 103, 107, 109,
    113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,211, 223, 227, 229, 233, 239, 241, 251, 257, 263,
    269, 271, 277, 281, 283, 293,307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,401, 409, 419, 421, 431,
    433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499,503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599,601,
    607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691,701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797,
    809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887,907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997
};

map<int,pair<int,int>> mz;

int main(){
    int arzi = sizeof(prime)/sizeof(prime[0]);
    for (int i = 0; i < arzi-1; i++)
    {
        for (int j = i+1; j < arzi; j++)
        {
            mz[prime[i]*prime[j]] = {prime[i],prime[j]};
        }   
    }
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,e;
        cin>>n>>e;
        int pf = mz[n].first;
        int ps = mz[n].second;
        int phi = (pf-1)*(ps-1);
        // cout<<pf<<ps<<phi<<' ';
        int d = phi-1;
        int qq = 0;
        for (int i = 1; i <= phi; i++)
        {
            qq+=e;
            // cout<<e;
            if(qq > phi){

                qq= qq%phi;

            }
            // cout<<qq;
            // cout<<i<<' ';
            if(qq == 1){
                d = i;
                break;
            }
        }
        cout<<d<<'\n';
        

        
    }
    
    return 0;
}