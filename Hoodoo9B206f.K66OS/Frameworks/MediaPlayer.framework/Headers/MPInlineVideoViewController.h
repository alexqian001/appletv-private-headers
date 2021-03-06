/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class UIPinchGestureRecognizer, NSString, NSTimer, MPInlineAudioOverlay, MPAudioVideoRoutingPopoverController, UIView, UITapGestureRecognizer, UIWindow, MPInlineVideoOverlay;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;	// 280 = 0x118
	MPInlineVideoOverlay *_inlineOverlayView;	// 284 = 0x11c
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 288 = 0x120
	MPInlineAudioOverlay *_audioOverlayView;	// 292 = 0x124
	int _audioOverlayStyle;	// 296 = 0x128
	UIView *_overlayViewBeingHidden;	// 300 = 0x12c
	BOOL _overlayViewIsVisible;	// 304 = 0x130
	NSString *_playbackErrorDescription;	// 308 = 0x134
	UITapGestureRecognizer *_tapGestureRecognizer;	// 312 = 0x138
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 316 = 0x13c
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 320 = 0x140
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 324 = 0x144
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 328 = 0x148
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 332 = 0x14c
	NSTimer *_idleTimer;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
	UIWindow *_windowForDisablingAutorotation;	// 344 = 0x158
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 348 = 0x15c
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 348 = 0x15c
	unsigned _animatingOverlay : 1;	// 348 = 0x15c
	unsigned _inCloneMirrorMode : 1;	// 348 = 0x15c
	UIView *_fullscreenView;	// 352 = 0x160
	UIView *_superviewBeforeFullscreen;	// 356 = 0x164
	UIViewController *_parentViewControllerBeforeFullscreen;	// 360 = 0x168
	unsigned _indexInSuperviewBeforeFullscreen;	// 364 = 0x16c
	CGRect _nonFullscreenDestinationFrame;	// 368 = 0x170
	int _desiredInterfaceOrientation;	// 384 = 0x180
	int _previousStatusBarStyle;	// 388 = 0x184
	unsigned _statusBarWasHidden : 1;	// 392 = 0x188
	unsigned _isFullscreen : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransition : 1;	// 392 = 0x188
	unsigned _animatingFullscreenTransitionToInline : 1;	// 392 = 0x188
	unsigned _contentViewDidClipToBounds : 1;	// 392 = 0x188
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 392 = 0x188
	unsigned _swallowNextTapGesture : 1;	// 392 = 0x188
	unsigned _exited : 1;	// 392 = 0x188
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x303a8665; S=0x303a4ad5; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x303a4b85; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x303a8675; S=0x303a4b1d; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x303a8685; S=0x303a49d1; @synthesize=_videoOverlayStyle
- (id)init;	// 0x303a2a39
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x303a4921
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x303a57c5
- (void)_cancelOverlayIdleTimer;	// 0x303a6261
- (unsigned)_effectiveItemType;	// 0x303a858d
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x303a6079
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x303a5cc9
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x303a5fb5
- (void)_layoutForItemTypeAvailable;	// 0x303a4cb5
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x303a481d
- (void)_removeCoverView;	// 0x303a8629
- (void)_resetOverlayIdleTimer;	// 0x303a61a9
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x303a5835
- (void)_showOverlayDidEnd;	// 0x303a5c41
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x303a78a1
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x303a78b5
- (void)_transitionFromFullscreenDidEnd;	// 0x303a80d9
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x303a64bd
- (void)_transitionToFullscreenDidEnd;	// 0x303a759d
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x303a62c5
- (BOOL)_useInlineControls;	// 0x303a85f9
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x303a85c9
- (void)_viewWasPinched:(id)pinched;	// 0x303a46c1
- (void)_viewWasTapped:(id)tapped;	// 0x303a4525
// declared property getter: - (int)audioOverlayStyle;	// 0x303a8665
- (id)audioOverlayViewIfLoaded;	// 0x303a57b5
- (id)backgroundView;	// 0x303a33b5
- (BOOL)canShowQTAudioOnlyUI;	// 0x303a3d79
- (BOOL)controlsOverlayVisible;	// 0x303a3615
- (id)createChapterFlipTransition;	// 0x303a4b95
- (void)dealloc;	// 0x303a2b4d
- (void)displayVideoViewOnScreen;	// 0x303a38a9
// declared property getter: - (id)fullscreenView;	// 0x303a4b85
- (BOOL)isFullscreen;	// 0x303a3c89
- (BOOL)isTransitioningFromFullscreen;	// 0x303a6491
- (BOOL)isTransitioningToFullscreen;	// 0x303a6461
- (void)loadView;	// 0x303a2e91
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x303a4515
- (void)overlayTappedBackButton:(id)button;	// 0x303a4465
- (void)overlayTappedScaleModeButton:(id)button;	// 0x303a44e9
// declared property getter: - (id)playbackErrorDescription;	// 0x303a8675
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x303a4c39
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x303a43ed
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x303a30f9
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x303a4ad5
- (void)setControlsNeedLayout;	// 0x303a3a25
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x303a3625
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x303a3225
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x303a3ce1
- (void)setDisabledParts:(unsigned)parts;	// 0x303a3369
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x303a3c9d
- (void)setItem:(id)item;	// 0x303a3159
- (void)setItemTypeOverride:(unsigned)override;	// 0x303a3d39
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x303a3655
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x303a4b1d
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x303a300d
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x303a49d1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x303a3285
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303a3651
- (void)startTicking;	// 0x303a2fbd
- (void)stopTicking;	// 0x303a2fe5
- (void)swipableViewHadActivity:(id)activity;	// 0x303a2fad
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x303a3dd5
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x303a3df1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x303a3e0d
// declared property getter: - (int)videoOverlayStyle;	// 0x303a8685
- (id)videoOverlayView;	// 0x303a52e9
- (id)videoOverlayViewIfLoaded;	// 0x303a5779
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x303a4991
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x303a48b1
- (void)viewDidAppear:(BOOL)view;	// 0x303a2f2d
- (void)viewDidDisappear:(BOOL)view;	// 0x303a2f6d
@end

