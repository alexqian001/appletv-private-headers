/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>

@class NSMutableSet, EKPersistentObject, NSString, EKObjectRelation, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKObject : NSObject {
	NSMutableDictionary *_dirtyProperties;	// 4 = 0x4
	NSMutableDictionary *_cachedProperties;	// 8 = 0x8
	EKPersistentObject *_persistentObject;	// 12 = 0xc
	NSString *_propertyName;	// 16 = 0x10
	EKObjectRelation *_owningRelation;	// 20 = 0x14
	NSMutableDictionary *_relations;	// 24 = 0x18
	NSMutableSet *_weakRelations;	// 28 = 0x1c
	unsigned long _flags;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableDictionary *cachedProperties;	// G=0x2db0f799; S=0x2db0f7a9; @synthesize=_cachedProperties
@property(retain, nonatomic) NSMutableDictionary *dirtyProperties;	// G=0x2da9cb8d; S=0x2db0f789; @synthesize=_dirtyProperties
@property(assign, nonatomic) unsigned long flags;	// G=0x2db0f81d; S=0x2db0f82d; @synthesize=_flags
@property(assign, nonatomic) EKObjectRelation *owningRelation;	// G=0x2db0f7dd; S=0x2da90015; @synthesize=_owningRelation
@property(retain, nonatomic) EKPersistentObject *persistentObject;	// G=0x2da87d2d; S=0x2da873e9; @synthesize=_persistentObject
@property(copy, nonatomic) NSString *propertyName;	// G=0x2db0f7b9; S=0x2db0f7cd; @synthesize=_propertyName
@property(retain, nonatomic) NSMutableDictionary *relations;	// G=0x2da9b74d; S=0x2db0f7ed; @synthesize=_relations
@property(retain, nonatomic) NSMutableSet *weakRelations;	// G=0x2db0f7fd; S=0x2db0f80d; @synthesize=_weakRelations
- (id)initWithPersistentObject:(id)persistentObject;	// 0x2da873a1
- (void)addWeakRelation:(id)relation;	// 0x2da88afd
- (BOOL)boolPropertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x2db0f3d1
- (void)cachePropertyValue:(id)value forKey:(id)key;	// 0x2db0f301
// declared property getter: - (id)cachedProperties;	// 0x2db0f799
- (void)childRelationChanged:(id)changed;	// 0x2da99a15
- (void)clearPropertyValueForKey:(id)key;	// 0x2db0f38d
- (id)committedValueForKey:(id)key;	// 0x2da977c5
- (void)dealloc;	// 0x2da9456d
- (void)deletePersistentObject;	// 0x2db0f719
- (void)didCommit;	// 0x2daa00ed
// declared property getter: - (id)dirtyProperties;	// 0x2da9cb8d
- (id)eventStore;	// 0x2da88089
- (BOOL)existsInStore;	// 0x2db0f2bd
// declared property getter: - (unsigned long)flags;	// 0x2db0f81d
- (BOOL)hasChanges;	// 0x2da99749
- (void)insertPersistentObjectIfNeeded;	// 0x2da9ca29
- (int)intPropertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x2da904f5
- (BOOL)isEqual:(id)equal;	// 0x2da892bd
- (BOOL)isNew;	// 0x2da8d829
- (BOOL)isPropertyDirty:(id)dirty;	// 0x2da9b70d
- (id)lazyLoadRelationForKey:(id)key;	// 0x2da9e60d
- (id)objectID;	// 0x2da8bcd1
- (id)owner;	// 0x2db0f29d
// declared property getter: - (id)owningRelation;	// 0x2db0f7dd
// declared property getter: - (id)persistentObject;	// 0x2da87d2d
- (id)persistentOrDirtyPropertyForKey:(id)key;	// 0x2da8749d
- (id)propertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x2da8f2ad
// declared property getter: - (id)propertyName;	// 0x2db0f7b9
- (id)propertyValueForKey:(id)key;	// 0x2da9d415
- (BOOL)propertyValueForKey:(id)key value:(id *)value;	// 0x2da874e9
- (BOOL)rebase;	// 0x2db0f205
- (BOOL)refresh;	// 0x2db0f56d
- (id)relationForKey:(id)key;	// 0x2da879b1
// declared property getter: - (id)relations;	// 0x2da9b74d
- (void)removeWeakRelation:(id)relation;	// 0x2db0f765
- (void)reset;	// 0x2db0f411
- (void)rollback;	// 0x2da98a1d
// declared property setter: - (void)setCachedProperties:(id)properties;	// 0x2db0f7a9
// declared property setter: - (void)setDirtyProperties:(id)properties;	// 0x2db0f789
// declared property setter: - (void)setFlags:(unsigned long)flags;	// 0x2db0f82d
// declared property setter: - (void)setOwningRelation:(id)relation;	// 0x2da90015
// declared property setter: - (void)setPersistentObject:(id)object;	// 0x2da873e9
// declared property setter: - (void)setPropertyName:(id)name;	// 0x2db0f7cd
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x2da97451
// declared property setter: - (void)setRelations:(id)relations;	// 0x2db0f7ed
// declared property setter: - (void)setWeakRelations:(id)relations;	// 0x2db0f80d
- (void)updatePersistentObject;	// 0x2da9d2e9
- (void)updatePersistentValueForKeyIfNeeded:(id)keyIfNeeded;	// 0x2da9cb9d
- (BOOL)validate:(id *)validate;	// 0x2da9b90d
// declared property getter: - (id)weakRelations;	// 0x2db0f7fd
@end

