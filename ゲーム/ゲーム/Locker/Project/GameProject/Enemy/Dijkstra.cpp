#include "Dijkstra.h"
Dijkstra::Dijkstra()
{
    m_path_size = 0;
    memset(m_score, m_max_value, sizeof(m_score));

}

Dijkstra::~Dijkstra()
{

}

bool  Dijkstra::_FindShortestPath(Map* map, int x, int y, unsigned char score)
{
    //�ǂȂ璲�ׂȂ�
    if (map->GetTip(x, y) != 0) return false;
    //���ɍŒZ�����̕ʌo�H������Β��ׂȂ�
    //m_score[�s][��]�@���Ԃ��ԈႦ�Ȃ��悤�ɒ���
    if (m_score[y][x] <= score) return false;
    //�����X�V
    m_score[y][x] = score;
    //�ړI�n
    if (x == m_goal.x && y == m_goal.y) {
        //�ړ��o�H�X�V
        m_path[score] = { x,y };
        //�����X�V
        m_path_size = score + 1;
        return true;
    }
  
    //�ړI�ւ̌o�H��
    bool ret = false;

    //���̒��ׂ�ʒu�@��������
    int next_x[4] = { -1,0,1,0 };
    int next_y[4] = { 0,-1,0,1 };
    //���͏㉺���E�𒲂ׂ�
    for (int i = 0; i < 4; i++) {
        int xx = x + next_x[i];
        int yy = y + next_y[i];
        //�ċA�I�ɌĂяo���Čo�H�T��
        bool find = _FindShortestPath(map, xx, yy, score + 1);
        //�ړI�n�ɓ͂��o�H�Ȃ�
        if (find) {
            //�ړ��o�H�X�V
            m_path[score] = { x,y };
            ret = true;
        }
    }
    return ret;
}
bool Dijkstra::FindShortestPath(Map* map, const CVector2D& start, const CVector2D& goal)
{
    //�J�n�n�_�A�ړI�n�̍��W���}�b�v�f�[�^��ł̍s�Ɨ�ɕϊ�
    int start_x = start.x / MAP_TIP_SIZE;
    if (start_x < 0 || start_x >= MAP_WIDTH) return false;
    int start_y = start.y / MAP_TIP_SIZE;
    if (start_y < 0 || start_y >= MAP_HEIGHT) return false;
    int goal_x = goal.x / MAP_TIP_SIZE;
    if (goal_x < 0 || goal_x >= MAP_WIDTH) return false;
    int goal_y = goal.y / MAP_TIP_SIZE;
    if (goal_y < 0 || goal_y >= MAP_HEIGHT) return false;

    //�����f�[�^���Z�b�g
    memset(m_score, m_max_value, sizeof(m_score));
    //�ړI�n�ݒ�
    m_goal = { goal_x,goal_y };
    //�o�H�J�n�n�_�͎����̈ʒu
    m_path[0] = { start_x,start_y };
    m_path_size = 0;
    //�ċA�I�ɌĂяo���Čo�H�T��
    _FindShortestPath(map,start_x, start_y, 1);

    //�p�X�̐����X�V����Ă���΁A�ړI�ւ̌o�H��m_path�֊i�[����Ă���
    return (m_path_size > 0) ? true : false;

}
void Dijkstra::Draw()
{
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            if(m_score[i][j] < 255)
            FONT_T()->Draw(MAP_TIP_SIZE / 2 + MAP_TIP_SIZE * j, MAP_TIP_SIZE / 2 + MAP_TIP_SIZE * i,
                1, 0, 0, "%d", m_score[i][j]);
        }
    }
}