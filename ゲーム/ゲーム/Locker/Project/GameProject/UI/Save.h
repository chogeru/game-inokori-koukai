#pragma once
#include <GLLibrary.h>
//���Ƃ��ăQ�[�����ɂ͏o�����Ȃ��̂ŁA
//Base�̌p���͂��Ă��Ȃ�
class SaveLoad {
public:
	//�Z�[�u�f�[�^�\����
	struct SaveData {
		int MapData;		//�}�b�v�̃f�[�^
		int PlayerData;//�v���C���[�̃f�[�^
		CVector2D PlayerPos; //�v���C���[���W�f�[�^
	};
	//�Z�[�u�f�[�^
	static SaveData s_save_data;
public:
	/// �f�[�^�ǂݍ���
	/// <param name="file">�Z�[�u�f�[�^�t�@�C����</param>
	static void Load(const char* file);
	/// �f�[�^��������
	/// <param name="file">�Z�[�u�f�[�^�t�@�C����</param>
	static void Save(const char* file);

};
