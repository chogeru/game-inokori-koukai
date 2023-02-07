#include "Gameclear.h"
#include "../Game/Game.h"
#include"../Maptip/Map.h"
#include"../h.h"
Gameclear::Gameclear() :Base(eType_Scene),
m_title_text("C:\\Windows\\Fonts\\msgothic.ttc", 64)
{

	m_img = COPY_RESOURCE("Gameclear", CImage);

	SOUND("BGM_ura")->Stop();
	SOUND("BGM_Title")->Stop();
	//SOUND("BGM_ending")->Play(true);
	//SOUND("BGM_omote")->Play(true);
	SOUND("BGM_�тɑ���֕�")->Play(true);

	m_img = COPY_RESOURCE("Gameclear", CImage);


}


Gameclear::~Gameclear()
{

	Base::Add(new Title());
}

void Gameclear::Update()
{
	//�{�^���P�Ń^�C�g���j��
	if (PUSH(CInput::eButton1)) {
		m_kill = true;
	}
}

void Gameclear::Draw()
{
	m_img.Draw();
	m_img.SetSize(1920, 1080);
}
