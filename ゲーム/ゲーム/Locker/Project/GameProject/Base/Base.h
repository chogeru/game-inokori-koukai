#pragma once
#include <GLLibrary.h>
enum {
	eType_Field,
	eType_Player,
	eType_Enemy,
	eType_Fuda,
	eType_UI,
	eType_Goal,
	eType_Scene,
	eType_kamano,
	eType_hayashi,
	eType_itihara,
	eType_EnemyManager,
	eType_AreaChange,
	eType_Canvas,
	eType_Gauge,
	eType_K,
	eType_Gameclear,
	eType_Text,
	eType_aya,
	
};


#define GRAVITY (9.8f/20)
class Base {
public:
	int m_hp;

	//�I�u�W�F�N�g�̎��
	int m_type;
	int m_Ecnt;
	int m_cut;
	int m_kcut;
	int Chara1;
	//���W�f�[�^
	CVector2D m_pos;
	//���a
	float m_rad;
	//�ړ��x�N�g��
	CVector2D m_vec;
	//�폜�t���O
	bool m_kill;
	//�ړ��O�̍��W
	CVector2D m_pos_old;
	//�I�u�W�F�N�g�̃��X�g
	static std::list<Base*> m_list;
	//��`
	CRect	m_rect;	
	//��]�l
	float m_ang;
	//�X�N���[���l
	static CVector2D m_scroll;
	//�q�b�gID
	int	m_hit_id;
	
public:
	static CVector2D GetScreenPos(const CVector2D& pos);
	static CVector2D GetScreenPos(const CVector2D& p, bool flip);
	//type �I�u�W�F�N�g�̎��
	Base(int type);
	virtual ~Base();
	virtual void Update();
	virtual void Draw();
	virtual void Collision(Base* b);
	void KillByType(int type);
	//�폜�t���OON
	void SetKill() { m_kill = true; }
	//�S�ẴI�u�W�F�N�g�̍X�V
	static void UpdateAll();
	//�S�ẴI�u�W�F�N�g�̕`��
	static void DrawAll();
	//�S�ẴI�u�W�F�N�g�̓����蔻�茟��
	static void CollisionAll();
	//�폜�`�F�b�N
	static void CheckKillAll();
	//�I�u�W�F�N�g�̒ǉ�
	static void Add(Base* b);
	static void KillAll();
	//�~���m�̏Փ�
	static bool CollisionCircle(Base* b1, Base* b2);
	//��`���m�̔���
	static bool CollisionRect(Base* b1, Base* b2);
	/// ��`�̕\��
	void DrawRect();
	void DrawAI();

	static Base* FindObject(int type);
	static std::list<Base*> FindObjects(int type);
	void ResetPos(const CVector2D& pos) {
		m_pos = m_pos_old = pos;
	}
};

