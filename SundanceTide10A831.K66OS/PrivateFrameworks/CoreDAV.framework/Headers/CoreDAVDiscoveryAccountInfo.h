/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSSet, NSURL, NSData, NSString, NSDictionary;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x33404039; S=0x3340404d; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x3340408d; S=0x334040a1; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x33404111; S=0x33404125; @synthesize=_error
@property(retain) NSString *host;	// G=0x33403f35; S=0x33403f49; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x33403ff1; S=0x33404005; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x33403fcd; S=0x33403fe1; @synthesize=_password
@property(assign) int port;	// G=0x33403f59; S=0x33403f6d; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x33404015; S=0x33404029; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x33403f11; S=0x33403f25; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x33404159; S=0x3340416d; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x33404135; S=0x33404149; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x33403f85; S=0x33403f99; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x3340405d; S=0x33404075; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x334040b1; S=0x334040c9; @synthesize=_started
@property(assign) BOOL success;	// G=0x334040e1; S=0x334040f9; @synthesize=_success
@property(retain) NSString *user;	// G=0x33403fa9; S=0x33403fbd; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x3340417d; S=0x33404191; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x334033e9
// declared property getter: - (id)accountID;	// 0x33404039
- (id)additionalHeaderValues;	// 0x334039b1
// declared property getter: - (id)backingAccountInfoProvider;	// 0x3340408d
- (CFURLStorageSessionRef)copyStorageSession;	// 0x33403e81
- (void)dealloc;	// 0x33403565
- (id)description;	// 0x334036a5
// declared property getter: - (id)error;	// 0x33404111
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x33403b79
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x33403ce1
- (BOOL)handleCertificateError:(id)error;	// 0x33403afd
- (BOOL)handleShouldUseCredentialStorage;	// 0x33403d91
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x33403a41
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x33403a95
// declared property getter: - (id)host;	// 0x33403f35
// declared property getter: - (id)identityPersist;	// 0x33403ff1
- (id)oauthToken;	// 0x334039f9
// declared property getter: - (id)password;	// 0x33403fcd
// declared property getter: - (int)port;	// 0x33403f59
// declared property getter: - (id)principalURL;	// 0x33404015
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x33403985
// declared property getter: - (id)scheme;	// 0x33403f11
// declared property getter: - (id)serverComplianceClasses;	// 0x33404159
// declared property getter: - (id)serverHeaders;	// 0x33404135
// declared property getter: - (id)serverRoot;	// 0x33403f85
// declared property setter: - (void)setAccountID:(id)anId;	// 0x3340404d
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x334040a1
// declared property setter: - (void)setError:(id)error;	// 0x33404125
// declared property setter: - (void)setHost:(id)host;	// 0x33403f49
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x33404005
// declared property setter: - (void)setPassword:(id)password;	// 0x33403fe1
// declared property setter: - (void)setPort:(int)port;	// 0x33403f6d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x33404029
// declared property setter: - (void)setScheme:(id)scheme;	// 0x33403f25
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x3340416d
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x33404149
// declared property setter: - (void)setServerRoot:(id)root;	// 0x33403f99
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x33404075
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x334040c9
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x334040f9
// declared property setter: - (void)setUser:(id)user;	// 0x33403fbd
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x33404191
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3340405d
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x33403dd9
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x33403b25
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x33403e2d
- (BOOL)shouldTurnModalOnBadPassword;	// 0x33403b21
- (BOOL)shouldUseOpportunisticSockets;	// 0x33403ec9
// declared property getter: - (BOOL)started;	// 0x334040b1
// declared property getter: - (BOOL)success;	// 0x334040e1
- (id)url;	// 0x334038b1
// declared property getter: - (id)user;	// 0x33403fa9
// declared property getter: - (id)userAgentHeader;	// 0x3340417d
@end

