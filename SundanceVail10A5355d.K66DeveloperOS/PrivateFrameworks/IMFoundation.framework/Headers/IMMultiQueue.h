/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface IMMultiQueue : NSObject {
	NSMutableDictionary *_queueMap;	// 4 = 0x4
}
- (void)_addBlock:(id)block withGUID:(id)guid forKey:(id)key;	// 0x329c05ed
- (void)_popEnqueuedBlockWithGUID:(id)guid key:(id)key;	// 0x329c014d
- (void)addBlock:(id)block forKey:(id)key;	// 0x329c058d
- (void)addBlock:(id)block withTimeout:(double)timeout forKey:(id)key;	// 0x329c0301
- (void)dealloc;	// 0x329c0101
@end
