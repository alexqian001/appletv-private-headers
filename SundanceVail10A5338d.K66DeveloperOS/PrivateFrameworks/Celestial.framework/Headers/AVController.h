/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVController : NSObject {
	AVControllerPrivate *_priv;	// 4 = 0x4
}
@property(assign) double currentTime;	// G=0x363204ed; S=0x36338589; converted property
@property(assign) id delegate;	// G=0x3633953d; S=0x3631fe61; converted property
@property(assign) BOOL muted;	// G=0x36338731; S=0x3633882d; converted property
@property(retain) id outputQTESFilePath;	// G=0x36324d25; S=0x36338a09; converted property
@property(retain) id queue;	// G=0x363378bd; S=0x3631da6d; converted property
@property(retain) id queueFeeder;	// G=0x36338081; S=0x36328649; converted property
@property(assign) BOOL shouldDisplayClosedCaptions;	// G=0x36338a8d; S=0x36320011; converted property
@property(assign) BOOL vibrationEnabled;	// G=0x36337279; S=0x36337291; converted property
@property(retain) id vibrationPattern;	// G=0x36337369; S=0x363372e9; converted property
@property(assign) OpaqueFigVisualContext *visualContext;	// G=0x36338945; S=0x36338959; converted property
@property(assign) float volume;	// G=0x3631fdbd; S=0x36328a65; converted property
+ (id)avController;	// 0x36337561
+ (id)avControllerWithQueue:(id)queue error:(id *)error;	// 0x3633759d
+ (id)compatibleAudioRouteForRoute:(id)route;	// 0x363373a9
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inDictionaries:(id)dictionaries;	// 0x363375e1
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x36327699
+ (BOOL)isSupportedFileExtension:(id)extension;	// 0x3633750d
+ (BOOL)isSupportedMimeType:(id)type;	// 0x363374b9
+ (void)setEnableNetworkMode:(BOOL)mode;	// 0x36328b35
- (id)init;	// 0x3631d335
- (id)initForStreaming;	// 0x36337729
- (id)initWithError:(id *)error;	// 0x3631d86d
- (id)initWithQueue:(id)queue error:(id *)error;	// 0x3631d349
- (id)initWithQueue:(id)queue fmpType:(unsigned)type error:(id *)error;	// 0x3631d381
- (id)_figPlayerNotifications;	// 0x363395f5
- (BOOL)activate:(id *)activate;	// 0x36338401
- (id)addNextFeederItemToQueue;	// 0x36320825
- (void)applyDesiredRepeatMode;	// 0x363390e1
- (id)attributeForKey:(id)key;	// 0x3631f5b1
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)notification;	// 0x3631e3b9
- (BOOL)beginInterruption:(id *)interruption;	// 0x363382d9
- (BOOL)beginRepeatGap;	// 0x36328ff1
- (id)bookmarkGroupIDForAVItem:(id)avitem;	// 0x363223b1
- (double)bookmarkTimeForAVItem:(id)avitem;	// 0x363223d9
- (BOOL)canBeginInterruption;	// 0x3633838d
- (void)cancelAllCGImageRequests;	// 0x36338ecd
- (void)cancelContinueAfterRepeatGap;	// 0x36324345
- (void)checkQueueSpace;	// 0x36320799
- (void)continueAfterRepeatGap;	// 0x363380ad
- (long)copyImageForTime:(CVBufferRef *)time time:(const XXStruct_pwHToB *)time2;	// 0x363378b1
- (OpaqueFigPlaybackItem *)createItemWithURL:(id)url flags:(unsigned long)flags error:(int *)error;	// 0x36324bc1
- (OpaqueFigPlaybackItem *)currentFPItem;	// 0x363205dd
- (id)currentItem;	// 0x363205fd
- (void)currentItemHasChanged:(id)changed;	// 0x36322cd9
- (void)currentItemWillChangeToItem:(id)currentItem oldItemCurrentTime:(double)time;	// 0x36322841
// converted property getter: - (double)currentTime;	// 0x363204ed
- (void)dealloc;	// 0x3632e36d
// converted property getter: - (id)delegate;	// 0x3633953d
- (void)dequeueDeadItem;	// 0x36339fa1
- (void)dequeueFirstItem;	// 0x36327a3d
- (void)endInterruptionWithStatus:(id)status;	// 0x363384ed
- (void)ensurePlaybackQueueImmed;	// 0x36339e65
- (int)eqPreset;	// 0x36338931
- (id)errorWithDescription:(id)description code:(long)code;	// 0x3633823d
- (void)feederInvalidatedWithCurrentItemMoved:(id)currentItemMoved;	// 0x36337e99
- (void)feederRangeWasInserted:(id)inserted;	// 0x363378d1
- (void)feederRangeWasRemoved:(id)removed;	// 0x36337bd9
- (void)figPlayerNotificationHandler:(id)handler;	// 0x36339fc9
- (void)fmpEffectiveVolumeDidChange;	// 0x36338f95
- (void)fpItemNotification:(id)notification sender:(id)sender;	// 0x36323199
- (CGImageRef)grabCGImageAtTime:(double)time withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions actualTime:(double *)time4;	// 0x3632de6d
- (BOOL)havePlayedCurrentItem;	// 0x36338099
- (unsigned)indexOfCurrentQueueFeederItem;	// 0x36327775
- (BOOL)isCurrentItemReady;	// 0x36339e15
- (BOOL)isNewImageAvailableForTime:(const XXStruct_pwHToB *)time willNeverBeAvailable:(BOOL *)available;	// 0x363378ad
- (BOOL)isValid;	// 0x36339595
- (void)itemHasFinishedPlayingNotification:(id)notification;	// 0x36328f09
- (id)lkLayer;	// 0x36338a75
- (void)logPerformanceDataForCurrentItem;	// 0x363398ad
- (void)makeCurrentItemReady;	// 0x36324381
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x36328605
// converted property getter: - (BOOL)muted;	// 0x36338731
- (BOOL)okToNotifyFromThisThread;	// 0x36322ba9
// converted property getter: - (id)outputQTESFilePath;	// 0x36324d25
- (void)pause;	// 0x36327761
- (BOOL)play:(id *)play;	// 0x36338105
- (BOOL)playNextItem:(id *)item;	// 0x36327995
- (AVControllerPrivate *)privateStorage;	// 0x3633789d
// converted property getter: - (id)queue;	// 0x363378bd
// converted property getter: - (id)queueFeeder;	// 0x36338081
- (float)rate;	// 0x36322e5d
- (void)rateDidChangeToRate:(float)rate;	// 0x36326559
- (void)registerTimeMarkerObserver:(id)observer forItem:(id)item times:(id)times context:(id)context;	// 0x36339ca9
- (void)removeObserver:(id)observer fromTMOArray:(id)tmoarray;	// 0x363282a5
- (int)repeatMode;	// 0x36328635
- (void)requestAsyncCGImagesAtTimes:(id)times requestIDs:(id)ids withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x36338c29
- (void)requestAsyncCGImagesAtTimes:(id)times withTimeOptions:(int)timeOptions withImageOptions:(id)imageOptions;	// 0x36338c05
- (BOOL)resumePlayback:(double)playback error:(id *)error;	// 0x36338125
- (void)safeSubtitleCommandPosted:(void *)posted;	// 0x36339551
- (void)scheduleQueueSpaceCheck;	// 0x363240d9
- (void)scheduleUpdateTimeMarkerObservations;	// 0x36322efd
- (void)seekToDate:(id)date;	// 0x363385f9
- (void)setAVItemClass:(Class)aClass;	// 0x363376cd
- (void)setApplyVideoTrackMatrix;	// 0x36338aa5
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x3631e6d9
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x36338589
- (void)setCurrentTime:(double)time options:(int)options;	// 0x36328745
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3631fe61
- (void)setEQPreset:(int)preset;	// 0x3631fee9
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)currentQueueFeederItem error:(id *)error;	// 0x363277dd
- (void)setLayer:(id)layer;	// 0x36320111
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x3633882d
// converted property setter: - (void)setOutputQTESFilePath:(id)path;	// 0x36338a09
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x36339ec9
// converted property setter: - (void)setQueue:(id)queue;	// 0x3631da6d
// converted property setter: - (void)setQueueFeeder:(id)feeder;	// 0x36328649
- (void)setQueueFeeder:(id)feeder withIndex:(int)index;	// 0x36320231
- (BOOL)setRate:(float)rate error:(id *)error;	// 0x363241b5
- (BOOL)setRepeatMode:(int)mode;	// 0x363201bd
// converted property setter: - (void)setShouldDisplayClosedCaptions:(BOOL)displayClosedCaptions;	// 0x36320011
- (void)setSubtitleRecipient:(id)recipient;	// 0x3631ff95
// converted property setter: - (void)setVibrationEnabled:(BOOL)enabled;	// 0x36337291
// converted property setter: - (void)setVibrationPattern:(id)pattern;	// 0x363372e9
// converted property setter: - (void)setVisualContext:(OpaqueFigVisualContext *)context;	// 0x36338959
// converted property setter: - (void)setVolume:(float)volume;	// 0x36328a65
- (BOOL)shouldBeginPlayingItem:(id)item error:(id *)error;	// 0x36325785
// converted property getter: - (BOOL)shouldDisplayClosedCaptions;	// 0x36338a8d
- (void)stepByCount:(int)count;	// 0x36338695
- (void)unregisterTimeMarkerObserver:(id)observer forItem:(id)item;	// 0x36328121
- (long)updateActionAtEnd;	// 0x36320029
- (void)updateTimeMarkerObservations;	// 0x363259a1
// converted property getter: - (BOOL)vibrationEnabled;	// 0x36337279
// converted property getter: - (id)vibrationPattern;	// 0x36337369
// converted property getter: - (OpaqueFigVisualContext *)visualContext;	// 0x36338945
// converted property getter: - (float)volume;	// 0x3631fdbd
@end
