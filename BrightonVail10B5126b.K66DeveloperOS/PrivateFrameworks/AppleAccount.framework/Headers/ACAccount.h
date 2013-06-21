/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <ACAccount.h> // Unknown library


@interface ACAccount (AppleID)
- (id)initWithAppleID:(id)appleID password:(id)password;	// 0x33477eed
- (id)_registeredBundles;	// 0x3347812d
- (id)appleID;	// 0x33477fe9
- (BOOL)canRemoveAccount;	// 0x33478149
- (id)dsid;	// 0x33478015
- (void)registerBundle:(id)bundle;	// 0x33478031
- (void)setDSID:(id)dsid;	// 0x33477ff9
- (void)unregisterBundle:(id)bundle;	// 0x334780dd
@end
