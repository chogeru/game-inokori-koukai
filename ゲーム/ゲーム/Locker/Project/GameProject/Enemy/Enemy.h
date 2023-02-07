#pragma once
#include "../Base/Base.h"
#include"../h.h"
class Enemy : public Base {
	enum {
		eState_Idle,
	};
	CImage m_img;
	int m_cnt;
	int m_state;


	bool m_flip;
	bool m_is_ground;

	int m_attack;
	int m_damage;
	int m_hp;
	void StateIdle();
	//�G���A�`�F���W�t���O
	bool m_enable_area_change;
	//�G���A�`�F���W�I�u�W�F�N�g�ɐG��Ă���t���O
	bool m_hit_area_change;
private:
	float m_viewLength;		// ���싗�� 
	float m_viewAngle;		// ����p�x
	bool m_isChase;			// �ǐՒ����ǂ���
	CVector2D m_moveDir;	// �ړ��x�N�g��
public:
	Enemy(const CVector2D& p);
	void Update();
	void Draw();
	void Collision(Base* b);
};
