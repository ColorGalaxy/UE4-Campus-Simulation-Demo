// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NpcFactory.generated.h"

/**
 *
 */
UCLASS()
class NIER_API UNpcFactory : public UObject
{
	GENERATED_BODY()

public:
	UNpcFactory();

	FString GetNpcAssetPath(FName NpcId);
	/**
	 * @description: ���ݱ��NpcId��ȡ����������Npcʵ��������
	 * @param {FName NpcId}
	 * @return: class ANpcCharacter*
	 */
	class ANpcCharacter* SpawnNpcCharacter(FName NpcId);

private:
	static const FString DefaultNpcPath;
	//�жϱ��ṹ��ȷ�ı���
	UStruct* NpcTableRaw;
};
