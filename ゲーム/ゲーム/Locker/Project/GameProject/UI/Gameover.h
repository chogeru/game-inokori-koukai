#pragma once

#include "../Base/Base.h"

class Gameover : public Base {
private:
	enum {
		eState_Gameover
	};
	//�摜�I�u�W�F�N�g
	CImage m_img[3];
	int m_gcnt;
	//�����\���I�u�W�F�N�g
	CFont m_Gameover_text;
public:
	Gameover();
	~Gameover();
	void Update();
	void Draw();
};
