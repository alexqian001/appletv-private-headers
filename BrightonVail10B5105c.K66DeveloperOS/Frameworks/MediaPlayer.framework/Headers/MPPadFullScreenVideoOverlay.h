/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class UIActivityIndicatorView, UIImageView, UINavigationButton, UILabel, MPNowPlayingItemQueueInfoButton, UINavigationBar, NSString, MPPadFullScreenTransportControls, UIPopoverController, UINavigationItem;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
	MPPadFullScreenTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	UIImageView *_hudImageView;	// 160 = 0xa0
	UINavigationBar *_navigationBar;	// 164 = 0xa4
	UINavigationItem *_navigationItem;	// 168 = 0xa8
	UIImageView *_navigationBarBackgroundShort;	// 172 = 0xac
	UIImageView *_navigationBarBackgroundTall;	// 176 = 0xb0
	UIImageView *_navigationBarShadow;	// 180 = 0xb4
	NSString *_title;	// 184 = 0xb8
	UINavigationButton *_scaleModeButton;	// 188 = 0xbc
	UILabel *_scrubSpeedLabel;	// 192 = 0xc0
	UILabel *_scrubInstructionsLabel;	// 196 = 0xc4
	UIPopoverController *_popoverController;	// 200 = 0xc8
	UILabel *_loadingMovieLabel;	// 204 = 0xcc
	UIActivityIndicatorView *_loadingMovieIndicator;	// 208 = 0xd0
	unsigned _layoutSubviewsActive : 1;	// 212 = 0xd4
	unsigned _navigationBarHidden : 1;	// 212 = 0xd4
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x34ff2019; S=0x34ff2065; converted property
@property(assign) unsigned long long disabledParts;	// G=0x34ff243d; S=0x34ff2455; converted property
@property(readonly, retain) UINavigationBar *navigationBar;	// G=0x34ff24b9; converted property
@property(assign) BOOL navigationBarHidden;	// G=0x34ff2051; S=0x34ff2361; converted property
@property(copy, nonatomic) NSString *title;	// G=0x34ff41ed; S=0x34ff2855; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x34ff1249
- (void)_applicationWillResignActive:(id)_application;	// 0x34ff2b11
- (void)_configureLinkButtonForCurrentItemTime;	// 0x34ff1ed9
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x34ff40d9
- (void)_doneButton:(id)button;	// 0x34ff27bd
- (void)_hideScrubInstructions;	// 0x34ff3f69
- (void)_initSubviews;	// 0x34ff2d05
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x34ff2afd
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x34ff2a79
- (id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;	// 0x34ff2b31
- (void)_reconfigureNavigationBarAnimated:(BOOL)animated;	// 0x34ff3675
- (void)_scaleButton:(id)button;	// 0x34ff2809
- (void)_scheduleHidePopoverTimer;	// 0x34ff412d
- (void)_showScrubInstructions;	// 0x34ff3e21
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x34ff2ae9
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x34ff2019
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x34ff1fe1
- (void)dealloc;	// 0x34ff134d
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x34ff2705
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x34ff24f1
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x34ff264d
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x34ff2595
// converted property getter: - (unsigned long long)disabledParts;	// 0x34ff243d
- (void)hideAlternateTracks;	// 0x34ff2a59
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x34ff1e1d
- (void)layoutSubviews;	// 0x34ff1521
// converted property getter: - (id)navigationBar;	// 0x34ff24b9
// converted property getter: - (BOOL)navigationBarHidden;	// 0x34ff2051
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x34ff1ecd
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34ff2751
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x34ff2065
- (void)setAlpha:(float)alpha;	// 0x34ff1e59
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x34ff22e1
// converted property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x34ff2455
- (void)setInterfaceOrientation:(int)orientation;	// 0x34ff2289
- (void)setItem:(id)item;	// 0x34ff20a5
// converted property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x34ff2361
- (void)setPlayer:(id)player;	// 0x34ff2241
// declared property setter: - (void)setTitle:(id)title;	// 0x34ff2855
- (void)setVideoViewController:(id)controller;	// 0x34ff21bd
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x34ff23a9
- (void)showAlternateTracks;	// 0x34ff28b9
// declared property getter: - (id)title;	// 0x34ff41ed
@end
