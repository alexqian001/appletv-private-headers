/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoTransferViewController.h"
#import "UIModalViewDelegate.h"
#import "MPViewController.h"

@class MPTVOutWindow, UIImage, UIAlertView, UIColor, MPVideoBackgroundView, UIActivityIndicatorView, UIView, MPClosedCaptionDisplay, MPVideoView, MPImageCache, MPImageCacheRequest, MPSwipableView;
@protocol MPVideoOverlay;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView *_backgroundView;	// 196 = 0xc4
	MPSwipableView *_backstopView;	// 200 = 0xc8
	BOOL _batteryMonitoringWasEnabled;	// 204 = 0xcc
	MPClosedCaptionDisplay *_captionView;	// 208 = 0xd0
	unsigned _desiredParts;	// 212 = 0xd4
	unsigned _disabledParts;	// 216 = 0xd8
	unsigned _visibleParts;	// 220 = 0xdc
	unsigned _tvOutEnabled : 1;	// 224 = 0xe0
	unsigned _allowsTVOutInBackground : 1;	// 224 = 0xe0
	unsigned _itemTypeOverride;	// 228 = 0xe4
	unsigned _scaleMode;	// 232 = 0xe8
	unsigned _scaleModeOverride;	// 236 = 0xec
@private
	UIAlertView *_alertSheet;	// 240 = 0xf0
	MPImageCache *_artworkImageCache;	// 244 = 0xf4
	MPImageCacheRequest *_artworkImageRequest;	// 248 = 0xf8
	UIColor *_backstopColor;	// 252 = 0xfc
	UIActivityIndicatorView *_loadingIndicator;	// 256 = 0x100
	MPTVOutWindow *_tvOutWindow;	// 260 = 0x104
	int _extendedModeNotifyToken;	// 264 = 0x108
	int _artworkImageStyle;	// 268 = 0x10c
	UIImage *_posterImage;	// 272 = 0x110
	unsigned _canAnimateControlsOverlay : 1;	// 276 = 0x114
	unsigned _canShowControlsOverlay : 1;	// 276 = 0x114
	unsigned _disableControlsAutohide : 1;	// 276 = 0x114
	unsigned _ownsStatusBar : 1;	// 276 = 0x114
	unsigned _playAfterPop : 1;	// 276 = 0x114
	unsigned _scheduledLoadingIndicator : 1;	// 276 = 0x114
	unsigned _displayPlaybackErrorAlerts : 1;	// 276 = 0x114
	unsigned _allowsDetailScrubbing : 1;	// 276 = 0x114
	unsigned _attemptAutoPlayWhenControlsHidden : 1;	// 277 = 0x115
	unsigned _alwaysAllowHidingControlsOverlay : 1;	// 277 = 0x115
	unsigned _hasShownFirstVideoFrame : 1;	// 277 = 0x115
	unsigned _allowsWirelessPlayback : 1;	// 277 = 0x115
	unsigned _disableAutoRotation : 1;	// 277 = 0x115
	unsigned _inlinePlaybackUsesTVOut : 1;	// 277 = 0x115
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x319e47d1; S=0x319e4731; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x319e3f89; S=0x319e3f9d; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x319e484d; S=0x319e47e5; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x319e3fc5; S=0x319e3fd9; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x319e61dd; S=0x319e61f1; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x319e66f9; S=0x319e6709; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x319e411d; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x319e4025; S=0x319e4039; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x319e3825; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x319e3a25; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x319e66d9; S=0x319e6285; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x319e5c9d; S=0x319e6115; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x319e3a65; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x319e5cb1; S=0x319e6139; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x319e48f1; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x319e6191; S=0x319e6195; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x319e66a9; S=0x319e3d6d; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x319e4095; S=0x319e40a9; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x319e3aa1; S=0x319e3dc9; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x319e66b9; S=0x319e3d99; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x319e4891; S=0x319e48a5; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x319e48c5; S=0x319e48c9; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x319e40d5; S=0x319e40e9; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x319e66e9; S=0x319e48e1; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x319e3b15; S=0x319e3de1; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x319e6719; S=0x319e36cd; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x319e3e75; S=0x319e3e09; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x319e4119; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x319e3079; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x319e48c1; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x319e48bd; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;	// G=0x319e4889; 
@property(readonly, assign, nonatomic) UIView<MPVideoOverlay> *videoOverlayViewIfLoaded;	// G=0x319e488d; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x319e4861; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x319e4ad1; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x319e66c9; S=0x319e3ee1; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x319e2f49
+ (BOOL)supportsFullscreenDisplay;	// 0x319e1f4d
- (id)init;	// 0x319e1619
// declared property getter: - (BOOL)TVOutEnabled;	// 0x319e47d1
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x319e65b1
- (void)_cancelArtworkImageRequest;	// 0x319e62f5
- (void)_delayedPopForTimeJump;	// 0x319e5959
- (void)_delayedShowLoading;	// 0x319e59a5
- (void)_delayedUpdateBackgroundView;	// 0x319e5625
- (void)_exitPlayerForPlaybackError;	// 0x319e5211
- (void)_fixupViewHierarchyIfNecessary;	// 0x319e37bd
- (void)_hideLoadingIndicator;	// 0x319e634d
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x319e5929
- (unsigned)_itemTypeWithActualTypePreference;	// 0x319e3035
- (void)_popForTimeJump:(id)timeJump;	// 0x319e5815
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x319e5fe5
- (void)_screenDidConnect:(id)_screen;	// 0x319e58a1
- (void)_screenDidDisconnect:(id)_screen;	// 0x319e58e5
- (BOOL)_showDestinationPlaceholder;	// 0x319e6409
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x319e5f35
- (void)_updateAlwaysPlayWheneverPossible;	// 0x319e3b29
- (void)_updateBackgroundView:(BOOL)view;	// 0x319e5665
- (void)_updateClosedCaptionDisplay;	// 0x319e24fd
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x319e2991
- (void)_updateProgressControlForItem:(id)item;	// 0x319e64fd
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x319e4c51
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x319e4ce5
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x319e4cf5
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x319e4d35
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)_videoView_isAirPlayVideoActive;	// 0x319e4d89
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x319e4e7d
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x319e528d
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x319e5321
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x319e5361
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x319e53f9
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x319e5461
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x319e54ed
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x319e5529
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x319e4b61
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x319e3f89
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x319e484d
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x319e3fc5
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x319e61dd
// declared property getter: - (int)artworkImageStyle;	// 0x319e66f9
// declared property getter: - (id)artworkImageView;	// 0x319e411d
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x319e4025
// declared property getter: - (id)backgroundView;	// 0x319e3825
- (void)backgroundViewDidUpdate;	// 0x319e62ed
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x319e3a25
// declared property getter: - (id)backstopColor;	// 0x319e66d9
- (void)bufferingStateChangedNotification:(id)notification;	// 0x319e57b1
- (CGRect)calculateArtworkImageViewFrame;	// 0x319e2e6d
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x319e2bfd
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x319e5c9d
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x319e3a65
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x319e21cd
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x319e5cb1
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x319e48f1
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x319e49ad
- (void)chapterListDidDisappear:(id)chapterList;	// 0x319e4ac1
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x319e6191
- (id)createChapterFlipTransition;	// 0x319e6251
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x319e2a75
- (void)crossedClosedCaptionTimeMarker:(id)marker;	// 0x319e2ad1
- (void)dealloc;	// 0x319e1ab9
// declared property getter: - (unsigned)desiredParts;	// 0x319e66a9
// declared property getter: - (BOOL)disableAutoRotation;	// 0x319e4095
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x319e3aa1
// declared property getter: - (unsigned)disabledParts;	// 0x319e66b9
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x319e62f1
- (int)displayArtworkImageStyle;	// 0x319e2bad
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x319e4891
- (void)displayVideoView;	// 0x319e5cc5
- (void)displayVideoViewOnScreen;	// 0x319e5d7d
- (void)displayVideoViewOnTV;	// 0x319e5d81
- (void)enableAirPlayVideoRoutesIfNecessary;	// 0x319e3725
- (void)handleScaleModeChange;	// 0x319e5ed5
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x319e492d
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x319e40d5
// declared property getter: - (BOOL)isFullscreen;	// 0x319e48c5
- (BOOL)isFullscreenForLayoutPurposes;	// 0x319e2b51
- (BOOL)isStatusBarHidden;	// 0x319e1f55
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x319e48c1
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x319e48bd
// declared property getter: - (unsigned)itemTypeOverride;	// 0x319e66e9
- (void)loadView;	// 0x319e413d
- (id)newAlternateTracksTransition;	// 0x319e621d
- (id)newArtworkImageView;	// 0x319e3151
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x319e4299
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x319e3769
// declared property getter: - (BOOL)ownsStatusBar;	// 0x319e3b15
// declared property getter: - (id)posterImage;	// 0x319e6719
- (void)prepareToDisplayVideo;	// 0x319e4351
- (void)reloadArtworkImageView;	// 0x319e3211
- (void)removeChildViewController:(id)controller;	// 0x319e42e1
// declared property getter: - (unsigned)scaleMode;	// 0x319e3e75
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x319e3f9d
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x319e47e5
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x319e3fd9
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x319e61f1
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x319e6709
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x319e4039
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x319e6285
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x319e6115
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x319e6139
- (void)setClosedCaptions:(id)captions;	// 0x319e1f79
- (void)setControlsNeedLayout;	// 0x319e4115
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x319e6195
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x319e61b5
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x319e61d9
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x319e3d6d
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x319e3d81
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x319e40a9
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x319e3dc9
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x319e3d99
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x319e48a5
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x319e48c9
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x319e48dd
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x319e40e9
- (void)setItem:(id)item;	// 0x319e3ba1
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x319e48e1
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x319e3111
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x319e3de1
- (void)setPlayer:(id)player;	// 0x319e4671
// declared property setter: - (void)setPosterImage:(id)image;	// 0x319e36cd
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x319e3e09
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x319e3e1d
- (void)setScaleModeOverride:(unsigned)override animated:(BOOL)animated;	// 0x319e3e9d
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x319e4731
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x319e3ee1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x319e3f11
- (void)showAlternateTracksController:(id)controller;	// 0x319e2329
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x319e4119
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x319e3079
- (void)showChaptersController;	// 0x319e297d
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x319e2629
- (int)statusBarStyle;	// 0x319e1f51
- (void)tearDownTVOutWindow;	// 0x319e5c35
- (void)toggleScaleMode:(BOOL)mode;	// 0x319e3f5d
// declared property getter: - (id)videoOverlayView;	// 0x319e4889
// declared property getter: - (id)videoOverlayViewIfLoaded;	// 0x319e488d
// declared property getter: - (id)videoView;	// 0x319e4861
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x319e55d1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x319e5589
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x319e4ad1
- (void)viewDidAppear:(BOOL)view;	// 0x319e4599
- (void)viewDidUnload;	// 0x319e4231
- (void)viewWillDisappear:(BOOL)view;	// 0x319e45e9
// declared property getter: - (unsigned)visibleParts;	// 0x319e66c9
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x319e3f59
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x319e24ad
@end
