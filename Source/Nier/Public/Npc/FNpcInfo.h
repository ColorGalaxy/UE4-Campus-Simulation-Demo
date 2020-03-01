#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FNpcInfo.generated.h"

UENUM(BlueprintType)
enum class ENpcState : uint8 {
	Idle,
	Walk,
	Run
};

USTRUCT(BlueprintType)
struct NIER_API FNpcInfoRaw : public FTableRowBase {
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
};