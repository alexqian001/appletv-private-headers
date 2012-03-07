/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVHardwareUtility : BRSingleton {
@private
	BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}
+ (BOOL)bootedFromRecoveryPartition;	// 0x3394a2f9
+ (id)configurationInfo;	// 0x3394a395
+ (BOOL)isEmbeddedHardwareDevice;	// 0x3394a2c5
+ (id)mediaFolderPath;	// 0x3394a2fd
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x3394a701
+ (BOOL)reboot;	// 0x3394a34d
+ (void)setSILState_HardwareProblem;	// 0x3394a291
+ (void)setSILState_Off;	// 0x3394a1c1
+ (void)setSILState_On;	// 0x3394a1f5
+ (void)setSILState_RejectedCommand;	// 0x3394a25d
+ (void)setSILState_Starting;	// 0x3394a229
+ (void)setSingleton:(id)singleton;	// 0x3394a1b1
+ (id)singleton;	// 0x3394a1a1
- (id)init;	// 0x3394a859
- (BOOL)_determineIfEmbeddedHardwareDevice;	// 0x3394a8bd
- (BOOL)_isEmbeddedHardwareDevice;	// 0x3394a8ad
@end
