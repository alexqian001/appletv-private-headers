/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class GEOSessionID;

@interface GEOUserSession : NSObject {
	double _lastSessionCreationTime;	// 4 = 0x4
	GEOSessionID *_sessionID;	// 12 = 0xc
}
@property(readonly, assign) GEOSessionID *sessionID;	// G=0x31d0c561; 
+ (id)sharedInstance;	// 0x31d0c30d
- (id)init;	// 0x31d0c379
- (void)_updateSessionIDIfNeeded;	// 0x31d0c429
- (void)dealloc;	// 0x31d0c3dd
// declared property getter: - (id)sessionID;	// 0x31d0c561
@end
