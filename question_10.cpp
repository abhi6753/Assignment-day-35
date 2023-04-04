//10. Write a C++ program to implement Hash Table using Template Class.
#include<iostream>
using namespace std;
#define SIZE 10
template<class T>
class Hashing
{
  private:
  int i;// This indicate total element inserted in hash table
   T hash[SIZE];
 public:
 Hashing()
{
  i=-1;
}
 void insert(T k);
 T  search(T k);
 int Index(T k)
 {
    return k%10;
 }
 bool isFull()
 {
    i++;
    return i==SIZE-1?true:false;
 }
bool isEmpty()
{
  return i==-1?true:false;
}

};
template<class T>
void Hashing<T>::insert(T k)
{
   if(isFull())
   { 
     cout<<"Hash table is full"<<endl;
   }
   else
   {
      hash[Index(k)]=k;
      cout<<k<<" is inserted"<<endl;
   }
}
template<class T>
T Hashing<T>::search(T k)
{
   if(isEmpty())
   { 
     cout<<"Hash table is empty"<<endl;
   }
   else
   {
      if(hash[Index(k)]==k)
       return k;
      else
       cout<<"Elemet does not found"<<endl;
       return INT_MAX;
   }
}
int main()
{
 Hashing<int> h1;
 h1.insert(10);
 h1.insert(55);
 h1.insert(44);
 cout<<h1.search(44);
  return 0;
}