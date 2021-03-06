/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "ASDynamicAccountClassLoader.h"

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject <ASDynamicAccountClassLoader> {
	NSMutableDictionary *_accountTypeToAccountFrameworkSubpath;	// 4 = 0x4
	NSMutableDictionary *_accountTypeToAccountDaemonBundleSubpath;	// 8 = 0x8
	NSMutableDictionary *_accountTypeToClassNames;	// 12 = 0xc
}
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x36c0e851
+ (id)sharedInstance;	// 0x36c0dabd
- (id)init;	// 0x36c0ddbd
- (void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;	// 0x36c0dbbd
- (BOOL)_loadFrameworkAtSubpath:(id)subpath;	// 0x36c0e291
- (Class)accountClassForAccountType:(id)accountType;	// 0x36c0e3f5
- (Class)agentClassForAccountType:(id)accountType;	// 0x36c0e6f5
- (Class)clientAccountClassForAccountType:(id)accountType;	// 0x36c0e4d5
- (Class)daemonAccountClassForAccountType:(id)accountType;	// 0x36c0e5d5
- (Class)daemonAppropriateAccountClassForAccountType:(id)accountType;	// 0x36c0e7d5
- (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x36c0e809
- (void)loadDaemonBundleForAccountType:(id)accountType;	// 0x36c0e3b9
- (void)loadFrameworkForAccountType:(id)accountType;	// 0x36c0e2f9
@end

