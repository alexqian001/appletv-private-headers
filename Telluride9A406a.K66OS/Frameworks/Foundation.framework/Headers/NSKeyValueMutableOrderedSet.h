/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableOrderedSet.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableOrderedSet : NSMutableOrderedSet <NSKeyValueProxyCaching> {
@private
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35ed8171
+ (id)_proxyShare;	// 0x35e0ec71
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35e0f0ad
- (XXStruct_OzJQfB)_proxyLocator;	// 0x35e0f155
- (void)_proxyNonGCFinalize;	// 0x35ed818d
- (void)dealloc;	// 0x35ed81dd
@end
