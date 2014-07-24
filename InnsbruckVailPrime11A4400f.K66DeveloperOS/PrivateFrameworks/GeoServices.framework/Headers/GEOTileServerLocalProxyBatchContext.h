/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>

@class GEOTileRequester, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileServerLocalProxyBatchContext : NSObject {
	GEOTileKeyList *_fullList;	// 4 = 0x4
	GEOTileKeyList *_interestList;	// 8 = 0x8
	GEOTileKeyList *_networkList;	// 12 = 0xc
	GEOTileKeyList *_pendingNetworkList;	// 16 = 0x10
	GEOTileRequester *_tileRequester;	// 20 = 0x14
}
@property(retain, nonatomic) GEOTileKeyList *fullList;	// G=0x30edb2c9; S=0x30edb2d9; @synthesize=_fullList
@property(retain, nonatomic) GEOTileKeyList *interestList;	// G=0x30edb2e9; S=0x30edb2f9; @synthesize=_interestList
@property(retain, nonatomic) GEOTileKeyList *networkList;	// G=0x30edb309; S=0x30edb319; @synthesize=_networkList
@property(retain, nonatomic) GEOTileKeyList *pendingNetworkList;	// G=0x30edb329; S=0x30edb339; @synthesize=_pendingNetworkList
@property(retain, nonatomic) GEOTileRequester *tileRequester;	// G=0x30edb349; S=0x30edb359; @synthesize=_tileRequester
- (void)dealloc;	// 0x30edb235
// declared property getter: - (id)fullList;	// 0x30edb2c9
// declared property getter: - (id)interestList;	// 0x30edb2e9
// declared property getter: - (id)networkList;	// 0x30edb309
// declared property getter: - (id)pendingNetworkList;	// 0x30edb329
// declared property setter: - (void)setFullList:(id)list;	// 0x30edb2d9
// declared property setter: - (void)setInterestList:(id)list;	// 0x30edb2f9
// declared property setter: - (void)setNetworkList:(id)list;	// 0x30edb319
// declared property setter: - (void)setPendingNetworkList:(id)list;	// 0x30edb339
// declared property setter: - (void)setTileRequester:(id)requester;	// 0x30edb359
// declared property getter: - (id)tileRequester;	// 0x30edb349
@end
