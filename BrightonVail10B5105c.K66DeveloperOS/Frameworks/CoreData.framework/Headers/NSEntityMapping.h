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
@property(retain) NSMutableArray *attributeMappings;	// G=0x36287845; S=0x36287855; converted property
@property(retain) NSString *destinationEntityName;	// G=0x36287761; S=0x36287771; converted property
@property(retain) NSData *destinationEntityVersionHash;	// G=0x362877c5; S=0x362877d5; converted property
@property(retain) NSString *entityMigrationPolicyClassName;	// G=0x362879d5; S=0x362879e5; converted property
@property(assign) unsigned mappingType;	// G=0x3628765d; S=0x3628766d; converted property
@property(retain) NSString *name;	// G=0x36287599; S=0x36287609; converted property
@property(retain) NSMutableArray *relationshipMappings;	// G=0x362878a9; S=0x362878b9; converted property
@property(retain) NSString *sourceEntityName;	// G=0x3628767d; S=0x3628768d; converted property
@property(retain) NSData *sourceEntityVersionHash;	// G=0x362876e1; S=0x362876f1; converted property
@property(retain) NSExpression *sourceExpression;	// G=0x3628790d; S=0x3628791d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x36287971; S=0x36287981; converted property
+ (void)initialize;	// 0x36286981
- (id)init;	// 0x3628699d
- (id)initWithCoder:(id)coder;	// 0x36286ce1
- (void)_addAttributeMapping:(id)mapping;	// 0x36287e25
- (void)_addRelationshipMapping:(id)mapping;	// 0x36287e65
- (void)_createCachesAndOptimizeState;	// 0x36287d29
- (id)_initWithSourceEntityDescription:(id)sourceEntityDescription destinationEntityDescription:(id)description;	// 0x36287b1d
- (id)_mappingsByName;	// 0x36287ea5
- (id)_migrationPolicy;	// 0x36287a39
- (void)_setIsEditable:(BOOL)editable;	// 0x36287d2d
- (void)_throwIfNotEditable;	// 0x36287dc5
// converted property getter: - (id)attributeMappings;	// 0x36287845
- (id)copyWithZone:(NSZone *)zone;	// 0x36286ef5
- (void)dealloc;	// 0x362869b1
- (id)description;	// 0x36287445
// converted property getter: - (id)destinationEntityName;	// 0x36287761
// converted property getter: - (id)destinationEntityVersionHash;	// 0x362877c5
- (void)encodeWithCoder:(id)coder;	// 0x36286b01
// converted property getter: - (id)entityMigrationPolicyClassName;	// 0x362879d5
- (BOOL)isEditable;	// 0x36287d11
- (BOOL)isEqual:(id)equal;	// 0x362871d9
// converted property getter: - (unsigned)mappingType;	// 0x3628765d
// converted property getter: - (id)name;	// 0x36287599
// converted property getter: - (id)relationshipMappings;	// 0x362878a9
// converted property setter: - (void)setAttributeMappings:(id)mappings;	// 0x36287855
// converted property setter: - (void)setDestinationEntityName:(id)name;	// 0x36287771
// converted property setter: - (void)setDestinationEntityVersionHash:(id)hash;	// 0x362877d5
// converted property setter: - (void)setEntityMigrationPolicyClassName:(id)name;	// 0x362879e5
// converted property setter: - (void)setMappingType:(unsigned)type;	// 0x3628766d
// converted property setter: - (void)setName:(id)name;	// 0x36287609
// converted property setter: - (void)setRelationshipMappings:(id)mappings;	// 0x362878b9
// converted property setter: - (void)setSourceEntityName:(id)name;	// 0x3628768d
// converted property setter: - (void)setSourceEntityVersionHash:(id)hash;	// 0x362876f1
// converted property setter: - (void)setSourceExpression:(id)expression;	// 0x3628791d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x36287981
// converted property getter: - (id)sourceEntityName;	// 0x3628767d
// converted property getter: - (id)sourceEntityVersionHash;	// 0x362876e1
// converted property getter: - (id)sourceExpression;	// 0x3628790d
// converted property getter: - (id)userInfo;	// 0x36287971
@end

