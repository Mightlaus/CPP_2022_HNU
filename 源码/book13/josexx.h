//---------------------
//    josexx.h
//---------------------
#ifndef JOSEX
#define JOSEX
class Jose{
public:
  Jose(int boys=10, int begin=1, int m=3){
    numOfBoys=boys;
    beginPos=begin;
    interval=m;
  }
  void Initial();
  void GetWinner();
private:
  int numOfBoys;
  int beginPos;
  int interval;
  int wins;
};//-------------------
#endif
