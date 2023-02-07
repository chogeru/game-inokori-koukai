#include "Select.h"
#include "Save.h"

Select::Select():Base(eType_UI)
{
	m_select = eSave;
	m_MapData = 0;
	m_PlayerData = 0;
}

void Select::Update()
{
	
	m_MapData++;
	//�I��//
	if (PUSH(CInput::eButton2)) {
		m_select--;
		if (m_select < 0) m_select = 0;
	}
	if (PUSH(CInput::eButton4)) {
		m_select++;
		if (m_select > 1) m_select = 1;
	}
	if (PUSH(CInput::eButton5)) {
		switch (m_select) {
		case eSave:
			m_PlayerData++;
			//�ۑ��f�[�^���X�V
			SaveLoad::s_save_data.MapData = m_MapData;
			SaveLoad::s_save_data.PlayerData = m_PlayerData;
			SaveLoad::Save("save_data.dat");
			break;
		case eLoad:
			SaveLoad::Load("save_data.dat");
			//�ǂݍ��񂾃f�[�^���󂯎��
			m_MapData=SaveLoad::s_save_data.MapData;
			m_PlayerData=SaveLoad::s_save_data.PlayerData;
			break;
		}
	}
}
void Select::Draw()
{
	if (HOLD(CInput::eButton6)) {
		//SaveLoad�I��\��
		CVector2D pos[2] = {
			CVector2D(100,200),
			CVector2D(100,300),


		};

		//������ς���ƁA�\������镶�����ύX������`
		const char* text[2] = {
			"Save",
			"Load"
		};
		for (int i = 0; i < 2; i++) {
			FONT_T()->Draw(pos[i].x, pos[i].y, 1, 1, 1, text[i]);
		}
		//�J�[�\��
		FONT_T()->Draw(pos[m_select].x - 64, pos[m_select].y, 1, 1, 1, ">");
		//�e�X�g�f�[�^�̕\��
		FONT_T()->Draw(0, 128, 1, 0, 0, "m_MapData[%d] m_PlayerData[%d]", m_MapData, m_PlayerData);
	}
}
