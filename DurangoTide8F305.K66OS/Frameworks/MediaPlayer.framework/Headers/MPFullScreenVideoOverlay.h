/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableView.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class MPNowPlayingItemQueueInfoButton, MPDetailSlider, MPAVItem, MPCenteringNavigationBar, UINavigationBar, MPVideoViewController, UINavigationItem, UIView, UIImageView, MPTransportControls, UILabel, UINavigationButton;
@protocol MPVideoOverlayDelegate;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
	MPVideoViewController *_videoController;	// 72 = 0x48
	id<MPVideoOverlayDelegate> _delegate;	// 76 = 0x4c
	MPAVItem *_item;	// 80 = 0x50
	int _interfaceOrientation;	// 84 = 0x54
	UIView *_loadingMovieIndicatorView;	// 88 = 0x58
	MPDetailSlider *_scrubControl;	// 92 = 0x5c
	UILabel *_scrubSpeedLabel;	// 96 = 0x60
	UILabel *_scrubInstructionsLabel;	// 100 = 0x64
	MPTransportControls *_transportControls;	// 104 = 0x68
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 108 = 0x6c
	UINavigationButton *_backButton;	// 112 = 0x70
	MPCenteringNavigationBar *_navigationBar;	// 116 = 0x74
	UIImageView *_navigationBarBackground;	// 120 = 0x78
	UIImageView *_navigationBarShadow;	// 124 = 0x7c
	UINavigationItem *_navigationItem;	// 128 = 0x80
	UINavigationButton *_scaleModeButton;	// 132 = 0x84
	unsigned _desiredParts;	// 136 = 0x88
	unsigned _disabledParts;	// 140 = 0x8c
	unsigned _visibleParts;	// 144 = 0x90
	unsigned _tvOutEnabled : 1;	// 148 = 0x94
	unsigned _wantsTick : 1;	// 148 = 0x94
	unsigned _allowsDetailScrubbing : 1;	// 148 = 0x94
	unsigned _detailScrubbing : 1;	// 148 = 0x94
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x3374f191; S=0x337500bd; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x3374f1a5; S=0x3374ff75; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x337504d5; S=0x337504a1; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x3374f249; S=0x337500f5; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x3374f239; S=0x337502f9; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x3374f229; S=0x33750275; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3374f1f9; S=0x33750129; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x3374f219; S=0x337501e1; @synthesize=_item
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar;	// G=0x3374f209; @synthesize=_navigationBar
@property(readonly, retain, nonatomic) MPTransportControls *transportControls;	// G=0x3374f1e9; @synthesize=_transportControls
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x3374f1c9; S=0x3374f1d9; @synthesize=_videoController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x3374f1b9; S=0x33750069; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x33750b9d
- (id)initWithFrame:(CGRect)frame interfaceOrientation:(int)orientation;	// 0x33750665
// declared property getter: - (BOOL)TVOutEnabled;	// 0x3374f191
- (void)_backButtonAction:(id)action;	// 0x3374ff35
- (void)_bufferingStateDidChange:(id)_bufferingState;	// 0x3374fd55
- (void)_configureLinkButtonForCurrentItemTime;	// 0x33750371
- (unsigned)_desiredPartsForTransportControlsWithParts:(unsigned)parts;	// 0x3374fab1
- (void)_destinationDidChangeNotification:(id)_destination;	// 0x3374fedd
- (void)_hideScrubInstructions;	// 0x33750e8d
- (void)_initNavigationBar;	// 0x3375118d
- (void)_initNavigationBarBackground;	// 0x33751ffd
- (id)_loadingMovieIndicatorView;	// 0x337517f5
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x3374fd41
- (void)_reloadNavigationBarWithAnimation:(BOOL)animation;	// 0x33751c35
- (void)_reloadTransportControls:(BOOL)controls;	// 0x3374f8d5
- (void)_scaleButtonAction:(id)action;	// 0x3374fef5
- (void)_scaleModeDidChangeNotification:(id)_scaleMode;	// 0x3374fd29
- (id)_scrubControlWithFrame:(CGRect)frame;	// 0x3374f741
- (void)_showScrubInstructions;	// 0x33751009
- (void)_statusBarHeightChanged:(id)changed;	// 0x3374fe51
- (void)_tickNotification:(id)notification;	// 0x3374feb5
- (void)_timeDidJumpNotification:(id)_time;	// 0x3374fe8d
- (BOOL)_updateScrubControlVisibility;	// 0x3374f579
- (void)_updateScrubControlWithAnimation:(BOOL)animation;	// 0x3375228d
- (void)_updateTimeBasedValues;	// 0x3374f305
- (void)_validityChangedNotification:(id)notification;	// 0x3374fe65
- (unsigned)_visiblePartsForTransportControlsWithParts:(unsigned)parts;	// 0x3374f2a5
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x3374f1a5
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x337504d5
- (void)crossedURLTimeMarker:(id)marker;	// 0x3375035d
- (void)dealloc;	// 0x337508ad
// declared property getter: - (id)delegate;	// 0x3374f249
// declared property getter: - (unsigned)desiredParts;	// 0x3374f239
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x3374fb11
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x3374fb51
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x3374fc99
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x3374fb99
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x3374fc19
- (void)didMoveToSuperview;	// 0x33750509
- (void)didMoveToWindow;	// 0x3375085d
// declared property getter: - (unsigned)disabledParts;	// 0x3374f229
- (void)hideAlternateTracks;	// 0x3374f181
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33750811
// declared property getter: - (int)interfaceOrientation;	// 0x3374f1f9
// declared property getter: - (id)item;	// 0x3374f219
- (void)layoutSubviews;	// 0x337513c1
// declared property getter: - (id)navigationBar;	// 0x3374f209
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x3374f185
- (void)restoreSanity;	// 0x33750609
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x3374ff75
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x337504a1
- (void)setAlpha:(float)alpha;	// 0x337507c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337500f5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x337502f9
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x337502a9
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x33750275
- (void)setHidden:(BOOL)hidden;	// 0x3375076d
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x33750129
// declared property setter: - (void)setItem:(id)item;	// 0x337501e1
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x337500bd
- (void)setVideoController:(id)controller;	// 0x33750081
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x3374f1d9
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x33750069
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x3374ffc9
- (void)showAlternateTracks;	// 0x33750451
- (void)startTicking;	// 0x337505ad
- (void)stopTicking;	// 0x33750561
// declared property getter: - (id)transportControls;	// 0x3374f1e9
// declared property getter: - (id)videoViewController;	// 0x3374f1c9
- (id)viewsToFadeOutWhenShowingBackside;	// 0x33750311
// declared property getter: - (unsigned)visibleParts;	// 0x3374f1b9
@end

