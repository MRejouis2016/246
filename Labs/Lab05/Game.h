#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <sstream>
//Mac Rejouis 11/18/2021

class Game
{
  private:
  int towers[3];
  int size;
      
  public:
  Game(){
    towers[i]=4;
    towers[i+1]=3;
    towers[i+2]=2;
    towers[i+3]=1;
  }
  
  Game(const Game&obj){
    elem=obj.elem;
  }
  
  Game&operator=(const Game&.rhs){
    if (this!=&rhs){
      size=rhs.size;
    }
  }
  
  ~Game(){}
  
  bool Move(int j, int k){
    j=size-1;
    k=size-1;
    
    if(j!=k&&j<k){
      return true;
    }
    else{
      return false;
    }
  }
  
  void Reset(){
    for (int i=0; i<size; i++){
      towers[i]=towers[i+1];
      towers[size-1]=0;
    }
    
    towers[i]=4;
    towers[i+1]=3;
    towers[i+2]=2;
    towers[i+3]=1;
    
  }
  
  const bool Success(){
    if (towers[size-1]!=0&&towers[i]==0)
    {return true;}
  }
  
  const string ToString(){
    cout "towers[i]: " << a << endl;
    cout "towers[i+1]: " << b << endl;
    cout "towers[i+2]: " << c << endl;
  }
  
  friend ostream& operator << (ostream&out, const<Game&obj>){
    out << obj.ToString();
    return out;
  }
}
#endif
