#include <iostream>

using namespace std;

int main(){
	setlocale(0, "Russian");
	int num = 10;
	int a[num]={41,52,4,74,224,522673,15,37,1,0};
	cout<<"Начальный массив:"<<endl;
	for (int i=0; i<num; ++i ){
	    cout<<a[i]<<" ";
    }
	cout<<endl<<"Массив отсортированный по убыванию:"<<endl;
	for (int k=0; k<num; k++){
	    for (int n=0; n<num-1; n++){
	        if(a[n]<a[n+1]){
	            swap(a[n], a[n+1]);
	        }
	    }
	}
	for (int b=0; b<num; b++){
	    cout<<a[b]<<" ";
	}
	return 0;
}
