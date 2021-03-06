/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSDictionary, NSData, NSDate, NSTimer, CPDistributedMessagingCenter, NSMutableArray;
@protocol MCInteractionDelegate, OS_dispatch_queue;

@interface MCProfileConnection : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
	CFBagRef _observers;	// 8 = 0x8
	CPDistributedMessagingCenter *_interactionServer;	// 12 = 0xc
	id<MCInteractionDelegate> _interactionDelegate;	// 16 = 0x10
	id _interactionLockDelayedContext;	// 20 = 0x14
	NSDictionary *_preflightResponse;	// 24 = 0x18
	NSData *_originalProfileData;	// 28 = 0x1c
	BOOL _needToRestoreOriginalProfileData;	// 32 = 0x20
	NSDate *_lastNoPasscodeMDMPollTime;	// 36 = 0x24
	int _userInputTimeoutType;	// 40 = 0x28
	NSTimer *_userInputTimer;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_notificationSyncQueue;	// 48 = 0x30
	NSMutableArray *_notificationTokens;	// 52 = 0x34
}
+ (id)sharedConnection;	// 0x32b7abd9
- (void).cxx_destruct;	// 0x32b7b871
- (void)__checkForProfiledCrash;	// 0x32baaa09
- (void)__doMCICDidFinish:(id)__doMCIC;	// 0x32baa70d
- (void)__effectiveSettingsDidChange:(id)__effectiveSettings;	// 0x32b7b4a9
- (void)__passcodeDidChange;	// 0x32b7b1fd
- (void)__passcodePolicyDidChange;	// 0x32b7b2e1
- (void)__profileListDidChange;	// 0x32b7b3c5
- (void)__restrictionDidChange;	// 0x32b7b119
- (void)_applyToObservers:(id)observers;	// 0x32b7af2d
- (void)_cancelUserInputTimeout;	// 0x32ba9df1
- (void)_defaultsDidChange;	// 0x32b7b5cd
- (void)_detectProfiledCrashes;	// 0x32ba9549
- (void)_doMCICDidBeginInstallingNextProfileData:(id)_doMCIC params:(id)params;	// 0x32baa5c9
- (void)_doMCICDidFinish:(id)_doMCIC params:(id)params;	// 0x32baa84d
- (void)_doMCICDidRequestCurrentPasscode:(id)_doMCIC params:(id)params;	// 0x32baa485
- (void)_doMCICDidUpdateStatus:(id)_doMCIC params:(id)params;	// 0x32baa389
- (void)_doMCICPreflightResponse:(id)response params:(id)params;	// 0x32baa049
- (void)_doMCICRequestUserInput:(id)input params:(id)params;	// 0x32baab8d
- (void)_doMCICShowUserWarnings:(id)warnings params:(id)params;	// 0x32baaea5
- (void)_effectiveSettingsDidChange:(id)_effectiveSettings;	// 0x32b7b6b1
- (int)_getPasscodeComplianceWarningExpiryDate:(id)date lastLockDate:(id)date2 outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x32bad4e9
- (id)_init;	// 0x32b79e75
- (void)_internalDefaultsDidChange;	// 0x32b7b5f9
- (BOOL)_openSensitiveURLString:(id)string unlock:(BOOL)unlock;	// 0x32ba8c29
- (void)_passcodeDidChange;	// 0x32b7b2b5
- (void)_passcodePolicyDidChange;	// 0x32b7b399
- (id)_pathsToInstalledProfilesWithFlags:(int)flags;	// 0x32ba8051
- (void)_profileListDidChange;	// 0x32b7b47d
- (id)_queueDataForAcceptance:(id)acceptance originalFileName:(id)name transitionToUI:(BOOL)ui outError:(id *)error;	// 0x32ba839d
- (void)_registerSelectorsForInteractionServer:(id)interactionServer;	// 0x32ba9635
- (void)_restrictionDidChange;	// 0x32b7b1d1
- (void)_setTimeoutWaitingForUserInputType:(int)userInputType;	// 0x32ba9c11
- (void)_tearDownInteractionServer;	// 0x32ba94ad
- (void)_userInputTimerFired;	// 0x32ba9e6d
- (id)acceptedFileExtensions;	// 0x32ba8bb5
- (id)acceptedMIMETypes;	// 0x32ba8b5d
- (void)addObserver:(id)observer;	// 0x32b7b6e1
- (id)allClientUUIDsForClientType:(id)clientType;	// 0x32babf01
- (int)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message complianceBlocking:(int)blocking displayImmediateAlert:(BOOL)alert outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed9 outError:(id *)error;	// 0x32bab801
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarningMessage:(id)message outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed7 outError:(id *)error;	// 0x32bab5c9
- (BOOL)applyRestrictionDictionary:(id)dictionary clientType:(id)type clientUUID:(id)uuid outRestrictionChanged:(BOOL *)changed outEffectiveSettingsChanged:(BOOL *)changed5 outError:(id *)error;	// 0x32ba7625
- (int)boolRestrictionForFeature:(id)feature;	// 0x32bab49d
- (void)cancelUserInputResponses;	// 0x32baa175
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x32baced5
- (id)chaperoneOrganization;	// 0x32bab3b9
- (void)checkCarrierProfile;	// 0x32bae389
- (void)checkCarrierProfileForceInstallation:(BOOL)installation;	// 0x32bae39d
- (void)checkIn;	// 0x32b7ae5d
- (void)checkInAsynchronously;	// 0x32b7aec9
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x32bad041
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)globalRestrictionsOutError;	// 0x32bad389
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)profileRestrictionsOutError;	// 0x32bad44d
- (void)dealloc;	// 0x32b7acf1
- (int)defaultBoolValueForSetting:(id)setting;	// 0x32bac7c5
- (id)defaultParametersForBoolSetting:(id)boolSetting;	// 0x32bac7fd
- (id)defaultParametersForValueSetting:(id)valueSetting;	// 0x32bac819
- (id)defaultValueForSetting:(id)setting;	// 0x32bac7e1
- (id)doNotBackupAppIDs;	// 0x32bae1ed
- (id)doNotDocumentSyncAppIDs;	// 0x32bae201
- (int)effectiveBoolValueForSetting:(id)setting;	// 0x32bac905
- (id)effectiveParametersForBoolSetting:(id)boolSetting;	// 0x32bac835
- (id)effectiveParametersForValueSetting:(id)valueSetting;	// 0x32bac89d
- (int)effectiveRestrictedBoolValueForSetting:(id)setting;	// 0x32ba76bd
- (id)effectiveRestrictions;	// 0x32bab449
- (id)effectiveUserSettings;	// 0x32bacb8d
- (id)effectiveValueForSetting:(id)setting;	// 0x32bac979
- (id)effectiveWhitelistedAppsAndOptions;	// 0x32bac13d
- (void)getPasscodeComplianceWarningLastLockDate:(id)date completionBlock:(id)block;	// 0x32badb65
- (int)getPasscodeComplianceWarningLastLockDate:(id)date outLocalizedTitle:(id *)title outLocalizedMessage:(id *)message;	// 0x32badaf9
- (void)installProfile:(id)profile interactionDelegate:(id)delegate;	// 0x32ba98e5
- (id)installProfile:(id)profile outError:(id *)error;	// 0x32ba8699
- (void)installProfileData:(id)data interactionDelegate:(id)delegate;	// 0x32ba9775
- (id)installProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x32ba8711
- (id)installProfileData:(id)data outError:(id *)error;	// 0x32ba86f1
- (BOOL)installProvisioningProfileData:(id)data managingProfileIdentifier:(id)identifier outError:(id *)error;	// 0x32ba925d
- (id)installedProfileWithIdentifier:(id)identifier;	// 0x32ba820d
- (id)installedProfilesWithFilterFlags:(int)filterFlags;	// 0x32ba80a9
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;	// 0x32bac9cd
- (BOOL)isChaperoned;	// 0x32bab35d
- (BOOL)isContentProtectionInEffect;	// 0x32bad2f9
- (BOOL)isPasscodeRequired;	// 0x32baccfd
- (BOOL)isPasscodeRequiredByPolicy;	// 0x32ba75c9
- (BOOL)isPasscodeRequiredByProfiles;	// 0x32bacd59
- (BOOL)isPasscodeSet;	// 0x32baccb5
- (BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;	// 0x32baca29
- (id)localizedDescriptionOfCurrentPasscodeConstraints;	// 0x32bae021
- (void)lockDevice;	// 0x32bacc29
- (id)managedAppIDsWithFlags:(int)flags;	// 0x32bae215
- (id)managedSystemConfigurationServiceIDs;	// 0x32bae179
- (id)managedWiFiNetworkNames;	// 0x32bae0a1
- (void)migratePostDataMigrator;	// 0x32bae359
- (int)newPasscodeEntryScreenType;	// 0x32badfd9
- (void)notifyClientsToRecomputeCompliance;	// 0x32bade41
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)lastLockDate;	// 0x32bade85
- (id)objectForFeature:(id)feature;	// 0x32ba76ad
- (id)objectRestrictionForFeature:(id)feature;	// 0x32bab561
- (id)parametersForBoolSetting:(id)boolSetting;	// 0x32bac6ad
- (id)parametersForValueSetting:(id)valueSetting;	// 0x32bac739
- (BOOL)passcode:(id)passcode meetsCurrentConstraintsOutError:(id *)error;	// 0x32bad319
- (id)passcodeExpiryDate;	// 0x32ba75e1
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x32badf39
- (void)performBootTimeChecks;	// 0x32bae471
- (id)popProfileFromHeadOfInstallationQueue;	// 0x32ba8229
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;	// 0x32ba8329
- (void)preflightUserInputResponses:(id)responses forPayloadIndex:(unsigned)payloadIndex;	// 0x32ba9a9d
- (void)processProfilesPostMigrate;	// 0x32bae329
- (void)processProfilesPostRestore;	// 0x32bae2f9
- (id)profileFromProfileData:(id)profileData outError:(id *)error;	// 0x32ba74b5
- (id)queueFileDataForAcceptance:(id)acceptance originalFileName:(id)name outError:(id *)error;	// 0x32ba8609
- (id)queueFileDataForProfileInstallation:(id)profileInstallation originalFileName:(id)name outError:(id *)error;	// 0x32ba757d
- (id)queueProfileDataForAcceptance:(id)acceptance outError:(id *)error;	// 0x32ba74d1
- (id)queueProfileDataForInstallation:(id)installation outError:(id *)error;	// 0x32ba7559
- (id)queueProfileForAcceptance:(id)acceptance outError:(id *)error;	// 0x32ba85a5
- (id)queueProfileForInstallation:(id)installation outError:(id *)error;	// 0x32ba74f5
- (void)recomputeUserComplianceWarning;	// 0x32bade11
- (void)recomputeUserComplianceWarningSynchronously;	// 0x32baddcd
- (void)removeBoolSetting:(id)setting;	// 0x32baca85
- (void)removeObserver:(id)observer;	// 0x32b7b7a9
- (void)removeOrphanedClientRestrictions;	// 0x32bac10d
- (void)removeProfileAsyncWithIdentifier:(id)identifier;	// 0x32ba88c1
- (void)removeProfileWithIdentifier:(id)identifier;	// 0x32ba883d
- (void)removeProfileWithIdentifier:(id)identifier completion:(id)completion;	// 0x32ba893d
- (void)removeProfilesFromInstallationQueue;	// 0x32ba8655
- (BOOL)removeProvisioningProfileWithUUID:(id)uuid outError:(id *)error;	// 0x32ba9395
- (void)removeValueSetting:(id)setting;	// 0x32bacb09
- (void)resetAllSettingsToDefaults;	// 0x32bacbe1
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)currentPasscodeRequestContinue passcode:(id)passcode;	// 0x32bab1fd
- (void)respondToWarningsContinueInstallation:(BOOL)warningsContinueInstallation;	// 0x32bab0c1
- (int)restrictedBoolValueForFeature:(id)feature;	// 0x32ba768d
- (void)setBoolValue:(BOOL)value forSetting:(id)setting;	// 0x32bac489
- (void)setDelegate:(id)delegate;	// 0x32ba7445
- (void)setInteractionDelegate:(id)delegate;	// 0x32ba9a85
- (void)setParameters:(id)parameters forBoolSetting:(id)boolSetting;	// 0x32bac349
- (void)setParameters:(id)parameters forValueSetting:(id)valueSetting;	// 0x32bac3e9
- (void)setParametersForSettingsByType:(id)settingsByType;	// 0x32bac219
- (void)setPasscodeWasSetInBackup:(BOOL)backup;	// 0x32ba7689
- (void)setUserInfo:(id)info forClientUUID:(id)clientUUID;	// 0x32babfd1
- (void)setValue:(id)value forSetting:(id)setting;	// 0x32bac57d
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)profileIdentifier outError:(id *)error;	// 0x32ba8eb5
- (void)shutDown;	// 0x32bae115
- (void)storeCertificateData:(id)data forHostIdentifier:(id)hostIdentifier;	// 0x32bae4d5
- (void)submitUserInputResponses:(id)responses;	// 0x32baa24d
- (BOOL)transitionToProfileAcceptanceUI;	// 0x32ba8d85
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)bundleID;	// 0x32ba8df1
- (BOOL)transitionToProfileOverviewUI;	// 0x32ba8d5d
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x32bad1f5
- (int)unlockScreenType;	// 0x32badf91
- (void)updateProfileWithIdentifier:(id)identifier interactionDelegate:(id)delegate;	// 0x32ba994d
- (id)updateProfileWithIdentifier:(id)identifier outError:(id *)error;	// 0x32ba8a5d
- (id)userInfoForClientUUID:(id)clientUUID;	// 0x32babf69
- (id)userSettings;	// 0x32bac659
- (BOOL)validatePasscode:(id)passcode;	// 0x32ba75f5
- (BOOL)validatePasscode:(id)passcode andUnlockContentProtectedDevice:(BOOL)device;	// 0x32ba760d
- (id)valueForFeature:(id)feature;	// 0x32ba769d
- (id)valueRestrictionForFeature:(id)feature;	// 0x32bab4f9
@end

