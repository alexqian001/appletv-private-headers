/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRPhotoMediaCollection, BRControl, NSString, BRImageControl, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
	BRMediaPlayer *_slideshowPhotoPlayer;	// 112 = 0x70
	BRImageControl *_listBackgroundControl;	// 116 = 0x74
	BRControl *_slideshowPreview;	// 120 = 0x78
	BRPhotoMediaCollection *_collection;	// 124 = 0x7c
	NSString *_nextSlideshowThemeKey;	// 128 = 0x80
	NSString *_newlyRequestedThemeKey;	// 132 = 0x84
	BRControl *_fadeThroughBlackShroudControl;	// 136 = 0x88
	BOOL _themeSwitchInFlight;	// 140 = 0x8c
	BOOL _playerVisualsChanged;	// 141 = 0x8d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 142 = 0x8e
	BOOL _loopPhotos;	// 143 = 0x8f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x3bf79d
- (void)_beginTransitionToNewTheme;	// 0x3c0819
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x3c0705
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x3c0cb1
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x3c09e5
- (void)_finishTransitionToNewTheme;	// 0x3c0b59
- (void)_insertSlideshowPreview;	// 0x3c0695
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x3c0809
- (void)_playerVisualsChanged:(id)changed;	// 0x3c0591
- (void)_prepareToBeginTransitionToNewTheme;	// 0x3c072d
- (void)_removeSlideshowPreview;	// 0x3c0619
- (void)controlWasActivated;	// 0x3bfa71
- (void)controlWasDeactivated;	// 0x3bfcd1
- (id)currentTheme;	// 0x3c0191
- (id)currentTransitions;	// 0x3c0281
- (void)dealloc;	// 0x3bf979
- (void)layoutSubcontrols;	// 0x3bfd11
- (id)musicServerID;	// 0x3c0441
- (void)playSlideshow;	// 0x3bfe75
- (id)playlistID;	// 0x3c03e5
- (void)setLoopPhotos:(BOOL)photos;	// 0x3c0571
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x3c02c5
- (void)setMuted:(BOOL)muted;	// 0x3bff79
- (void)setTimePerSlide:(double)slide;	// 0x3c04c5
- (void)stopSlideshow;	// 0x3bfead
- (void)switchToNewMenu;	// 0x3c049d
- (BOOL)switchToThemeKey:(id)themeKey;	// 0x3bff99
- (void)switchToTransition:(id)transition;	// 0x3c01d5
- (void)toggleSlideshowPlayback;	// 0x3bff31
@end
