#pragma once
#include"../Base/Base.h"
class Gauge;
class FudaUI;
class kamano : public Base {
private:
	//���
	enum {
		eState_Idle,
	};
	//��ԕϐ�
	int m_state;
	CImage m_img[3];
	CImage m_img2[3];
	Gauge* m_gauge;
	Gauge* m_fudaUI;
	int Chara1;
	int hp;
	bool	m_flip;
	//���n�t���O
	bool	m_is_ground;
	//�U���ԍ�
	int m_cnt;
	int m_attack_no;
	//�_���[�W�ԍ�
	int m_cut;
	bool m_hit_fuda;
	int m_damage_no;
	int m_rad;
	//int m_hp;
	//�G���A�`�F���W�t���O
	CVector2D PlayerPos;
	bool m_enable_area_change;
	//�G���A�`�F���W�I�u�W�F�N�g�ɐG��Ă���t���O
	bool m_hit_area_change;
	//��`
	//CRect	m_rect;
	//�e��Ԃł̋���
	void StateIdle();

public:
	kamano(const CVector2D& p, bool flip);
	void Update();
	void Draw();
	void Collision(Base* b);
};
