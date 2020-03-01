// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameType.generated.h"

// ��������ö�����ͣ��߼����������罻������������
UENUM(BlueprintType)
enum class EPlayerAttributeType : uint8 {
	Logic,
	PE,
	Social,
	Charm,
	Luck,
};