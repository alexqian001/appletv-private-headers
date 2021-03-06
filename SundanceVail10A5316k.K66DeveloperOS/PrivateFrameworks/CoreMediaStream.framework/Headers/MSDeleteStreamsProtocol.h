/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSStreamsProtocol.h"
#import "CoreMediaStream-Structs.h"

@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
@private
	MSDSPCContext _context;	// 12 = 0xc
	NSMutableArray *_collectionsInFlight;	// 92 = 0x5c
}
@property(assign, nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate;	// @dynamic
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x339ae7ad
- (void).cxx_destruct;	// 0x339af209
- (void)_coreProtocolDidFailAuthenticationError:(id)_coreProtocol;	// 0x339af1a1
- (void)_coreProtocolDidFinishResponse:(id)_coreProtocol error:(id)error;	// 0x339aeba1
- (void)_resetConnectionVariables;	// 0x339af1f1
- (void)sendDeletionRequestForAssetCollections:(id)assetCollections;	// 0x339ae905
@end

