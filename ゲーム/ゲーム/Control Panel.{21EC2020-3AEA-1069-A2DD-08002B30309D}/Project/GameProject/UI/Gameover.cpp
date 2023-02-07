#include "Gameover.h"
#include "../Game/Game.h"
#include"../Maptip/Map.h"
#include"../h.h"
Gameover::Gameover() :Base(eType_Scene),
m_Gameover_text("C:\\Windows\\Fonts\\msgothic.ttc", 64)
{
	SOUND("BGM_ura")->Stop();
	SOUND("BGM_Title")->Stop();
	SOUND("BGM_GameOver")->Play();
	m_img[0] = COPY_RESOURCE("Gameover", CImage);
	m_img[1] = COPY_RESOURCE("gameover_itihara", CImage);
	m_img[2] = COPY_RESOURCE("hayasi_over", CImage);
	//m_img.ChangeAnimation(eState_Gameover);
	//m_img.UpdateAnimation();
	//m_img.CheckAnimationEnd();
}

Gameover::~Gameover()
{
	
	//�S�ẴI�u�W�F�N�g��j��
	Base::KillAll();
	//�Q�[���V�[����
	Base::Add(new Title());

}

void Gameover::Update()
{
	m_gcnt++;
	if (m_gcnt > 30000) {
		Chara1 = 0;

		m_gcnt = 0;
	}
	if (m_gcnt <30000>50100) {
		Chara1 = 1;

		m_gcnt = 0;
	}
	if (m_gcnt  <50100) {
		Chara1 = 2;

		m_gcnt = 0;
	}
	/*if (m_hp == 3) {
		Chara1 = 0;
	}
	if (m_hp == 2)
	{
		Chara1 = 1;
	}
	if (m_hp == 1)
	{
		Chara1 = 2;
	}*/
	/*if (HOLD(CInput::eButton2)) {
		Chara1 = 0;
	}
	if (HOLD(CInput::eButton3)) {
		Chara1 = 1;
	}
	if (HOLD(CInput::eButton4)) {
		Chara1 = 2;
	}*/
	//m_img.ChangeAnimation(eState_Gameover);
	//�A�j���[�V�����X�V
	//m_img.UpdateAnimation();
	//�{�^���P�ŃV�[�����I���
	if (PUSH(CInput::eButton1)) {
		SetKill();
		SOUND("BGM_GameOver")->Stop();	
	}
	//�A�j���[�V�����I���`�F�b�N
	//if (m_img.CheckAnimationEnd());
	//{

	//}
}

void Gameover::Draw()
{
	m_img[0].Draw();

	m_img[0].SetSize(1920, 1080);
	m_img[1].Draw();

	m_img[1].SetSize(1920, 1080);
	m_img[2].Draw();

	m_img[2].SetSize(1920, 1080);
	//�����\������
	//m_Gameover_text.Draw(64, 256, 0, 0, 0, "GAMEOVER");
	//m_Gameover_text.Draw(64, 512, 0, 0, 0, "���� Z");
}