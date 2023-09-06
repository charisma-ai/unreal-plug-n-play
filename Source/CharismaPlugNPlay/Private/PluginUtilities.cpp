// Fill out your copyright notice in the Description page of Project Settings.


#include "PluginUtilities.h"

bool UPluginUtilities::IsPluginModuleLoaded(FName ModuleName)
{
	FModuleManager& ModuleManager = FModuleManager::Get();
	return ModuleManager.IsModuleLoaded(ModuleName);
}