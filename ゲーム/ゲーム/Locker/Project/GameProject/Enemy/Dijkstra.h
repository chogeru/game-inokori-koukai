/*#pragma once

#include "Map.h"
/// <summary>
/// �_�C�N�X�g���@�o�H�T���N���X
/// </summary>
class Dijkstra {
public:
	struct CELL {
		int x;	//��
		int y;	//�s
	};
private:
	unsigned char m_score[MAP_HEIGHT][MAP_WIDTH];			//MAP�S�̂̃}�X���Ƃ̋����z��
	int m_path_size;										//�S�[���܂ł̋���
	CELL m_goal;											//�S�[���n�_
	static const unsigned int m_max_value = 255;						//�ő勗��
	CELL m_path[m_max_value];									//�o�H
	bool _FindShortestPath(Map* map, int x, int y, unsigned char score);

public:
	
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Dijkstra();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Dijkstra();

	/// <summary>
	/// �o�H�T���@�ړI�n����o���n�_�܂ł̃m�[�h�̏���Ԃ�
	/// </summary>
	/// <param name="map">�o�H�Ώۂ̃}�b�v</param>
	/// <param name="start">�o���n�_</param>
	/// <param name="goal">�ړI�n�_</param>
	/// <returns>true:�o�H����</returns>
	bool FindShortestPath(Map* map, const CVector2D& start, const CVector2D& goal);

	/// <summary>
	/// �p�X�̐��A�ړI�n�܂ł̋������擾
	/// </summary>
	/// <returns>�p�X�̐��A�ړI�n�܂ł̋���</returns>
	int GetPathSize() {
		return m_path_size;
	}
	/// <summary>
	/// �o�H��̎w��ԍ��̍��W���擾
	/// </summary>
	/// <param name="idx">�Y��</param>
	/// <returns>���W</returns>
	CVector2D GetPathPoint(unsigned char idx) {
		return CVector2D(m_path[idx].x*MAP_TIP_SIZE+ MAP_TIP_SIZE/2,
			m_path[idx].y * MAP_TIP_SIZE + MAP_TIP_SIZE / 2);
	}
	/// <summary>
	/// �f�o�b�O�`��
	/// </summary>
	void Draw();

};*/