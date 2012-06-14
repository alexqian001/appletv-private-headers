/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class NSMutableDictionary, NSLock;

@interface SSLockdown : NSObject {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
@property(readonly, assign) long long availableDiskSpace;	// G=0x3050cd0d; 
@property(readonly, assign) long long totalDiskCapacity;	// G=0x3050cdad; 
+ (id)sharedInstance;	// 0x3050cc5d
- (id)init;	// 0x3050cb99
- (void *)_copyLocalValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3050d38d
- (id)_localDictionaryDirectory;	// 0x3050d425
- (id)_localDictionaryFileName;	// 0x3050d45d
- (id)_ntsLocalDictionary;	// 0x3050d499
- (BOOL)_ntsSaveLocalDictionary;	// 0x3050d5dd
- (void)_setLocalValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3050d6fd
// declared property getter: - (long long)availableDiskSpace;	// 0x3050cd0d
- (id)copyAccountDictionaryForDomain:(CFStringRef)domain;	// 0x3050ce4d
- (CFStringRef)copyDeviceGUID;	// 0x3050d17d
- (void *)copyITunesValueForKey:(CFStringRef)key usedDomain:(const CFStringRef *)domain;	// 0x3050d1d9
- (void *)copyValueForKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3050d235
- (void)dealloc;	// 0x3050cbfd
- (void)removeAccountFromDomain:(CFStringRef)domain;	// 0x3050d269
- (void)setValue:(void *)value forKey:(CFStringRef)key domain:(CFStringRef)domain;	// 0x3050d35d
// declared property getter: - (long long)totalDiskCapacity;	// 0x3050cdad
@end
