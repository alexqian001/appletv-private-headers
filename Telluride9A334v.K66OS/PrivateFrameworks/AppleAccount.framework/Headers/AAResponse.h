/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSHTTPURLResponse, NSError, NSString, NSDictionary;

@interface AAResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	NSHTTPURLResponse *_httpResponse;	// 8 = 0x8
	NSError *_error;	// 12 = 0xc
}
@property(retain, nonatomic) NSError *error;	// G=0x33a6e6c5; S=0x33a6e6d5; @synthesize=_error
@property(readonly, assign, nonatomic) NSString *protocolVersion;	// G=0x33a6e619; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x33a6e6b5; @synthesize=_responseDictionary
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x33a6deb1
- (void)_parseResponse:(id)response;	// 0x33a6dc99
- (void)dealloc;	// 0x33a6e641
// declared property getter: - (id)error;	// 0x33a6e6c5
// declared property getter: - (id)protocolVersion;	// 0x33a6e619
// declared property getter: - (id)responseDictionary;	// 0x33a6e6b5
// declared property setter: - (void)setError:(id)error;	// 0x33a6e6d5
@end
