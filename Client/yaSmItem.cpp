#include "yaSmItem.h"
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
	SmItem::SmItem()
	{

	}

	SmItem::~SmItem()
	{

	}

	void SmItem::Initialize()
	{
		//Transform* tr = GetComponent<Transform>();
		//tr->SetPos(Vector2(1200.0f, 500.0f));
		//tr->SetScale(Vector2(1.5f, 1.5f));

		mAnimator = AddComponent<Animator>();
		mAnimator->CreateAnimations(L"..\\Resources\\Item\\SmItem", Vector2::Zero, 0.1f ,0);

		mAnimator->Play(L"ItemSmItem", true);

		Collider* collider = AddComponent<Collider>();
		collider->SetSize(Vector2(80.0f, 80.0f));
		collider->SetCenter(Vector2(-40.0f, -60.0f));

		GameObject::Initialize();
	}

	void SmItem::Update()
	{
		GameObject::Update();
	}

	void SmItem::Render(HDC hdc)
	{
		GameObject::Render(hdc);
	}

	void SmItem::Release()
	{
		GameObject::Release();
	}

	void SmItem::OnCollisionEnter(Collider* other)
	{

	}

	void SmItem::OnCollisionStay(Collider* other)
	{
		if (dynamic_cast<Character01*>(other->GetOwner()))
		{
			object::Destory(this);
		}
	}

	void SmItem::OnCollisionExit(Collider* other)
	{

	}
}