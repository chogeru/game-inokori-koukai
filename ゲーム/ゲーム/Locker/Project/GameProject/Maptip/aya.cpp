#include "aya.h"
#include"../Game/Game.h"
#include"../h.h"
aya::aya(const CVector2D& p)
	:Base(eType_aya) {
	m_img = COPY_RESOURCE("aya", CImage);
	m_img.SetCenter(32, 32);
	m_img.SetSize(64, 64);
	m_rect = CRect(-30, -30, 30, 30);
	m_pos_old = m_pos = p;
	int m_cut = 0;
}

void aya::Update()
{
	m_pos_old = m_pos;
	//Base::Add(new Fuda());
}


void aya::Draw()
{
	m_img.SetSize(64, 64);
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	//DrawRect();

}
void aya::Collision(Base* b)
{

}