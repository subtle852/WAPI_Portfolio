#pragma once
#include "yaGameObject.h"
#include "yaImage.h"

namespace ya
{
	class GaugeBar : public GameObject
	{
	public:
		GaugeBar();
		~GaugeBar();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

	private:
		Image* mImage;

		float mPosX;

		float mHpPercent;
	};
}