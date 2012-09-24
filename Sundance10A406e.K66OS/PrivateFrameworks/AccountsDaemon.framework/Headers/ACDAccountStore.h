/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "ACDAccountStoreProtocol.h"
#import "XPCProxyTarget.h"
#import <NSObject.h> // Unknown library

@class ACDClientAuthorizationManager, NSMutableArray, ACDDatabase, ACDAccountNotifier, ACDAuthenticationPluginManager, ACDAccessPluginManager, ACDClient;
@protocol ACDAccountStoreDelegate;

@interface ACDAccountStore : NSObject <ACDAccountStoreProtocol, XPCProxyTarget> {
	ACDClient *_client;	// 4 = 0x4
	ACDDatabase *_database;	// 8 = 0x8
	id<ACDAccountStoreDelegate> _delegate;	// 12 = 0xc
	ACDAuthenticationPluginManager *_authenticationPluginManager;	// 16 = 0x10
	ACDAccessPluginManager *_accessPluginManager;	// 20 = 0x14
	ACDAccountNotifier *_accountNotifier;	// 24 = 0x18
	ACDClientAuthorizationManager *_authorizationManager;	// 28 = 0x1c
	NSMutableArray *_accountChanges;	// 32 = 0x20
	BOOL _notificationsEnabled;	// 36 = 0x24
}
@property(retain, nonatomic) ACDAccessPluginManager *accessPluginManager;	// G=0x32574045; S=0x32574055; @synthesize=_accessPluginManager
@property(retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;	// G=0x3257400d; S=0x3257401d; @synthesize=_authenticationPluginManager
@property(readonly, assign, nonatomic) ACDClientAuthorizationManager *authorizationManager;	// G=0x325740d5; @synthesize=_authorizationManager
@property(retain, nonatomic) ACDClient *client;	// G=0x3257409d; S=0x325740ad; @synthesize=_client
@property(readonly, assign, nonatomic) ACDDatabase *database;	// G=0x325740e5; @synthesize=_database
@property(assign, nonatomic) __weak id<ACDAccountStoreDelegate> delegate;	// G=0x32573fd9; S=0x32573ff9; @synthesize=_delegate
@property(assign, nonatomic) BOOL notificationsEnabled;	// G=0x3257407d; S=0x3257408d; @synthesize=_notificationsEnabled
+ (id)_whiteList;	// 0x32568ff5
- (id)initWithClient:(id)client database:(id)database;	// 0x3256737d
- (void).cxx_destruct;	// 0x325740f5
- (BOOL)_accessGrantedForBundleID:(id)bundleID onAccountType:(id)type;	// 0x32568f7d
- (BOOL)_accessGrantedForClient:(id)client onAccountType:(id)type;	// 0x32568ebd
- (id)_accountTypeWithIdentifier:(id)identifier;	// 0x32569a45
- (id)_accountWithIdentifier:(id)identifier;	// 0x32569931
- (void)_accountsWithAccountType:(id)accountType checkEntitlement:(BOOL)entitlement handler:(id)handler;	// 0x3256cfa1
- (id)_addAccountNoSave:(id)save error:(id *)error;	// 0x3256860d
- (BOOL)_callerWithPID:(id)pid hasPermissionToAddAccount:(id)addAccount;	// 0x32569425
- (BOOL)_canSaveAccount:(id)account;	// 0x32569b75
- (id)_currentBundleIDForPID:(id)pid;	// 0x3256a61d
- (id)_dataclassWithName:(id)name;	// 0x32569add
- (id)_displayAccountForAccount:(id)account;	// 0x325699c9
- (id)_handleAccountAdd:(id)add forPID:(id)pid;	// 0x3256a755
- (id)_handleAccountMod:(id)mod;	// 0x3256a6b1
- (BOOL)_isClientPermittedToAccessAccount:(id)accessAccount;	// 0x3256927d
- (BOOL)_isClientPermittedToAccessAccountType:(id)accessAccountType;	// 0x32569079
- (BOOL)_isClientPermittedToRemoveAccount:(id)removeAccount;	// 0x325692d1
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)_noteAccountStore;	// 0x3256a525
- (id)_removeAccountNoSave:(id)save;	// 0x32567ee9
- (id)_save;	// 0x32568225
- (void)_setAccountManagedObjectRelationships:(id)relationships withAccount:(id)account isNew:(BOOL)aNew;	// 0x3256a025
- (id)_updateAccountNoSave:(id)save error:(id *)error;	// 0x32568945
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier withHandler:(id)handler;	// 0x32572fe5
- (void)accessKeysForAccountType:(id)accountType handler:(id)handler;	// 0x3256f199
// declared property getter: - (id)accessPluginManager;	// 0x32574045
- (void)accountIdentifiersEnabledToSyncDataclass:(id)syncDataclass handler:(id)handler;	// 0x3256db99
- (void)accountTypeForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256b56d
- (id)accountTypeWithIdentifier:(id)identifier;	// 0x325674a5
- (void)accountTypeWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256bac1
- (void)accountTypesWithHandler:(id)handler;	// 0x3256b229
- (void)accountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256ac05
- (BOOL)accountsExistWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x32567c51
- (void)accountsWithAccountType:(id)accountType handler:(id)handler;	// 0x3256cf69
- (id)accountsWithAccountTypeIdentifier:(id)accountTypeIdentifier checkEntitlement:(BOOL)entitlement;	// 0x3256770d
- (void)accountsWithHandler:(id)handler;	// 0x3256ae89
- (id)addAccountNoSave:(id)save error:(id *)error;	// 0x325685fd
- (void)appPermissionsForAccountType:(id)accountType withHandler:(id)handler;	// 0x32572341
// declared property getter: - (id)authenticationPluginManager;	// 0x3257400d
// declared property getter: - (id)authorizationManager;	// 0x325740d5
- (void)childAccountsForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256d7d9
- (void)clearAllPermissionsGrantedForAccountType:(id)accountType withHandler:(id)handler;	// 0x32572909
// declared property getter: - (id)client;	// 0x3257409d
- (void)credentialForAccountWithIdentifier:(id)identifier bundleID:(id)anId handler:(id)handler;	// 0x3256c0bd
- (void)credentialForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256c425
// declared property getter: - (id)database;	// 0x325740e5
- (void)dataclassesWithHandler:(id)handler;	// 0x3256cc19
// declared property getter: - (id)delegate;	// 0x32573fd9
- (void)displayAccountTypeForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256b801
- (void)enabledDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256e001
- (void)insertAccountDataclass:(id)dataclass withHandler:(id)handler;	// 0x3256ffb1
- (void)insertAccountType:(id)type withHandler:(id)handler;	// 0x3256f675
- (id)masterCredentialForAccountIdentifier:(id)accountIdentifier;	// 0x3256bd9d
// declared property getter: - (BOOL)notificationsEnabled;	// 0x3257407d
- (void)parentAccountForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256d529
- (void)performSanityCheckOnDatabase:(id)database;	// 0x32568cdd
- (void)permissionForAccountType:(id)accountType withHandler:(id)handler;	// 0x32572c61
- (void)promptUserForCredentialsWithAccount:(id)account withHandler:(id)handler;	// 0x32571955
- (void)propertiesForDataclassWithName:(id)name accountIdentifier:(id)identifier handler:(id)handler;	// 0x3256ee59
- (void)provisionedDataclassesForAccountWithIdentifier:(id)identifier handler:(id)handler;	// 0x3256e381
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x32573261
- (void)removeAccount:(id)account withHandler:(id)handler;	// 0x325704f9
- (void)removeAccountType:(id)type withHandler:(id)handler;	// 0x3256fc51
- (void)renewCredentialsForAccount:(id)account withHandler:(id)handler;	// 0x3257129d
- (void)requestAccessForAccountTypeWithIdentifier:(id)identifier options:(id)options withHandler:(id)handler;	// 0x32572009
- (void)saveAccount:(id)account forPID:(id)pid withHandler:(id)handler;	// 0x325707d5
- (void)saveAccount:(id)account withHandler:(id)handler;	// 0x32570755
// declared property setter: - (void)setAccessPluginManager:(id)manager;	// 0x32574055
// declared property setter: - (void)setAuthenticationPluginManager:(id)manager;	// 0x3257401d
// declared property setter: - (void)setClient:(id)client;	// 0x325740ad
- (void)setClientBundleID:(id)anId withHandler:(id)handler;	// 0x3256aac5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32573ff9
// declared property setter: - (void)setNotificationsEnabled:(BOOL)enabled;	// 0x3257408d
- (void)setNotificationsEnabledNum:(id)num;	// 0x32572319
- (void)setPermissionGranted:(id)granted forBundleID:(id)bundleID onAccountType:(id)type withHandler:(id)handler;	// 0x3257256d
- (void)supportedDataclassesForAccountType:(id)accountType handler:(id)handler;	// 0x3256eaad
- (void)syncableDataclassesForAccountType:(id)accountType handler:(id)handler;	// 0x3256e701
- (void)typeIdentifierForDomain:(id)domain withHandler:(id)handler;	// 0x32572ea1
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)typeIdentifier withHandler:(id)handler;	// 0x32573129
- (void)verifyCredentialsForAccount:(id)account saveWhenAuthorized:(BOOL)authorized withHandler:(id)handler;	// 0x32570f9d
- (void)verifyCredentialsForAccount:(id)account withHandler:(id)handler;	// 0x32571265
@end
