#pragma once
#include "../Base/Base.h"
/// <summary>
/// ��ʉ𑜓x�����ɖ߂��N���X
/// </summary>
class Canvas :public Base {
private:
	CVector2D m_screen_size;
public:
	Canvas(const CVector2D& screen_size);
	void Draw();
};