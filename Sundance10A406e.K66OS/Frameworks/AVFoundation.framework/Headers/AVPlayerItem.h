/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSArray, AVPlayerItemInternal, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {
	AVPlayerItemInternal *_playerItem;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x302c9709; S=0x302c97bd; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x302c9871; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x302c9985; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x302c9b3d; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x302c9a29; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x302c9a99; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x302c98e1; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x302c4bb9; S=0x302c4d65; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x302c9429; 
@property(retain) id audioMix;	// G=0x302c5ac5; S=0x302c5d19; converted property
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x302c940d; 
@property(assign) double bufferingTargetMaximum;	// G=0x302c47d1; S=0x302c4965; converted property
@property(assign) double bufferingTargetMinimum;	// G=0x302c4989; S=0x302c4b1d; converted property
@property(readonly, assign, nonatomic) BOOL canDisplayExternalSubtitles;	// G=0x302ca76d; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x302c9481; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x302c5841; S=0x302c59ed; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x302c5529; S=0x302c56d5; converted property
@property(copy, nonatomic) NSString *dataYouTubeID;	// G=0x302ca729; S=0x302ca691; 
@property(assign, nonatomic) BOOL displaysExternalSubtitles;	// G=0x302ca885; S=0x302ca801; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x302c13fd; 
@property(assign) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x302c3cb1; S=0x302c3e8d; converted property
@property(retain) id gaplessInfo;	// G=0x302c746d; S=0x302c7829; converted property
@property(retain) id initialDate;	// G=0x302c3969; S=0x302c39ad; converted property
@property(retain) id initialEstimatedDate;	// G=0x302c3a8d; S=0x302c3ad1; converted property
@property(assign) BOOL limitReadAhead;	// G=0x302c4539; S=0x302c46e1; converted property
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x302c8901; S=0x302c8921; converted property
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x302caff9; 
@property(assign) int playbackLikelyToKeepUpTrigger;	// G=0x302c4efd; S=0x302c50a5; converted property
@property(assign) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x302c40a9; S=0x302c4285; converted property
@property(assign) BOOL seekingWaitsForVideoCompositionRendering;	// G=0x302c63a5; S=0x302c6445; converted property
@property(assign) float soundCheckVolumeNormalization;	// G=0x302c7a11; S=0x302c7971; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x302c13dd; 
@property(retain) id textStyleRules;	// G=0x302c64d5; S=0x302c659d; converted property
@property(retain) id variableSpeedAudioProcessor;	// G=0x302c6729; S=0x302c681d; converted property
@property(retain) id videoComposition;	// G=0x302c5ddd; S=0x302c5e21; converted property
@property(assign) float volumeAdjustment;	// G=0x302c7b45; S=0x302c7aa5; converted property
@property(assign) BOOL willNeverSeekBackwardsHint;	// G=0x302c5211; S=0x302c53bd; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x302be77d
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x302be769
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x302c94d9
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x302c96a5
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x302c4e39
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x302c93ed
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x302c5dd9
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMaximum;	// 0x302c4969
+ (BOOL)automaticallyNotifiesObserversOfBufferingTargetMinimum;	// 0x302c4b21
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x302c5ac1
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x302c57a9
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x302c3fa5
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x302c78fd
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x302c47b5
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x302c9401
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x302c89ed
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x302c93f5
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x302c93f9
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x302c93f1
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUpTrigger;	// 0x302c5179
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x302c9405
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x302c439d
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x302c93fd
+ (BOOL)automaticallyNotifiesObserversOfSeekingWaitsForVideoCompositionRendering;	// 0x302c64d1
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x302c7a31
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x302c93e9
+ (BOOL)automaticallyNotifiesObserversOfTextStyleRules;	// 0x302c665d
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x302c9409
+ (BOOL)automaticallyNotifiesObserversOfVariableSpeedAudioProcessor;	// 0x302c6985
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x302c60b9
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x302c7b65
+ (BOOL)automaticallyNotifiesObserversOfWillNeverSeekBackwardsHint;	// 0x302c5491
+ (void)initialize;	// 0x302be701
+ (id)playerItemWithAsset:(id)asset;	// 0x302be7d9
+ (id)playerItemWithURL:(id)url;	// 0x302be791
- (id)init;	// 0x302beac5
- (id)initWithAsset:(id)asset;	// 0x302becd5
- (id)initWithURL:(id)url;	// 0x302bec19
- (int)_CreateSeekID;	// 0x302c2fbd
- (id)_URL;	// 0x302c0fa1
- (void)_addFPListeners;	// 0x302c1e65
- (void)_addSyncLayer:(id)layer;	// 0x302c8df5
- (BOOL)_alwaysMonitorsPlayability;	// 0x302c4b25
- (void)_applyAudioMix;	// 0x302c5b09
- (void)_applyInitialAudioMix;	// 0x302c5cc5
- (void)_applyMediaSelectionOptions;	// 0x302c804d
- (void)_applySeekingWaitsForVideoCompositionRendering;	// 0x302c63c5
- (void)_applyTextStyleRules;	// 0x302c6519
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;	// 0x302c7e25
- (void)_attachOutputs;	// 0x302cac0d
- (void)_attachToFigPlayer;	// 0x302c0635
- (void)_attachToPlayer:(id)player;	// 0x302c0541
- (long long)_availableFileSize;	// 0x302ca605
- (double)_bufferingTargetMaximum;	// 0x302c47b9
- (double)_bufferingTargetMinimum;	// 0x302c4971
- (void)_cacheMediaSelectionOption:(id)option forMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302c81f9
- (id)_cachedValueForKey:(id)key;	// 0x302bf8d9
- (BOOL)_canPlayFastForward;	// 0x302c25c5
- (BOOL)_canPlayFastReverse;	// 0x302c2719
- (BOOL)_canPlayReverse;	// 0x302c28c5
- (BOOL)_canPlaySlowForward;	// 0x302c29b9
- (BOOL)_canPlaySlowReverse;	// 0x302c2aad
- (BOOL)_canStepBackward;	// 0x302c2c99
- (BOOL)_canStepForward;	// 0x302c2ba1
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)handler;	// 0x302c3019
- (void)_changeStatusToFailedWithError:(id)error;	// 0x302c1441
- (void)_configurePlaybackItem;	// 0x302bfb91
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x302c57ad
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x302c5495
- (OpaqueCMTimebase *)_copyTimebase;	// 0x302c43a1
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x302c04a9
- (void)_createPlayerItemInternal;	// 0x302be821
- (void)_dequeueFromPlayer;	// 0x302c0e6d
- (void)_detachOutputs;	// 0x302cad0d
- (void)_didAccessKVOForKey:(id)key;	// 0x302bf931
- (XXStruct_pwHToB)_duration;	// 0x302c15c1
- (void)_enqueueWithPlayer:(id)player shouldAppendItem:(BOOL)item;	// 0x302c0dd5
- (void)_evaluateSuppression;	// 0x302c92c1
- (void)_evaluateVisualContexts;	// 0x302ca9d5
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x302c89f1
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x302bf899
- (long long)_fileSize;	// 0x302ca579
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x302c3bb1
- (id)_fpNotificationNames;	// 0x302c1bfd
- (BOOL)_hasEnabledVideoMedia;	// 0x302c90b1
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x302c1335
- (void)_insertAfterItem:(id)item;	// 0x302c0ed1
- (void)_invokeReadyForEnqueueingHandlers;	// 0x302c2299
- (BOOL)_isAFileBasedItemThatsReadyToPlay;	// 0x302c286d
- (BOOL)_isCurrentPlayerItem;	// 0x302c02fd
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x302c9709
// declared property getter: - (BOOL)_isRental;	// 0x302c9871
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x302c9a29
- (void)_kickAssetObserversIfAppropriate;	// 0x302c1299
- (BOOL)_limitReadAhead;	// 0x302c44a5
- (id)_loadedTimeRanges;	// 0x302c70ed
- (void)_makeNewAssetWithFigPlaybackItem;	// 0x302c1109
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x302c23b5
- (id)_nextItem;	// 0x302c0e91
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x302c904d
- (int)_playbackLikelyToKeepUpTrigger;	// 0x302c4e3d
- (id)_playbackProperties;	// 0x302c74b1
- (id)_player;	// 0x302c02d1
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x302c0e81
- (id)_playerConnection;	// 0x302c0431
- (CGSize)_presentationSize;	// 0x302c2d8d
- (id)_previousItem;	// 0x302c0eb1
- (id)_propertyStorage;	// 0x302bf8b9
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x302c4c95
- (void)_quietlySetBufferingTargetMaximum:(double)maximum;	// 0x302c48ad
- (void)_quietlySetBufferingTargetMinimum:(double)minimum;	// 0x302c4a65
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x302c591d
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x302c5605
- (void)_quietlySetEQPreset:(int)preset;	// 0x302ca4a9
- (void)_quietlySetFigTimePitchAlgorithm:(CFStringRef)algorithm;	// 0x302c67cd
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c3dc9
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x302c4615
- (void)_quietlySetPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x302c4fd9
- (void)_quietlySetPlaybackProperties:(id)properties;	// 0x302c7555
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c41c1
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x302c7901
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x302c7a35
- (void)_quietlySetWillNeverSeekBackwardsHint:(BOOL)_quietlySet;	// 0x302c52ed
- (void)_removeFPListeners;	// 0x302c2061
- (void)_removeFromItems;	// 0x302c0f39
- (void)_removeSyncLayer:(id)layer;	// 0x302c8be9
- (void)_renderingSuppressionDidChangeForOutput:(id)_renderingSuppression;	// 0x302c9399
// declared property getter: - (id)_rentalExpirationDate;	// 0x302c9985
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x302c9b3d
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x302c9a99
// declared property getter: - (id)_rentalStartDate;	// 0x302c98e1
- (void)_respondToBecomingReadyForBasicInspection;	// 0x302c21ad
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x302c3fa9
- (id)_seekableTimeRanges;	// 0x302c6d6d
- (void)_selectMediaOption:(id)option inAlternateTrackGroup:(id)alternateTrackGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302c84ed
- (void)_selectMediaOption:(id)option inKeyValueGroup:(id)keyValueGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302c8571
- (void)_selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup cacheIfAppropriate:(BOOL)appropriate;	// 0x302c85c1
- (void)_selectMediaOption:(id)option usingFigSelectedMediaArrayObtainedFromGroup:(id)group;	// 0x302c82cd
- (void)_selectTrackWithID:(int)anId amongTrackIDs:(id)ids;	// 0x302c7d35
- (void)_setAsset:(id)asset;	// 0x302c1001
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x302c11c1
- (void)_setAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x302c1059
- (void)_setAudibleDRMInfo:(id)info;	// 0x302ca409
- (void)_setEQPreset:(int)preset;	// 0x302ca519
- (void)_setEnabledState:(BOOL)state ofTrackID:(int)trackID;	// 0x302c7cc1
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x302c97bd
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x302c031d
- (void)_setPlayerConnection:(id)connection;	// 0x302c0451
- (void)_setRampInOutInfo:(id)outInfo;	// 0x302ca369
- (void)_setSyncLayersOnFigPlaybackItem:(id)item;	// 0x302c8b79
- (void)_setTimebaseOnOutputs:(OpaqueCMTimebase *)outputs;	// 0x302cab3d
- (void)_setTimedMetadata:(id)metadata;	// 0x302c8b09
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)figPlaybackItem;	// 0x302c10b1
- (void)_setURL:(id)url;	// 0x302c0fc1
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x302c60bd
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x302c6245
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x302c61c9
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x302c6159
- (void)_setVideoCompositor:(id)compositor;	// 0x302c6299
- (id)_stateDispatchQueue;	// 0x302bf879
- (BOOL)_suppressionForOutputs:(id)outputs;	// 0x302c91fd
- (id)_trackWithTrackID:(int)trackID;	// 0x302c1b15
- (id)_tracks;	// 0x302c17b9
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)seekID finished:(BOOL)finished;	// 0x302c31f1
- (void)_updateTimebase;	// 0x302c4419
- (id)_variableSpeedAudioProcessor;	// 0x302c6661
- (id)_weakReference;	// 0x302bf859
- (void)_willAccessKVOForKey:(id)key;	// 0x302bf905
- (BOOL)_willNeverSeekBackwardsHint;	// 0x302c517d
- (id)accessLog;	// 0x302c9be1
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x302bfa1d
- (void)addOutput:(id)output;	// 0x302caded
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x302c4bb9
- (id)asset;	// 0x302c157d
// converted property getter: - (id)audioMix;	// 0x302c5ac5
// converted property getter: - (double)bufferingTargetMaximum;	// 0x302c47d1
// converted property getter: - (double)bufferingTargetMinimum;	// 0x302c4989
// declared property getter: - (BOOL)canDisplayExternalSubtitles;	// 0x302ca76d
- (BOOL)canPlayFastForward;	// 0x302c263d
- (BOOL)canPlayFastReverse;	// 0x302c2791
- (BOOL)canPlayReverse;	// 0x302c28dd
- (BOOL)canPlaySlowForward;	// 0x302c29d1
- (BOOL)canPlaySlowReverse;	// 0x302c2ac5
- (BOOL)canStepBackward;	// 0x302c2cb1
- (BOOL)canStepForward;	// 0x302c2bbd
- (void)cancelPendingSeeks;	// 0x302c3831
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x302c5841
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x302c5529
- (id)copyWithZone:(NSZone *)zone;	// 0x302bf2dd
- (id)currentDate;	// 0x302c3845
- (id)currentEstimatedDate;	// 0x302c3a05
- (XXStruct_pwHToB)currentTime;	// 0x302c2f15
// declared property getter: - (id)dataYouTubeID;	// 0x302ca729
- (void)dealloc;	// 0x302bedbd
- (id)description;	// 0x302bf6ed
- (void)didChangeValueForKey:(id)key;	// 0x302bf9bd
- (void)displayExternalSubtitleString:(id)string forced:(BOOL)forced;	// 0x302ca8a5
// declared property getter: - (BOOL)displaysExternalSubtitles;	// 0x302ca885
- (XXStruct_pwHToB)duration;	// 0x302c1679
// declared property getter: - (id)error;	// 0x302c13fd
- (id)errorLog;	// 0x302c9ca9
- (void)finalize;	// 0x302bf179
// converted property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x302c3cb1
// converted property getter: - (id)gaplessInfo;	// 0x302c746d
// converted property getter: - (id)initialDate;	// 0x302c3969
// converted property getter: - (id)initialEstimatedDate;	// 0x302c3a8d
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x302c9429
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x302c940d
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x302c9481
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x302c8901
- (BOOL)isPlaybackBufferEmpty;	// 0x302c6b79
- (BOOL)isPlaybackBufferFull;	// 0x302c6a81
- (BOOL)isPlaybackLikelyToKeepUp;	// 0x302c6989
// converted property getter: - (BOOL)limitReadAhead;	// 0x302c4539
- (id)loadedTimeRanges;	// 0x302c73d5
// declared property getter: - (id)outputs;	// 0x302caff9
- (id)playabilityMetrics;	// 0x302c6ce9
// converted property getter: - (int)playbackLikelyToKeepUpTrigger;	// 0x302c4efd
- (CGSize)presentationSize;	// 0x302c2e19
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x302c6c71
- (void)removeOutput:(id)output;	// 0x302caf05
// converted property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x302c40a9
- (BOOL)seekToDate:(id)date;	// 0x302c3951
- (BOOL)seekToDate:(id)date completionHandler:(id)handler;	// 0x302c38cd
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x302c32a5
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x302c3361
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x302c32dd
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x302c33d9
- (id)seekableTimeRanges;	// 0x302c7055
// converted property getter: - (BOOL)seekingWaitsForVideoCompositionRendering;	// 0x302c63a5
- (void)selectMediaOption:(id)option inMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302c8685
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x302c7f4d
- (id)selectedMediaOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x302c86a9
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x302c7b69
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x302c4d65
// converted property setter: - (void)setAudioMix:(id)mix;	// 0x302c5d19
// converted property setter: - (void)setBufferingTargetMaximum:(double)maximum;	// 0x302c4965
// converted property setter: - (void)setBufferingTargetMinimum:(double)minimum;	// 0x302c4b1d
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x302c59ed
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x302c56d5
// declared property setter: - (void)setDataYouTubeID:(id)anId;	// 0x302ca691
// declared property setter: - (void)setDisplaysExternalSubtitles:(BOOL)subtitles;	// 0x302ca801
// converted property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c3e8d
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x302c7829
// converted property setter: - (void)setInitialDate:(id)date;	// 0x302c39ad
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x302c3ad1
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x302c46e1
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x302c8921
// converted property setter: - (void)setPlaybackLikelyToKeepUpTrigger:(int)keepUpTrigger;	// 0x302c50a5
// converted property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x302c4285
// converted property setter: - (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)videoCompositionRendering;	// 0x302c6445
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x302c7971
// converted property setter: - (void)setTextStyleRules:(id)rules;	// 0x302c659d
// converted property setter: - (void)setVariableSpeedAudioProcessor:(id)processor;	// 0x302c681d
// converted property setter: - (void)setVideoComposition:(id)composition;	// 0x302c5e21
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x302c7aa5
// converted property setter: - (void)setWillNeverSeekBackwardsHint:(BOOL)neverSeekBackwardsHint;	// 0x302c53bd
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x302c7a11
// declared property getter: - (int)status;	// 0x302c13dd
- (void)stepByCount:(int)count;	// 0x302c3b29
// converted property getter: - (id)textStyleRules;	// 0x302c64d5
- (OpaqueCMTimebase *)timebase;	// 0x302c43f9
- (id)timedMetadata;	// 0x302c8ac5
- (id)tracks;	// 0x302c1a5d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x302bf7d1
// converted property getter: - (id)variableSpeedAudioProcessor;	// 0x302c6729
// converted property getter: - (id)videoComposition;	// 0x302c5ddd
// converted property getter: - (float)volumeAdjustment;	// 0x302c7b45
- (void)willChangeValueForKey:(id)key;	// 0x302bf95d
// converted property getter: - (BOOL)willNeverSeekBackwardsHint;	// 0x302c5211
@end
