/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRAudioVisualizerControl.h"

@class BRMediaPlayer, NSString, NSTimer, BRMusicNowPlayingLayer;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingControl : BRAudioVisualizerControl {
@private
	BRMusicNowPlayingLayer *_layer;	// 44 = 0x2c
	BRMediaPlayer *_player;	// 48 = 0x30
	NSString *_lastAssetID;	// 52 = 0x34
	NSTimer *_flipTimer;	// 56 = 0x38
	NSTimer *_delayedContentUpdateTimer;	// 60 = 0x3c
	NSTimer *_flipRearrangeTimer;	// 64 = 0x40
	NSTimer *_assetChangeAnimationUnblockTimer;	// 68 = 0x44
	double _flipDuration;	// 72 = 0x48
	double _flipInterval;	// 80 = 0x50
	double _assetChangeAnimationBlockTime;	// 88 = 0x58
	double _assetChangeAnimationDuration;	// 96 = 0x60
	double _newTrackKicksInTime;	// 104 = 0x68
	double _oldTrackFadeOutTime;	// 112 = 0x70
	double _postFlipAssetChangeAnimationBlockTime;	// 120 = 0x78
	int _transitionDirection;	// 128 = 0x80
	BOOL _assetChangeAnimationBlockFlag;	// 132 = 0x84
	BOOL _buffering;	// 133 = 0x85
}
@property(retain) BRMediaPlayer *player;	// G=0x32f76519; S=0x32f76a7d; converted property
- (id)init;	// 0x32f3fe61
- (void)_chapterPictureChanged:(id)changed;	// 0x32f767c1
- (id)_fetchCoverArt;	// 0x32f40ccd
- (void)_flipNow:(id)now;	// 0x32f766fd
- (void)_periodicMetadataChanged:(id)changed;	// 0x32f7654d
- (void)_playbackAssetChanged:(id)changed;	// 0x32f768c5
- (void)_playbackProgressChanged:(id)changed;	// 0x32f412ad
- (void)_playlistChanged:(id)changed;	// 0x32f768ad
- (void)_radioBufferingEnd:(id)end;	// 0x32f766b5
- (void)_radioBufferingStart:(id)start;	// 0x32f766d9
- (void)_repeatModeChanged:(id)changed;	// 0x32f765fd
- (void)_setTransitionDirection:(id)direction;	// 0x32f76565
- (void)_shuffleModeChanged:(id)changed;	// 0x32f76659
- (void)_unblockAssetChangeAnimation:(id)animation;	// 0x32f76531
- (void)_updateCoverArt:(id)art;	// 0x32f767f5
- (void)_updateElapsedTime;	// 0x32f40da9
- (void)_updatePlayerRepeatState;	// 0x32f411a9
- (void)_updatePlayerShuffleState;	// 0x32f41149
- (void)_updateTrackWithTransition:(BOOL)transition;	// 0x32f4068d
- (id)accessibilityScreenContent;	// 0x32f76b21
- (void)controlWasActivated;	// 0x32f412c1
- (void)controlWasDeactivated;	// 0x32f41581
- (void)dealloc;	// 0x32f41801
- (BOOL)displayTrackPopup;	// 0x32f76529
- (BOOL)isAccessibilityElement;	// 0x32f7652d
- (void)layoutSubcontrols;	// 0x32f76ab5
// converted property getter: - (id)player;	// 0x32f76519
// converted property setter: - (void)setPlayer:(id)player;	// 0x32f76a7d
@end

