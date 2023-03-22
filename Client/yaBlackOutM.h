#pragma once
#include "yaGameObject.h"
#include "yaImage.h"

	namespace ya
{
	class BlackOutM : public GameObject
	{
	public:
		BlackOutM();
		~BlackOutM();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

	private:
		Image* mImage01;
		Image* mImage02;
		Image* mImage03;
	};
}