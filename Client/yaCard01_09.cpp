#include "yaCard01_09.h"
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
	Card01_09::Card01_09()
	{

	}

	Card01_09::~Card01_09()
	{

	}

	void Card01_09::Initialize()
	{
		mAnimator = AddComponent<Animator>();
		mAnimator->CreateAnimations(L"..\\Resources\\Baccarat\\cards\\C_01\\09", Vector2::Zero, 0.1f, 0);

		mAnimator->Play(L"C_0109", true);

		GameObject::Initialize();
	}

	void Card01_09::Update()
	{
		GameObject::Update();
	}

	void Card01_09::Render(HDC hdc)
	{
		GameObject::Render(hdc);
	}

	void Card01_09::Release()
	{
		GameObject::Release();
	}
}