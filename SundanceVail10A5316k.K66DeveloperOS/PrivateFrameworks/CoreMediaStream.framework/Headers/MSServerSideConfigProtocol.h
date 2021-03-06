/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
@private
	id<MSServerSideConfigProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	NSURL *_configURL;	// 12 = 0xc
	MSSSCPCContext _context;	// 16 = 0x10
}
@property(assign, nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;	// G=0x339a716d; S=0x339a717d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x339a715d; @synthesize=_personID
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x339a6ead
- (void).cxx_destruct;	// 0x339a718d
- (void)_didFailAuthenticationWithError:(id)error;	// 0x339a7139
- (void)_didFinishWithResponse:(id)response error:(id)error;	// 0x339a7109
- (void)abort;	// 0x339a70f5
- (void)dealloc;	// 0x339a7071
// declared property getter: - (id)delegate;	// 0x339a716d
// declared property getter: - (id)personID;	// 0x339a715d
- (void)queryConfiguration;	// 0x339a70c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339a717d
@end

