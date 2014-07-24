/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class YTVideo, RUIYTMediaAsset, RUIYTDocumentLoader, YTAuthenticatedAccountPost;

__attribute__((visibility("hidden")))
@interface RUIYTCommunityFeaturesDocument : RUIYTDocument <RUIYTDocumentLoaderDelegate> {
	RUIYTMediaAsset *_asset;	// 4 = 0x4
	YTAuthenticatedAccountPost *_request;	// 8 = 0x8
	RUIYTDocumentLoader *_documentLoader;	// 12 = 0xc
}
@property(retain, nonatomic) RUIYTMediaAsset *asset;	// G=0x294a45; S=0x294a55; @synthesize=_asset
@property(retain, nonatomic) RUIYTDocumentLoader *documentLoader;	// G=0x294ab5; S=0x294ac5; @synthesize=_documentLoader
@property(retain, nonatomic) YTAuthenticatedAccountPost *request;	// G=0x294a7d; S=0x294a8d; @synthesize=_request
@property(readonly, assign, nonatomic) YTVideo *video;	// G=0x294555; 
- (id)initWithAsset:(id)asset;	// 0x294389
- (void).cxx_destruct;	// 0x294aed
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x2945a9
- (BOOL)_shouldSilentlyIgnoreError:(id)error type:(int)type;	// 0x2949d1
// declared property getter: - (id)asset;	// 0x294a45
- (void)dealloc;	// 0x2944c1
// declared property getter: - (id)documentLoader;	// 0x294ab5
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x294835
// declared property getter: - (id)request;	// 0x294a7d
// declared property setter: - (void)setAsset:(id)asset;	// 0x294a55
// declared property setter: - (void)setDocumentLoader:(id)loader;	// 0x294ac5
// declared property setter: - (void)setRequest:(id)request;	// 0x294a8d
// declared property getter: - (id)video;	// 0x294555
@end
