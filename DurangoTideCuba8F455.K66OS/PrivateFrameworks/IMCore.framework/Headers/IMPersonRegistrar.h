/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {
	NSMutableDictionary *_personMap;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x30af2cfd
- (id)init;	// 0x30af2b61
- (void)_dumpAllPersons;	// 0x30af2bfd
- (id)autorelease;	// 0x30af2a29
- (void)dealloc;	// 0x30af2b19
- (id)personForUniqueID:(id)uniqueID;	// 0x30af2a2d
- (void)registerPerson:(id)person;	// 0x30af2a9d
- (oneway void)release;	// 0x30af2a1d
- (unsigned)retainCount;	// 0x30af2a21
- (void)unregisterPerson:(id)person;	// 0x30af2a4d
@end

