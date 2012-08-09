/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject {
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	NSMutableArray *_entityMappings;	// 16 = 0x10
	NSMutableDictionary *_entityMappingsByName;	// 20 = 0x14
	modelMappingFlags _modelMappingFlags;	// 24 = 0x18
}
@property(retain) NSMutableArray *entityMappings;	// G=0x365ff8c9; S=0x365ff8d9; converted property
@property(readonly, retain) NSMutableDictionary *entityMappingsByName;	// G=0x365ff9cd; converted property
+ (BOOL)_isInferredMappingModel:(id)model;	// 0x365ffb5d
+ (id)_modelPathsFromBundles:(id)bundles;	// 0x365ff9fd
+ (id)inferredMappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x365ff0ed
+ (void)initialize;	// 0x365feb5d
+ (id)mappingModelFromBundles:(id)bundles forSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x365fece5
+ (int)migrationDebugLevel;	// 0x365ff9dd
+ (void)setMigrationDebugLevel:(int)level;	// 0x365ff9ed
- (id)init;	// 0x365ff47d
- (id)initWithCoder:(id)coder;	// 0x365ff60d
- (id)initWithContentsOfURL:(id)url;	// 0x365ff491
- (void)_addEntityMapping:(id)mapping;	// 0x365ffd1d
- (void)_createCachesAndOptimizeState;	// 0x365ffe55
- (id)_destinationEntityVersionHashesByName;	// 0x366000a9
- (id)_initWithEntityMappings:(id)entityMappings;	// 0x365ffc55
- (void)_setIsEditable:(BOOL)editable;	// 0x365ffe59
- (id)_sourceEntityVersionHashesByName;	// 0x365fff51
- (void)_throwIfNotEditable;	// 0x365ffef1
- (id)copyWithZone:(NSZone *)zone;	// 0x365ff6ad
- (void)dealloc;	// 0x365ff531
- (id)description;	// 0x365ff869
- (void)encodeWithCoder:(id)coder;	// 0x365ff5a9
// converted property getter: - (id)entityMappings;	// 0x365ff8c9
// converted property getter: - (id)entityMappingsByName;	// 0x365ff9cd
- (BOOL)isEditable;	// 0x365ffe3d
- (BOOL)isEqual:(id)equal;	// 0x365ff7e9
// converted property setter: - (void)setEntityMappings:(id)mappings;	// 0x365ff8d9
@end
