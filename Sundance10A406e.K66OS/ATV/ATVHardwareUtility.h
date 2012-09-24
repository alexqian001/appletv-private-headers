/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVHardwareUtility : BRSingleton {
}
+ (id)configurationInfo;	// 0x190ed1
+ (id)mediaFolderPath;	// 0x190cb5
+ (BOOL)performObliteratePreservingPaths:(id)paths;	// 0x190d05
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x191219
+ (void)setSILState_HardwareProblem;	// 0x190c81
+ (void)setSILState_Off;	// 0x190bb1
+ (void)setSILState_On;	// 0x190be5
+ (void)setSILState_RejectedCommand;	// 0x190c4d
+ (void)setSILState_Starting;	// 0x190c19
+ (void)setSingleton:(id)singleton;	// 0x190ba1
+ (id)singleton;	// 0x190b91
@end
