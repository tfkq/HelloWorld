

#include "HelloWorldMainLauncherClass.h"
#include "iostream"
#include <cstddef>
#include <cstring>

HelloWorldMainLauncherClass::HelloWorldMainLauncherClass(int foo)
: foo(foo) {

}

void HelloWorldMainLauncherClass::songRefrain(){
	for(int i = 0; i < foo; i++) {
		std::cout << "Hello World!" << std::endl;
	}

	int pippo = 0;
	while(pippo <foo){
		std::cout << "Hello World!" << std::endl;
		pippo++;
	}
}

void HelloWorldMainLauncherClass::falseMethod(){
	bool metal = false;
	if(metal == false){
		char* joeyDeCaio = NULL;
		strcpy(joeyDeCaio, "valhalleluja");
	}
}
