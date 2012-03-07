/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSCondition, NflxhlsAuthenticationPrimer;

__attribute__((visibility("hidden")))
@interface HTTPServer : NSObject {
@private
	NflxhlsAuthenticationPrimer *primer;	// 4 = 0x4
	BOOL serverRunning;	// 8 = 0x8
	NSCondition *stopCondition;	// 12 = 0xc
}
+ (void)cleanUp;	// 0x307176c0
+ (id)instance;	// 0x30717710
- (id)init;	// 0x307177ec
- (void)dealloc;	// 0x30717764
- (void)debugHTTP:(BOOL)http;	// 0x30717bb8
- (void)httpServerMain:(id)main;	// 0x30717be8
- (void)start;	// 0x307178a4
- (void)stop;	// 0x30717aec
@end
