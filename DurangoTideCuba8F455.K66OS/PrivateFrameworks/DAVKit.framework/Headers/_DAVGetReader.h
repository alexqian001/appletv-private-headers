/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSMutableData;

@interface _DAVGetReader : NSObject <DAVResponseBodyReader> {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x314c6c99; converted property
- (id)init;	// 0x314c6cb5
// converted property getter: - (id)data;	// 0x314c6c99
- (void)dealloc;	// 0x314c79e5
- (BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;	// 0x314c6c8d
- (void)request:(id)request readResponseBody:(id)body;	// 0x314c798d
@end
