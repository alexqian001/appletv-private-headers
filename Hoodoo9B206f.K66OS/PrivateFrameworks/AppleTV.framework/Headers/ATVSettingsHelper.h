/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x365bdc31
+ (id)singleton;	// 0x365bdc21
- (id)init;	// 0x365bdc41
- (void)dealloc;	// 0x365bdca9
- (BOOL)haveWeQuitSinceBoot;	// 0x365bde85
- (BOOL)performObliterate;	// 0x365bdd05
- (BOOL)performRestore;	// 0x365bde81
- (BOOL)performUpdates:(id)updates;	// 0x365bdce1
- (void)reboot;	// 0x365bdf25
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x365bdcdd
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x365bdcd9
- (void)setSSHEnabled:(BOOL)enabled;	// 0x365bdf45
- (BOOL)setSystemLanguage:(id)language;	// 0x365bdcd5
@end
