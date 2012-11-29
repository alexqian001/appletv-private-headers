/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSError, NSEntityMapping;

@interface _NSMappingModelBuilder : NSObject {
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSManagedObjectModel *_destinationModel;	// 8 = 0x8
	NSEntityMapping *_currentEntityMapping;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
+ (int)migrationDebugLevel;	// 0x3625e3b5
+ (void)setMigrationDebugLevel:(int)level;	// 0x3625e3d1
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x3625e3ed
- (BOOL)_canTransformSourceAttributeType:(unsigned)type toDestinationAttributeType:(unsigned)destinationAttributeType;	// 0x3625f711
- (void)_resetCaches;	// 0x3625e4f5
- (void)dealloc;	// 0x3625e465
- (BOOL)inferPropertyMappingsForEntityMapping:(id)entityMapping;	// 0x3625eb31
- (id)newEntityMappingWithSource:(id)source destination:(id)destination;	// 0x3625f3f5
- (id)newInferredMappingModel:(id *)model;	// 0x3625e52d
- (id)newInferredPropertyMappingWithSourceAttribute:(id)sourceAttribute destinationAttribute:(id)attribute;	// 0x3625f7c5
- (id)newInferredPropertyMappingWithSourceRelationship:(id)sourceRelationship destinationRelationship:(id)relationship;	// 0x36260245
@end
