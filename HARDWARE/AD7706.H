#ifndef _ad7706_H
#define _ad7706_H
void AD7705_init(u8 data);
u16 Read_Channel(u8 data );
void AD7705_write_Reg(u8 data_byte);
void INIT_AD_Convert(u8 gpio,u8 pga,u8 ch);
//void INIT_AD_Convert(void);//ads1216��ʼ��
void AD_Convert_read(void);//��ADֵ
void ch_select(u8 ch,u8 gain);//ͨ��ѡ��,PGA����
void ADS1216_Set_IO(u8 port,u8 gain);//�˿ڿ���
void ADS_1216_PGA(u8 gain);

s32 Read__Convert_read(uint8_t num);
u32 Read_Convert_read(void);
#endif 