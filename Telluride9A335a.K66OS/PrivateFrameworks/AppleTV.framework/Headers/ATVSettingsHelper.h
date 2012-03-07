/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVSettingsHelper : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x34104b65
+ (id)singleton;	// 0x34104b55
- (id)init;	// 0x34104b75
- (void)dealloc;	// 0x34104bdd
- (BOOL)haveWeQuitSinceBoot;	// 0x34104d3d
- (BOOL)performObliterate;	// 0x34104c2d
- (BOOL)performRestore;	// 0x34104d39
- (BOOL)performUpdates:(id)updates;	// 0x34104c15
- (void)reboot;	// 0x34104ddd
- (BOOL)setLowPowerMode:(BOOL)mode;	// 0x34104c11
- (BOOL)setNetworkSettings:(id)settings forInterface:(int)interface;	// 0x34104c0d
- (void)setSSHEnabled:(BOOL)enabled;	// 0x34104df1
- (BOOL)setSystemLanguage:(id)language;	// 0x34104c09
@end
