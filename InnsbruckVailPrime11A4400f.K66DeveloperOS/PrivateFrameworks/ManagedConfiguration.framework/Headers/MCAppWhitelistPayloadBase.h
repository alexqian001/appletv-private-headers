/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload {
	BOOL _allowAccessWithoutPasscode;	// 44 = 0x2c
	BOOL _forceAllowSupervisorAccess;	// 45 = 0x2d
	NSArray *_whitelistedAppsAndOptions;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL allowAccessWithoutPasscode;	// G=0x313c2b75; S=0x313c2b85; @synthesize=_allowAccessWithoutPasscode
@property(assign, nonatomic) BOOL forceAllowSupervisorAccess;	// G=0x313c2b95; S=0x313c2ba5; @synthesize=_forceAllowSupervisorAccess
@property(retain, nonatomic) NSArray *whitelistedAppsAndOptions;	// G=0x313c2b3d; S=0x313c2b4d; @synthesize=_whitelistedAppsAndOptions
+ (id)knownOptionsKeys;	// 0x313c20d1
+ (id)knownUserEnabledOptionKeys;	// 0x313c2241
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x313c2309
- (void).cxx_destruct;	// 0x313c2bb5
// declared property getter: - (BOOL)allowAccessWithoutPasscode;	// 0x313c2b75
- (id)description;	// 0x313c2a3d
// declared property getter: - (BOOL)forceAllowSupervisorAccess;	// 0x313c2b95
- (id)restrictions;	// 0x313c24f5
// declared property setter: - (void)setAllowAccessWithoutPasscode:(BOOL)passcode;	// 0x313c2b85
// declared property setter: - (void)setForceAllowSupervisorAccess:(BOOL)access;	// 0x313c2ba5
// declared property setter: - (void)setWhitelistedAppsAndOptions:(id)options;	// 0x313c2b4d
- (id)stubDictionary;	// 0x313c2921
// declared property getter: - (id)whitelistedAppsAndOptions;	// 0x313c2b3d
@end

