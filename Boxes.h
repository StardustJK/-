#pragma once
#include<QPen>
#include<QObject>
#include<QBrush>
#include<QGraphicsRectItem>

#include"spot.h"
#include"MessageBox.h"
#include"parameter.h"

class Boxes 
  :public QGraphicsRectItem, public QObject
{
public:
	Boxes();
  ~Boxes();
  void reStart();
	bool getFlag();//�������ӵ�ǰ״̬��������ͨ�ذ��ϣ��������յ�
	void isArrival();//�����ж�����Ƿ����յ�
	static int count;//������ʾ��Ϸ���Ƶ��յ��������
	static int boxNum;//������ʾ��Ϸ�аѼ��������Ƶ�λ����Ӯ

private:
	int flag1 = 0;//�����洢���ӵ�ǰ��״̬
	int flag2 = 0;//�����洢�����һ����״̬
};
