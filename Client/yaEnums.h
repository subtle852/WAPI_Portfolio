#pragma once

enum class eSceneType
{
	Title,
	Tutorial,
	Main,// 좌, 우 분할
	Play,
	Result,
	Max,
};

enum class eLayerType // layer 그리는 순서
{
	BG,
	Opponent,
	Player,
	Effect,
	UI,
	End,
};