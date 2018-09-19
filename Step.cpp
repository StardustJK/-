#include "Step.h"
#include<QFont>


Step::Step(QGraphicsTextItem * parent): QGraphicsTextItem(parent)
{
	step = 0;
	setPlainText(QString("Step: ") + QString::number(step));
	setDefaultTextColor(Qt::white);
	setFont(QFont("Impact", 25));//������ʾ��ʽ
  setPos(700, 15);
}

void Step::increase()
{
	step++;
	setPlainText(QString("Step: ") + QString::number(step));//���Ӳ�����ʵʱ��ʾ
}

int Step::getStep()
{
	return step;
}

void Step::decrease()
{
	step--;//����ʵ���߲���ʱ���Ӳ��Ĺ���
}

Step::~Step()
{
}

void Step::setStep(int newStep)
{
	step = newStep;
	setPlainText(QString("Step: ") + QString::number(step));//���Ĳ���
}
