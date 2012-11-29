/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAccount.h"

@class NSString, NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface MEITunesStoreAccount : MEITunesAccount {
	NSDate *_lastAuthenticationDate;	// 40 = 0x28
	NSMutableDictionary *_authDictionary;	// 44 = 0x2c
	NSString *_dsidHash;	// 48 = 0x30
}
@property(retain) NSString *dsidHash;	// G=0xd9f9; S=0xda0d; @synthesize=_dsidHash
@property(assign) BOOL storeServicesAuthenticated;	// G=0xd2b9; S=0xd3a9; converted property
+ (int)_currentVersion;	// 0xcb0d
- (id)initWithAccountName:(id)accountName;	// 0xcb11
- (id)initWithCoder:(id)coder;	// 0xcc4d
- (void).cxx_destruct;	// 0xda1d
- (id)_hashDSID:(id)dsid;	// 0xdc41
- (void)_readProtectedInfo:(id)info;	// 0xd7b1
- (void)_resetSession;	// 0xd261
- (void)_upgradeToVersion2;	// 0xda65
- (void)_writeProtectedInfo:(id)info;	// 0xd695
// declared property getter: - (id)dsidHash;	// 0xd9f9
- (BOOL)isAuthenticated;	// 0xd1f9
- (id)metadataValueForKey:(id)key;	// 0xcd99
- (void)setAuthDictionary:(id)dictionary;	// 0xd49d
// declared property setter: - (void)setDsidHash:(id)hash;	// 0xda0d
- (void)setLastAuthenticationDate:(id)date;	// 0xd66d
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0xcfcd
// converted property setter: - (void)setStoreServicesAuthenticated:(BOOL)authenticated;	// 0xd3a9
// converted property getter: - (BOOL)storeServicesAuthenticated;	// 0xd2b9
- (id)type;	// 0xd1d9
- (void)willBeDeleted;	// 0xd8bd
@end
