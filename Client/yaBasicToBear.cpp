#include "yaBasicToBear.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"
#include "yaAnimator.h"
#include "yaCollider.h"
#include "yaScene.h"
#include "yaObject.h"
#include "yaCamera.h"
#include "yaCharacter01.h"

namespace ya
{
	BasicToBear::BasicToBear()
	{

	}

	BasicToBear::~BasicToBear()
	{

	}

	void BasicToBear::Initialize()
	{
		//mImage = Resources::Load<Image>(L"pt", L"..\\Resources\\stage00.bmp");

		mAnimator = AddComponent<Animator>();

		//Transform* tr = GetComponent<Transform>();
		//tr->SetPos(Vector2(600.0f, 700.0f));
		//tr->SetScale(Vector2(2.4f,2.4f));

		mAnimator->CreateAnimations(L"..\\Resources\\Item\\BasicToBear", Vector2::Zero, 0.1f, 0);
		mAnimator->Play(L"ItemBasicToBear", false);

		Collider* collider = AddComponent<Collider>();
		collider->SetSize(Vector2(80.0f, 80.0f));
		collider->SetCenter(Vector2(-40.0f, -60.0f));

		GameObject::Initialize();
	}

	void BasicToBear::Update()
	{
		GameObject::Update();
	}

	void BasicToBear::Render(HDC hdc)
	{
		GameObject::Render(hdc);
	}

	void BasicToBear::Release()
	{
		GameObject::Release();
	}

	void BasicToBear::OnCollisionEnter(Collider* other)
	{

	}

	void BasicToBear::OnCollisionStay(Collider* other)
	{
		if (dynamic_cast<Character01*>(other->GetOwner()))
		{
			Character01* ch = dynamic_cast<Character01*>(other->GetOwner());
			ch->mBtoB = true;
			object::Destory(this);
		}
	}

	void BasicToBear::OnCollisionExit(Collider* other)
	{

	}
}