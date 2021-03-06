/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import </libobjc.A.h>
#import "ISSingleton.h"

@class NSLock, ISUniqueOperationContext, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x33c86101
+ (id)sharedInstance;	// 0x33c8615d
- (id)init;	// 0x33c85fe9
- (id)_activeContext;	// 0x33c865ed
- (id)_contextForOperation:(id)operation;	// 0x33c8665d
- (void)checkInOperation:(id)operation;	// 0x33c861d9
- (void)checkOutOperation:(id)operation;	// 0x33c86239
- (void)dealloc;	// 0x33c86075
- (id)lockWithIdentifier:(id)identifier;	// 0x33c8630d
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x33c86439
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x33c864cd
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x33c8655d
@end

