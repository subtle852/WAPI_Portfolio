#include "yaCard01_13.h"
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
	Card01_13::Card01_13()
	{

	}

	Card01_13::~Card01_13()
	{

	}

	void Card01_13::Initialize()
	{
		mAnimator = AddComponent<Animator>();
		mAnimator->CreateAnimations(L"..\\Resources\\Baccarat\\cards\\C_01\\13", Vector2::Zero, 0.1f, 0);

		mAnimator->Play(L"C_0113", true);

		GameObject::Initialize();
	}

	void Card01_13::Update()
	{
		GameObject::Update();
	}

	void Card01_13::Render(HDC hdc)
	{
		GameObject::Render(hdc);
	}

	void Card01_13::Release()
	{
		GameObject::Release();
	}
}