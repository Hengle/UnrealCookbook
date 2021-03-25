// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node_CallFunction.h"
#include "MyWildFunctionCallNode.generated.h"

/**
 * ��ͼ��̬�ڵ㣺�������õĲ��������Ͳ������Ͷ����Զ�̬����
 */
UCLASS()
class MYWILDNODEEDITOR_API UMyWildFunctionCallNode : public UK2Node_CallFunction
{
	GENERATED_BODY()

public:
	virtual FText GetMenuCategory() const override { return FText::FromString("MyWildDemo"); }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
};
