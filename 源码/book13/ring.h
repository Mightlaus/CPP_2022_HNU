//---------------------
//    ring.h
//---------------------
#ifndef RING
#define RING
struct Boy{                    //С���ṹ��Ϊ������
  int code;
  Boy* next;
};//-------------------
class Ring{                    //�������ඨ��
public:
  Ring(int n, int beg);
  void Count(int m);           //��m��С��
  void PutBoy(bool) const;         //�����ǰС���ı��
  void ClearBoy();             //����ǰС�����������ѹ�
 ~Ring();
private:
  Boy* pBegin;
  Boy* pivot;
  Boy* pCurrent;
};//-------------------
#endif