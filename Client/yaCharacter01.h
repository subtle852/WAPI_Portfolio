#pragma once
#include "yaGameObject.h"
#include "yaImage.h"

namespace ya
{
	class Animator;
	class Rigidbody;

	class Character01 : public GameObject
	{
	public:
		enum class eChar00State
		{
			Run,
			BeforeRun,
			Jump,
			DoubleJump,
			Slide,
			Death,
			Idle,
		};


		Character01();
		~Character01();

		virtual void Initialize();
		virtual void Update();
		virtual void Render(HDC hdc);
		virtual void Release();

		virtual void OnCollisionEnter(class Collider* other) override;
		virtual void OnCollisionStay(class Collider* other) override;
		virtual void OnCollisionExit(class Collider* other) override;

	private:
		void run();
		void beforerun();
		void jump();
		void djump();
		void slide();
		void death();
		void idle();

		void JumpCompleteEvent();
		//void SlideCompleteEvent();
		void DJumpCompleteEvent();

	private:
		eChar00State mState;
		Animator* mAnimator;
		Rigidbody* mRigidbody;

	public:
		static int cnt;
		int cnt2 = 0;
	};
}