// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTWITHBLOCK_BlockBase_generated_h
#error "BlockBase.generated.h already included, missing '#pragma once' in BlockBase.h"
#endif
#define FIGHTWITHBLOCK_BlockBase_generated_h

#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_RPC_WRAPPERS
#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesABlockBase(); \
	friend FIGHTWITHBLOCK_API class UClass* Z_Construct_UClass_ABlockBase(); \
	public: \
	DECLARE_CLASS(ABlockBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightWithBlock"), NO_API) \
	DECLARE_SERIALIZER(ABlockBase) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesABlockBase(); \
	friend FIGHTWITHBLOCK_API class UClass* Z_Construct_UClass_ABlockBase(); \
	public: \
	DECLARE_CLASS(ABlockBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightWithBlock"), NO_API) \
	DECLARE_SERIALIZER(ABlockBase) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlockBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockBase(ABlockBase&&); \
	NO_API ABlockBase(const ABlockBase&); \
public:


#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockBase(ABlockBase&&); \
	NO_API ABlockBase(const ABlockBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockBase)


#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_PRIVATE_PROPERTY_OFFSET
#define FightWithBlock_Source_FightWithBlock_BlockBase_h_9_PROLOG
#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_RPC_WRAPPERS \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_INCLASS \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightWithBlock_Source_FightWithBlock_BlockBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_INCLASS_NO_PURE_DECLS \
	FightWithBlock_Source_FightWithBlock_BlockBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightWithBlock_Source_FightWithBlock_BlockBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS