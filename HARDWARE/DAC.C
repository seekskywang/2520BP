#include "pbdata.h"
void DAC_Configuration(void)
{
   DAC_InitTypeDef DAC_InitStructure;

   DAC_InitStructure.DAC_Trigger=DAC_Trigger_None;//��ʹ�ó�������
   DAC_InitStructure.DAC_WaveGeneration=DAC_WaveGeneration_None;//��ʹ�����ǲ�
   //���� ��ֵ����
   DAC_InitStructure.DAC_LFSRUnmask_TriangleAmplitude=DAC_LFSRUnmask_Bit0;
   //�رջ���
   DAC_InitStructure.DAC_OutputBuffer=DAC_OutputBuffer_Disable;

   DAC_Init(DAC_Channel_1,&DAC_InitStructure);//��ʼ��DACͨ��1

   DAC_Cmd(DAC_Channel_1,ENABLE);//ʹ��DAC1

   DAC_SetChannel1Data(DAC_Align_12b_R,0);//12λ �Ҷ���
}