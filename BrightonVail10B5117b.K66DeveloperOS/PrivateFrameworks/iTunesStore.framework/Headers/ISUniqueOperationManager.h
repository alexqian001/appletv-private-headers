/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "ISSingleton.h"

@class ISUniqueOperationContext, NSLock, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x36a6ea4d
+ (id)sharedInstance;	// 0x36a6eaa1
- (id)init;	// 0x36a6e935
- (id)_activeContext;	// 0x36a6ef29
- (id)_contextForOperation:(id)operation;	// 0x36a6ef99
- (void)checkInOperation:(id)operation;	// 0x36a6eb15
- (void)checkOutOperation:(id)operation;	// 0x36a6eb75
- (void)dealloc;	// 0x36a6e9c1
- (id)lockWithIdentifier:(id)identifier;	// 0x36a6ec49
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x36a6ed75
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x36a6ee09
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x36a6ee99
@end

