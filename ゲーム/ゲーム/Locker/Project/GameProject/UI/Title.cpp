#include "Title.h"
#include"../h.h"
#include"../Maptip/Map.h"
Title::Title():Base(eType_Scene),
m_title_text("C:\\Windows\\Fonts\\msgothic.ttc", 64)
{
	m_img = COPY_RESOURCE("Title",CImage);
	SOUND("BGM_ura")->Stop();
	SOUND("BGM_Gameover")->Stop();
	SOUND("BGM_ending")->Stop();
	SOUND("BGM_omote")->Stop();
	SOUND("BGM_�тɑ���֕�")->Stop();
	if (!SOUND("BGM_Title")->Play(true))
		SOUND("BGM_Title")->Play(true);
}

Title::~Title()
{
	
	KillAll();
	Base::Add(new Game());
}

void Title::Update()
{
	//�{�^���P�Ń^�C�g���j��
	if (PUSH(CInput::eButton1)) {
		m_kill = true;
		
	}
}

void Title::Draw()
{
	m_img.Draw();
	m_img.SetSize(1920, 1080);
//	m_title_text.Draw(64, 500, 1, 0, 0, "GAMEOVER");
}
