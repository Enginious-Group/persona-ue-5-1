// Fill out your copyright notice in the Description page of Project Settings.


#include "HexWrapper.h"

FColor UHexWrapper::HexToColor(FString HexString)
{
    return FColor::FromHex(HexString);
}

FString UHexWrapper::ColorToHex(FColor Color)
{
    return Color.ToHex();
}