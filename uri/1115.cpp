#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,y;
    while(std::cin>>x>>y && x!=0 && y!=0)
        if(x>0){
            if(y>0) std::cout<<"primeiro"<<std::endl;
            else std::cout<<"quarto"<<std::endl;
        }else{
            if(y>0) std::cout<<"segundo"<<std::endl;
            else std::cout<<"terceiro"<<std::endl;
        }
}
