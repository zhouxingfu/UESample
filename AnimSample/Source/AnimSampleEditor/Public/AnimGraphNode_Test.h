// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_Test.h"
#include "AnimGraphNode_Test.generated.h"

/**
 * 
 */
UCLASS()
class ANIMSAMPLEEDITOR_API UAnimGraphNode_Test : public UAnimGraphNode_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_Test Node;
	
public:
	UAnimGraphNode_Test();

	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	virtual FString GetNodeCategory() const override;
};
