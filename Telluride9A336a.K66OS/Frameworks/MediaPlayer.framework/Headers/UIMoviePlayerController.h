/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPVideoViewController, MPAVItem, UIMovieSnapshotView, NSDate, NSString, UIImage, UIViewController, UINavigationController, NSArray, UIView, MPVideoView, MPTransitionController, MPSystemNowPlayingController, MPAVController, MPMovieAccessLog, MPMovieErrorLog;

@interface UIMoviePlayerController : NSObject {
	id _delegate;	// 4 = 0x4
	MPAVItem *_item;	// 8 = 0x8
	NSString *_moviePath;	// 12 = 0xc
	MPAVController *_player;	// 16 = 0x10
	UIImage *_posterImage;	// 20 = 0x14
	NSString *_youTubeVideoID;	// 24 = 0x18
	UIViewController *_topViewController;	// 28 = 0x1c
	MPVideoViewController *_activeVideoController;	// 32 = 0x20
	MPVideoView *_videoView;	// 36 = 0x24
	MPTransitionController *_transitionController;	// 40 = 0x28
	int _transitionCount;	// 44 = 0x2c
	UINavigationController *_portraitNavigationController;	// 48 = 0x30
	CFBagRef _ignoredChangeTypes;	// 52 = 0x34
	int _pendingInterfaceOrientation;	// 56 = 0x38
	MPAVItem *_pendingItem;	// 60 = 0x3c
	MPAVItem *_pendingItemWithDifferentType;	// 64 = 0x40
	CGRect _layoutRect;	// 68 = 0x44
	int _lastSetUIInterfaceOrientation;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	int _interfaceOrientationFromDevice;	// 92 = 0x5c
	NSString *_playbackErrorDescription;	// 96 = 0x60
	unsigned _autoRotationMask;	// 100 = 0x64
	unsigned _displayableParts;	// 104 = 0x68
	unsigned _unmodifiedDisplayableParts;	// 108 = 0x6c
	unsigned _desiredParts;	// 112 = 0x70
	unsigned _audioControlsStyle;	// 116 = 0x74
	unsigned _playableContentTypeOverride;	// 120 = 0x78
	double _timeWhenResignedActive;	// 124 = 0x7c
	double _timeToSnapshot;	// 132 = 0x84
	UIMovieSnapshotView *_snapshotView;	// 140 = 0x8c
	NSArray *_closedCaptionData;	// 144 = 0x90
	MPSystemNowPlayingController *_nowPlayingController;	// 148 = 0x94
	struct {
		unsigned canShowControlsOverlay : 1;
		unsigned wantsControlsOverlayVis : 1;
		unsigned wantsControlsOverlayAnim : 1;
		unsigned wantsControlsOverlayDisableAutohide : 1;
		unsigned wantsFullscreen : 1;
		unsigned alwaysFullscreen : 1;
		unsigned canAnimateControlsOverlay : 1;
		unsigned autoplayWhenLikelyToKeepUp : 1;
		unsigned externalSourceManagesStatusBar : 1;
		unsigned disallowsVideoOut : 1;
		unsigned exited : 1;
		unsigned generatingOrientationNotifications : 1;
		unsigned forStreaming : 1;
		unsigned isExternalTransformationActive : 1;
		unsigned controlsVisibleBeforeExternalTransformation : 1;
		unsigned isActive : 1;
		unsigned resigningActive : 1;
		unsigned didResignActive : 1;
		unsigned uiPrepared : 1;
		unsigned useLegacyControls : 1;
		unsigned isChangingMoviePath : 1;
		unsigned alwaysAllowHidingControlsOverlay : 1;
		unsigned schedulePortraitLoadingIndicator : 1;
		unsigned clientClearedMoviePath : 1;
		unsigned canCommitStatusBarAndOverlayChanges : 1;
		unsigned videoFrameDisplayOnResumeDisabled : 1;
		unsigned usingDebugTestPath : 1;
		unsigned allowsWirelessPlayback : 1;
	} _mpcBitfield;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) MPMovieAccessLog *accessLog;	// G=0x35b3ed8d; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x35b3f091; S=0x35b3f0a5; 
@property(readonly, assign, nonatomic) BOOL areClosedCaptionsAvailable;	// G=0x35b3ba71; 
@property(assign, nonatomic) unsigned audioControlsStyle;	// G=0x35b41c95; S=0x35b3e1b1; @synthesize=_audioControlsStyle
@property(assign) unsigned autoRotationMask;	// G=0x35b3ddf1; S=0x35b3de01; converted property
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x35b3ea31; S=0x35b3e9f5; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x35b3bb09; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;	// G=0x35b3ae0d; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;	// G=0x35b3ae31; 
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x35b3b41d; S=0x35b3b441; 
@property(readonly, assign, nonatomic) NSDate *currentDate;	// G=0x35b3b901; 
@property(assign, nonatomic) double currentTime;	// G=0x35b3b855; S=0x35b3b895; 
@property(assign, nonatomic) id delegate;	// G=0x35b41ca5; S=0x35b41cb5; @synthesize=_delegate
@property(assign, nonatomic) BOOL disallowsVideoOut;	// G=0x35b3ae81; S=0x35b3b2d5; 
@property(readonly, assign, nonatomic) double duration;	// G=0x35b3b6c9; 
@property(readonly, assign, nonatomic) MPMovieErrorLog *errorLog;	// G=0x35b3ee35; 
@property(readonly, assign, nonatomic) long long fileSize;	// G=0x35b3b279; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x35b3ec11; S=0x35b3ec51; 
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x35b3ecf5; 
@property(readonly, assign) int interfaceOrientation;	// G=0x35b3dc15; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;	// G=0x35b3b4f1; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x35b3aea5; S=0x35b41cc5; @synthesize=_item
@property(copy, nonatomic) NSString *moviePath;	// G=0x35b3ae95; S=0x35b3af05; 
@property(copy, nonatomic) NSString *movieSubtitle;	// G=0x35b3b0dd; S=0x35b3b105; 
@property(copy, nonatomic) NSString *movieTitle;	// G=0x35b3b131; S=0x35b3b159; 
@property(readonly, assign, nonatomic) MPVideoView *movieView;	// G=0x35b3b185; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x35b3b9fd; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x35b3e47d; 
@property(assign, nonatomic) unsigned options;	// G=0x35b3ad39; S=0x35b3ad4d; 
@property(assign, nonatomic) unsigned playableContentType;	// G=0x35b3b49d; S=0x35b3b461; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x35b3b729; 
@property(readonly, assign, nonatomic) double playableEndTime;	// G=0x35b3b7a1; 
@property(readonly, assign, nonatomic) double playableStartTime;	// G=0x35b3b765; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x35b41ce9; S=0x35b3e211; @synthesize=_playbackErrorDescription
@property(readonly, assign, nonatomic) float playbackRate;	// G=0x35b3b639; 
@property(readonly, assign, nonatomic) unsigned playbackState;	// G=0x35b3b685; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x35b3eb09; S=0x35b3ea69; 
@property(readonly, assign, nonatomic) double seekableEndTime;	// G=0x35b3b819; 
@property(readonly, assign, nonatomic) double seekableStartTime;	// G=0x35b3b7dd; 
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x35b3b9d9; S=0x35b3b9b9; 
@property(assign, nonatomic) BOOL useLegacyControls;	// G=0x35b3efd1; S=0x35b3efe5; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x35b3f0fd; S=0x35b3f111; 
@property(readonly, assign, nonatomic) BOOL videoOutActive;	// G=0x35b3b345; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x35b3b1e9; 
@property(readonly, assign, nonatomic) float volume;	// G=0x35b3ba35; 
@property(copy, nonatomic) NSString *youTubeVideoID;	// G=0x35b41cf9; S=0x35b3eedd; @synthesize=_youTubeVideoID
+ (void)allInstancesResignActive;	// 0x35b3ef99
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size interfaceOrientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x35b3e2a1
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size orientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x35b41d09
+ (Class)preferredWindowClass;	// 0x35b41d7d
- (id)initWithPlayerSize:(CGSize)playerSize;	// 0x35b3a91d
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;	// 0x35b41d99
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;	// 0x35b41dd1
- (id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;	// 0x35b3a2c9
- (id)_activeVideoController;	// 0x35b3c0e5
- (void)_addSnapshotViewForTime:(double)time;	// 0x35b406e5
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;	// 0x35b41a0d
- (void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x35b41a99
- (id)_backgroundPlaceholderView;	// 0x35b41b49
- (void)_beginDeviceOrientationNotifications;	// 0x35b417ad
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x35b3fc01
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b41911
- (void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;	// 0x35b3c759
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x35b41519
- (unsigned)_convertedVisiblePartsMask:(unsigned)mask;	// 0x35b41589
- (void)_delayedShowPortraitLoading;	// 0x35b3d205
- (void)_deviceOrientationChanged:(id)changed;	// 0x35b4014d
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x35b410a5
- (void)_endDeviceOrientationNotifications;	// 0x35b4187d
- (void)_ensureActive;	// 0x35b4060d
- (void)_exitPlayer:(int)player;	// 0x35b415a5
- (int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;	// 0x35b4166d
- (void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x35b3c7e9
- (void)_hideLoadingForStateChange:(id)stateChange;	// 0x35b3d29d
- (void)_initializeVideoViewController:(id)controller orientation:(int)orientation;	// 0x35b3c2f5
- (void)_itemChangedNotification:(id)notification;	// 0x35b3fddd
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x35b40365
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x35b4041d
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x35b40229
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x35b40e39
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x35b40c01
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x35b3fd51
- (void)_mutedDidChangeNotification:(id)_muted;	// 0x35b4057d
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;	// 0x35b3d501
- (id)_parentViewControllerForController:(id)controller;	// 0x35b3c5f1
- (void)_pausePlaybackForNotification:(id)notification;	// 0x35b3f88d
- (void)_performTransition:(id)transition toController:(id)controller;	// 0x35b3d97d
- (void)_playbackStateChanged:(id)changed;	// 0x35b3ffe9
- (id)_portraitNavigationController:(BOOL)controller;	// 0x35b3c8f9
- (id)_portraitNavigationControllerTitleView;	// 0x35b3cf15
- (id)_portraitNavigationRootController:(BOOL)controller;	// 0x35b3cc65
- (void)_prepareAndSetupUI;	// 0x35b3e7e5
- (void)_prepareAndSetupUIForClient;	// 0x35b3e911
- (void)_prepareContainersForSwitchToActiveController:(id)activeController;	// 0x35b3c6b1
- (void)_preparePortraitViewControllerContainers;	// 0x35b3cbd1
- (void)_rateDidChangeNotification:(id)_rate;	// 0x35b401a1
- (void)_reconfigurePortraitNavigationBarNowIfNecessary;	// 0x35b3d38d
- (void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;	// 0x35b3cf79
- (void)_registerForNotifications;	// 0x35b41145
- (void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;	// 0x35b3da4d
- (void)_removeSnapshotView;	// 0x35b40ba9
- (void)_schedulePortraitLoadingIndicatorIfNeeded;	// 0x35b3d301
- (void)_serverDeathNotification:(id)notification;	// 0x35b3ffc5
- (void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x35b3bc3d
- (void)_setPortraitLoadingShowing:(BOOL)showing;	// 0x35b3d219
- (void)_setTVOutEnabled:(BOOL)enabled;	// 0x35b41bed
- (BOOL)_shouldIgnoreChangeType:(unsigned)type;	// 0x35b3d53d
- (void)_simpleRemoteNotification:(id)notification;	// 0x35b3f9a1
- (void)_tearDownContainersForSwitchFromViewController:(id)viewController;	// 0x35b3c705
- (void)_tearDownPortraitViewControllerContainers;	// 0x35b3cc29
- (void)_tickNotification:(id)notification;	// 0x35b404ed
- (void)_timeDidJumpNotification:(id)_time;	// 0x35b403d5
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x35b40465
- (id)_titlesForPortraitNavigationBarAtTime:(double)time;	// 0x35b3cc91
- (id)_titlesViewForNavigationItem:(id)navigationItem;	// 0x35b3ce5d
- (id)_topViewController;	// 0x35b3bb4d
- (void)_transitionFinished:(id)finished;	// 0x35b3d7d5
- (void)_tvOutCapabilityChanged:(id)changed;	// 0x35b400f9
- (void)_unregisterForNotifications;	// 0x35b4137d
- (void)_updateEnabledParts;	// 0x35b41681
- (void)_updateForStreamingOptions;	// 0x35b41b81
- (void)_updatePlayableContentTypeOverride;	// 0x35b41af9
- (void)_validityChangedNotification:(id)notification;	// 0x35b3ffd9
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x35b405c5
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x35b3d475
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x35b40535
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x35b3f981
- (void)_willEnterForegroundNotification:(id)notification;	// 0x35b410fd
- (void)_willResignNotification:(id)notification;	// 0x35b3f991
- (void)_willSuspendNotification:(id)notification;	// 0x35b3f971
// declared property getter: - (id)accessLog;	// 0x35b3ed8d
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x35b3f091
// declared property getter: - (BOOL)areClosedCaptionsAvailable;	// 0x35b3ba71
// declared property getter: - (unsigned)audioControlsStyle;	// 0x35b41c95
// converted property getter: - (unsigned)autoRotationMask;	// 0x35b3ddf1
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x35b3ea31
- (id)backgroundView;	// 0x35b3e9d5
- (void)beginExternalTransformation;	// 0x35b3eb29
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x35b3d485
- (void)beginTransition;	// 0x35b3d739
// declared property getter: - (unsigned)bufferingState;	// 0x35b3bb09
// declared property getter: - (BOOL)canContinuePlayingInBackground;	// 0x35b3ae0d
// declared property getter: - (BOOL)canContinuePlayingWhenLocked;	// 0x35b3ae31
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x35b3b41d
- (id)createTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;	// 0x35b3c0f5
- (id)createViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;	// 0x35b3c1e5
- (void)crossedChapterTimeMarker:(id)marker;	// 0x35b3d421
// declared property getter: - (id)currentDate;	// 0x35b3b901
// declared property getter: - (double)currentTime;	// 0x35b3b855
- (void)dealloc;	// 0x35b3a941
- (void)debugSetup;	// 0x35b3a299
- (void)delayedDebugSetup;	// 0x35b3a295
// declared property getter: - (id)delegate;	// 0x35b41ca5
// declared property getter: - (BOOL)disallowsVideoOut;	// 0x35b3ae81
// declared property getter: - (double)duration;	// 0x35b3b6c9
- (void)endExternalTransformation;	// 0x35b3eba9
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x35b3d565
- (void)endTransition;	// 0x35b3d789
// declared property getter: - (id)errorLog;	// 0x35b3ee35
// declared property getter: - (long long)fileSize;	// 0x35b3b279
// declared property getter: - (id)fullscreenView;	// 0x35b3ecf5
// converted property getter: - (int)interfaceOrientation;	// 0x35b3dc15
- (BOOL)isFullScreen;	// 0x35b41e45
// declared property getter: - (BOOL)isFullscreen;	// 0x35b3ec11
// declared property getter: - (BOOL)isPreparedForPlayback;	// 0x35b3b4f1
// declared property getter: - (id)item;	// 0x35b3aea5
- (void)layoutUIInRect:(CGRect)rect;	// 0x35b3e3e5
- (void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;	// 0x35b41e09
// declared property getter: - (id)moviePath;	// 0x35b3ae95
- (CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;	// 0x35b3e4e5
// declared property getter: - (id)movieSubtitle;	// 0x35b3b0dd
// declared property getter: - (id)movieTitle;	// 0x35b3b131
// declared property getter: - (id)movieView;	// 0x35b3b185
// declared property getter: - (BOOL)muted;	// 0x35b3b9fd
// declared property getter: - (CGSize)naturalSize;	// 0x35b3e47d
// declared property getter: - (unsigned)options;	// 0x35b3ad39
- (int)orientation;	// 0x35b41e6d
- (void)pause;	// 0x35b3b595
- (void)performTransition:(id)transition;	// 0x35b3d8dd
- (void)play;	// 0x35b3b555
// declared property getter: - (unsigned)playableContentType;	// 0x35b3b49d
// declared property getter: - (double)playableDuration;	// 0x35b3b729
// declared property getter: - (double)playableEndTime;	// 0x35b3b7a1
// declared property getter: - (double)playableStartTime;	// 0x35b3b765
// declared property getter: - (id)playbackErrorDescription;	// 0x35b41ce9
// declared property getter: - (float)playbackRate;	// 0x35b3b639
// declared property getter: - (unsigned)playbackState;	// 0x35b3b685
- (id)playerView;	// 0x35b41e5d
- (void)portraitDoneButtonAction:(id)action;	// 0x35b3c899
- (void)portraitScaleButtonAction:(id)action;	// 0x35b3c8cd
// declared property getter: - (id)posterImage;	// 0x35b3eb09
- (void)prepareAndSetupUI;	// 0x35b3e935
- (void)prepareForPlayback;	// 0x35b3b545
- (void)resignActive;	// 0x35b3f16d
- (BOOL)seekToDate:(id)date;	// 0x35b3b95d
// declared property getter: - (double)seekableEndTime;	// 0x35b3b819
// declared property getter: - (double)seekableStartTime;	// 0x35b3b7dd
- (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x35b3e149
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35b3e169
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x35b3f0a5
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x35b3b36d
// declared property setter: - (void)setAudioControlsStyle:(unsigned)style;	// 0x35b3e1b1
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x35b3b211
// converted property setter: - (void)setAutoRotationMask:(unsigned)mask;	// 0x35b3de01
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x35b3e9f5
- (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x35b3dfe1
- (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x35b3e025
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x35b3b441
- (void)setClosedCaptions:(id)captions;	// 0x35b3b3a1
- (void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;	// 0x35b3e09d
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x35b3b895
- (void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;	// 0x35b3b8b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35b41cb5
- (void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x35b3de6d
// declared property setter: - (void)setDisallowsVideoOut:(BOOL)anOut;	// 0x35b3b2d5
- (void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;	// 0x35b3dfad
- (void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x35b3dec1
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x35b3ec51
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x35b3ec65
- (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x35b3ed3d
- (BOOL)setInterfaceOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x35b3ddcd
// declared property setter: - (void)setItem:(id)item;	// 0x35b41cc5
- (void)setItem:(id)item animated:(BOOL)animated;	// 0x35b3aef5
- (void)setManagesStatusBar:(BOOL)bar;	// 0x35b3b2fd
// declared property setter: - (void)setMoviePath:(id)path;	// 0x35b3af05
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x35b3b105
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x35b3b159
// declared property setter: - (void)setOptions:(unsigned)options;	// 0x35b3ad4d
- (BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x35b3dc49
// declared property setter: - (void)setPlayableContentType:(unsigned)type;	// 0x35b3b461
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x35b3e211
// declared property setter: - (void)setPosterImage:(id)image;	// 0x35b3ea69
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x35b3b9b9
- (BOOL)setUIOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x35b41ec5
// declared property setter: - (void)setUseLegacyControls:(BOOL)controls;	// 0x35b3efe5
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x35b3f111
// declared property setter: - (void)setYouTubeVideoID:(id)anId;	// 0x35b3eedd
- (BOOL)shouldDisplayTitles;	// 0x35b3cc8d
- (void)snapshotViewWasTapped:(id)tapped;	// 0x35b3f85d
- (void)stop;	// 0x35b3b5d5
// declared property getter: - (BOOL)stopAtEnd;	// 0x35b3b9d9
- (void)tearDownUI;	// 0x35b3e945
- (void)unlockMoviePlaybackResources;	// 0x35b3ad95
// declared property getter: - (BOOL)useLegacyControls;	// 0x35b3efd1
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;	// 0x35b3f249
- (void)videoControllerDidCreateFullscreenView:(id)videoController;	// 0x35b3f72d
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x35b3f471
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x35b3f58d
- (void)videoControllerDidHideOverlay:(id)videoController;	// 0x35b3f6e5
- (void)videoControllerDidShowOverlay:(id)videoController;	// 0x35b3f655
- (CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;	// 0x35b3f7dd
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x35b3f3b9
- (BOOL)videoControllerShouldShowPositionInQueueUI:(id)videoController;	// 0x35b3f425
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x35b3f429
- (void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;	// 0x35b3f4b9
- (void)videoControllerWillHideOverlay:(id)videoController;	// 0x35b3f69d
- (void)videoControllerWillShowOverlay:(id)videoController;	// 0x35b3f60d
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x35b3f0fd
// declared property getter: - (BOOL)videoOutActive;	// 0x35b3b345
// declared property getter: - (id)view;	// 0x35b3b1e9
- (void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;	// 0x35b3d8b5
- (void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;	// 0x35b3d8c9
- (void)viewControllerFailedToPlay:(id)play withError:(id)error;	// 0x35b3f365
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x35b3f215
// declared property getter: - (float)volume;	// 0x35b3ba35
// declared property getter: - (id)youTubeVideoID;	// 0x35b41cf9
@end
