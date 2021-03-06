/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLAuthenticationChallenge, NSURL;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternal : NSObject {
@private
	CFURLConnectionRef cfConn;	// 4 = 0x4
	CFURLAuthChallengeRef currCFChallenge;	// 8 = 0x8
	NSURLAuthenticationChallenge *currNSChallenge;	// 12 = 0xc
	NSURL *url;	// 16 = 0x10
	id delegate;	// 20 = 0x14
	bool shouldSkipCancelOnRelease;	// 24 = 0x18
	BOOL connectionActive;	// 25 = 0x19
}
@end

