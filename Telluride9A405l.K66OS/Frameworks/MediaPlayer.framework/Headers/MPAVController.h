/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "AVAudioSessionDelegateMediaPlayerOnly.h"
#import <NSObject.h> // Unknown library
#import "MPAVErrorResolverDelegate.h"

@class MPAVItem, NSTimer, NSString, MPAVControllerToAggregateDCommunicator, MPQueuePlayer, MPQueueFeeder, NSArray, MPVideoView, CALayer, MPAVErrorResolver, NSMutableArray, MPAVPlaylistManager, MPAVDestinationBrowser, MPAudioDeviceController, NSDictionary, NSNotification;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVErrorResolverDelegate> {
	MPAVPlaylistManager *_avPlaylistManager;	// 4 = 0x4
	double _connectionFailTime;	// 8 = 0x8
	BOOL _forceSynchronousQueueFilling;	// 16 = 0x10
	unsigned _valid : 1;	// 17 = 0x11
	int _playbackMode;	// 20 = 0x14
	MPAudioDeviceController *_audioDeviceController;	// 24 = 0x18
	MPQueueFeeder *_feeder;	// 28 = 0x1c
	MPAVErrorResolver *_itemErrorResolver;	// 32 = 0x20
	NSDictionary *_pickedRouteDescription;	// 36 = 0x24
	CALayer *_videoLayer;	// 40 = 0x28
	unsigned _videoLayerUsageCount;	// 44 = 0x2c
	MPVideoView *_videoView;	// 48 = 0x30
	unsigned _tickTimerEnabled;	// 52 = 0x34
	CFRunLoopTimerRef _tickTimer;	// 56 = 0x38
	double _tickInterval;	// 60 = 0x3c
	CFRunLoopTimerRef _currentItemBookkeepingTimer;	// 68 = 0x44
	int _indexChangeDirection;	// 72 = 0x48
	unsigned _itemIndexAtDeath;	// 76 = 0x4c
	int _lastDisconnectReason;	// 80 = 0x50
	double _lastKnownTimeBeforeDeath;	// 84 = 0x54
	double _lastPlaybackIndexChangeTime;	// 92 = 0x5c
	double _lastSetTime;	// 100 = 0x64
	double _lastSetTimeChangeTime;	// 108 = 0x6c
	unsigned _hasDelayedCurrentTimeToSet : 1;	// 116 = 0x74
	unsigned _forceDelayedCurrentTimeToSet : 1;	// 116 = 0x74
	double _delayedCurrentTimeToSet;	// 120 = 0x78
	int _delayedCurrentTimeOptions;	// 128 = 0x80
	unsigned _lastSetTimeMarker;	// 132 = 0x84
	unsigned _autoPlayWhenLikelyToKeepUp : 1;	// 136 = 0x88
	unsigned _autoplayDisabledForCurrentItem : 1;	// 136 = 0x88
	unsigned _closedCaptioningEnabled : 1;	// 136 = 0x88
	int _eqPreset;	// 140 = 0x8c
	double _nextFadeOutDuration;	// 144 = 0x90
	id _boundaryTimeObserver;	// 152 = 0x98
	NSArray *_boundaryTimes;	// 156 = 0x9c
	unsigned _boundaryTimeIndexLastPosted;	// 160 = 0xa0
	float _rateBeforeSeek;	// 164 = 0xa4
	float _inflightSeekRate;	// 168 = 0xa8
	unsigned _scanLevel;	// 172 = 0xac
	int _scanDirection;	// 176 = 0xb0
	int _resetRateAfterSeekingUpdateDisabled;	// 180 = 0xb4
	unsigned _seeklessState;	// 184 = 0xb8
	unsigned _isSeekingOrScrubbing : 1;	// 188 = 0xbc
	unsigned _resetRateAfterSeeking : 1;	// 188 = 0xbc
	unsigned _activeRewindHoldingAtStart : 1;	// 188 = 0xbc
	double _lastSeekableEnd;	// 192 = 0xc0
	double _whenSawSeekableEnd;	// 200 = 0xc8
	double _maxSeekableFwd;	// 208 = 0xd0
	double _seekFwdSlop;	// 216 = 0xd8
	double _lastSeekableStart;	// 224 = 0xe0
	double _whenSawSeekableStart;	// 232 = 0xe8
	double _maxSeekableRev;	// 240 = 0xf0
	double _seekRevSlop;	// 248 = 0xf8
	unsigned _canSeekRev : 1;	// 256 = 0x100
	unsigned _canSeekFwd : 1;	// 256 = 0x100
	unsigned _alwaysPlayWheneverPossible : 1;	// 256 = 0x100
	unsigned _stopAtEnd : 1;	// 256 = 0x100
	unsigned _didReachEnd : 1;	// 256 = 0x100
	unsigned _pausedDuringInterruption : 1;	// 256 = 0x100
	unsigned _useApplicationAudioSession : 1;	// 256 = 0x100
	unsigned _subtitlesEnabled : 1;	// 256 = 0x100
	unsigned _videoFrameDisplayOnResumeDisabled : 1;	// 257 = 0x101
	unsigned _disconnectedVideoLayerOnSuspend : 1;	// 257 = 0x101
	unsigned _playInBackgroundUserDefaultEnabled : 1;	// 257 = 0x101
	unsigned _state;	// 260 = 0x104
	unsigned _displayOverridePlaybackState;	// 264 = 0x108
	unsigned _bufferingState;	// 268 = 0x10c
	NSNotification *_delayedPlaybackStateNotification;	// 272 = 0x110
	dispatch_source_s *_stallTimerSource;	// 276 = 0x114
	NSMutableArray *_queueFeederStateStack;	// 280 = 0x118
	int _feederMode;	// 284 = 0x11c
	MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;	// 288 = 0x120
	double _itemInitialBookmarkTime;	// 292 = 0x124
	float _rateBeforeResignActive;	// 300 = 0x12c
	int _ubiquitousBookkeepingDisabledCount;	// 304 = 0x130
	double _secondsSinceUbiquitousCheckpoint;	// 308 = 0x134
	NSTimer *_externalProtectionTimer;	// 316 = 0x13c
	BOOL _logContentProtection;	// 320 = 0x140
	BOOL _shouldEnforceHDCP;	// 321 = 0x141
@private
	MPAVDestinationBrowser *_destinationBrowser;	// 324 = 0x144
}
@property(assign, nonatomic) int EQPreset;	// G=0x33bc9ea5; S=0x33bc128d; @synthesize=_eqPreset
@property(readonly, assign, nonatomic) unsigned activeRepeatType;	// G=0x33bc0dc1; 
@property(readonly, assign, nonatomic) unsigned activeShuffleType;	// G=0x33bc0dfd; 
@property(assign, nonatomic) BOOL allowsAirPlayVideo;	// G=0x33bc0e39; S=0x33bc0e6d; 
@property(assign, nonatomic) BOOL alwaysPlayWheneverPossible;	// G=0x33bc10dd; S=0x33bc10f1; 
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x33bc1711; @synthesize=_audioDeviceController
@property(assign, nonatomic) BOOL autoPlayWhenLikelyToKeepUp;	// G=0x33bc0ea9; S=0x33bc0a91; 
@property(readonly, assign, nonatomic) MPQueuePlayer *avPlayer;	// G=0x33bc1ab1; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x33bc0ebd; @synthesize=_bufferingState
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x33bc0ecd; S=0x33bc1225; 
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x33bc0ee1; 
@property(readonly, assign, nonatomic) BOOL currentItemIsRental;	// G=0x33bc1b79; 
@property(readonly, assign, nonatomic) double currentMonotonousTime;	// G=0x33bc0441; 
@property(assign, nonatomic) double currentTime;	// G=0x33bc034d; S=0x33bc0ac5; 
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *destinationBrowser;	// G=0x33bc9e95; @synthesize=_destinationBrowser
@property(assign, nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;	// G=0x33bc22ed; S=0x33bc2315; 
@property(assign, nonatomic) BOOL disableAirPlayMirroringDuringPlayback;	// G=0x33bc11b5; S=0x33bc11e9; 
@property(readonly, assign, nonatomic) double durationOfCurrentItemIfAvailable;	// G=0x33bc2a25; 
@property(readonly, assign, nonatomic) MPQueueFeeder *feeder;	// G=0x33bc9eb5; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x33bc9ec5; S=0x33bc9ed5; @synthesize=_feederMode
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x33bc9ee5; S=0x33bc21fd; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic, getter=isFullScreenVideoMode) BOOL fullScreenVideoMode;	// G=0x33bc1611; 
@property(readonly, assign, nonatomic) BOOL hasVolumeControl;	// G=0x33bc1545; 
@property(readonly, assign, nonatomic) BOOL isAirPlayVideoActive;	// G=0x33bc0ffd; 
@property(readonly, assign, nonatomic) BOOL isCurrentItemReady;	// G=0x33bc18bd; 
@property(readonly, assign, nonatomic) BOOL isInExtendedMode;	// G=0x33bc2a21; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x33bc15ed; 
@property(assign, nonatomic) double nextFadeOutDuration;	// G=0x33bc9ef5; S=0x33bc12cd; @synthesize=_nextFadeOutDuration
@property(readonly, assign, nonatomic) unsigned numberOfItems;	// G=0x33bc1109; 
@property(readonly, assign, nonatomic) double playableDurationOfCurrentItemIfAvailable;	// G=0x33bc2a4d; 
@property(assign, nonatomic) int playbackMode;	// G=0x33bc16a9; S=0x33bc1639; 
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x33bc1035; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x33bc1189; S=0x33bc13d1; 
@property(readonly, assign, nonatomic, getter=isRewindHoldingAtStart) BOOL rewindHoldingAtStart;	// G=0x33bc0339; 
@property(readonly, assign, nonatomic) NSString *routeNameForVolumeControl;	// G=0x33bc15f1; 
@property(assign, nonatomic) BOOL shouldEnforceHDCP;	// G=0x33bc9f0d; S=0x33bc9f1d; @synthesize=_shouldEnforceHDCP
@property(assign, nonatomic) unsigned shuffleType;	// G=0x33bc1501; S=0x33bc1461; 
@property(readonly, assign, nonatomic, getter=isShuffled) BOOL shuffled;	// G=0x33bc1089; 
@property(assign, nonatomic) unsigned state;	// G=0x33bc9f2d; S=0x33bc29ad; @synthesize=_state
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x33bc16b9; S=0x33bc16cd; 
@property(assign, nonatomic) BOOL subtitlesEnabled;	// G=0x33bc1531; S=0x33bc14b9; 
@property(assign, nonatomic) BOOL ubiquitousBookkeepingEnabled;	// G=0x33bc3fd9; S=0x33bc3fb5; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x33bc1739; S=0x33bc174d; 
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x33bc10c9; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x33bc29bd; S=0x33bc29d1; 
@property(readonly, assign, nonatomic) CALayer *videoLayer;	// G=0x33bc2341; @synthesize=_videoLayer
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x33bc23e9; 
@property(assign, nonatomic) float volume;	// G=0x33bc1599; S=0x33bc15c1; 
+ (id)_controllerKeysToObserve;	// 0x33bc631d
+ (id)_itemKeysToObserve;	// 0x33bc6395
+ (id)_playerKeysToObserve;	// 0x33bc6459
+ (void)initialize;	// 0x33bbf0d5
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x33bc0d09
+ (BOOL)outputSupportsAC3;	// 0x33bc17ed
+ (id)sharedInstance;	// 0x33bbf111
- (id)init;	// 0x33bbf1c9
// declared property getter: - (int)EQPreset;	// 0x33bc9ea5
- (void)_applicationDidBecomeActive:(id)_application;	// 0x33bc52d1
- (void)_applicationDidFinishSuspensionSnapshot:(id)_application;	// 0x33bc5629
- (void)_applicationSuspended:(id)suspended;	// 0x33bc55bd
- (void)_applicationSuspendedEventsOnly:(id)only;	// 0x33bc5499
- (void)_applicationWillResignActive:(id)_application;	// 0x33bc5101
- (void)_attemptAutoPlay;	// 0x33bc82f5
- (id)_avPlaylistManager;	// 0x33bc64ed
- (BOOL)_canPlayItem:(id)item;	// 0x33bc9c21
- (void)_cancelStallTimer;	// 0x33bc656d
- (void)_cancelUpdateCurrentItemBookkeepingTimer;	// 0x33bc8bc5
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)by;	// 0x33bc659d
- (void)_checkForBoundaryTimeCrossing;	// 0x33bc7919
- (void)_clearResetRateAfterSeeking;	// 0x33bc8c35
- (void)_clearSeekingIntervalsForStreaming;	// 0x33bc9919
- (void)_clearVideoLayer;	// 0x33bc6859
- (void)_closedCaptioningStatusDidChangeNotification:(id)_closedCaptioningStatus;	// 0x33bc56e5
- (void)_configureAVPlaylistManager:(id)manager;	// 0x33bc68f1
- (void)_configureUpdateCurrentItemBookkeepingTimer;	// 0x33bc8bf5
- (BOOL)_connectAVPlaylistManager;	// 0x33bc6c29
- (unsigned)_currentIndexInBoundaryCMTimes:(id)boundaryCMTimes;	// 0x33bc7855
- (void)_delayedPlaybackIndexChange;	// 0x33bc57e1
- (void)_delayedPostPlaybackStateChangedNotification;	// 0x33bc8755
- (void)_delayedSetCurrentTime;	// 0x33bc9655
- (void)_delayedUpdateScanningRate;	// 0x33bc5831
- (void)_delayedUpdateTimeMarker;	// 0x33bc5855
- (void)_disconnectAVPlaylistManagerWithReason:(int)reason;	// 0x33bc4459
- (unsigned)_displayPlaybackState;	// 0x33bc8a85
- (void)_endSeekAndChangeRate:(BOOL)rate;	// 0x33bc6e35
- (id)_extractImageFromMetadata:(id)metadata;	// 0x33bc9989
- (void)_firstVideoFrameDisplayed:(id)displayed;	// 0x33bc316d
- (void)_isAirPlayVideoActiveDidChange:(id)_isAirPlayVideoActive;	// 0x33bc31b5
- (void)_itemAssetIsLoadedNotification:(id)notification;	// 0x33bc323d
- (void)_itemDidChange:(id)_item;	// 0x33bc3319
- (void)_itemFailedToPlayToEnd:(id)end;	// 0x33bc3605
- (void)_itemFailedToPlayToEndNotification:(id)endNotification;	// 0x33bc35d5
- (BOOL)_itemIsRestricted:(id)restricted;	// 0x33bc9bd1
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x33bc36ed
- (void)_itemReadyToPlay:(id)play;	// 0x33bc39e1
- (void)_itemTimeMarkersAvailableNotification:(id)notification;	// 0x33bc32b1
- (void)_itemWillChange:(id)_item;	// 0x33bc3a89
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)_mediaLibraryDynamicProperties;	// 0x33bc57d1
- (void)_pauseBookkeepingTimer;	// 0x33bc8b55
- (void)_pauseTickTimer;	// 0x33bc9a89
- (void)_playbackFailedWithError:(id)error canResolve:(BOOL)resolve;	// 0x33bc9af9
- (unsigned)_playbackIndexForDelta:(int)delta fromIndex:(unsigned)index ignoreElapsedTime:(BOOL)time;	// 0x33bc7051
- (void)_playerFailedToQueueNotification:(id)queueNotification;	// 0x33bc3589
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)item;	// 0x33bc30ad
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)_postMPAVControllerSize;	// 0x33bc2fed
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)originalState newState:(unsigned)state delayable:(BOOL)delayable;	// 0x33bc87bd
- (void)_prepareToPlayItem:(id)playItem;	// 0x33bc7149
- (void)_protectionStatusTimerCallback:(id)callback;	// 0x33bc5aa5
- (void)_rateDidChange:(id)_rate;	// 0x33bc4139
- (void)_registerForAVItemNotifications:(id)avitemNotifications;	// 0x33bc7bc1
- (void)_registerForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x33bc7df5
- (void)_reloadTimeMarkerObservationsForItem:(id)item;	// 0x33bc7a21
- (void)_resetInternalState;	// 0x33bc8039
- (void)_resetQueue:(BOOL)queue videoLayer:(id)layer;	// 0x33bc80f1
- (void)_resumeBookkeepingTimer;	// 0x33bc8b91
- (void)_resumeTickTimer;	// 0x33bc9ac5
- (void)_scheduleExternalProtectionTimerIfNecessary;	// 0x33bc5e45
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;	// 0x33bc8ab5
- (unsigned)_seeklessStateForState:(unsigned)state;	// 0x33bc0f4d
- (void)_serverConnectionDidDie:(id)_serverConnection;	// 0x33bc46b9
- (void)_setAVControllerQueueFeeder:(id)feeder startQueueIndex:(unsigned)index;	// 0x33bbfe25
- (void)_setActionAtEndAttributeForState:(unsigned)state;	// 0x33bc86c5
- (void)_setBufferingState:(unsigned)state;	// 0x33bc8431
- (void)_setFeeder:(id)feeder;	// 0x33bc1bc1
- (void)_setItemErrorResolver:(id)resolver;	// 0x33bc8c5d
- (void)_setState:(unsigned)state;	// 0x33bc8ced
- (void)_setValid:(BOOL)valid;	// 0x33bc8f6d
- (void)_setVideoLayerOnAVController:(id)controller force:(BOOL)force;	// 0x33bc8f49
- (void)_setVideoLayerOnAVController:(id)controller force:(BOOL)force pauseIfNecessary:(BOOL)necessary;	// 0x33bc8e39
- (BOOL)_showsPlayingWhenInState:(unsigned)state;	// 0x33bc0f01
- (void)_sizeDidChange:(id)_size;	// 0x33bc483d
- (void)_stopExternalProtectionTimer;	// 0x33bc62b9
- (void)_streamBufferFull:(id)full;	// 0x33bc486d
- (void)_streamLikelyToKeepUp:(id)keepUp;	// 0x33bc4891
- (void)_streamRanDry:(id)dry;	// 0x33bc48b5
- (void)_streamUnlikelyToKeepUp:(id)keepUp;	// 0x33bc48d9
- (void)_switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play configureFeederBlock:(id)block;	// 0x33bc1cd1
- (void)_timeHasJumpedNotification:(id)notification;	// 0x33bc48fd
- (void)_timedMetadataAvailable:(id)available;	// 0x33bc4a75
- (void)_tracksDidChange:(id)_tracks;	// 0x33bc4c35
- (void)_unregisterForAVItemNotifications:(id)avitemNotifications;	// 0x33bc9049
- (void)_unregisterForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x33bc91f5
- (void)_updateCurrentItemBookkeeping;	// 0x33bc3ff1
- (void)_updateCurrentItemBookkeepingForTimerCallback;	// 0x33bc40ad
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;	// 0x33bc5709
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)queueFeeder withItemIndex:(int)itemIndex;	// 0x33bbfccd
- (void)_updateProgress:(CFRunLoopTimerRef)progress;	// 0x33bc9411
- (void)_updateScanningRate;	// 0x33bc9559
- (void)_updateSeekingIntervalsForStreaming;	// 0x33bc96ad
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x33bc4c9d
// declared property getter: - (unsigned)activeRepeatType;	// 0x33bc0dc1
// declared property getter: - (unsigned)activeShuffleType;	// 0x33bc0dfd
- (void)airPlayVideoEnded;	// 0x33bc4ce5
// declared property getter: - (BOOL)allowsAirPlayVideo;	// 0x33bc0e39
// declared property getter: - (BOOL)alwaysPlayWheneverPossible;	// 0x33bc10dd
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)application;	// 0x33bc192d
- (void)applicationWillTerminate;	// 0x33bc1979
- (void)applyRepeatSettings;	// 0x33bc19a9
- (void)applyShuffleSettings;	// 0x33bc1a61
// declared property getter: - (id)audioDeviceController;	// 0x33bc1711
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x33bc2de9
// declared property getter: - (BOOL)autoPlayWhenLikelyToKeepUp;	// 0x33bc0ea9
- (void)autoclearDisplayOverride;	// 0x33bc8971
// declared property getter: - (id)avPlayer;	// 0x33bc1ab1
- (void)beginInterruption;	// 0x33bc3e1d
- (void)beginSeek:(int)seek;	// 0x33bbf9f5
- (void)beginTickTimerWithInterval:(double)interval;	// 0x33bc0b89
- (void)beginUsingVideoLayer;	// 0x33bc1b35
// declared property getter: - (unsigned)bufferingState;	// 0x33bc0ebd
- (BOOL)canSeekBackwards;	// 0x33bc2cc9
- (BOOL)canSeekForwards;	// 0x33bc2cf5
- (void)changePlaybackIndexBy:(int)by;	// 0x33bbff61
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type;	// 0x33bbff81
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time;	// 0x33bbffa5
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x33bc0ecd
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x33bc1b09
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x33bc1ad9
// declared property getter: - (id)currentItem;	// 0x33bc0ee1
// declared property getter: - (BOOL)currentItemIsRental;	// 0x33bc1b79
// declared property getter: - (double)currentMonotonousTime;	// 0x33bc0441
// declared property getter: - (double)currentTime;	// 0x33bc034d
- (void)dealloc;	// 0x33bbf52d
// declared property getter: - (id)destinationBrowser;	// 0x33bc9e95
// declared property getter: - (BOOL)destinationIsTVOut;	// 0x33bc22ed
// declared property getter: - (BOOL)disableAirPlayMirroringDuringPlayback;	// 0x33bc11b5
- (void)disableAutoplayForCurrentItem;	// 0x33bc18fd
// declared property getter: - (double)durationOfCurrentItemIfAvailable;	// 0x33bc2a25
- (id)embeddedDataTimesForItem:(id)item;	// 0x33bc7201
- (void)enableAutoplayForCurrentItem;	// 0x33bc1915
- (void)endInterruptionFromInterruptor:(id)interruptor category:(id)category flags:(unsigned)flags;	// 0x33bc3e51
- (void)endPlayback;	// 0x33bc04d9
- (void)endSeek;	// 0x33bc02c1
- (void)endTickTimer;	// 0x33bc0ca9
- (void)endUsingVideoLayer;	// 0x33bc1b7d
- (void)ensureFeederIsClass:(Class)aClass;	// 0x33bc26d9
- (void)ensureFeederIsSubclass:(Class)subclass;	// 0x33bc276d
- (void)ensureHasAVPlaylistManager;	// 0x33bc1bb1
- (void)errorResolver:(id)resolver didResolveError:(id)error withResolution:(int)resolution;	// 0x33bc2ecd
- (BOOL)fadeOutForQuit;	// 0x33bc02d5
// declared property getter: - (id)feeder;	// 0x33bc9eb5
- (void)feederChangedContents:(id)contents;	// 0x33bc1e79
// declared property getter: - (int)feederMode;	// 0x33bc9ec5
- (void)finalizeBookkeepingNow;	// 0x33bc28c5
- (BOOL)forceRestartPlaybackIfNecessary;	// 0x33bc0b29
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x33bc9ee5
// declared property getter: - (BOOL)hasVolumeControl;	// 0x33bc1545
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x33bc0ffd
// declared property getter: - (BOOL)isCurrentItemReady;	// 0x33bc18bd
// declared property getter: - (BOOL)isFullScreenVideoMode;	// 0x33bc1611
// declared property getter: - (BOOL)isInExtendedMode;	// 0x33bc2a21
- (BOOL)isLiveStreaming;	// 0x33bc2c85
// declared property getter: - (BOOL)isPlaying;	// 0x33bc1035
// declared property getter: - (BOOL)isRewindHoldingAtStart;	// 0x33bc0339
- (BOOL)isSeekingOrScrubbing;	// 0x33bc0325
// declared property getter: - (BOOL)isShuffled;	// 0x33bc1089
- (BOOL)isTickTimerEnabled;	// 0x33bc0cf1
// declared property getter: - (BOOL)isValid;	// 0x33bc10c9
// declared property getter: - (BOOL)muted;	// 0x33bc15ed
// declared property getter: - (double)nextFadeOutDuration;	// 0x33bc9ef5
// declared property getter: - (unsigned)numberOfItems;	// 0x33bc1109
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33bc4cf5
- (void)pause;	// 0x33bc0609
- (void)pauseWithFadeout:(float)fadeout;	// 0x33bc0555
- (void)play;	// 0x33bc0751
- (void)playChapterTimeMarkerAtIndex:(unsigned)index;	// 0x33bc09f1
- (void)playItemAtIndex:(unsigned)index;	// 0x33bc0945
- (void)playItemAtIndex:(unsigned)index forceRestart:(BOOL)restart;	// 0x33bc0959
// declared property getter: - (double)playableDurationOfCurrentItemIfAvailable;	// 0x33bc2a4d
// declared property getter: - (int)playbackMode;	// 0x33bc16a9
- (float)rate;	// 0x33bc1131
- (void)reloadFeederWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x33bc1ebd
// declared property getter: - (unsigned)repeatType;	// 0x33bc1189
- (void)restorePreviousFeederState;	// 0x33bc25f9
// declared property getter: - (id)routeNameForVolumeControl;	// 0x33bc15f1
- (void)saveCurrentFeederState;	// 0x33bc2451
// declared property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x33bc0e6d
// declared property setter: - (void)setAlwaysPlayWheneverPossible:(BOOL)possible;	// 0x33bc10f1
// declared property setter: - (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x33bc0a91
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned)state;	// 0x33bc8985
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x33bc1225
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x33bc0ac5
- (void)setCurrentTime:(double)time options:(int)options;	// 0x33bc1f15
// declared property setter: - (void)setDestinationIsTVOut:(BOOL)anOut;	// 0x33bc2315
// declared property setter: - (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)playback;	// 0x33bc11e9
- (void)setDisplayOverridePlaybackState:(unsigned)state;	// 0x33bc89c9
// declared property setter: - (void)setEQPreset:(int)preset;	// 0x33bc128d
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x33bc9ed5
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x33bc21fd
// declared property setter: - (void)setNextFadeOutDuration:(double)duration;	// 0x33bc12cd
- (void)setPlaybackIndex:(int)index;	// 0x33bbff1d
- (void)setPlaybackIndex:(int)index selectionDirection:(int)direction;	// 0x33bbfe85
// declared property setter: - (void)setPlaybackMode:(int)mode;	// 0x33bc1639
- (BOOL)setRate:(float)rate;	// 0x33bc1329
- (void)setRateForScanning:(float)scanning;	// 0x33bc94f5
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x33bc13d1
// declared property setter: - (void)setShouldEnforceHDCP:(BOOL)enforceHDCP;	// 0x33bc9f1d
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x33bc1461
// declared property setter: - (void)setState:(unsigned)state;	// 0x33bc29ad
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x33bc16cd
// declared property setter: - (void)setSubtitlesEnabled:(BOOL)enabled;	// 0x33bc14b9
// declared property setter: - (void)setUbiquitousBookkeepingEnabled:(BOOL)enabled;	// 0x33bc3fb5
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x33bc174d
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x33bc29d1
// declared property setter: - (void)setVolume:(float)volume;	// 0x33bc15c1
- (BOOL)shouldDisplayAsPlaying;	// 0x33bc1059
// declared property getter: - (BOOL)shouldEnforceHDCP;	// 0x33bc9f0d
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned)state;	// 0x33bc29f5
// declared property getter: - (unsigned)shuffleType;	// 0x33bc1501
- (void)skipToSeekableEnd;	// 0x33bc2dad
- (void)skipToSeekableStart;	// 0x33bc2d41
// declared property getter: - (unsigned)state;	// 0x33bc9f2d
// declared property getter: - (BOOL)stopAtEnd;	// 0x33bc16b9
// declared property getter: - (BOOL)subtitlesEnabled;	// 0x33bc1531
- (void)switchToAudioPlayback:(BOOL)audioPlayback forItem:(id)item;	// 0x33bc223d
- (void)switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play;	// 0x33bc1e4d
- (void)switchToVideoPlayback:(BOOL)videoPlayback forItem:(id)item;	// 0x33bc2275
- (double)timeOfPlayableEnd;	// 0x33bc2b3d
- (double)timeOfPlayableStart;	// 0x33bc2a75
- (double)timeOfSeekableEnd;	// 0x33bc2c5d
- (double)timeOfSeekableStart;	// 0x33bc2c35
- (void)togglePlayback;	// 0x33bc0ae9
// declared property getter: - (BOOL)ubiquitousBookkeepingEnabled;	// 0x33bc3fd9
- (void)updateBookkeepingNow;	// 0x33bc2809
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x33bc1739
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x33bc29bd
// declared property getter: - (id)videoLayer;	// 0x33bc2341
// declared property getter: - (id)videoView;	// 0x33bc23e9
// declared property getter: - (float)volume;	// 0x33bc1599
@end

