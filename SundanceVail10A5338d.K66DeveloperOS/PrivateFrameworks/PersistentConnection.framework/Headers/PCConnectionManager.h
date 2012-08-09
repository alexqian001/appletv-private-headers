/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PCLoggingDelegate.h"
#import <NSObject.h> // Unknown library

@class NSString, PCDarwinNotificationRunLoopSource, NSRunLoop, PCPersistentTimer;
@protocol PCConnectionManagerDelegate, PCGrowthAlgorithm;

@interface PCConnectionManager : NSObject <PCLoggingDelegate> {
	int _connectionClass;	// 4 = 0x4
	id<PCConnectionManagerDelegate> _delegate;	// 8 = 0x8
	NSString *_serviceIdentifier;	// 12 = 0xc
	int _prefsStyle;	// 16 = 0x10
	int _onlyAllowedStyle;	// 20 = 0x14
	BOOL _onlyAllowedStyleSet;	// 24 = 0x18
	NSRunLoop *_runLoop;	// 28 = 0x1c
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm;	// 32 = 0x20
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm;	// 36 = 0x24
	PCDarwinNotificationRunLoopSource *_prefsChangedSource;	// 40 = 0x28
	PCPersistentTimer *_intervalTimer;	// 44 = 0x2c
	PCPersistentTimer *_reconnectWakeTimer;	// 48 = 0x30
	PCPersistentTimer *_delayTimer;	// 52 = 0x34
	unsigned _powerAssertionID;	// 56 = 0x38
	double _onTimeKeepAliveTime;	// 60 = 0x3c
	double _lastResumeTime;	// 68 = 0x44
	double _lastStopTime;	// 76 = 0x4c
	double _lastReachableTime;	// 84 = 0x54
	double _lastReconnectTime;	// 92 = 0x5c
	double _keepAliveGracePeriod;	// 100 = 0x64
	unsigned _reconnectIteration;	// 108 = 0x6c
	double _defaultPollingInterval;	// 112 = 0x70
	double _pollingIntervalOverride;	// 120 = 0x78
	BOOL _pollingIntervalOverrideSet;	// 128 = 0x80
	BOOL _hasStarted;	// 129 = 0x81
	BOOL _isRunning;	// 130 = 0x82
	BOOL _inCallback;	// 131 = 0x83
	BOOL _isInReconnectMode;	// 132 = 0x84
	BOOL _reconnectWithKeepAliveDelay;	// 133 = 0x85
	BOOL _forceManualWhenRoaming;	// 134 = 0x86
	BOOL _fallBackToAlternateInterface;	// 135 = 0x87
	BOOL _isReachable;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x33228e01; 
@property(assign, nonatomic) BOOL fallBackToAlternateInterface;	// G=0x3322b569; S=0x33229505; @synthesize=_fallBackToAlternateInterface
@property(assign, nonatomic) double keepAliveGracePeriod;	// G=0x3322b551; S=0x332290b9; @synthesize=_keepAliveGracePeriod
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3322b579; @synthesize=_serviceIdentifier
@property(assign) double maximumKeepAliveInterval;	// G=0x33228fe5; S=0x33229005; 
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x33228f11; S=0x33228f31; 
@property(readonly, assign, nonatomic) double pollingInterval;	// G=0x33229165; 
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)valid date:(id)date;	// 0x3322b3a9
+ (id)_keepAliveCachePath;	// 0x3322b369
+ (Class)growthAlgorithmClass;	// 0x332279a9
+ (id)intervalCacheDictionaries;	// 0x3322b131
- (id)initWithConnectionClass:(int)connectionClass delegate:(id)delegate serviceIdentifier:(id)identifier;	// 0x332279c9
- (void)_adjustInterfaceAssertions;	// 0x3322a999
- (void)_calloutWithEvent:(int)event;	// 0x3322a381
- (void)_clearTimers;	// 0x3322a539
- (void)_clearTimersReleasingPowerAssertion:(BOOL)assertion;	// 0x3322a561
- (id)_currentGrowthAlgorithm;	// 0x332282cd
- (void)_delayTimerFired;	// 0x3322a319
- (double)_getCachedWWANKeepAliveInterval;	// 0x3322b031
- (void)_intervalTimerFired;	// 0x3322a041
- (void)_loadPreferencesGeneratingEvent:(BOOL)event;	// 0x33227ed1
- (void)_preferencesChanged;	// 0x33227eb9
- (void)_releasePowerAssertion;	// 0x3322ac2d
- (void)_resolveStateWithAction:(int)action;	// 0x33228c5d
- (void)_saveWWANKeepAliveInterval:(double)interval;	// 0x3322aced
- (void)_setupKeepAliveForReconnect;	// 0x33229b49
- (void)_setupTimerForPoll;	// 0x33229969
- (void)_setupTimerForPushWithKeepAliveInterval:(double)keepAliveInterval;	// 0x33229599
- (id)_stringForAction:(int)action;	// 0x3322b47d
- (id)_stringForEvent:(int)event;	// 0x3322b4ed
- (void)_takePowerAssertionWithTimeout:(double)timeout;	// 0x3322aad1
- (void)_validateActionForCurrentStyle:(int)currentStyle;	// 0x33228b05
- (void)cancelPollingIntervalOverride;	// 0x33229241
// declared property getter: - (double)currentKeepAliveInterval;	// 0x33228e01
- (int)currentStyle;	// 0x332281b1
- (void)dealloc;	// 0x33227d81
// declared property getter: - (BOOL)fallBackToAlternateInterface;	// 0x3322b569
- (void)interfaceManagerInHomeCountryStatusChanged:(id)homeCountryStatusChanged;	// 0x3322a745
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x3322a759
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x3322a641
// declared property getter: - (double)keepAliveGracePeriod;	// 0x3322b551
- (void)log:(id)log;	// 0x3322b3f1
- (void)logAtLevel:(int)level format:(id)format;	// 0x3322b425
- (void)logAtLevel:(int)level format:(id)format arguments:(void *)arguments;	// 0x3322b44d
// declared property getter: - (id)loggingIdentifier;	// 0x3322b579
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x33228fe5
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x33228f11
// declared property getter: - (double)pollingInterval;	// 0x33229165
- (void)resumeManagerWithAction:(int)action;	// 0x3322836d
// declared property setter: - (void)setFallBackToAlternateInterface:(BOOL)alternateInterface;	// 0x33229505
// declared property setter: - (void)setKeepAliveGracePeriod:(double)period;	// 0x332290b9
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x33229005
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x33228f31
- (void)setOnlyAllowedStyle:(int)style;	// 0x3322829d
- (void)setPollingIntervalOverride:(double)override;	// 0x3322919d
- (BOOL)shouldClientScheduleReconnectDueToFailure;	// 0x332292a9
- (void)startManager;	// 0x33228335
- (void)stopManager;	// 0x33228cd9
@end
