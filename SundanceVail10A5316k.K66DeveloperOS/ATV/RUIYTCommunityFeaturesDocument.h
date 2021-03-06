/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class YTAuthenticatedAccountPost, RUIYTMediaAsset, YTVideo;

__attribute__((visibility("hidden")))
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument {
	RUIYTMediaAsset *_asset;	// 4 = 0x4
	YTAuthenticatedAccountPost *_request;	// 8 = 0x8
}
@property(retain, nonatomic) RUIYTMediaAsset *asset;	// G=0x23ea51; S=0x23ea61; @synthesize=_asset
@property(retain, nonatomic) YTAuthenticatedAccountPost *request;	// G=0x23ea89; S=0x23ea99; @synthesize=_request
@property(readonly, assign, nonatomic) YTVideo *video;	// G=0x23e9e9; @dynamic
- (id)initWithAsset:(id)asset;	// 0x23e911
- (void).cxx_destruct;	// 0x23eac1
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x23ea3d
// declared property getter: - (id)asset;	// 0x23ea51
// declared property getter: - (id)request;	// 0x23ea89
// declared property setter: - (void)setAsset:(id)asset;	// 0x23ea61
// declared property setter: - (void)setRequest:(id)request;	// 0x23ea99
// declared property getter: - (id)video;	// 0x23e9e9
@end

