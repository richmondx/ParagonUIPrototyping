// Fill out your copyright notice in the Description page of Project Settings.

#include "DeckBuilderDesktop.h"
#include "HeroModel.h"


UHeroModel::UHeroModel(class FObjectInitializer const & ObjectInitializer)
	: Super(ObjectInitializer)
{
}


UHeroModel* UHeroModel::ConstructFromHeroData(const FHeroData& HeroData)
{
	auto HeroModel = NewObject<UHeroModel>(GetTransientPackage(), NAME_None);
	HeroModel->HeroName = HeroData.HeroName;
	HeroModel->AvatarTexture = HeroData.AvatarTexture;
	HeroModel->HeroSelectTexture = HeroData.HeroSelectTexture;
	HeroModel->Affinities = HeroData.Affinities;
	HeroModel->RecommendedStats = HeroData.RecommendedStats;
	HeroModel->NotRecommendedStats = HeroData.NotRecommendedStats;
	return HeroModel;
}

