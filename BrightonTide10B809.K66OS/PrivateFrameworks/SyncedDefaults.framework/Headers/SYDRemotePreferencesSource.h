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
@property(readonly, assign) long generationCount;	// G=0x355cfa99; converted property
@property(readonly, assign) unsigned char isInitialSync;	// G=0x355cf529; converted property
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;	// 0x355cfd99
+ (id)SYDRemotePreferencesSourceDidChangeNotification;	// 0x355cfd8d
+ (void)initialize;	// 0x355ce04d
+ (void)noteAccountChanges:(id)changes;	// 0x355cff6d
+ (void)resetAllApplicationsWithCompletionHandler:(id)completionHandler;	// 0x355cfda5
- (id)initWithApplicationID:(CFStringRef)applicationID shared:(BOOL)shared;	// 0x355ce4a5
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared;	// 0x355ce4c9
- (id)initWithApplicationID:(CFStringRef)applicationID storeID:(CFStringRef)anId shared:(BOOL)shared additionalSource:(BOOL)source;	// 0x355ce4ed
- (void)_cachePlistFromDisk;	// 0x355ceaed
- (void)_storeConfiguration:(CFDictionaryRef)configuration;	// 0x355ce095
- (long)configurationValueForKey:(CFStringRef)key;	// 0x355ce225
- (CFDictionaryRef)copyConfigurationDictionary;	// 0x355ce169
- (CFDictionaryRef)copyDictionary;	// 0x355cf965
- (id)copyExternalChangesWithChangeCount:(long long *)changeCount;	// 0x355cf565
- (CFArrayRef)copyKeyList;	// 0x355cf8e9
- (void)dealloc;	// 0x355ce759
- (void)discardExternalChangesForChangeCount:(long long)changeCount;	// 0x355cf879
- (void)finalize;	// 0x355ce845
// converted property getter: - (long)generationCount;	// 0x355cfa99
- (void *)getValueForKey:(CFStringRef)key;	// 0x355ce901
- (unsigned char)hasExternalChanges;	// 0x355cf539
// converted property getter: - (unsigned char)isInitialSync;	// 0x355cf529
- (long)maximumDataLengthPerKey;	// 0x355ce46d
- (long)maximumKeyCount;	// 0x355ce435
- (long)maximumKeyLength;	// 0x355ce451
- (long)maximumTotalDataLength;	// 0x355ce489
- (void)registerForSynchronizedDefaults;	// 0x355cfaa9
- (void)scheduleRemoteSynchronization;	// 0x355cf151
- (id)serverSideDebugDescription;	// 0x355cfd49
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x355ce94d
- (unsigned char)synchronize;	// 0x355cf1f5
- (unsigned char)synchronizeForced:(unsigned char)forced;	// 0x355cf20d
- (void)unregisterForSynchronizedDefaults;	// 0x355cfc4d
- (void)updateConfiguration;	// 0x355cfc95
@end
