/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library
#import "SkankKit-Structs.h"


@interface SKPowerController : NSObject {
	BOOL _backlightPower;	// 4 = 0x4
	BOOL _touchPower;	// 5 = 0x5
	BOOL _shhhhSleeping;	// 6 = 0x6
	CFRunLoopRef _runLoop;	// 8 = 0x8
	SCPreferencesRef _preferences;	// 12 = 0xc
	int _cycleCount;	// 16 = 0x10
	int _voltage;	// 20 = 0x14
	float _instantAmperage;	// 24 = 0x18
	BOOL _fullyCharged;	// 28 = 0x1c
	int _designCapacity;	// 32 = 0x20
	int _maxCapacity;	// 36 = 0x24
	int _currentCapacity;	// 40 = 0x28
	int _level;	// 44 = 0x2c
	BOOL _installed;	// 48 = 0x30
	BOOL _charging;	// 49 = 0x31
	BOOL _connected;	// 50 = 0x32
	int _chargerID;	// 52 = 0x34
	float _chargeCurrent;	// 56 = 0x38
	IONotificationPortRef _notificationPort;	// 60 = 0x3c
	BOOL _showedBatteryWarning;	// 64 = 0x40
	unsigned _service;	// 68 = 0x44
	unsigned _sleepService;	// 72 = 0x48
	unsigned _batteryStatusNotifier;	// 76 = 0x4c
	unsigned _systemPowerNotifier;	// 80 = 0x50
	IONotificationPortRef _systemPowerPort;	// 84 = 0x54
	unsigned _rootPowerService;	// 88 = 0x58
	unsigned _inhibitChargingAssertion;	// 92 = 0x5c
	unsigned _inhibitACConnectAssertion;	// 96 = 0x60
	bool _ignorePowerChange;	// 100 = 0x64
}
@property(assign) BOOL airplaneMode;	// G=0x35439671; S=0x354396cd; converted property
@property(assign) BOOL backlightPower;	// G=0x354393f9; S=0x35439409; converted property
@property(assign) BOOL bluetoothPower;	// G=0x35439605; S=0x35439639; converted property
@property(assign) float brightness;	// G=0x35439461; S=0x354394a1; converted property
@property(readonly, assign) float chargeCurrent;	// G=0x3543981d; converted property
@property(readonly, assign, getter=isCharging) BOOL charging;	// G=0x354397bd; converted property
@property(readonly, assign, getter=isConnected) BOOL connected;	// G=0x354397cd; converted property
@property(readonly, assign) int currentCapacity;	// G=0x3543978d; converted property
@property(readonly, assign) int cycleCount;	// G=0x3543972d; converted property
@property(readonly, assign) int designCapacity;	// G=0x3543976d; converted property
@property(readonly, assign, getter=isFullyCharged) BOOL fullyCharged;	// G=0x3543975d; converted property
@property(assign) bool ignorePowerChange;	// G=0x3543a12d; S=0x3543a141; converted property
@property(readonly, assign, getter=isInstalled) BOOL installed;	// G=0x354397ad; converted property
@property(readonly, assign) float instantAmperage;	// G=0x3543974d; converted property
@property(assign) BOOL lcdPower;	// G=0x35439335; S=0x35439395; converted property
@property(readonly, assign) int maxCapacity;	// G=0x3543977d; converted property
@property(readonly, assign) IONotificationPortRef notificationPort;	// G=0x35439bd1; converted property
@property(readonly, assign) unsigned rootPowerService;	// G=0x35439f59; converted property
@property(readonly, assign) unsigned service;	// G=0x35439d0d; converted property
@property(readonly, assign) unsigned sleepService;	// G=0x354391b1; converted property
@property(assign) BOOL touchPower;	// G=0x35439511; S=0x35439521; converted property
@property(readonly, assign) int voltage;	// G=0x3543973d; converted property
@property(assign) BOOL wifiPower;	// G=0x35439599; S=0x354395cd; converted property
+ (void)reboot;	// 0x3543932d
+ (id)sharedInstance;	// 0x35438e19
+ (void)shutdown;	// 0x35439325
- (id)init;	// 0x35438ee9
// converted property getter: - (BOOL)airplaneMode;	// 0x35439671
- (BOOL)asleep;	// 0x354391e5
// converted property getter: - (BOOL)backlightPower;	// 0x354393f9
- (int)batteryLevel;	// 0x3543979d
- (long)batteryRawVoltage;	// 0x35439ddd
// converted property getter: - (BOOL)bluetoothPower;	// 0x35439605
// converted property getter: - (float)brightness;	// 0x35439461
// converted property getter: - (float)chargeCurrent;	// 0x3543981d
- (id)chargerType;	// 0x354397dd
// converted property getter: - (int)currentCapacity;	// 0x3543978d
// converted property getter: - (int)cycleCount;	// 0x3543972d
- (void)dealloc;	// 0x35439115
// converted property getter: - (int)designCapacity;	// 0x3543976d
- (void)handleNewPowerValues;	// 0x35439b0d
// converted property getter: - (bool)ignorePowerChange;	// 0x3543a12d
// converted property getter: - (float)instantAmperage;	// 0x3543974d
// converted property getter: - (BOOL)isCharging;	// 0x354397bd
// converted property getter: - (BOOL)isConnected;	// 0x354397cd
// converted property getter: - (BOOL)isFullyCharged;	// 0x3543975d
// converted property getter: - (BOOL)isInstalled;	// 0x354397ad
// converted property getter: - (BOOL)lcdPower;	// 0x35439335
- (void)listenForSystemPower;	// 0x3543a0bd
// converted property getter: - (int)maxCapacity;	// 0x3543977d
// converted property getter: - (IONotificationPortRef)notificationPort;	// 0x35439bd1
// converted property getter: - (unsigned)rootPowerService;	// 0x35439f59
- (void)scheduleWakeAfterDelay:(double)delay;	// 0x354392e9
- (void)scheduleWakeAtTime:(id)time;	// 0x354392b9
// converted property getter: - (unsigned)service;	// 0x35439d0d
- (int)setACSoftConnected:(BOOL)connected;	// 0x35439e71
// converted property setter: - (void)setAirplaneMode:(BOOL)mode;	// 0x354396cd
- (void)setAsleep;	// 0x354391f5
// converted property setter: - (void)setBacklightPower:(BOOL)power;	// 0x35439409
- (int)setBatteryChargeEnabled:(BOOL)enabled;	// 0x35439ee5
// converted property setter: - (void)setBluetoothPower:(BOOL)power;	// 0x35439639
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x354394a1
// converted property setter: - (void)setIgnorePowerChange:(bool)change;	// 0x3543a141
// converted property setter: - (void)setLcdPower:(BOOL)power;	// 0x35439395
// converted property setter: - (void)setTouchPower:(BOOL)power;	// 0x35439521
// converted property setter: - (void)setWifiPower:(BOOL)power;	// 0x354395cd
- (void)sleep;	// 0x3543921d
// converted property getter: - (unsigned)sleepService;	// 0x354391b1
// converted property getter: - (BOOL)touchPower;	// 0x35439511
- (void)unsetAsleep;	// 0x35439209
- (int)updateStateForBattery:(unsigned)battery;	// 0x3543982d
// converted property getter: - (int)voltage;	// 0x3543973d
- (void)wake;	// 0x35439261
- (void)watchPowerSources;	// 0x35439be1
// converted property getter: - (BOOL)wifiPower;	// 0x35439599
@end
