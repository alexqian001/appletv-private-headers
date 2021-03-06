/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MEPowerManagement : BRSingleton {
	BOOL _playbackPreventsIdleSleep;	// 4 = 0x4
	BOOL _inLowPowerMode;	// 5 = 0x5
	BOOL _setIdleSleepTime;	// 6 = 0x6
	NSTimer *_powerAssertionTimer;	// 8 = 0x8
	unsigned _pmNoIdleSleepAssertionID;	// 12 = 0xc
	unsigned _ioNotifier;	// 16 = 0x10
	unsigned _ioConnection;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL inLowPowerMode;	// G=0xd9ed; S=0xd9fd; @synthesize=_inLowPowerMode
@property(assign, nonatomic) unsigned ioConnection;	// G=0xda6d; S=0xda7d; @synthesize=_ioConnection
@property(assign, nonatomic) unsigned ioNotifier;	// G=0xda4d; S=0xda5d; @synthesize=_ioNotifier
@property(assign, nonatomic) BOOL playbackPreventsIdleSleep;	// G=0xd995; S=0xd9a5; @synthesize=_playbackPreventsIdleSleep
@property(assign, nonatomic) unsigned pmNoIdleSleepAssertionID;	// G=0xda2d; S=0xda3d; @synthesize=_pmNoIdleSleepAssertionID
@property(retain, nonatomic) NSTimer *powerAssertionTimer;	// G=0xd9b5; S=0xd9c5; @synthesize=_powerAssertionTimer
@property(assign, nonatomic) BOOL setIdleSleepTime;	// G=0xda0d; S=0xda1d; @synthesize=_setIdleSleepTime
@property(assign, nonatomic) int sleepTimeoutInMinutes;	// G=0xc9c9; S=0xca1d; 
+ (void)checkInWithBackboardServices;	// 0xc631
+ (void)setSingleton:(id)singleton;	// 0xc4b5
+ (id)sharedInstance;	// 0xc4d9
+ (id)singleton;	// 0xc4a5
+ (void)startManagement;	// 0xc661
- (id)init;	// 0xc70d
- (void).cxx_destruct;	// 0xda8d
- (void)_dropPowerAssertions:(id)assertions;	// 0xd919
- (void)_enableIdleSleepAndWatchdog;	// 0xcc59
- (void)_handleIOPMCallbackMessage:(unsigned)message argument:(void *)argument;	// 0xd829
- (void)_handleThermalNotification;	// 0xd8c5
- (void)_registerForPowerNotifications;	// 0xcf55
- (void)_registerForThermalNotifications;	// 0xd0f1
- (void)_setAllowIdleSleep:(BOOL)sleep;	// 0xd679
- (void)_setMachineToLowPowerMode;	// 0xd265
- (void)_setMachineToNormalPowerMode;	// 0xd3b1
- (void)_updateAllTimersDueToNotification:(id)notification;	// 0xd199
- (void)_updateSleepTimer;	// 0xd1bd
- (void)dealloc;	// 0xc901
// declared property getter: - (BOOL)inLowPowerMode;	// 0xd9ed
// declared property getter: - (unsigned)ioConnection;	// 0xda6d
// declared property getter: - (unsigned)ioNotifier;	// 0xda4d
- (BOOL)isDeviceAsleep;	// 0xcb65
// declared property getter: - (BOOL)playbackPreventsIdleSleep;	// 0xd995
// declared property getter: - (unsigned)pmNoIdleSleepAssertionID;	// 0xda2d
// declared property getter: - (id)powerAssertionTimer;	// 0xd9b5
- (void)resetSleepTimeoutOnNotificationNamed:(id)named;	// 0xcbdd
// declared property getter: - (BOOL)setIdleSleepTime;	// 0xda0d
// declared property setter: - (void)setInLowPowerMode:(BOOL)lowPowerMode;	// 0xd9fd
// declared property setter: - (void)setIoConnection:(unsigned)connection;	// 0xda7d
// declared property setter: - (void)setIoNotifier:(unsigned)notifier;	// 0xda5d
// declared property setter: - (void)setPlaybackPreventsIdleSleep:(BOOL)sleep;	// 0xd9a5
// declared property setter: - (void)setPmNoIdleSleepAssertionID:(unsigned)anId;	// 0xda3d
// declared property setter: - (void)setPowerAssertionTimer:(id)timer;	// 0xd9c5
// declared property setter: - (void)setSetIdleSleepTime:(BOOL)time;	// 0xda1d
// declared property setter: - (void)setSleepTimeoutInMinutes:(int)minutes;	// 0xca1d
- (void)sleepDevice;	// 0xcb75
// declared property getter: - (int)sleepTimeoutInMinutes;	// 0xc9c9
- (void)wakeDevice;	// 0xcbcd
@end

