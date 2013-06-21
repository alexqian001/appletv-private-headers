/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAudioVisualizerControl.h"

@class BRMusicNowPlayingLayer, NSTimer, NSString;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingControl : BRAudioVisualizerControl {
	BRMusicNowPlayingLayer *_nowPlayingLayer;	// 84 = 0x54
	NSString *_lastAssetID;	// 88 = 0x58
	NSTimer *_flipTimer;	// 92 = 0x5c
	NSTimer *_delayedContentUpdateTimer;	// 96 = 0x60
	NSTimer *_assetChangeAnimationUnblockTimer;	// 100 = 0x64
	NSTimer *_spinnerTimer;	// 104 = 0x68
	double _lastEventTime;	// 108 = 0x6c
	double _flipDuration;	// 116 = 0x74
	double _flipInterval;	// 124 = 0x7c
	double _assetChangeAnimationBlockTime;	// 132 = 0x84
	double _assetChangeAnimationDuration;	// 140 = 0x8c
	double _newTrackKicksInTime;	// 148 = 0x94
	double _oldTrackFadeOutTime;	// 156 = 0x9c
	double _postFlipAssetChangeAnimationBlockTime;	// 164 = 0xa4
	int _transitionDirection;	// 172 = 0xac
	BOOL _assetChangeAnimationBlockFlag;	// 176 = 0xb0
	BOOL _buffering;	// 177 = 0xb1
}
- (id)init;	// 0x300911
- (void)_chapterPictureChanged:(id)changed;	// 0x301b9d
- (id)_fetchCoverArt;	// 0x3016e9
- (void)_flipNow:(id)now;	// 0x301cb1
- (void)_mediaCued:(id)cued;	// 0x302005
- (void)_periodicMetadataChanged:(id)changed;	// 0x301ff1
- (void)_playbackAssetChanged:(id)changed;	// 0x3018f5
- (void)_playbackProgressChanged:(id)changed;	// 0x301bd9
- (void)_playerStateChanged:(id)changed;	// 0x302015
- (void)_playlistChanged:(id)changed;	// 0x301ab5
- (void)_radioBufferingEnd:(id)end;	// 0x301e35
- (void)_radioBufferingStart:(id)start;	// 0x301e11
- (void)_repeatModeChanged:(id)changed;	// 0x301ecd
- (void)_scheduleFlipTimerWithDelay:(double)delay;	// 0x301be9
- (void)_setTransitionDirection:(id)direction;	// 0x301f41
- (void)_shuffleModeChanged:(id)changed;	// 0x301e59
- (void)_spinnerTimerFired:(id)fired;	// 0x301de1
- (void)_unblockAssetChangeAnimation:(id)animation;	// 0x301dc1
- (void)_updateCoverArt:(id)art;	// 0x301ac9
- (void)_updateElapsedTime;	// 0x301329
- (void)_updatePlayerRepeatState;	// 0x3017ed
- (void)_updatePlayerShuffleState;	// 0x3017a1
- (void)_updateSpinner;	// 0x301839
- (void)_updateTrackWithTransition:(BOOL)transition;	// 0x301461
- (id)accessibilityScreenContent;	// 0x3012b9
- (BOOL)brEventAction:(id)action;	// 0x30125d
- (void)controlWasActivated;	// 0x300bc1
- (void)controlWasDeactivated;	// 0x300f31
- (void)dealloc;	// 0x300b2d
- (BOOL)displayTrackPopup;	// 0x300bbd
- (BOOL)isAccessibilityElement;	// 0x3012b5
- (void)layoutSubcontrols;	// 0x3011f1
@end
