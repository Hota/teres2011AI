/**********************************************************
	�\���̂̒�`
**********************************************************/
#ifndef _STRUCT_H_
#define _STRUCT_H_


typedef struct GM	//�Q�[���}�l�[�W���[�\����
{
	

} GM_T;


typedef struct AI	// 1��AI�̌^
{
	int no;		//AI�̎��ʔԍ�
	char* name;	//AI�̖��O:�ϒ��z��Ƃ��Ďg�p
	int *hand;	//�莝���̃J�[�h:�ϒ��z��Ƃ��Ďg�p
	int pass;	//�p�X������
	int rank;	//����
	char* path;	//AI��exe�t�@�C���ւ̃p�X:�ϒ��z��Ƃ��Ďg�p

} AI_T;


#endif	// !_STRUCT_H_

