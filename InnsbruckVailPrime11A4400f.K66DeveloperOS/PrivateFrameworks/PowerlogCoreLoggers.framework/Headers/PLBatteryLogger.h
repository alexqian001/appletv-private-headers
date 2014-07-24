/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
 */

#import "PowerlogCoreLoggers-Structs.h"
#import <PowerlogLoggerSupport/PLLogger.h>

@class NSDate;

@interface PLBatteryLogger : PLLogger {
	IONotificationPortRef ioNotifyPort;	// 28 = 0x1c
	unsigned notificationRef;	// 32 = 0x20
	CFRunLoopSourceRef runLoopSource;	// 36 = 0x24
	unsigned lastBatteryLevel;	// 40 = 0x28
	NSDate *lastBatteryLevelChangeDate;	// 44 = 0x2c
	BOOL lastConnectedState;	// 48 = 0x30
	id gasGaugeLock;	// 52 = 0x34
	ggcontext *ggCtx;	// 56 = 0x38
}
@property(retain, nonatomic) NSDate *lastBatteryLevelChangeDate;	// G=0x323f7ad5; S=0x323f7ae5; @synthesize
- (id)init;	// 0x323f6b51
- (void)batteryStatusChanged:(id)changed;	// 0x323f7089
- (void)dealloc;	// 0x323f6e95
- (void)gasGauageLog;	// 0x323f78e1
- (BOOL)gasGaugeOpenAndStartLogging;	// 0x323f7441
- (id)gasGaugeRead;	// 0x323f7669
- (BOOL)gasGaugeStopLoggingAndClose;	// 0x323f756d
- (void)handleSleep:(id)sleep;	// 0x323f6f71
- (void)handleWake:(id)wake;	// 0x323f6f81
// declared property getter: - (id)lastBatteryLevelChangeDate;	// 0x323f7ad5
- (void)log;	// 0x323f7039
- (void)logBatteryProperties:(id)properties;	// 0x323f6f85
- (id)loggerFunctionCall:(short)call withParameters:(id)parameters;	// 0x323f7391
- (double)secondsBeforeSignificantTimeTriggered;	// 0x323f7341
// declared property setter: - (void)setLastBatteryLevelChangeDate:(id)date;	// 0x323f7ae5
@end
