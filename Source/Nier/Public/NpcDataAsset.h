// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FNpcInfo.h"
#include "NpcDataAsset.generated.h"
/**
 * 
 */
UCLASS()
class NIER_API UNpcDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		FName NpcId;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		FName NpcName;//����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		TSoftObjectPtr<class USkeletalMesh> NpcMesh;//ģ��
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		TSubclassOf<class UAnimInstance> NpcAnimClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		ENpcState NpcState;//�˶�״̬
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		FName NpcTaskNumber;//��Npc���������
	UPROPERTY(EditAnywhere, BlueprintReadOnly, AssetRegistrySearchable)
		FVector NpcInitLocation;//��ʼλ��
	FNpcInfoRaw GetNpcInfo();
};
