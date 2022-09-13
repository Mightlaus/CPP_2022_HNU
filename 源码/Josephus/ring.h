//******************
//**    ring.h    **
//******************
#ifndef RING
#define RING

struct Boy{                    //С���ṹ��Ϊ������
  int code;
  Boy* next;
};

class Ring{                    //�������ඨ��
public:
  Ring(int n);
  void Count(int m);           //��m��С��
  void PutBoy() const;         //�����ǰС���ı��
  void ClearBoy();             //����ǰС�����������ѹ�
  void Display();        //���Ȧ������С��
  ~Ring();
protected:
  Boy* pBegin;
  Boy* pivot;
  Boy* pCurrent;
};

#endif