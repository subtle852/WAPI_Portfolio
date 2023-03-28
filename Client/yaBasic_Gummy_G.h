#pragma once
#include "yaGameObject.h"

namespace ya
{
	class Animator;
	class Basic_Gummy_G : public GameObject
	{
	public:
		Basic_Gummy_G();
		~Basic_Gummy_G();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void Render(HDC hdc) override;
		virtual void Release() override;

		virtual void OnCollisionEnter(class Collider* other) override;
		virtual void OnCollisionStay(class Collider* other) override;
		virtual void OnCollisionExit(class Collider* other) override;

	private:
		Animator* mAnimator;
	};
}