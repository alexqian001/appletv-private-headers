/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "ASDynamicAccountClassLoader.h"
#import <BasicAccount.h> // Unknown library

@class NSOperationQueue, NSString, NSDictionary, NSLock, NSArray;

@interface AAAccount : BasicAccount <ASDynamicAccountClassLoader> {
	NSString *_cachedPassword;	// 24 = 0x18
	NSString *_cachedToken;	// 28 = 0x1c
	NSString *_unsavedToken;	// 32 = 0x20
	NSString *_cachedCommerceToken;	// 36 = 0x24
	NSOperationQueue *_requesterQueue;	// 40 = 0x28
	NSLock *_tokenLock;	// 44 = 0x2c
	NSLock *_passwordLock;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) int accountServiceType;	// G=0x33a67e9d; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x33a67d8d; 
@property(readonly, assign, nonatomic) NSString *authToken;	// G=0x33a67bc5; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x33a67d41; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x33a67d09; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x33a67d25; 
@property(readonly, assign, nonatomic) int mobileMeAccountStatus;	// G=0x33a67ed1; 
@property(readonly, assign, nonatomic) BOOL needsRegistration;	// G=0x33a67e5d; 
@property(copy, nonatomic) NSString *password;	// G=0x33a67ac9; S=0x33a6b605; @synthesize=_cachedPassword
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x33a67ced; 
@property(assign, nonatomic) BOOL primaryAccount;	// G=0x33a67d5d; S=0x33a67da9; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x33a67e09; 
@property(readonly, assign, nonatomic) BOOL primaryEmailVerified;	// G=0x33a67e25; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x33a67f39; 
@property(readonly, assign, nonatomic) BOOL serviceUnavailable;	// G=0x33a67ff9; 
@property(readonly, assign, nonatomic) NSDictionary *serviceUnavailableInfo;	// G=0x33a68051; 
@property(copy, nonatomic) NSString *username;	// G=0x33a67a3d; S=0x33a67a5d; 
+ (id)accountTypeString;	// 0x33a67829
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x33a67541
+ (id)basicAccountProperties;	// 0x33a67841
+ (id)classicAccountTypeString;	// 0x33a67835
+ (id)configuredSyncAccountName;	// 0x33a6a229
+ (id)dataclassesBoundToPrimaryAccount;	// 0x33a6a3a1
+ (id)dataclassesBoundToSingleAccount;	// 0x33a6a459
+ (id)dataclassesBoundToSyncAccount;	// 0x33a6a3fd
+ (BOOL)doesConfiguredSyncAccountExist;	// 0x33a6a159
+ (BOOL)isAOSEnabled;	// 0x33a6a4e9
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x33a6b5b9
+ (id)propertiesWhichRequireValidation;	// 0x33a6b56d
+ (void)setAOSEnabled:(BOOL)enabled;	// 0x33a6a50d
+ (id)supportedDataclasses;	// 0x33a6786d
- (id)initWithProperties:(id)properties;	// 0x33a675c9
- (id)_deviceSpecificLocalizedString:(id)string;	// 0x33a6a5f5
- (id)_errorWithDescriptionForResponseError:(id)responseError;	// 0x33a6a8e9
- (id)_mailChildAccountProperties;	// 0x33a6a78d
- (void)_performiCloudMigration;	// 0x33a6acf9
- (void)_setToken:(id)token;	// 0x33a6a6f1
- (id)accountFirstDisplayAlert;	// 0x33a697f9
- (id)accountFooterButton;	// 0x33a697b1
- (id)accountFooterText;	// 0x33a69769
// declared property getter: - (int)accountServiceType;	// 0x33a67e9d
- (void)addChildAccount:(id)account;	// 0x33a6b359
// declared property getter: - (id)appleIDAliases;	// 0x33a67d8d
// declared property getter: - (id)authToken;	// 0x33a67bc5
- (void)authenticateWithHandler:(id)handler;	// 0x33a68559
- (BOOL)becomeConfiguredSyncAccount;	// 0x33a6a2c9
- (void)cancelNetworkActivity;	// 0x33a688ad
- (void)configureAppleIDCerts;	// 0x33a6ab99
// declared property getter: - (id)dataclassProperties;	// 0x33a67d41
- (void)dealloc;	// 0x33a6788d
- (id)description;	// 0x33a67969
- (id)displayName;	// 0x33a679e1
// declared property getter: - (id)firstName;	// 0x33a67d09
- (void)flushCachedPassword;	// 0x33a69709
- (void)flushCachedTokens;	// 0x33a696a9
- (BOOL)isConfiguredSyncAccount;	// 0x33a6a581
- (BOOL)isProvisionedForDataclass:(id)dataclass;	// 0x33a67f0d
// declared property getter: - (id)lastName;	// 0x33a67d25
// declared property getter: - (int)mobileMeAccountStatus;	// 0x33a67ed1
- (BOOL)needsEmailConfiguration;	// 0x33a69ab1
// declared property getter: - (BOOL)needsRegistration;	// 0x33a67e5d
- (void)notifyUserOfQuotaDepletion;	// 0x33a688e5
// declared property getter: - (id)password;	// 0x33a67ac9
// declared property getter: - (id)personID;	// 0x33a67ced
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass;	// 0x33a69099
- (void)presentQuotaDepletionAlertForDataclass:(id)dataclass withHandler:(id)handler;	// 0x33a68d45
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary;	// 0x33a68d2d
- (BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)dataclassIfNecessary withHandler:(id)handler;	// 0x33a68951
// declared property getter: - (BOOL)primaryAccount;	// 0x33a67d5d
// declared property getter: - (id)primaryEmail;	// 0x33a67e09
// declared property getter: - (BOOL)primaryEmailVerified;	// 0x33a67e25
- (id)propertiesForDataclass:(id)dataclass;	// 0x33a67ee1
// declared property getter: - (id)provisionedDataclasses;	// 0x33a67f39
- (void)registerWithHandler:(id)handler;	// 0x33a683a5
- (void)removeAppleIDCerts;	// 0x33a6ac99
- (void)removeChildAccountWithIdentifier:(id)identifier;	// 0x33a6b419
- (void)removePasswordFromKeychain;	// 0x33a69559
- (void)removeTokensFromKeychain;	// 0x33a69229
- (void)resendVerificationEmail:(id)email;	// 0x33a68785
- (void)savePasswordInKeychain;	// 0x33a693c9
- (void)saveTokensInKeychain;	// 0x33a690ad
// declared property getter: - (BOOL)serviceUnavailable;	// 0x33a67ff9
// declared property getter: - (id)serviceUnavailableInfo;	// 0x33a68051
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x33a67f65
- (void)setLocationAuthorizationForDeviceLocator:(BOOL)deviceLocator;	// 0x33a6a05d
// declared property setter: - (void)setPassword:(id)password;	// 0x33a6b605
// declared property setter: - (void)setPrimaryAccount:(BOOL)account;	// 0x33a67da9
- (void)setUseCellular:(BOOL)cellular forDataclass:(id)dataclass;	// 0x33a680d9
// declared property setter: - (void)setUsername:(id)username;	// 0x33a67a5d
- (void)setupChildMailAccountAndEnable:(BOOL)enable withEmail:(id)email;	// 0x33a69b49
- (void)signInWithHandler:(id)handler;	// 0x33a681a5
- (id)syncStoreIdentifier;	// 0x33a6a269
- (void)updateAccountPropertiesWithHandler:(id)handler;	// 0x33a683b5
- (void)updateAccountWithProvisioningResponse:(id)provisioningResponse;	// 0x33a69841
- (BOOL)useCellularForDataclass:(id)dataclass;	// 0x33a68099
// declared property getter: - (id)username;	// 0x33a67a3d
@end

