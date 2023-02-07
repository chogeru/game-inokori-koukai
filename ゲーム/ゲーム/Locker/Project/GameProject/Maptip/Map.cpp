
#include"Map.h"
#include"AreaChange.h"
#include"../h.h"

Map::Map(int nextArea,const CVector2D& nextplayerpos) : Base(eType_Field) {
	//���C���[0
	m_map_tip[0] = COPY_RESOURCE("mmm", CImage);
	//���C���[1
	m_map_tip[1] = COPY_RESOURCE("mmm", CImage);
	SaveLoad::s_save_data.MapData = nextArea;
	Base* player = Base::FindObject(eType_kamano);
	if (player) {
		player->m_pos = nextplayerpos;
	}
	
	switch (nextArea) {
	case 1:
		//fmf����}�b�v�f�[�^��ǂݍ���
		Open("Map/1�K���C���z�[����.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		//	Base::Add(new kaisou(CVector2D(100, 100)));
			//�L����                   //�������ړ����l�A�E���c�ړ����l

		Base::Add(new Fuda(CVector2D(580, 380)));
		//Base::Add(new Enemy(CVector2D(700, 680)));

		Base::Add(new AreaChange(2,					//���̃}�b�v�̔ԍ�
			CRect(m_fmfHeader.byChipWidth * 48,		//���i���l�������قǉE�ɍs���j
				m_fmfHeader.byChipHeight * 7,		//�����i���l���Ⴂ�قǏ�ɍs���j
				m_fmfHeader.byChipWidth * 5,		//���T�C�Y�i�����蔻��j
				m_fmfHeader.byChipHeight * 6),		//�c�T�C�Y�i�����蔻��j
			CVector2D(m_fmfHeader.byChipWidth * 47,	//���̃}�b�v�̍ŏ��̃v���C���[�̏ꏊ
				m_fmfHeader.byChipHeight * 7)));

		//�L����
		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 45,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 43,
				m_fmfHeader.byChipHeight * 41)));

		Base::Add(new AreaChange(10,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(11,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(12,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(13,
			CRect(m_fmfHeader.byChipWidth * 37,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(14,
			CRect(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));


		/*	Base::Add(new AreaChange(99,
				CRect(m_fmfHeader.byChipWidth * 19,
					m_fmfHeader.byChipHeight * 49,
					m_fmfHeader.byChipWidth * 8,
					m_fmfHeader.byChipHeight * 4),
				CVector2D(m_fmfHeader.byChipWidth * 16,
					m_fmfHeader.byChipHeight * 49)));*/
		break;

	case 2:
		Open("Map/2�K���C���z�[��.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		//�L���@�E���
		Base::Add(new Enemy(CVector2D(1400, 680)));
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 6),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 7)));
		//���ւ�
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 41)));


		Base::Add(new AreaChange(15,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(16,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(17,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(18,
			CRect(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(19,
			CRect(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));
		break;
	case 3:
		Open("Map/3�K���C���z�[��.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		Base::Add(new Enemy(CVector2D(1400, 680)));
		//�L���@�E��
		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 6),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 7)));

		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 41)));

		Base::Add(new AreaChange(20,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(21,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(22,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(23,
			CRect(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(24,
			CRect(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));
		break;

	case 4:
		Open("Map/4�K���C���z�[��.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		//����
		Base::Add(new Enemy(CVector2D(1400, 680)));
		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 6),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 7)));

		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 41)));


		Base::Add(new AreaChange(25,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(26,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(27,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(27,
			CRect(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(29,
			CRect(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));

		break;
	case 5:
		Open("Map/5�K���C���z�[��.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		Base::Add(new Enemy(CVector2D(1400, 680)));
		//����
		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 6),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 7)));

		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 41)));

		Base::Add(new AreaChange(30,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(31,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));
		Base::Add(new AreaChange(32,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(33,
			CRect(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(34,
			CRect(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));

		break;


	case 6:
		Open("Map/6�K���C���z�[��.fmf");
		SOUND("BGM_TTT")->Stop();
		SOUND("BGM_ura")->Play(true);
		Base::Add(new Enemy(CVector2D(1400, 680)));

		/*Base::Add(new AreaChange(7,
			CRect(m_fmfHeader.byChipWidth * 49,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 4,
				m_fmfHeader.byChipHeight * 6),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 7)));*/

		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 48,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 5,
				m_fmfHeader.byChipHeight * 8),
			CVector2D(m_fmfHeader.byChipWidth * 47,
				m_fmfHeader.byChipHeight * 41)));
		Base::Add(new AreaChange(35,
			CRect(m_fmfHeader.byChipWidth * 7,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(36,
			CRect(m_fmfHeader.byChipWidth * 22,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(37,
			CRect(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(38,
			CRect(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 41,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28)));

		Base::Add(new AreaChange(39,
			CRect(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 28)));

		break;

	case 10:
		Open("Map/����.fmf");
		Base::Add(new Fuda(CVector2D(600, 380)));
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));
		break;



	case 11:
		Open("Map/����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 12:
		Open("Map/����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));
		break;

	case 13:
		Open("Map/����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 37,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 14:
		Open("Map/�g�C��.fmf");
		Base::Add(new aya(CVector2D(600, 680)));
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(1,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 15:
		Open("Map/�}�����Q.fmf");
		Base::Add(new Fuda(CVector2D(300, 450)));

		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 16:
		Open("Map/�}����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 17:
		Open("Map/�}����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 18:
		Open("Map/����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new Enemy(CVector2D(240, 680)));
		Base::Add(new Enemy(CVector2D(740, 580)));
		Base::Add(new Enemy(CVector2D(540, 580)));
		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 43)));
		break;

	case 19:
		Open("Map/�g�C��.fmf");
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(2,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 31,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 20:
		Open("Map/�n����.fmf");
		Base::Add(new Fuda(CVector2D(700, 380)));
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 21:
		Open("Map/�n����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 22:
		Open("Map/�n����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 23:
		Open("Map/�n����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(640, 580)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 24:
		Open("Map/�g�C��2.fmf");
		Base::Add(new aya(CVector2D(600, 680)));
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(3,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 25:
		Open("Map/�֎q����.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 26:
		Open("Map/�֎q����.fmf");
		Base::Add(new Fuda(CVector2D(600, 380)));
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 27:
		Open("Map/�勳��.fmf");
		//	Base::Add(new Enemy(CVector2D(340, 680)));
		//	Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));

		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 46,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 43)));

		Base::Add(new AreaChange(50,
			CRect(m_fmfHeader.byChipWidth * 58,
				m_fmfHeader.byChipHeight * 8,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 20,
				m_fmfHeader.byChipHeight * 75)));
		break;



	case 29:
		Open("Map/�g�C��2.fmf");
		Base::Add(new aya(CVector2D(600, 680)));
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(4,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 30:
		Open("Map/�������̂���.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new Enemy(CVector2D(340, 380)));
		Base::Add(new Enemy(CVector2D(840, 280)));
		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 31:
		Open("Map/�֎q�����Q.fmf");

		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));


		break;
	case 32:
		Open("Map/������.fmf");
		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 33:
		Open("Map/�q��.fmf");
		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 43)));
		break;

	case 34:
		Open("Map/�g�C��2.fmf");
		Base::Add(new aya(CVector2D(600, 680)));
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(5,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 35:
		Open("Map/�H�H�H.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new Fuda(CVector2D(950, 280)));
		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 8,
				m_fmfHeader.byChipHeight * 7)));
		break;
	case 36:
		Open("Map/�����Ȃ�.fmf");

		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 23,
				m_fmfHeader.byChipHeight * 7)));

		Base::Add(new AreaChange(51,
			CRect(m_fmfHeader.byChipWidth * 13,
				m_fmfHeader.byChipHeight * 8,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 27)));

		Base::Add(new AreaChange(52,
			CRect(m_fmfHeader.byChipWidth * 24,
				m_fmfHeader.byChipHeight * 8,
				m_fmfHeader.byChipWidth * 2,
				m_fmfHeader.byChipHeight * 2),
			CVector2D(m_fmfHeader.byChipWidth * 18,
				m_fmfHeader.byChipHeight * 27)));

		break;
	case 37:
		Open("Map/�H�H�H.fmf");
		Base::Add(new Enemy(CVector2D(340, 680)));
		Base::Add(new Enemy(CVector2D(840, 580)));
		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 9,
				m_fmfHeader.byChipHeight * 43)));
		break;
	case 38:
		Open("Map/���Ƃ�����.fmf");
		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 27,
				m_fmfHeader.byChipHeight * 43)));
		break;

	case 39:
		Open("Map/�g�C��3.fmf");
		Base::Add(new aya(CVector2D(600, 680)));
		SOUND("BGM_ura")->Stop();
		SOUND("BGM_TTT")->Play(true);
		Base::Add(new AreaChange(6,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 25,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 32,
				m_fmfHeader.byChipHeight * 7)));
		break;

	case 50:
		Open("Map/�B���L��.fmf");
		Base::Add(new K(CVector2D(600, 300)));
		Base::Add(new AreaChange(27,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 78,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 58,
				m_fmfHeader.byChipHeight * 8)));
		break;

	case 51:
		Open("Map/�����Ȃ���.fmf");
		Base::Add(new aya(CVector2D(600, 300)));
		Base::Add(new AreaChange(36,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 13,
				m_fmfHeader.byChipHeight * 8)));
		break;
	case 52:
		Open("Map/�����Ȃ��E.fmf");
		
		Base::Add(new AreaChange(36,
			CRect(m_fmfHeader.byChipWidth * 16,
				m_fmfHeader.byChipHeight * 28,
				m_fmfHeader.byChipWidth * 6,
				m_fmfHeader.byChipHeight * 4),
			CVector2D(m_fmfHeader.byChipWidth * 24,
				m_fmfHeader.byChipHeight * 8)));
		break;


	}
}


Map::~Map() {
	//fmf�����
	Close();
}


void Map::Draw() {
	if (m_kill) return;
	
	//1F�̃Y�����Ȃ������߁A�`��̒��O�ŃX�N���[���l�m��
	if (Base* p = Base::FindObject(eType_kamano)) {
		//�X�N���[���ݒ�
		m_scroll.x = p->m_pos.x - 600;
		m_scroll.y = p->m_pos.y - 500;
	}


	//�`�b�v�̐��@��s�P�U�񂩁@�P�s�Q�T�U��
	int s = pow(16, (GetLayerBitCount() / 8));

	//�\���͈͂�����@��ʂɈڂ�͈͂����`��
	int col = CCamera::GetCurrent()->GetWhidth() / GetChipWidth()+1;
	int row = CCamera::GetCurrent()->GetHeight() / GetChipHeight()+1;
	
	int sx = m_scroll.x / GetChipWidth();
	if (sx < 0) sx = 0;
	int ex = sx + col;
	if (ex > GetMapWidth())ex = GetMapWidth();

	int sy = m_scroll.y / GetChipHeight();
	if (sy < 0) sy = 0;
	int ey = sy + row;
	if (ey > GetMapHeight())ey = GetMapHeight();
	

	//���C���[�������J��Ԃ� k=1����n�߂�Ɣ���p�̕ǂ����\�������
	for (int k = 0; k < GetLayerCount();k++) {
		//�s�Ɨ�̌J��Ԃ�
		for (int j = sy; j < ey; j++) {
			for (int i = sx; i < ex; i++) {
				//�`�b�v�̔ԍ����擾����
				int t = GetValue(k, i, j);
				//���ߔԍ��Ȃ�\�����Ȃ�
				if (t == NULL_TIP) continue;
				//�`�b�v�ԍ�����g�p����摜�̏ꏊ���v�Z
				int x = t % s;
				int y = t / s;
				//�\���ʒu�ݒ�
				m_map_tip[k].SetPos(CVector2D(m_fmfHeader.byChipWidth*i, m_fmfHeader.byChipHeight*j)-m_scroll);
				//�\����`�ݒ�
				m_map_tip[k].SetRect(x * m_fmfHeader.byChipWidth, y * m_fmfHeader.byChipHeight, (x + 1) * m_fmfHeader.byChipWidth, (y + 1) * m_fmfHeader.byChipHeight);
				//�T�C�Y�ݒ�
				m_map_tip[k].SetSize(m_fmfHeader.byChipWidth, m_fmfHeader.byChipHeight);
				//�\��
				m_map_tip[k].Draw();
			}
		}
	}
	
}

int Map::GetTip(const CVector2D& pos, int* tx, int* ty)
{
	//����v�Z
	int x = pos.x / GetChipWidth();
	//��̐���
	if (x < 0) x = 0;
	if (x > GetMapWidth() - 1) x = GetMapWidth() - 1;
	//�s���v�Z
	int y = pos.y / GetChipHeight();
	//�s�̐���
	if (y < 0) y = 0;
	if (y > GetMapHeight() - 1) y = GetMapHeight() - 1;
	//�s�Ɨ�̏o��
	if (ty) *ty = y;
	if (tx) *tx = x;
	//�`�b�v�f�[�^��ԋp�@�ǂ̔ԍ���Ԃ�
	return GetValue(1, x, y);
}

int Map::GetTip(int x, int y)
{
	return GetValue(1, x, y);
}


int Map::CollisionMap(const CVector2D& pos)
{
	return GetTip(pos);
}
int Map::CollisionMap(const CVector2D& pos, const CRect& rect, CVector2D* rev_pos)
{
	//�}�b�v�`�b�v�̃T�C�Y��16�h�b�g�Ə������̂ŁA�ǔ������Ȃ��悤6�_�Ŕ���
	int tx, ty;
	//����
	int t = GetTip(CVector2D(pos.x + rect.m_left, pos.y + rect.m_top), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = (tx + 1) * GetChipWidth() - rect.m_left + 1;
		rev_pos->y = (ty + 1) * GetChipHeight() - rect.m_top + 1;
		return t;
	}
	//�E��
	t = GetTip(CVector2D(pos.x + rect.m_right, pos.y + rect.m_top), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = tx * GetChipWidth() - rect.m_right - 1;
		rev_pos->y = (ty + 1) * GetChipHeight() - rect.m_top + 1;
		return t;
	}

	//�^�񒆏�
	t = GetTip(CVector2D(pos.x + (rect.m_right+ rect.m_left)/2, pos.y + rect.m_top), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = pos.x;
		rev_pos->y = (ty + 1) * GetChipHeight() - rect.m_top + 1;
		return t;
	}

	//����
	t = GetTip(CVector2D(pos.x + rect.m_left, pos.y + rect.m_bottom), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = (tx + 1) * GetChipWidth() - rect.m_left + 1;
		rev_pos->y = ty * GetChipHeight() - rect.m_bottom - 1;
		return t;
	}
	//�E��
	t = GetTip(CVector2D(pos.x + rect.m_right, pos.y + rect.m_bottom), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = tx * GetChipWidth() - rect.m_right - 1;
		rev_pos->y = ty * GetChipHeight() - rect.m_bottom - 1;
		return t;
	}
	//������
	t = GetTip(CVector2D(pos.x + (rect.m_right+ rect.m_left)/2, pos.y + rect.m_bottom), &tx, &ty);
	if (t != NULL_TIP) {
		//�C����ʒu
		rev_pos->x = pos.x;
		rev_pos->y = ty * GetChipHeight() - rect.m_bottom - 1;
		return t;
	}
	return NULL_TIP;
}