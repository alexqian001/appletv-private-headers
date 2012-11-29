/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
	NSMutableSet *_loadedItems;	// 20 = 0x14
	NSMutableSet *_effectiveItems;	// 24 = 0x18
	NSMutableSet *_addedItems;	// 28 = 0x1c
	NSMutableSet *_removedItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableSet *addedItems;	// G=0x35b98e45; S=0x35b98e55; @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;	// G=0x35b25381; 
@property(retain, nonatomic) NSMutableSet *effectiveItems;	// G=0x35b98e25; S=0x35b98e35; @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet *items;	// G=0x35b242c9; S=0x35b26ecd; 
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;	// G=0x35b9884d; 
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;	// G=0x35b98879; 
@property(retain, nonatomic) NSMutableSet *loadedItems;	// G=0x35b98e05; S=0x35b98e15; @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet *removedItems;	// G=0x35b98e65; S=0x35b98e75; @synthesize=_removedItems
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x35b29d01
- (id)_effectiveItems;	// 0x35b24301
- (void)_forgetRelatedObject:(id)object;	// 0x35b98a4d
- (id)_loadedItems;	// 0x35b243bd
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x35b988c5
- (void)addItem:(id)item;	// 0x35b29ce1
// declared property getter: - (id)addedItems;	// 0x35b98e45
- (id)committedValue;	// 0x35b26e6d
// declared property getter: - (int)count;	// 0x35b25381
- (void)dealloc;	// 0x35b238a9
- (id)description;	// 0x35b98d1d
- (void)didCommit;	// 0x35b2fab9
// declared property getter: - (id)effectiveItems;	// 0x35b98e25
- (BOOL)isWeak;	// 0x35b98849
// declared property getter: - (id)items;	// 0x35b242c9
// declared property getter: - (BOOL)itemsWereAdded;	// 0x35b9884d
// declared property getter: - (BOOL)itemsWereRemoved;	// 0x35b98879
// declared property getter: - (id)loadedItems;	// 0x35b98e05
- (void)refresh;	// 0x35b98bcd
- (void)removeItem:(id)item;	// 0x35b988a5
// declared property getter: - (id)removedItems;	// 0x35b98e65
- (void)reset;	// 0x35b98abd
- (void)rollback;	// 0x35b27d99
// declared property setter: - (void)setAddedItems:(id)items;	// 0x35b98e55
// declared property setter: - (void)setEffectiveItems:(id)items;	// 0x35b98e35
// declared property setter: - (void)setItems:(id)items;	// 0x35b26ecd
// declared property setter: - (void)setLoadedItems:(id)items;	// 0x35b98e15
// declared property setter: - (void)setRemovedItems:(id)items;	// 0x35b98e75
- (void)updatePersistentObject;	// 0x35b2c8ed
- (BOOL)validate:(id *)validate;	// 0x35b2a995
@end
