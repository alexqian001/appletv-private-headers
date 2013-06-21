/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
	BOOL _playabilityMetricsAreViable;	// 189 = 0xbd
	double _mostRecentReadyToPlay;	// 192 = 0xc0
	BOOL _readyToPlayTransitionHappened;	// 200 = 0xc8
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 204 = 0xcc
}
@property(assign) double mostRecentReadyToPlay;	// G=0x22bf91; S=0x22bfc5; @synthesize=_mostRecentReadyToPlay
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x22bff9; S=0x22c011; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x22c49d
- (id)_gatherMetricsForStall;	// 0x22c3f1
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x22c029
- (void)_playbackStalled:(id)stalled;	// 0x22c545
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x22c1f1
- (void)dealloc;	// 0x22bd31
- (void)finishPeriodicSample;	// 0x22c175
- (id)mediaTypeString;	// 0x22bea1
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x22bf91
- (void)playerActivated:(id)activated;	// 0x22bd7d
- (void)playerDeactivated;	// 0x22bdf9
- (void)playerItemMonitoringStarted;	// 0x22be39
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x22bff9
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x22bfc5
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x22c011
- (void)startPeriodicSample;	// 0x22c079
- (void)startSamplingIfNecessary;	// 0x22be51
- (id)streamingType;	// 0x22bf85
@end
