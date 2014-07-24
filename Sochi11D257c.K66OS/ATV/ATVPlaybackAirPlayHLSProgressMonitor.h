/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class AVPlayerItemAccessLogEvent;

__attribute__((visibility("hidden")))
@interface ATVPlaybackAirPlayHLSProgressMonitor : ATVPlaybackProgressMonitor {
	AVPlayerItemAccessLogEvent *_latestAVPlayerItemAccessLogEvent;	// 192 = 0xc0
}
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x23aac5
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x23ab09
- (void)dealloc;	// 0x23a861
- (id)metrics;	// 0x23a8b1
- (void)startPeriodicSample;	// 0x23aa1d
@end
