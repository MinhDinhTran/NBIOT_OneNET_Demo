#include "led.h"


/**************************************************************
��������: led_init
��������: led �ĳ�ʼ��
�������: ��
����ֵ  : ��
��ע	: ��
**************************************************************/
void led_init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	/* ʹ��PA�˿�ʱ�� */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		/* ������� */
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		/* IO���ٶ�Ϊ50MHz */	
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOA, GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);/* ����Ĭ������͵�ƽ */						
}













