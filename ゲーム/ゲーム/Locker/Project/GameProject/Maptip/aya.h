#pragma once
#include "../Base/Base.h"
class aya :public Base {
private:
	//�摜�I�u�W�F�N�g
	CImage m_img;
	CVector2D pos;
	int m_cut;
	bool m_hit_fuda;
public:
	aya(const CVector2D& p);
	void Update();
	void Draw();
	void Collision(Base* b);

};

