#include "yaL1_SL03.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"
#include "yaAnimator.h"
#include "yaCollider.h"
#include "yaScene.h"
#include "yaCamera.h"

namespace ya
{
	L1_SL03::L1_SL03()
	{

	}

	L1_SL03::~L1_SL03()
	{

	}

	void L1_SL03::Initialize()
	{
		mAnimator = AddComponent<Animator>();
		mAnimator->CreateAnimations(L"..\\Resources\\Land1\\Slide\\1_03", Vector2::Zero, 0.1f, 0);

		mAnimator->Play(L"Slide1_03", true);

		Collider* collider = AddComponent<Collider>();
		collider->SetSize(Vector2(120.0f, 520.0f));
		collider->SetCenter(Vector2(-60.0f, -550.0f));

		GameObject::Initialize();
	}

	void L1_SL03::Update()
	{
		GameObject::Update();
	}

	void L1_SL03::Render(HDC hdc)
	{
		GameObject::Render(hdc);
	}

	void L1_SL03::Release()
	{
		GameObject::Release();
	}
	void L1_SL03::OnCollisionEnter(Collider* other)
	{
	}
	void L1_SL03::OnCollisionStay(Collider* other)
	{
	}
	void L1_SL03::OnCollisionExit(Collider* other)
	{
	}
}