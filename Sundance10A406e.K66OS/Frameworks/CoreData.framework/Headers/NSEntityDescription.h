/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import <NSObject.h> // Unknown library

@class NSString, NSManagedObjectModel, NSData, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x33d06331; S=0x33d06e55; converted property
@property(retain) id compoundIndexes;	// G=0x33d078d9; S=0x33d07c41; converted property
@property(retain) id elementID;	// G=0x33d074d5; S=0x33d074c5; converted property
@property(retain) id managedObjectClassName;	// G=0x33cdddd5; S=0x33d06db9; converted property
@property(retain) NSString *name;	// G=0x33cc274d; S=0x33d06e85; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x33cdf205; S=0x33d06c2d; converted property
@property(retain) id renamingIdentifier;	// G=0x33d07499; S=0x33d07405; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x33cc3ff1; S=0x33d06361; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x33cc3691; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x33d0630d; S=0x33d06225; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x33cdddb1; converted property
@property(retain) NSString *versionHashModifier;	// G=0x33d072bd; S=0x33d072cd; converted property
+ (id)_MOClassName;	// 0x33d08015
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33ccf875
+ (void)initialize;	// 0x33cbbc85
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33d04cc5
- (id)init;	// 0x33d0519d
- (id)initWithCoder:(id)coder;	// 0x33d05791
- (void)_addProperty:(id)property;	// 0x33d0763d
- (void)_addSubentity:(id)subentity;	// 0x33d074e5
- (id)_allPropertyNames;	// 0x33d0a509
- (id)_attributeNamed:(id)named;	// 0x33d087a1
- (CFSetRef)_collectSubentities;	// 0x33d08e31
- (id)_compoundIndexes;	// 0x33d0b195
- (void)_createCachesAndOptimizeState;	// 0x33d09229
- (Class)_entityClass;	// 0x33d0864d
- (void)_flattenProperties;	// 0x33d0aaa1
- (id)_flattenedSubentities;	// 0x33d08e21
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x33cc36d5
- (BOOL)_hasCustomPrimitiveProperties;	// 0x33d08651
- (BOOL)_hasPotentialHashSkew;	// 0x33d08cfd
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x33d0af8d
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x33d0b091
- (id)_initWithName:(id)name;	// 0x33d08061
- (BOOL)_isDeallocating;	// 0x33d073d9
- (BOOL)_isEditable;	// 0x33cc37f1
- (BOOL)_isFlattened;	// 0x33cc55d1
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x33d0913d
- (id)_keypathsForDeletions;	// 0x33d06915
- (void *)_leopardStyleAttributesByName;	// 0x33d0a6c1
- (void *)_leopardStyleRelationshipsByName;	// 0x33d0a5a9
- (id)_localRelationshipNamed:(id)named;	// 0x33d08855
- (long)_modelsReferenceID;	// 0x33cc6eb1
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x33cc5365
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x33d0a531
- (id)_newVersionHashInStyle:(unsigned)style;	// 0x33d07009
- (id)_new_implicitlyObservedKeys;	// 0x33d0a969
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x33d091b1
- (id)_propertiesOfType:(unsigned)type;	// 0x33d0829d
- (id)_propertyNamed:(id)named;	// 0x33d0a7d9
- (NSRange *)_propertyRangesByType;	// 0x33d0912d
- (id)_propertySearchMapping;	// 0x33cc5411
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x33d07ead
- (id)_relationshipNamed:(id)named;	// 0x33d08895
- (id)_relationshipNamesByType:(BOOL)type;	// 0x33d08509
- (void)_removeProperty:(id)property;	// 0x33d0a8a9
- (void)_removePropertyNamed:(id)named;	// 0x33d0a805
- (void)_removeSubentity:(id)subentity;	// 0x33d08c49
- (void)_restoreValidation;	// 0x33d0aeb1
- (id)_rootEntity;	// 0x33d08c05
- (void)_setIsEditable:(BOOL)editable;	// 0x33d089a5
- (void)_setIsFlattened:(BOOL)flattened;	// 0x33d0aa71
- (void)_setManagedObjectModel:(id)model;	// 0x33d08225
- (void)_setModelsReferenceID:(long)anId;	// 0x33d0aa61
- (void)_setSuperentity:(id)superentity;	// 0x33d08ba1
- (BOOL)_skipValidation;	// 0x33d0ae9d
- (Class)_snapshotClass;	// 0x33d08649
- (id)_sortedSubentities;	// 0x33cc3f25
- (void)_stripForMigration;	// 0x33d0ada9
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x33d08fc9
- (id)_subentityNamed:(id)named;	// 0x33d08b75
- (void)_throwIfNotEditable;	// 0x33d08b35
- (BOOL)_tryRetain;	// 0x33d07389
- (id)_versionHashInStyle:(unsigned)style;	// 0x33ccd7b5
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x33d0b1ad
- (id)attributeKeys;	// 0x33d06131
- (id)attributesByName;	// 0x33d061bd
// converted property getter: - (id)compoundIndexes;	// 0x33d078d9
- (id)copyWithZone:(NSZone *)zone;	// 0x33d05a31
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d06b51
- (void)dealloc;	// 0x33d05251
- (id)description;	// 0x33d05ff9
// converted property getter: - (id)elementID;	// 0x33d074d5
- (void)encodeWithCoder:(id)coder;	// 0x33d0552d
- (void)finalize;	// 0x33d051ed
- (unsigned)hash;	// 0x33d05df9
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x33d06a85
// converted property getter: - (BOOL)isAbstract;	// 0x33d06331
- (BOOL)isEqual:(id)equal;	// 0x33d05e21
- (BOOL)isKindOfEntity:(id)entity;	// 0x33d06345
- (id)knownKeysMappingStrategy;	// 0x33d07859
// converted property getter: - (id)managedObjectClassName;	// 0x33cdddd5
- (id)managedObjectModel;	// 0x33d064fd
// converted property getter: - (id)name;	// 0x33cc274d
// converted property getter: - (id)properties;	// 0x33cdf205
- (id)propertiesByName;	// 0x33cc5421
- (id)relationshipsByName;	// 0x33d061f1
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x33d0677d
- (oneway void)release;	// 0x33cbd6f5
// converted property getter: - (id)renamingIdentifier;	// 0x33d07499
- (id)retain;	// 0x33cbd5d1
- (unsigned)retainCount;	// 0x33d07375
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x33d06e55
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x33d07c41
// converted property setter: - (void)setElementID:(id)anId;	// 0x33d074c5
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x33d06db9
// converted property setter: - (void)setName:(id)name;	// 0x33d06e85
// converted property setter: - (void)setProperties:(id)properties;	// 0x33d06c2d
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x33d07405
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x33d06361
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33d06225
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x33d072cd
// converted property getter: - (id)subentities;	// 0x33cc3ff1
- (id)subentitiesByName;	// 0x33d064ed
// converted property getter: - (id)superentity;	// 0x33cc3691
- (id)toManyRelationshipKeys;	// 0x33d0650d
- (id)toOneRelationshipKeys;	// 0x33d06645
// converted property getter: - (id)userInfo;	// 0x33d0630d
// converted property getter: - (id)versionHash;	// 0x33cdddb1
// converted property getter: - (id)versionHashModifier;	// 0x33d072bd
@end

