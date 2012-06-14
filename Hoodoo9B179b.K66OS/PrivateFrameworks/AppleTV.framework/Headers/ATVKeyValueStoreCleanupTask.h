/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class ATVKeyValueStore;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStoreCleanupTask : BRBackgroundTask {
@private
	double _lastModifiedThreshold;	// 44 = 0x2c
	ATVKeyValueStore *_keyValueStore;	// 52 = 0x34
}
- (void)dealloc;	// 0x301e93e5
- (BOOL)perform:(id)perform;	// 0x301e9485
- (void)setKeyValueStore:(id)store;	// 0x301e9431
- (void)setLastModifiedThreshold:(double)threshold;	// 0x301e9471
@end
