// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsForPersona.h"

FColor UUtilsForPersona::HexToColor(FString HexString)
{
    return FColor::FromHex(HexString);
}

FString UUtilsForPersona::ColorToHex(FColor Color)
{
    return Color.ToHex();
}

//FString UUtilsForPersona::GetPathToPlugin() {
//    return IPluginManager::Get().FindPlugin("Persona3d")->GetBaseDir();
//}