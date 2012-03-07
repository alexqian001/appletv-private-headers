/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPSongInternal : NSObject {
	double duration;	// 4 = 0x4
	double startTime;	// 12 = 0xc
	float audioVolume;	// 20 = 0x14
	double fadeInDuration;	// 24 = 0x18
	double fadeOutDuration;	// 32 = 0x20
	BOOL assetLogging;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL assetLogging;	// G=0x334fa521; S=0x334fa531; @synthesize
@property(assign, nonatomic) float audioVolume;	// G=0x334fa4a9; S=0x334fa4b9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x334fa451; S=0x334fa469; @synthesize
@property(assign, nonatomic) double fadeInDuration;	// G=0x334fa4c9; S=0x334fa4e1; @synthesize
@property(assign, nonatomic) double fadeOutDuration;	// G=0x334fa4f5; S=0x334fa50d; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x334fa47d; S=0x334fa495; @synthesize
// declared property getter: - (BOOL)assetLogging;	// 0x334fa521
// declared property getter: - (float)audioVolume;	// 0x334fa4a9
// declared property getter: - (double)duration;	// 0x334fa451
// declared property getter: - (double)fadeInDuration;	// 0x334fa4c9
// declared property getter: - (double)fadeOutDuration;	// 0x334fa4f5
// declared property setter: - (void)setAssetLogging:(BOOL)logging;	// 0x334fa531
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x334fa4b9
// declared property setter: - (void)setDuration:(double)duration;	// 0x334fa469
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x334fa4e1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x334fa50d
// declared property setter: - (void)setStartTime:(double)time;	// 0x334fa495
// declared property getter: - (double)startTime;	// 0x334fa47d
@end
