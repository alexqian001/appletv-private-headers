/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class SYDClient, NSMutableDictionary;

@interface SYDRemotePreferencesSource : NSObject {
	long _generationCount;	// 4 = 0x4
	long _lastGenerationFromDisk;	// 8 = 0x8
	CFStringRef preferenceID;	// 12 = 0xc
	CFURLRef urlOnDisk;	// 16 = 0x10
	CFDictionaryRef cache;	// 20 = 0x14
	long long storageChangeCount;	// 24 = 0x18
	long long initialSyncChangeCount;	// 32 = 0x20
	unsigned char isInitialSync;	// 40 = 0x28
	CFSetRef dirtyKeys;	// 44 = 0x2c
	SYDClient *client;	// 48 = 0x30
	CFDictionaryRef configurationDictionary;	// 52 = 0x34
	NSMutableDictionary *externalChanges;	// 56 = 0x38
	id registrationBlock;	// 60 = 0x3c
}
@property(readonly, assign) long generationCount;	// G=0x356c2a9d; converted property
@property(readonly, assign) unsigned char isInitialSync;	// G=0x356c252d; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x356c2d9d
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x356c2d91
+ (void)initialize;	// 0x356c1051
+ (void)noteAccountChanges:(id)changes;	// 0x356c2f71
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x356c2da9
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x356c14a9
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared;	// 0x356c14cd
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared additionalSource:(BOOL)source;	// 0x356c14f1
- (void)_cachePlistFromDisk;	// 0x356c1af1
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x356c1099
- (long)configurationValueForKey:(CFStringRef)key;	// 0x356c1229
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x356c116d
- (CFDictionaryRef)copyDictionary;	// 0x356c2969
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x356c2569
- (CFArrayRef)copyKeyList;	// 0x356c28ed
- (void)dealloc;	// 0x356c175d
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x356c287d
- (void)finalize;	// 0x356c1849
// converted property getter: - (long)generationCount;	// 0x356c2a9d
- (void *)getValueForKey:(CFStringRef)key;	// 0x356c1905
- (unsigned char)hasExternalChanges;	// 0x356c253d
// converted property getter: - (unsigned char)isInitialSync;	// 0x356c252d
- (long)maximumDataLengthPerKey;	// 0x356c1471
- (long)maximumKeyCount;	// 0x356c1439
- (long)maximumKeyLength;	// 0x356c1455
- (long)maximumTotalDataLength;	// 0x356c148d
- (void)registerForSynchronizedDefaults;	// 0x356c2aad
- (void)scheduleRemoteSynchronization;	// 0x356c2155
- (id)serverSideDebugDescription;	// 0x356c2d4d
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x356c1951
- (unsigned char)synchronize;	// 0x356c21f9
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x356c2211
- (void)unregisterForSynchronizedDefaults;	// 0x356c2c51
- (void)updateConfiguration;	// 0x356c2c99
@end
