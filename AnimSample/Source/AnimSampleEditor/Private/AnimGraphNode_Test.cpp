// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_Test.h"


#define LOCTEXT_NAMESPACE "Test"

UAnimGraphNode_Test::UAnimGraphNode_Test()
{

}

FText UAnimGraphNode_Test::GetTooltipText() const
{
	return GetNodeTitle(ENodeTitleType::ListView);
}

FText UAnimGraphNode_Test::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("AnimGraphNode_Test_Title", "Test");
}

FString UAnimGraphNode_Test::GetNodeCategory() const
{
	return TEXT("Test Control Nodes");
}