#pragma once


//########### �w�b�_�[�t�@�C���ǂݍ��� ###############

#include "DxLib.h"
#include <string>


//############### �}�N����`�F�摜�̃t�@�C���p�X�Ɩ��O ##################

#define MY_IMG_DIR_JIKI			R"(.\MY_IMG\JIKI\)"			//���@�̉摜�t�@�C���̏ꏊ

#define MY_IMG_NAME_JIKI_1		R"(jiki_1_mini.png)"		//���@�P�̖��O
#define MY_IMG_NAME_JIKI_2		R"(jiki_2_mini.png)"		//���@�Q�̖��O

//############### �}�N����`�F�G���[���b�Z�[�W�@################

#define IMAGE_ERROR_TITLE "IMAGE_ERROR"						//�G���[�^�C�g��
#define IMAGE_ERROR_MSG "�摜���ǂݍ��߂܂���ł���"		//�G���[���b�Z�[�W

//############# �N���X�̒�` ############

class IMAGE
{
private:
	std::string FilePath;	//�p�X
	std::string FileName;	//���O

	int Handle;					//�n���h��

	int X;						//X�ʒu
	int Y;						//Y�ʒu
	int Width;					//��
	int Height;					//����

	bool IsLoad;				//�ǂݍ��߂��H

	bool IsDraw;

public:
	IMAGE(const char *, const char *);			//�R���X�g���N�^
	~IMAGE();

	std::string GetFileName(void);		//���O���擾
	
	void SetX(int);				//X�ʒu��ݒ�
	void SetY(int);				//Y�ʒu��ݒ�
	int GetX(void);				//X�ʒu���擾
	int GetY(void);				//Y�ʒu���擾
	int GetWidth(void);			//�����擾
	int GetHeight(void);		//�������擾

	bool GetIsLoad(void);		//�ǂݍ��߂��H

	void Draw(void);			//�摜��`��
};


