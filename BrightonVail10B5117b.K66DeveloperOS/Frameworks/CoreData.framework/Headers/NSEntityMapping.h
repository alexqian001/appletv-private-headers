/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSExpression, NSDictionary, NSData;

@interface NSEntityMapping : NSObject {
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSDictionary *_mappingsByName;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	unsigned _mappingType;	// 20 = 0x14
	NSString *_sourceEntityName;	// 24 = 0x18
	NSData *_sourceEntityVersionHash;	// 28 = 0x1c
	NSString *_destinationEntityName;	// 32 = 0x20
	NSData *_destinationEntityVersionHash;	// 36 = 0x24
	NSExpression *_sourceExpression;	// 40 = 0x28
	NSDictionary *_userInfo;	// 44 = 0x2c
	NSString *_entityMigrationPolicyClassName;	// 48 = 0x30
	NSMutableArray *_attributeMappings;	// 52 = 0x34
	NSMutableArray *_relationshipMappings;	// 56 = 0x38
	entityMappingFlags _entityMappingFlags;	// 60 = 0x3c
}
@property(retain) NSMutableArray *attributeMappings;	// G=0x30f33c11; S=0x30f33c21; converted property
@property(retain) NSString *destinationEntityName;	// G=0x30f33b2d; S=0x30f33b3d; converted property
@property(retain) NSData *destinationEntityVersionHash;	// G=0x30f33b91; S=0x30f33ba1; converted property
@property(retain) NSString *entityMigrationPolicyClassName;	// G=0x30f33da1; S=0x30f33db1; converted property
@property(assign) unsigned mappingType;	// G=0x30f33a29; S=0x30f33a39; converted property
@property(retain) NSString *name;	// G=0x30f33965; S=0x30f339d5; converted property
@property(retain) NSMutableArray *relationshipMappings;	// G=0x30f33c75; S=0x30f33c85; converted property
@property(retain) NSString *sourceEntityName;	// G=0x30f33a49; S=0x30f33a59; converted property
@property(retain) NSData *sourceEntityVersionHash;	// G=0x30f33aad; S=0x30f33abd; converted property
@property(retain) NSExpression *sourceExpression;	// G=0x30f33cd9; S=0x30f33ce9; converted property
@property(retain) NSDictionary *userInfo;	// G=0x30f33d3d; S=0x30f33d4d; converted property
+ (void)initialize;	// 0x30f32d4d
- (id)init;	// 0x30f32d69
- (id)initWithCoder:(id)coder;	// 0x30f330ad
- (void)_addAttributeMapping:(id)mapping;	// 0x30f341f1
- (void)_addRelationshipMapping:(id)mapping;	// 0x30f34231
- (void)_createCachesAndOptimizeState;	// 0x30f340f5
- (id)_initWithSourceEntityDescription:(id)sourceEntityDescription destinationEntityDescription:(id)description;	// 0x30f33ee9
- (id)_mappingsByName;	// 0x30f34271
- (id)_migrationPolicy;	// 0x30f33e05
- (void)_setIsEditable:(BOOL)editable;	// 0x30f340f9
- (void)_throwIfNotEditable;	// 0x30f34191
// converted property getter: - (id)attributeMappings;	// 0x30f33c11
- (id)copyWithZone:(NSZone *)zone;	// 0x30f332c1
- (void)dealloc;	// 0x30f32d7d
- (id)description;	// 0x30f33811
// converted property getter: - (id)destinationEntityName;	// 0x30f33b2d
// converted property getter: - (id)destinationEntityVersionHash;	// 0x30f33b91
- (void)encodeWithCoder:(id)coder;	// 0x30f32ecd
// converted property getter: - (id)entityMigrationPolicyClassName;	// 0x30f33da1
- (BOOL)isEditable;	// 0x30f340dd
- (BOOL)isEqual:(id)equal;	// 0x30f335a5
// converted property getter: - (unsigned)mappingType;	// 0x30f33a29
// converted property getter: - (id)name;	// 0x30f33965
// converted property getter: - (id)relationshipMappings;	// 0x30f33c75
// converted property setter: - (void)setAttributeMappings:(id)mappings;	// 0x30f33c21
// converted property setter: - (void)setDestinationEntityName:(id)name;	// 0x30f33b3d
// converted property setter: - (void)setDestinationEntityVersionHash:(id)hash;	// 0x30f33ba1
// converted property setter: - (void)setEntityMigrationPolicyClassName:(id)name;	// 0x30f33db1
// converted property setter: - (void)setMappingType:(unsigned)type;	// 0x30f33a39
// converted property setter: - (void)setName:(id)name;	// 0x30f339d5
// converted property setter: - (void)setRelationshipMappings:(id)mappings;	// 0x30f33c85
// converted property setter: - (void)setSourceEntityName:(id)name;	// 0x30f33a59
// converted property setter: - (void)setSourceEntityVersionHash:(id)hash;	// 0x30f33abd
// converted property setter: - (void)setSourceExpression:(id)expression;	// 0x30f33ce9
// converted property setter: - (void)setUserInfo:(id)info;	// 0x30f33d4d
// converted property getter: - (id)sourceEntityName;	// 0x30f33a49
// converted property getter: - (id)sourceEntityVersionHash;	// 0x30f33aad
// converted property getter: - (id)sourceExpression;	// 0x30f33cd9
// converted property getter: - (id)userInfo;	// 0x30f33d3d
@end
