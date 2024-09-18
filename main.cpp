#include <iostream>

int main(void){
	
	std::cout<<"DAGILDI"<<"\n";
	
	unsigned int x = 1;
	
	float fmin1 = *reinterpret_cast<float*>(&x);
	float fmin2 = reinterpret_cast<float&>(x);
	
	if( fmin1 == fmin2 ){
		std::cout<<"ok"<<"\n";
	}
	
	return 0;
}
