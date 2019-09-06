#include <iostream>
#include <thread>
#include <string>
 using namespace std;
 
void one (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is Thread 1 \n";
	}
}

void two (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 2 \n";
	}
}
void three (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 3 \n";
	}
}

void four (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is thread 4 \n";
	}
}

int main() {
	
	int i = 0;
	thread th1(one, 4);
	thread th2(two, 4);
	thread th3(three, 4);
	thread th4(four, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "This print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
