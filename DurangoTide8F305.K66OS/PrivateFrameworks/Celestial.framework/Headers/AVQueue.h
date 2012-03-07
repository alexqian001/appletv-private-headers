/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray;

@interface AVQueue : NSObject {
@private
	NSRecursiveLock *_mutex;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
	int _isBeingModifiedCount;	// 16 = 0x10
}
+ (id)avQueue;	// 0x3264db7d
+ (id)queueWithArray:(id)array error:(id *)error;	// 0x3265cd69
- (id)init;	// 0x3265cd51
- (id)initWithArray:(id)array error:(id *)error;	// 0x3264dbb1
- (id)initWithError:(id *)error;	// 0x3264dc25
- (int)_instantiateItem;	// 0x3265c9a9
- (BOOL)appendItem:(id)item error:(id *)error;	// 0x3264e875
- (BOOL)appendItemsFromArray:(id)array error:(id *)error;	// 0x326599c1
- (void)dealloc;	// 0x32654e35
- (unsigned)indexOfItem:(id)item;	// 0x3265ccf9
- (BOOL)insertItem:(id)item afterItem:(id)item2 error:(id *)error;	// 0x3265cabd
- (BOOL)insertItem:(id)item atIndex:(unsigned)index error:(id *)error;	// 0x3264e8b9
- (BOOL)isBeingModified;	// 0x3265c9ad
- (id)itemAfterItem:(id)item;	// 0x3265cc65
- (id)itemAtIndex:(unsigned)index;	// 0x3264fa79
- (unsigned)itemCount;	// 0x3264dc99
- (void)itemWasAdded:(id)added atIndex:(int)index;	// 0x3264ea3d
- (void)itemWillBeRemoved:(id)item atIndex:(int)index;	// 0x32654571
- (void)removeAllItems;	// 0x3265c9c5
- (BOOL)removeItem:(id)item;	// 0x3265ca55
- (BOOL)removeItemAtIndex:(unsigned)index;	// 0x3265449d
- (void)removeItemsInRange:(NSRange)range;	// 0x3265ca1d
@end
