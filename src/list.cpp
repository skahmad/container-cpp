#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst) {
    list<int>::iterator p;
    for(p=lst.begin(); p!=lst.end(); p++)
        cout<<*p<<", ";
    cout<<endl;
}

int main(int argc, char *argv[]) {
  printf("List Container Test.\n");
  
  list<int> intlist;
  intlist.push_back(200);
  intlist.push_back(1000);
   
  display(intlist);
  return 1;
}
