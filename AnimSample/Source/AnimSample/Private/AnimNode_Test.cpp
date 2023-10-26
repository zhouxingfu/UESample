#include "AnimNode_Test.h"
#include "AnimationRuntime.h"
#include "Animation/AnimInstanceProxy.h"

FAnimNode_Test::FAnimNode_Test()
{

}

void FAnimNode_Test::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	// DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
	// Super::Initialize_AnyThread(Context);
	// SourcePose.Initialize(Context);
}

void FAnimNode_Test::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	// DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)
	// Super::CacheBones_AnyThread(Context);
	// SourcePose.CacheBones(Context);
}

void FAnimNode_Test::Evaluate_AnyThread(FPoseContext& Output)
{
	// DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)
	// FPoseContext SourceData(Output);
	// SourcePose.Evaluate(SourceData);
	// Output = SourceData;

	// USkeleton* Skeleton = Output.AnimInstanceProxy->GetSkeleton();

	// check(Curves.Names.Num() == Curves.Weights.Num());
	// for (int32 idx = 0; idx < Curves.Names.Num(); idx++)
	// {
	// 	//FName CurveName = FName(*Curves.Names[idx]);
	// 	SmartName::UID_Type NameUID = Skeleton->GetUIDByName(USkeleton::AnimCurveMappingName, /*CurveName*/Curves.Names[idx]);
	// 	if (NameUID != SmartName::MaxUID)
	// 	{
	// 		float CurveValue = Curves.Weights[idx];
	// 		Output.Curve.Set(NameUID, CurveValue);
	// 	}
	// }

}

void FAnimNode_Test::Update_AnyThread(const FAnimationUpdateContext& Context) 
{
	// DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
	// // Run update on input pose nodes
	// SourcePose.Update(Context);

	// // Evaluate any BP logic plugged into this node
	// GetEvaluateGraphExposedInputs().Execute(Context);
}