/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSEntityDescription, NSData, NSArray, NSString;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
@private
	NSString *_versionHashModifier;	// 4 = 0x4
	id _underlyingProperty;	// 8 = 0x8
	NSData *_versionHash;	// 12 = 0xc
	NSEntityDescription *_entity;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSArray *_validationPredicates;	// 24 = 0x18
	NSArray *_validationWarnings;	// 28 = 0x1c
	propertyDescriptionFlags _propertyDescriptionFlags;	// 32 = 0x20
	void *_extraIvars;	// 36 = 0x24
	NSMutableDictionary *_userInfo;	// 40 = 0x28
	long _entitysReferenceIDForProperty;	// 44 = 0x2c
}
@property(retain) id elementID;	// G=0x32b80a45; S=0x32b80a35; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x32b083a9; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x32b801d5; S=0x32ad418d; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x32ad7d75; S=0x32b80295; converted property
@property(retain) NSString *name;	// G=0x32ad3da1; S=0x32b80d95; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x32ae62f1; S=0x32b80821; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x32ae6305; S=0x32b80941; converted property
@property(retain) id renamingIdentifier;	// G=0x32b808e5; S=0x32ad3d01; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x32b80a55; S=0x32b80a6d; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x32ad7d91; S=0x32b802bd; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x32b80aa5; S=0x32b80abd; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x32b80a7d; S=0x32b80a95; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x32ad7ddd; S=0x32b80859; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x32b801e9; S=0x32b80ba1; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x32b0888d; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x32ad7d51; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x32b80acd; converted property
@property(retain) NSString *versionHashModifier;	// G=0x32b8020d; S=0x32b80891; converted property
+ (void)initialize;	// 0x32b07e99
- (id)init;	// 0x32b802e5
- (id)initWithCoder:(id)coder;	// 0x32ad3911
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots;	// 0x32b8136d
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x32b812c9
- (void)_createCachesAndOptimizeState;	// 0x32ad7b09
- (long)_entitysReferenceID;	// 0x32af7969
- (NSExtraPropertyIVars *)_extraIVars;	// 0x32b08bc5
- (id)_initWithName:(id)name;	// 0x32b811d9
- (void)_initializeExtraIVars;	// 0x32b08bf5
- (BOOL)_isEditable;	// 0x32b08379
- (BOOL)_isOrdered;	// 0x32b08ca1
- (BOOL)_isRelationship;	// 0x32b80221
- (BOOL)_isToManyRelationship;	// 0x32b80225
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x32b80995
- (unsigned)_propertyType;	// 0x32b8021d
- (id)_rawValidationPredicates;	// 0x32b80975
- (id)_rawValidationWarnings;	// 0x32b80985
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x32b08c11
- (void)_restoreValidation;	// 0x32b80269
- (void)_setEntity:(id)entity;	// 0x32b80919
- (void)_setEntitysReferenceID:(long)anId;	// 0x32ad7df1
- (void)_setOrdered:(BOOL)ordered;	// 0x32b80229
- (BOOL)_skipValidation;	// 0x32b80281
- (void)_stripForMigration;	// 0x32b80251
- (void)_throwIfNotEditable;	// 0x32b08335
- (void)_versionHash:(char *)hash;	// 0x32ae61f9
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x32b81339
- (id)copyWithZone:(NSZone *)zone;	// 0x32b80619
- (void)dealloc;	// 0x32b02c51
- (id)description;	// 0x32b80eb5
// converted property getter: - (id)elementID;	// 0x32b80a45
- (void)encodeWithCoder:(id)coder;	// 0x32b802f9
// converted property getter: - (id)entity;	// 0x32b083a9
- (unsigned)hash;	// 0x32b807f9
- (BOOL)isEqual:(id)equal;	// 0x32b80fe9
// converted property getter: - (BOOL)isIndexed;	// 0x32b801d5
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x32ad7d75
// converted property getter: - (BOOL)isOptional;	// 0x32ae62f1
// converted property getter: - (BOOL)isReadOnly;	// 0x32ae6305
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x32b80a55
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x32ad7d91
// converted property getter: - (BOOL)isStoredInTruth;	// 0x32b80aa5
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x32b80a7d
// converted property getter: - (BOOL)isTransient;	// 0x32ad7ddd
// converted property getter: - (id)name;	// 0x32ad3da1
// converted property getter: - (id)renamingIdentifier;	// 0x32b808e5
// converted property setter: - (void)setElementID:(id)anId;	// 0x32b80a35
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x32ad418d
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x32b80295
// converted property setter: - (void)setName:(id)name;	// 0x32b80d95
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x32b80821
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x32b80941
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x32ad3d01
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x32b80a6d
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x32b802bd
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x32b80abd
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x32b80a95
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x32b80859
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32b80ba1
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x32b80c85
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x32b80891
// converted property getter: - (id)userInfo;	// 0x32b801e9
// converted property getter: - (id)validationPredicates;	// 0x32b0888d
// converted property getter: - (id)validationWarnings;	// 0x32ad7d51
// converted property getter: - (id)versionHash;	// 0x32b80acd
// converted property getter: - (id)versionHashModifier;	// 0x32b8020d
@end
