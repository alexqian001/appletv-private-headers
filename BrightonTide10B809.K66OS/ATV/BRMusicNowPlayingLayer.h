/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRWaitSpinnerControl, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMusicNowPlayingLayer : BRControl {
	NSMutableDictionary *_currentTrackInfo;	// 84 = 0x54
	int _scheduledAnimationCount;	// 88 = 0x58
	float _coverArtRotation;	// 92 = 0x5c
	float _coverArtSizeX;	// 96 = 0x60
	float _coverArtSizeY;	// 100 = 0x64
	float _stateIconWidth;	// 104 = 0x68
	float _textWidth;	// 108 = 0x6c
	BOOL _shuffleState;	// 112 = 0x70
	BOOL _repeatState;	// 113 = 0x71
	BOOL _geniusState;	// 114 = 0x72
	BOOL _isRadio;	// 115 = 0x73
	CGPoint _randomOffset;	// 116 = 0x74
	CGPoint _coverArtPosition;	// 124 = 0x7c
	CGPoint _trackNameTextPosition;	// 132 = 0x84
	CGPoint _artistNameTextPosition;	// 140 = 0x8c
	CGPoint _albumNameTextPosition;	// 148 = 0x94
	CGPoint _trackXofXTextPosition;	// 156 = 0x9c
	CGPoint _transportPosition;	// 164 = 0xa4
	CGPoint _stateIconsLowerRightCornerPosition;	// 172 = 0xac
	float _coverArtReflectionAmount;	// 180 = 0xb4
	CGSize _transportSize;	// 184 = 0xb8
	BOOL _flip;	// 192 = 0xc0
	BRWaitSpinnerControl *_spinner;	// 196 = 0xc4
}
@property(readonly, retain) NSMutableDictionary *currentTrackInfo;	// G=0x303915; converted property
- (id)init;	// 0x3020b1
- (id)_createFrontLayer;	// 0x3045fd
- (void)_flipFrame:(CGRect *)frame parentFrame:(CGRect)frame2;	// 0x304b71
- (void)_startScrolling;	// 0x304c51
- (void)_updateRandomOffset;	// 0x304ba1
- (void)_updateTextStrings;	// 0x304231
- (id)accessibilityLabel;	// 0x304165
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303ef5
- (void)controlWasActivated;	// 0x303b21
- (void)controlWasDeactivated;	// 0x303aad
// converted property getter: - (id)currentTrackInfo;	// 0x303915
- (void)dealloc;	// 0x3023c1
- (int)frontLayerSide;	// 0x303a29
- (BOOL)isAccessibilityElement;	// 0x304161
- (void)layoutSubcontrols;	// 0x302441
- (void)performFlipAnimation:(float)animation;	// 0x303b61
- (void)removeAllPendingActions;	// 0x303fbd
- (void)setCurrentTrackInfo:(id)info WithTransition:(BOOL)transition TransitionDirection:(int)direction TransitionDuration:(float)duration NewTrackKicksInTime:(double)time OldTrackFadeOutTime:(double)time6 isRadio:(BOOL)radio;	// 0x3032a1
- (void)setElapsedTime:(double)time;	// 0x303925
- (void)setElapsedTime:(double)time andDuration:(double)duration;	// 0x303991
- (void)setGeniusState:(BOOL)state;	// 0x303a89
- (void)setPlayerState:(int)state;	// 0x303aa9
- (void)setRepeatMode:(int)mode;	// 0x303a65
- (void)setShuffleState:(BOOL)state;	// 0x303a45
- (void)setSpinnerEnabled:(BOOL)enabled;	// 0x3040c1
- (void)updateCoverArt:(id)art;	// 0x303ff1
@end

