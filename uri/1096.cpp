#include <iostream>

int32_t main(void){
	for(int i=1; i<=9; i+=2)
		for(int j=7; j>=5; j--)
			std::cout<<"I="<<i<<" J="<<j<<std::endl;
}
