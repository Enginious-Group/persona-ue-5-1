// Fill out your copyright notice in the Description page of Project Settings.


#include "SMyCompoundWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SMyCompoundWidget::Construct(const FArguments& InArgs)
{
    ChildSlot
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(STextBlock)
            .Text(FText::FromString("IP of Persona Machine:"))
        ]
    + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(SEditableTextBox)
            .Text(FText::FromString("127.0.0.1"))
        ]
        ]
    + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(STextBlock)
            .Text(FText::FromString("Character Name"))
        ]
    + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(SEditableTextBox)
            .Text(FText::FromString("Ada"))

        ]
        ]
    + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(STextBlock)
            .Text(FText::FromString("Concept path"))
        ]
    + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(SEditableTextBox)
            .Text(FText::FromString("D:/"))

        ]
    + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        [
            SNew(SButton)
            .Text(FText::FromString("..."))
        .OnClicked(FOnClicked::CreateSP(this, &SMyCompoundWidget::OnPathButtonClicked))
        ]
        ]
    + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
        .VAlign(VAlign_Top)
        .HAlign(HAlign_Center)
        [
            SNew(SButton)
            .Text(FText::FromString("Process"))
        .OnClicked(FOnClicked::CreateSP(this, &SMyCompoundWidget::OnProcessButtonClicked))

        ]
        ]
        ];
}
;
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

FReply SMyCompoundWidget::OnProcessButtonClicked()
{
    FString PluginDir = IPluginManager::Get().FindPlugin("Persona3d")->GetBaseDir();

    FString commandPath = FString(TEXT("py ")) + PluginDir + FString(TEXT("/Source/python/main.py -p ")) + PluginDir;

    const TCHAR* commandTchar = *commandPath;
    GEngine->Exec(NULL, commandTchar);
    return FReply::Handled();
}

FReply SMyCompoundWidget::OnPathButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("PathButtonClicked"));
    FString _path = FString("aa");
    return FReply::Handled();
}


