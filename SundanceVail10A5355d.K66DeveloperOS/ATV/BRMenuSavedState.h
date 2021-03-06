/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMenuSavedState : BRSingleton {
	NSMutableDictionary *_cachedMenuState;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
}
@property(assign) BOOL enabled;	// G=0x380bd9; S=0x380be9; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x380939
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x3806fd
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x380721
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x38082d
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x380979
+ (void)setSingleton:(id)singleton;	// 0x3806ed
+ (id)singleton;	// 0x3806dd
- (id)init;	// 0x3809b1
- (void)dealloc;	// 0x380a2d
// converted property getter: - (BOOL)enabled;	// 0x380bd9
- (id)objectForKey:(id)key;	// 0x380af5
- (void)purge;	// 0x380b85
- (void)removeObjectForKey:(id)key;	// 0x380b3d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x380be9
- (void)setObject:(id)object forKey:(id)key;	// 0x380aa9
@end

