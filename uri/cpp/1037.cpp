#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double n;
    std::cin>>n;

    if(n<0 || n>100) std::cout<<"Fora de intervalo"<<std::endl;
    else if(n<=25)std::cout<<"Intervalo [0,25]"<<std::endl; 
    else if(n<=50)std::cout<<"Intervalo (25,50]"<<std::endl; 
    else if(n<=75)std::cout<<"Intervalo (50,75]"<<std::endl; 
    else if(n<=100)std::cout<<"Intervalo (75,100]"<<std::endl; 
}
