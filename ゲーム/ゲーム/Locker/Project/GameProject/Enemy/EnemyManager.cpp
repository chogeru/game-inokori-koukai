#include "EnemyManager.h"
#include "Enemy.h"
#include"../h.h"
//�G�̏o���f�[�^�܂Ƃ�
EnemyManager::EnemyData _stage1[] = {
	//{0,CVector2D(180,400),50},
		{0,CVector2D(18000,14000),30},

};
//�G�̏o���f�[�^�܂Ƃ�
EnemyManager::EnemyDataArray _enemy_data[] = {
	{_stage1,sizeof(_stage1) / sizeof(_stage1[0])},
};

EnemyManager::EnemyManager():Base(eType_EnemyManager)
{
	m_cnt = 0;
	m_idx = 0;
	mp_data = &_enemy_data[0];

}

void EnemyManager::Update()
{
	//�S�Ă̓G���o�Ă��Ȃ�
	if (m_idx < mp_data->size) {
		//���Ԍo��
		m_cnt++;

		EnemyData* d = &mp_data->data[m_idx];
		//�w�莞�Ԃ𒴂���ƓG���o��
		if (m_cnt >= d->cnt) {
			//�G����
			Base::Add(new Enemy(d->pos));
			//���̏o���f�[�^���Q��
			m_idx++;
			m_cnt = 0;
		}
	}
	
}
bool EnemyManager::isEnd() {
	//�S�Ă̓G���o���ς݂Ȃ�true��Ԃ�
	return (m_idx >= mp_data->size) ? true : false;
}


