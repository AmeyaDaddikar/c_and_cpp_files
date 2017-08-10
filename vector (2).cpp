#include <iostream>

using namespace std;

template <typename T>
class Vector
{
  private:
  T* ptr;
  int num;
  T tot;
  
  public:
  Vector()
  {
      ptr= NULL;
      num = 0;
  }
  
  Vector(const Vector& v)
  {
      num = v.num;
      ptr = new T[num];
      int i=0;
      
      while(i < num)
        ptr[i] = v.ptr[i++];
  }
  template<typename U>
  friend istream& operator >> (istream&,Vector<U>&);
  
  template<typename U>
  friend ostream& operator << (ostream&,const Vector<U>&);
  
  
  int operator > (Vector);
  
  
  ~Vector()
  {
        delete []ptr;
  }
  
};
//template<typename S>

template<typename U>
istream& operator >> (istream& in,Vector<U>& v)
{
    cout<<"Enter the number of elements\n";
    in>>v.num;
    v.ptr = new U [v.num];
    int i=0;
    while(i<v.num)
        in>>v.ptr[i++];
    return in;    
}
template<typename U>
ostream& operator << (ostream& out,const Vector<U>& v)
{
    int i=0;
    while(i<v.num)
        out<<v.ptr[i++]<<endl;;
    return out;
}
template<typename T>
int Vector<T>:: operator > (Vector v)
{
    T t1=ptr[0],t2=v.ptr[0];
    int i=0;
    while(i<num)
        t1+=ptr[i++];
    cout<<"Sum 1 "<<t1<<endl;
    i=0;
    while(i<v.num)
        t2+=v.ptr[i++];
    cout<<"Sum 2 "<<t2<<endl;
    
    if(t1>t2)
        return 1;
    else
        return 0;
    
}
int main()
{
    Vector<int>integer1;
    Vector<int>integer2;
    cin>>integer1>>integer2;
    cout<<"Output is";
    cout<<integer1<<endl<<integer2<<endl;
    cout<<(integer1>integer2);
    
    return 0;
}