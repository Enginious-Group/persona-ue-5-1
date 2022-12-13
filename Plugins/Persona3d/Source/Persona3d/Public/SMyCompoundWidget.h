// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Interfaces/IPluginManager.h"

/**
 * 
 */
class PERSONA3D_API SMyCompoundWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMyCompoundWidget)
	{}
	SLATE_END_ARGS()
		//aditionalfuncs
		FReply OnProcessButtonClicked();
	FReply OnPathButtonClicked();

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};