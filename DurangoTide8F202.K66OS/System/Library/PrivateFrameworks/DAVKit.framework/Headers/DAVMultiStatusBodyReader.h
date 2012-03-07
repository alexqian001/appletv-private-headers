/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSArray, NSMutableData;

@interface DAVMultiStatusBodyReader : NSObject <DAVResponseBodyReader> {
	Class responseClass;	// 4 = 0x4
	NSMutableData *readData;	// 8 = 0x8
	NSArray *responses;	// 12 = 0xc
}
@property(readonly, retain) NSArray *responses;	// G=0x32da3845; converted property
+ (id)multiStatusBodyReader;	// 0x32da3ca1
+ (id)multiStatusBodyReaderWithResponseClass:(Class)responseClass;	// 0x32da3c61
+ (id)propFindBodyReader;	// 0x32da3c25
- (id)init;	// 0x32da3bf1
- (id)initForPropFind;	// 0x32da3bbd
- (id)initWithResponseClass:(Class)responseClass;	// 0x32da3869
- (void)_calculateResponses;	// 0x32da39e5
- (void)dealloc;	// 0x32da3b61
- (BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;	// 0x32da3855
- (void)request:(id)request readResponseBody:(id)body;	// 0x32da3951
// converted property getter: - (id)responses;	// 0x32da3845
@end
