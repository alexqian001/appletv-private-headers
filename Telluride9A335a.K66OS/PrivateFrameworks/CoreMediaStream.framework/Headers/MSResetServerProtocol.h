/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "MSStreamsProtocol.h"


@interface MSResetServerProtocol : MSStreamsProtocol {
@private
	MSRSPCContext _context;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x322d2c25; S=0x322d2c51; converted property
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322d2c7d
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x322d2ec9
- (void)_coreProtocolDidFinishError:(id)_coreProtocol;	// 0x322d2e2d
- (void)dealloc;	// 0x322d2d75
// converted property getter: - (id)delegate;	// 0x322d2c25
- (void)resetServerState;	// 0x322d2ddd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x322d2c51
@end

