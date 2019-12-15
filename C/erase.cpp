#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    for(int i = 0 ; i < 10; i++){
        vec.push_back(i);
    }

    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //原程序, 在最后一次执行后 it++会变成野指针出错 
//vector<int>::iterator it;
//    for(it = vec.begin(); it != vec.end();it++){ 
//        if(*it == 9){
//            it = vec.erase(it);
//            cout<<"111"<<endl;
//            //it = vec.insert(it, 999);
//        }   

    for(it = vec.begin(); it != vec.end();){
    	vector<int>::iterator it1 = it;
        if(*it == 0){
        	it = vec.erase(it); //返回值指向删除元素的下一个元素
        	if(it1 == it) cout<<"2";
		}
      	else
            it++;   
        cout<<"111"<<endl;
    }


    //vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }
}
