#ifndef TOWER_H
#define TOWER_H

#include <iostream>
#include <string>
#include <sstream>

class Tower{
  private:
  int tower[4];
  int size;
  
  public:
  Tower(){
    size=0;
  }
  
  Tower(const Tower&obj){
    value=new int;
    *value=*obj.value;
  }
  
  Tower&operator=(const Tower&.rhs){
    if (this!=&rhs){
      size=rhs.size;
    }
  }
  ~Tower(int num){}
  
  bool Push(int num){
    if (size!=4&&size==0||num<tower[size-1]){
      tower[size-1]=num;
      size++;
      return true;
    }
     else {return false;}
  }
  
  void Pop(){
    if (size!=0){
      size--;
    }
  }
  
  const int Top(){
    if(size!=0){
      return (size-1);
    }
    else {throw"error message";}
    
  }
  const bool IsEmpty(){
    if(size==0){
      return true;
    }
  }
  
  const bool Full(){
    if(size==4){
      return true;
    }
  }
  
  void MakeEmpty(){
    size=0;
  }
  
  const string ToString(){
    cout << "[ " << a << ", " << b << ", " << c << ", " << d << " ]" << endl;
  }
  
  friend ostream& operator << (ostream&out, const<Tower&obj>){
    out << obj.ToString();
    return out;
  }
}
#endif
