
#include "iostream"
#include "main/entity/it/nanowar/ofsteel/helloworld/HelloWorldMainLauncherClass.h"

int main(){

    std::cout << "Hello World Programmer Start" << std::endl;
	HelloWorldMainLauncherClass * tizio = new HelloWorldMainLauncherClass(2);
	tizio->songRefrain();
	std::cout << "Program Finished!" << std::endl;
	tizio->falseMethod();

}
