/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTUsageReporterMonitor : BRSingleton {
	id<BRMediaAsset> _currentAsset;	// 4 = 0x4
	unsigned _playbackStalledCount;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x4cf069
+ (id)singleton;	// 0x4cf059
- (id)init;	// 0x4cf0f9
- (void).cxx_destruct;	// 0x4cf1f5
- (void)_currentAssetPlaybackChanged:(id)changed;	// 0x4cf21d
- (void)_currentAssetPlaybackStalled:(id)stalled;	// 0x4cf209
- (void)_homeSharesChanged:(id)changed;	// 0x4cf3d1
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)playerIfNeeded;	// 0x4cf489
- (void)dealloc;	// 0x4cf08d
@end
