// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcheryGame/ArcheryGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcheryGameGameMode() {}
// Cross Module References
	ARCHERYGAME_API UClass* Z_Construct_UClass_AArcheryGameGameMode();
	ARCHERYGAME_API UClass* Z_Construct_UClass_AArcheryGameGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArcheryGame();
// End Cross Module References
	void AArcheryGameGameMode::StaticRegisterNativesAArcheryGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArcheryGameGameMode);
	UClass* Z_Construct_UClass_AArcheryGameGameMode_NoRegister()
	{
		return AArcheryGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AArcheryGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcheryGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcheryGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArcheryGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcheryGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArcheryGameGameMode.h" },
		{ "ModuleRelativePath", "ArcheryGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcheryGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcheryGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArcheryGameGameMode_Statics::ClassParams = {
		&AArcheryGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArcheryGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AArcheryGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AArcheryGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AArcheryGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArcheryGameGameMode.OuterSingleton, Z_Construct_UClass_AArcheryGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArcheryGameGameMode.OuterSingleton;
	}
	template<> ARCHERYGAME_API UClass* StaticClass<AArcheryGameGameMode>()
	{
		return AArcheryGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcheryGameGameMode);
	AArcheryGameGameMode::~AArcheryGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_ArcheryGame_Source_ArcheryGame_ArcheryGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_ArcheryGame_Source_ArcheryGame_ArcheryGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArcheryGameGameMode, AArcheryGameGameMode::StaticClass, TEXT("AArcheryGameGameMode"), &Z_Registration_Info_UClass_AArcheryGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArcheryGameGameMode), 3079795614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_ArcheryGame_Source_ArcheryGame_ArcheryGameGameMode_h_1820432608(TEXT("/Script/ArcheryGame"),
		Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_ArcheryGame_Source_ArcheryGame_ArcheryGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_ArcheryGame_Source_ArcheryGame_ArcheryGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
