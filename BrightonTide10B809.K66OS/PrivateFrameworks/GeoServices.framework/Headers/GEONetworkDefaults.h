/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableArray, NSLock;

@interface GEONetworkDefaults : NSObject {
	NSMutableArray *_completionHandlers;	// 4 = 0x4
	BOOL _isRegistering;	// 8 = 0x8
	NSDictionary *_networkDefaults;	// 12 = 0xc
	NSLock *_networkDefaultsLock;	// 16 = 0x10
	NSString *_cacheFilePath;	// 20 = 0x14
}
+ (id)sharedNetworkDefaults;	// 0x33f55b01
- (id)init;	// 0x33f55b2d
- (void)_registrationComplete;	// 0x33fcac4d
- (void)dealloc;	// 0x33fcad2d
- (BOOL)needsUpdate;	// 0x33f55c69
- (void)refreshNetworkDefaults;	// 0x33fcade5
- (void)registerNetworkDefaults:(id)defaults;	// 0x33fcaf8d
- (id)valueForKey:(id)key;	// 0x33fcaed9
@end

