/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString;

@interface ATVDMAPResponse : NSObject {
@private
	NSData *_responseBody;	// 4 = 0x4
	unsigned long _httpStatusCode;	// 8 = 0x8
	NSString *_contentType;	// 12 = 0xc
}
@property(readonly, retain) NSString *contentType;	// G=0x303ec8f1; converted property
@property(readonly, assign) unsigned long httpStatusCode;	// G=0x303ec8e1; converted property
@property(readonly, retain) NSData *responseBody;	// G=0x303ec8d1; converted property
- (id)init;	// 0x303ec749
- (id)initWithResponseBody:(id)responseBody httpStatusCode:(unsigned long)code contentType:(id)type;	// 0x303ec7d1
// converted property getter: - (id)contentType;	// 0x303ec8f1
- (void)dealloc;	// 0x303ec871
// converted property getter: - (unsigned long)httpStatusCode;	// 0x303ec8e1
// converted property getter: - (id)responseBody;	// 0x303ec8d1
@end

