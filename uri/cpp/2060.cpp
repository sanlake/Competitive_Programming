#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int q,n,v[4]={0,0,0,0};
    std::cin>>q;

    for(int i=0; i<q; i++){
        std::cin>>n;
        for(int j=2; j<6; j++)
            if(n%j==0) v[j-2]++;
    }

    for(int i=2; i<6; i++)
        std::cout<<v[i-2]<<" Multiplo(s) de "<<i<<std::endl;
}
