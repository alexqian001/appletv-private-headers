/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class ATVKeyValueStore;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStoreCleanupTask : BRBackgroundTask {
	double _lastModifiedThreshold;	// 44 = 0x2c
	ATVKeyValueStore *_keyValueStore;	// 52 = 0x34
}
- (void)dealloc;	// 0x19ca31
- (BOOL)perform:(id)perform;	// 0x19cacd
- (void)setKeyValueStore:(id)store;	// 0x19ca7d
- (void)setLastModifiedThreshold:(double)threshold;	// 0x19cab9
@end
