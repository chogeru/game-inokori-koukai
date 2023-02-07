#include"kamano.h"
#include"../h.h"

kamano::kamano(const CVector2D& p, bool flip):
	Base(eType_kamano) {
	//�摜����
	Base::Add(new Gauge(CVector2D(p)));
	Base::Add(new FudaUI(CVector2D(p)));
	
	//m_img2[0].ChangeAnimation(0);

	Chara1 = 0;
	m_img[0] = COPY_RESOURCE("kamano", CImage);
	
	//�Đ��A�j���[�V�����ݒ�
	m_img[0].ChangeAnimation(0);
	m_img[0].SetCenter(31, 31);
	
	m_img[1] = COPY_RESOURCE("hayashi", CImage);
	
	//�Đ��A�j���[�V�����ݒ�
	m_img[1].ChangeAnimation(0);
	m_img[1].SetCenter(31, 31);
    
	m_img[2] = COPY_RESOURCE("itihara", CImage);
	//�Đ��A�j���[�V�����ݒ�
	m_img[2].ChangeAnimation(0);
	m_img[2].SetCenter(31, 31);
	
	
	//���W�ݒ�
	m_pos_old = m_pos =p;
    m_rect = CRect(-24, -22, 24, 24);
	
	m_state = eState_Idle;
	//���n�t���O
	m_is_ground = true;
	
	//�U���ԍ�
	m_attack_no = rand();
	//�_���[�W�ԍ�
	m_damage_no = -1;
	//
	m_hp = 3;
	m_rad=1;
	//�X�N���[���ݒ�
	m_scroll.x = m_pos.x - 1280 / 2;
	m_enable_area_change = true;
	m_hit_area_change = false;

}

void kamano::StateIdle()
{
	//�ړ���/ 
	const float move_speed = 7;
	//�ړ��t���O

	bool move_flag = false;
	if (m_gauge)
		m_gauge->SetKill();
	if (m_fudaUI)
		m_fudaUI->SetKill();
	//���ړ�
	if (HOLD(CInput::eLeft)) {
		//�ړ��ʂ�ݒ�
		m_pos.x += -move_speed;
		m_img[Chara1].ChangeAnimation(1);
		move_flag = true;
		if (HOLD(CInput::eButton9)) {
			m_pos.x += -move_speed * 0.5f;
			move_flag = true;
		}
	}
	if (HOLD(CInput::eUp)) {
		//�ړ��ʂ�ݒ�
		m_pos.y += -move_speed;
		m_img[Chara1].ChangeAnimation(2);
		move_flag = true;
		if (HOLD(CInput::eButton9)) {
			m_pos.y += -move_speed * 0.5f;
			move_flag = true;
		}
	}
	if (HOLD(CInput::eDown)) {
		//�ړ��ʂ�ݒ�
		m_pos.y -= -move_speed;
		m_img[Chara1].ChangeAnimation(3);
		move_flag = true;
		if (HOLD(CInput::eButton9)) {
			m_pos.y -= -move_speed * 0.5f;
			move_flag = true;
		}
	}
	//�E�ړ�
	if (HOLD(CInput::eRight)) {
		//�ړ��ʂ�ݒ�
		m_pos.x += move_speed;
		m_img[Chara1].ChangeAnimation(0);
		move_flag = true;
		if (HOLD(CInput::eButton9)) {
			m_pos.x += move_speed * 0.5f;
			move_flag = true;
		}
	}
	if (Chara1 == 0) {
		move_speed * 0.9f;
	}
	if (Chara1 == 1) {
		move_speed * 0.1f;
	}
	if (Chara1 == 2) {
		move_speed * 1.4f;
	}
	//�����Ă���A�j���[�V����
	if (move_flag)
	{
		m_img[Chara1].m_animSpeed = 1;
	}
	//�~�܂��Ă���A�j���[�V����
	else
	{
		m_img[Chara1].m_animSpeed = 0;
	}
	
	m_scroll.x = m_pos.x - 1280 / 2;
	m_scroll.y = m_pos.y - 600;
	//��x�G���A�`�F���W�͈͂��痣��Ȃ��ƍēx�G���A�`�F���W���Ȃ�
	//�A���G���A�`�F���W�h�~
	if (!m_enable_area_change && !m_hit_area_change)
		m_enable_area_change = true;
	m_hit_area_change = false;
}


void kamano::Update() {
	m_pos_old = m_pos;
	if (m_hp == 3) {
		Chara1 = 0;
	}
	if (m_hp == 2)
	{
		Chara1 = 1;
	}
	if (m_hp == 1)
	{
		Chara1 = 2;
	}
		/*if (HOLD(CInput::eButton2)) {
			Chara1 = 0;
		}
		if (HOLD(CInput::eButton3)) {
			Chara1 = 1;
		}
		if (HOLD(CInput::eButton4)) {
			Chara1 = 2;
		}*/
	switch (m_state) {
		//�ʏ���
	case eState_Idle:
		StateIdle();
		break;
	}
	

	//�A�j���[�V�����X�V
	m_img[Chara1].UpdateAnimation();

	//�X�N���[���ݒ�
	m_scroll.x = m_pos.x - 1280 / 2;

}

void kamano::Draw() {
	//�ʒu�ݒ�
	// 
	m_img[Chara1].SetSize(64, 64);
	m_img[Chara1].SetPos(GetScreenPos(m_pos));
	//�`��
	m_img[Chara1].Draw();
	
	//DrawRect();



}
void kamano::Collision(Base* b)
{

	switch (b->m_type) {

	case eType_AreaChange:
		if (Base::CollisionRect(this, b)) {
			//�G���A�`�F���W�ɐG��Ă���
			m_hit_area_change = true;
			//�G���A�`�F���W�\�Ȃ�
			if (m_enable_area_change) {
				if (AreaChange* a = dynamic_cast<AreaChange*>(b)) {
					//�}�b�v�ƃG���A�`�F���W�I�u�W�F�N�g���폜
					KillByType(eType_Field);
					KillByType(eType_Fuda);
					KillByType(eType_AreaChange);
					KillByType(eType_Enemy);
					KillByType(eType_EnemyManager);
					KillByType(eType_aya);
					KillByType(eType_K);
					//���̃}�b�v�𐶐�
					Base::Add(new Map(a->m_nextArea, a->m_nextplayerpos));
					Base::Add(new EnemyManager());

					//�G���A�`�F���W�ꎞ�s����
					m_enable_area_change = false;
				}
			}
		}

		break;
	case eType_Field:
		//�}�b�v�Ƃ̔���
		if (Map* m = dynamic_cast<Map*>(b)) {
			CVector2D pos;
			//�}�b�v�`�b�v�̔���i���j
			int t = m->CollisionMap(CVector2D(m_pos.x, m_pos_old.y), m_rect, &pos);
			//�ǂȂ��
			if (t != NULL_TIP) {
				//�Ǎۂ܂Ŗ߂�
				m_pos.x = pos.x;
			}
			//�}�b�v�`�b�v�̔���i�c�j
			t = m->CollisionMap(CVector2D(m_pos_old.x, m_pos.y), m_rect, &pos);
			//�ǂȂ��
			if (t != NULL_TIP) {
				//�Ǎۂ܂Ŗ߂�
				m_pos.y = pos.y;
			}
		}
		break;


	case eType_Fuda:
		if (m_type == eType_kamano && Base::CollisionRect(this, b)) {
			if (Base::CollisionRect(this, b)) {
				//���D�ɐG���ƃJ�E���g1�����
				m_cut += 1;
				KillByType(eType_Fuda);
				//���D��12��J�E���g���ꂽ��V�[���؂�ւ�
				//�m�F���₷���悤�ɂQ��ɕύX���Ă���܂�
				if (m_cut == 7) {
					KillAll();
					Base::Add(new Gameclear());//�Q�[���N���A��ʂ��Ȃ��̂ł�������^�C�g���ɂ��ǂ��܂�
				}
			}

		}
		break;

	case eType_K://�B���G���f�B���O�p
		if (m_type == eType_kamano && Base::CollisionRect(this, b)) {
			if (Base::CollisionRect(this, b)) {
				m_kcut += 1;
				KillByType(eType_K);
				
				if (m_kcut ==1) {
					KillAll();
					Base::Add(new Gameclear());
				}
			}

		}
		break;
		//�G�ɂR�񓖂������玀�ʏ���
	case eType_Enemy:
		if (m_type == eType_kamano && Base::CollisionRect(this, b)) {
			if (Base::CollisionRect(this, b)) {
				m_hp -= 1;
				
				KillByType(eType_Enemy);
				if (m_hp == 0) {
			
					
					 SetKill();
					b->SetKill();
					
				}
			}
			break;
		}
	case eType_aya:
		if (m_type == eType_kamano && Base::CollisionRect(this, b)) {
			if (Base::CollisionRect(this, b)) {
				if (m_hp < 3) {
					m_hp += 1;
				}
				KillByType(eType_aya);
				
			}

		}
		break;


	}
	
}




