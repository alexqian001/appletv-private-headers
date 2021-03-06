/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {
	MCAssetAudio *mAsset;	// 12 = 0xc
	float mVolume;	// 16 = 0x10
	double mFadeInDuration;	// 20 = 0x14
	double mFadeOutDuration;	// 28 = 0x1c
	unsigned mIndex;	// 36 = 0x24
	double mStartTime;	// 40 = 0x28
	double mDuration;	// 48 = 0x30
	BOOL mStartTimeIsDefined;	// 56 = 0x38
	BOOL mDurationIsDefined;	// 57 = 0x39
	MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;	// 60 = 0x3c
	MCSlide *mSlideIfSlideSong;	// 64 = 0x40
}
@property(retain) MCAssetAudio *asset;	// G=0x31bb1c55; S=0x31bb1d49; 
@property(assign) MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong;	// G=0x31bb215d; S=0x31bb216d; @synthesize=mAudioPlaylistIfAudioPlaylistSong
@property(assign, nonatomic) double duration;	// G=0x31bb2135; S=0x31bb1ebd; @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;	// G=0x31bb214d; @synthesize=mDurationIsDefined
@property(assign, nonatomic) double fadeInDuration;	// G=0x31bb2095; S=0x31bb20ad; @synthesize=mFadeInDuration
@property(assign, nonatomic) double fadeOutDuration;	// G=0x31bb20c1; S=0x31bb20d9; @synthesize=mFadeOutDuration
@property(assign, nonatomic) unsigned index;	// G=0x31bb20ed; S=0x31bb20fd; @synthesize=mIndex
@property(assign) MCSlide *slideIfSlideSong;	// G=0x31bb217d; S=0x31bb218d; @synthesize=mSlideIfSlideSong
@property(assign, nonatomic) double startTime;	// G=0x31bb210d; S=0x31bb1e81; @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;	// G=0x31bb2125; @synthesize=mStartTimeIsDefined
@property(assign, nonatomic) float volume;	// G=0x31bb2075; S=0x31bb2085; @synthesize=mVolume
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31bb1491
- (id)init;	// 0x31bb15dd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31bb161d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31bb1ee5
// declared property getter: - (id)asset;	// 0x31bb1c55
// declared property getter: - (id)audioPlaylistIfAudioPlaylistSong;	// 0x31bb215d
- (void)demolish;	// 0x31bb1905
// declared property getter: - (double)duration;	// 0x31bb2135
// declared property getter: - (BOOL)durationIsDefined;	// 0x31bb214d
// declared property getter: - (double)fadeInDuration;	// 0x31bb2095
// declared property getter: - (double)fadeOutDuration;	// 0x31bb20c1
- (id)imprint;	// 0x31bb1989
// declared property getter: - (unsigned)index;	// 0x31bb20ed
// declared property setter: - (void)setAsset:(id)asset;	// 0x31bb1d49
// declared property setter: - (void)setAudioPlaylistIfAudioPlaylistSong:(id)song;	// 0x31bb216d
// declared property setter: - (void)setDuration:(double)duration;	// 0x31bb1ebd
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x31bb20ad
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x31bb20d9
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x31bb20fd
// declared property setter: - (void)setSlideIfSlideSong:(id)song;	// 0x31bb218d
// declared property setter: - (void)setStartTime:(double)time;	// 0x31bb1e81
// declared property setter: - (void)setVolume:(float)volume;	// 0x31bb2085
// declared property getter: - (id)slideIfSlideSong;	// 0x31bb217d
// declared property getter: - (double)startTime;	// 0x31bb210d
// declared property getter: - (BOOL)startTimeIsDefined;	// 0x31bb2125
- (void)undefineDuration;	// 0x31bb1ea9
- (void)undefineStartTime;	// 0x31bb1e6d
// declared property getter: - (float)volume;	// 0x31bb2075
@end

