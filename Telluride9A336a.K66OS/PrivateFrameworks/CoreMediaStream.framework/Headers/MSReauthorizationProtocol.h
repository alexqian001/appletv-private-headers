/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"

@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol {
@private
	MSRPCContext _context;	// 24 = 0x18
	NSArray *_assetsInFlight;	// 104 = 0x68
}
@property(assign) id delegate;	// G=0x322be3fd; S=0x322be429; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322be455
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x322beb55
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x322be7f9
- (void)abort;	// 0x322be7b9
- (void)dealloc;	// 0x322be579
// converted property getter: - (id)delegate;	// 0x322be3fd
- (void)requestReauthorizationForAssets:(id)assets;	// 0x322be5c5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x322be429
@end
