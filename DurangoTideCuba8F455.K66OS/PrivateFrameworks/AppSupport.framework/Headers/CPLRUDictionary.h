/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "AppSupport-Structs.h"

@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
	CFDictionaryRef _dictionary;	// 4 = 0x4
	unsigned _maxCount;	// 8 = 0x8
	CPLRUDictionaryNode *_head;	// 12 = 0xc
	CPLRUDictionaryNode *_tail;	// 16 = 0x10
}
+ (id)dictionaryWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x322adff5
- (id)initWithMaximumCapacity:(unsigned)maximumCapacity;	// 0x322ae1b1
- (void)_addNodeToFront:(id)front;	// 0x322add49
- (void)_moveNodeToFront:(id)front;	// 0x322ae039
- (void)_removeNode:(id)node;	// 0x322ae175
- (void)_removeNodeFromLinkedList:(id)linkedList;	// 0x322add25
- (id)allKeys;	// 0x322adedd
- (id)allKeysInLRUOrder;	// 0x322ade4d
- (id)allValuesInLRUOrder;	// 0x322addbd
- (unsigned)count;	// 0x322ae399
- (void)dealloc;	// 0x322ae32d
- (id)description;	// 0x322adefd
- (unsigned)linkedListCount;	// 0x322add89
- (id)objectForKey:(id)key;	// 0x322ae409
- (id)objectForKeyWithoutAffectingLRU:(id)keyWithoutAffectingLRU;	// 0x322ae3b1
- (void)removeAllObjects;	// 0x322ae561
- (void)removeObjectForKey:(id)key;	// 0x322ae3d9
- (void)setObject:(id)object forKey:(id)key;	// 0x322ae449
@end

