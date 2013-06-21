/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAudioDeviceControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class MPAudioDeviceController, NSMutableArray, NSDictionary, AVQueuePlayer, NSError, AVPlayer, NSString, NSArray, AVAudioSessionMediaPlayerOnly, AVPlayerItem;
@protocol OS_dispatch_queue;

@interface MPQueuePlayer : NSObject <MPAudioDeviceControllerDelegate> {
	MPAudioDeviceController *_audioDeviceController;	// 4 = 0x4
	AVPlayerItem *_currentItem;	// 8 = 0x8
	XXStruct_pwHToB _currentTime;	// 12 = 0xc
	BOOL _isExternalPlaybackActive;	// 36 = 0x24
	BOOL _pausedForPlaybackQueueTransaction;	// 37 = 0x25
	NSDictionary *_pickedRouteDescription;	// 40 = 0x28
	id _playbackQueueCommitHandler;	// 44 = 0x2c
	int _playbackQueueTransactionCount;	// 48 = 0x30
	AVQueuePlayer *_player;	// 52 = 0x34
	NSMutableArray *_queuedOperations;	// 56 = 0x38
	NSObject<OS_dispatch_queue> *_queuedOperationsAccessQueue;	// 60 = 0x3c
	float _rate;	// 64 = 0x40
	float _rateBeforePlaybackQueueTransaction;	// 68 = 0x44
	BOOL _routeDidChangeDuringPlaybackQueueTransaction;	// 72 = 0x48
	int _status;	// 76 = 0x4c
	int _defaultItemEQPresetType;	// 80 = 0x50
	BOOL _outputObscuredDueToInsufficientExternalProtection;	// 84 = 0x54
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x31d7b3cd; S=0x31d7c121; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x31d7b42d; 
@property(readonly, assign, nonatomic) AVPlayer *_player;	// G=0x31d7b771; 
@property(assign, nonatomic) int actionAtItemEnd;	// G=0x31d7ada1; S=0x31d7be59; 
@property(assign, nonatomic) BOOL allowsExternalPlayback;	// G=0x31d7ae01; S=0x31d7bfb9; 
@property(assign, nonatomic, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x31d7b47d; S=0x31d7b811; 
@property(readonly, assign, nonatomic) AVPlayerItem *currentItem;	// G=0x31d7b31d; 
@property(readonly, assign) XXStruct_pwHToB currentTime;	// G=0x31d7b355; converted property
@property(assign, nonatomic) int defaultItemEQPresetType;	// G=0x31d7d0ed; S=0x31d7ca91; @synthesize=_defaultItemEQPresetType
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x31d7c551; S=0x31d7caa1; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x31d7b40d; 
@property(readonly, assign, nonatomic, getter=isExternalPlaybackActive) BOOL externalPlaybackActive;	// G=0x31d7b46d; 
@property(readonly, assign, nonatomic) int externalPlaybackType;	// G=0x31d7b3ed; 
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;	// G=0x31d7c575; S=0x31d7cad1; 
@property(readonly, assign, nonatomic) BOOL isPlaybackQueueTransactionActive;	// G=0x31d7afbd; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31d7b4a1; 
@property(readonly, assign, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;	// G=0x31d7c51d; 
@property(copy, nonatomic) id playbackQueueCommitHandler;	// G=0x31d7d0c9; S=0x31d7d0dd; @synthesize=_playbackQueueCommitHandler
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *playerAVAudioSession;	// G=0x31d7c4fd; 
@property(assign, nonatomic) float rate;	// G=0x31d7b7a1; S=0x31d7c141; 
@property(readonly, assign, nonatomic) int status;	// G=0x31d7c4c9; 
@property(assign, nonatomic) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x31d7c4d9; S=0x31d7c361; 
- (id)init;	// 0x31d7a731
- (BOOL)_CALayerDestinationIsTVOut;	// 0x31d7c52d
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x31d7b3cd
// declared property getter: - (int)_externalProtectionStatus;	// 0x31d7b42d
// declared property getter: - (id)_player;	// 0x31d7b771
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x31d7c5c9
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x31d7c771
- (void)_setClientName:(id)name;	// 0x31d7c8d9
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x31d7c121
- (void)_setEQPreset:(int)preset;	// 0x31d7cac1
- (void)_setPreferredLanguageList:(id)list;	// 0x31d7cb29
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x31d7cce1
- (void)_setVolume:(float)volume;	// 0x31d7ce55
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x31d7ce75
- (float)_volume;	// 0x31d7cfdd
// declared property getter: - (int)actionAtItemEnd;	// 0x31d7ada1
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x31d7adc1
- (void)advanceToNextItem;	// 0x31d7ade1
// declared property getter: - (BOOL)allowsExternalPlayback;	// 0x31d7ae01
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31d7cffd
- (void)beginPlaybackQueueTransactionAndPause:(BOOL)pause;	// 0x31d7ae25
- (void)commitPlaybackQueueTransaction;	// 0x31d7afd5
// declared property getter: - (id)currentItem;	// 0x31d7b31d
// converted property getter: - (XXStruct_pwHToB)currentTime;	// 0x31d7b355
- (void)dealloc;	// 0x31d7a9cd
// declared property getter: - (int)defaultItemEQPresetType;	// 0x31d7d0ed
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x31d7c551
// declared property getter: - (id)error;	// 0x31d7b40d
// declared property getter: - (int)externalPlaybackType;	// 0x31d7b3ed
// declared property getter: - (id)externalPlaybackVideoGravity;	// 0x31d7c575
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x31d7b44d
// declared property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x31d7b47d
// declared property getter: - (BOOL)isExternalPlaybackActive;	// 0x31d7b46d
// declared property getter: - (BOOL)isPlaybackQueueTransactionActive;	// 0x31d7afbd
// declared property getter: - (id)items;	// 0x31d7b4a1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31d7ab65
// declared property getter: - (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x31d7c51d
- (void)pause;	// 0x31d7b4c1
- (void)play;	// 0x31d7b619
// declared property getter: - (id)playbackQueueCommitHandler;	// 0x31d7d0c9
// declared property getter: - (id)playerAVAudioSession;	// 0x31d7c4fd
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x31d7b781
// declared property getter: - (float)rate;	// 0x31d7b7a1
- (void)removeItem:(id)item;	// 0x31d7b7d1
- (void)removeTimeObserver:(id)observer;	// 0x31d7b7f1
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x31d7b9ad
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x31d7bb71
// declared property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x31d7be59
// declared property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x31d7bfb9
// declared property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x31d7b811
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(XXStruct_pwHToB)time;	// 0x31d7b979
// declared property setter: - (void)setDefaultItemEQPresetType:(int)type;	// 0x31d7ca91
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x31d7caa1
// declared property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x31d7cad1
// declared property setter: - (void)setPlaybackQueueCommitHandler:(id)handler;	// 0x31d7d0dd
// declared property setter: - (void)setRate:(float)rate;	// 0x31d7c141
// declared property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x31d7c361
// declared property getter: - (int)status;	// 0x31d7c4c9
// declared property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x31d7c4d9
@end
