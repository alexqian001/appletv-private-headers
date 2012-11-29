/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSArray, AVPlayerInternal;

@interface AVPlayer : NSObject {
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x302c1045; S=0x302c1089; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x302c1169; 
@property(assign) int actionAtItemEnd;	// G=0x302bbe55; S=0x302bc18d; converted property
@property(assign) BOOL allowsAirPlayVideo;	// G=0x302bcde5; S=0x302bcdfd; converted property
@property(assign) BOOL allowsExternalPlayback;	// G=0x302bc5e5; S=0x302bc6c1; converted property
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x302c13e9; 
@property(assign, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x302bc299; S=0x302bc375; converted property
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x302c29bd; S=0x302c2a99; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x302b93b5; 
@property(retain) id externalPlaybackVideoGravity;	// G=0x302bdb45; S=0x302bdb89; converted property
@property(retain) id externalVideoGravity;	// G=0x302bdd75; S=0x302bdd85; converted property
@property(assign) OpaqueCMClock *masterClock;	// G=0x302bb9dd; S=0x302bb9fd; converted property
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x302c16fd; S=0x302c165d; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x302c15a9; S=0x302c1509; 
@property(assign) float rate;	// G=0x302bafc5; S=0x302bb0a1; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x302b9395; 
@property(assign) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x302bcfe1; S=0x302bcff9; converted property
@property(assign) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x302bc955; S=0x302bca31; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x302bc1a1
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;	// 0x302bcfdd
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;	// 0x302bce51
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;	// 0x302bc821
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x302bc489
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x302b9811
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;	// 0x302c2bad
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;	// 0x302bcda1
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;	// 0x302bbaed
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x302bb1e5
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x302bd04d
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;	// 0x302bcb91
+ (BOOL)automaticallyNotifiesObserversOfVolume;	// 0x302bbd29
+ (void)initialize;	// 0x302b8459
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x302bc1a5
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x302bc48d
+ (id)keyPathsForValuesAffectingRate;	// 0x302bb1e9
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x302b84f1
+ (id)playerWithURL:(id)url;	// 0x302b84a9
- (id)init;	// 0x302b85b1
- (id)initWithDispatchQueue:(id)dispatchQueue;	// 0x302b8b1d
- (id)initWithPlayerItem:(id)playerItem;	// 0x302b8539
- (id)initWithURL:(id)url;	// 0x302b8575
- (BOOL)_CALayerDestinationIsTVOut;	// 0x302c2675
- (int)_actionAtItemEnd;	// 0x302bbd31
- (void)_addFPListeners;	// 0x302bde9d
- (void)_addLayer:(id)layer;	// 0x302bd8f9
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem;	// 0x302b9815
- (BOOL)_airPlayVideoActive;	// 0x302bce55
- (BOOL)_allowsExternalPlayback;	// 0x302bc4b5
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// 0x302c17b1
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x302b9e49
- (void)_attachLayersToFigPlayer;	// 0x302bd581
- (id)_cachedValueForKey:(id)key;	// 0x302b9071
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)handler;	// 0x302bb629
- (void)_changeStatusToFailedWithError:(id)error;	// 0x302b93f9
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x302be421
- (id)_clientName;	// 0x302c2479
- (void)_coordinateWithRemovalOfItem:(id)item;	// 0x302bac11
- (int)_createPrerollID;	// 0x302bb5cd
- (id)_currentItem;	// 0x302b9521
- (void)_currentItemStatusIsReadyToPlay;	// 0x302b96f1
- (id)_currentSubtitlesPayload;	// 0x302be259
- (int)_defaultActionAtItemEnd;	// 0x302bbd2d
- (void)_detachLayersFromFigPlayer;	// 0x302bd665
- (void)_didAccessKVOForKey:(id)key;	// 0x302b90fd
- (void)_didFinishSuspension:(id)suspension;	// 0x302c200d
- (BOOL)_disallowsAMRAudio;	// 0x302c2911
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x302c1045
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x302badc9
- (BOOL)_externalPlaybackActive;	// 0x302bcb95
// declared property getter: - (int)_externalProtectionStatus;	// 0x302c1169
- (OpaqueFigPlayer *)_figPlayer;	// 0x302b9031
- (id)_fpNotificationNames;	// 0x302bdd95
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;	// 0x302c1959
- (BOOL)_iapdExtendedModeIsActive;	// 0x302c1a29
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x302b9e29
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x302b9d21
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x302bc1cd
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)background;	// 0x302c1a89
- (id)_items;	// 0x302bae29
- (void)_logPerformanceDataForCurrentItem;	// 0x302be5a1
- (void)_logPerformanceDataForPreviousItem;	// 0x302be485
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;	// 0x302c1215
- (id)_pixelBufferAttributeMediator;	// 0x302bd445
- (id)_playbackDisplaysForFigPlayer;	// 0x302c0f5d
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)_playerDestinationPixelBufferAttributes;	// 0x302b947d
- (id)_playerLayers;	// 0x302bd465
- (id)_propertyStorage;	// 0x302b9051
- (float)_rate;	// 0x302baf45
- (void)_removeAllItems;	// 0x302baef5
- (void)_removeAllLayers;	// 0x302bd355
- (void)_removeFPListeners;	// 0x302be095
- (BOOL)_removeItem:(id)item;	// 0x302bacf9
- (void)_removeLayer:(id)layer;	// 0x302bd6b1
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x302c27d1
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x302bbf41
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x302c25d1
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x302b909d
- (void)_setClientName:(id)name;	// 0x302c2531
- (void)_setCurrentItem:(id)item;	// 0x302b9579
- (void)_setCurrentSubtitlesPayload:(id)payload;	// 0x302be201
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x302c1089
- (void)_setEQPreset:(int)preset;	// 0x302c2341
- (void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItem *)makeCurrent;	// 0x302be1e1
- (void)_setNeroVideoGravityOnFigPlayer;	// 0x302bdc25
- (void)_setPreferredLanguageList:(id)list;	// 0x302c2731
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x302c23d9
- (void)_setVolume:(float)volume;	// 0x302bbc51
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x302c229d
- (BOOL)_shouldDetachContentLayersFromFigPlayer;	// 0x302c1ed5
- (BOOL)_shouldLogPerformanceData;	// 0x302be465
- (id)_stateDispatchQueue;	// 0x302b9011
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;	// 0x302bb7d5
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;	// 0x302bc825
- (float)_volume;	// 0x302bbaf1
- (id)_weakReference;	// 0x302b8fe1
- (void)_willAccessKVOForKey:(id)key;	// 0x302b90d1
- (void)_willEnterForeground:(id)foreground;	// 0x302c218d
// converted property getter: - (int)actionAtItemEnd;	// 0x302bbe55
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x302bd1a9
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x302b91e9
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(id)queue usingBlock:(id)block;	// 0x302bd0c9
// converted property getter: - (BOOL)allowsAirPlayVideo;	// 0x302bcde5
// converted property getter: - (BOOL)allowsExternalPlayback;	// 0x302bc5e5
- (void)cancelPendingPrerolls;	// 0x302bb8d9
- (id)currentItem;	// 0x302b9541
- (XXStruct_pwHToB)currentTime;	// 0x302bb211
- (void)dealloc;	// 0x302b8b89
- (void)didChangeValueForKey:(id)key;	// 0x302b9189
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x302c29bd
- (id)dispatchQueue;	// 0x302b9001
// declared property getter: - (id)error;	// 0x302b93b5
- (int)externalPlaybackType;	// 0x302bcda5
// converted property getter: - (id)externalPlaybackVideoGravity;	// 0x302bdb45
// converted property getter: - (id)externalVideoGravity;	// 0x302bdd75
- (void)finalize;	// 0x302b8e9d
- (BOOL)isAirPlayVideoActive;	// 0x302bcf01
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x302c13e9
// converted property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x302bc299
- (BOOL)isExternalPlaybackActive;	// 0x302bccc5
// converted property getter: - (OpaqueCMClock *)masterClock;	// 0x302bb9dd
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x302c16fd
// declared property getter: - (float)minRateForAudioPlayback;	// 0x302c15a9
- (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x302c1231
- (void)pause;	// 0x302bd065
- (void)play;	// 0x302bd051
- (id)playerAVAudioSession;	// 0x302c28cd
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x302b9dc9
- (void)prerollAtRate:(float)rate completionHandler:(id)handler;	// 0x302bb819
- (void)prerollOperationDidComplete:(BOOL)prerollOperation notificationPayload:(CFDictionaryRef)payload;	// 0x302bb8ed
// converted property getter: - (float)rate;	// 0x302bafc5
- (void)removeAudioPlaybackRateLimits;	// 0x302c130d
- (void)removeTimeObserver:(id)observer;	// 0x302bd271
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x302bd079
- (void)seekToDate:(id)date;	// 0x302bb271
- (void)seekToDate:(id)date completionHandler:(id)handler;	// 0x302bb2a1
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x302bb2d5
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x302bb3c1
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x302bb321
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x302bb44d
// converted property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x302bc18d
// converted property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x302bcdfd
// converted property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x302bc6c1
// converted property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x302bc375
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x302c2a99
// converted property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x302bdb89
// converted property setter: - (void)setExternalVideoGravity:(id)gravity;	// 0x302bdd85
// converted property setter: - (void)setMasterClock:(OpaqueCMClock *)clock;	// 0x302bb9fd
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x302c165d
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x302c1509
// converted property setter: - (void)setRate:(float)rate;	// 0x302bb0a1
- (void)setRate:(float)rate time:(XXStruct_pwHToB)time atHostTime:(XXStruct_pwHToB)hostTime;	// 0x302bb4f9
// converted property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x302bcff9
// converted property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x302bca31
// declared property getter: - (int)status;	// 0x302b9395
// converted property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x302bcfe1
// converted property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x302bc955
- (void)willChangeValueForKey:(id)key;	// 0x302b9129
@end
