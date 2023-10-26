#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_Test.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct ANIMSAMPLE_API FAnimNode_Test : public FAnimNode_Base
{
	GENERATED_BODY()

	 UPROPERTY(EditAnywhere, EditFixedSize, BlueprintReadWrite, Category = Links)
	 FPoseLink SourcePose1;


	 UPROPERTY(EditAnywhere, EditFixedSize, BlueprintReadWrite, Category = Links)
	 FPoseLink SourcePose2;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ApplyCurves, meta = (PinShownByDefault))
	// FDHBlendshapeWeights Curves;

	FAnimNode_Test();

	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
};