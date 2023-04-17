#include "yaGaugeBar.h"
#include "yaTime.h"
#include "yaSceneManager.h"
#include "yaInput.h"
#include "yaResources.h"
#include "yaTransform.h"
#include "yaCharacter01.h"
#include "yaCharacter02.h"
#include "yaCharacter03.h"

namespace ya
{
    GaugeBar::GaugeBar()
    {

    }

    GaugeBar::~GaugeBar()
    {

    }

    void GaugeBar::Initialize()
    {
        mImage = Resources::Load<Image>(L"GaugeBar", L"..\\Resources\\Play\\gauge_heart_orange.bmp");

        GameObject::Initialize();
    }

    void GaugeBar::Update()
    {
        //Vector2(59.0f, 32.0f)
        //mHpPercent = Character01::GetHpPercent();
        //mHpPercent = Character02::GetHpPercent();
        mHpPercent = Character03::GetHpPercent();

        float temp = 964.0f / (100 / mHpPercent);

        mPosX = temp - 905.0f;
        
        Transform* tr = GetComponent<Transform>();
        Vector2 pos = tr->GetPos();
        pos.x = mPosX;
        tr->SetPos(pos);

        GameObject::Update();
    }

    void GaugeBar::Render(HDC hdc)
    {
        Transform* tr = GetComponent<Transform>();
        Vector2 pos = tr->GetPos();
        //BitBlt(hdc, pos.x, pos.y, mImage->GetWidth(), mImage->GetHeight(), mImage->GetHdc(), 0, 0, SRCCOPY);
        TransparentBlt(hdc, pos.x, pos.y, mImage->GetWidth() * 1.3, mImage->GetHeight() * 1.3
            , mImage->GetHdc(), 0, 0, mImage->GetWidth(), mImage->GetHeight(), RGB(170, 0, 0));

        GameObject::Render(hdc);
    }

    void GaugeBar::Release()
    {
        GameObject::Release();
    }
}