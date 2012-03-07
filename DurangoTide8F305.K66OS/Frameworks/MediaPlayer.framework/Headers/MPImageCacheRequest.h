/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSOperation.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPImageCache, MPImageModifier, NSString, UIImage, UIColor;
@protocol MPImageRequestDelegate;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	id<MPImageRequestDelegate> _delegate;	// 20 = 0x14
	UIColor *_fillColor;	// 24 = 0x18
	CGSize _finalSize;	// 28 = 0x1c
	MPImageModifier *_modifier;	// 36 = 0x24
	NSString *_uniqueKey;	// 40 = 0x28
	long long _tag;	// 44 = 0x2c
	int _contentMode;	// 52 = 0x34
	BOOL _decodeOnFetch;	// 56 = 0x38
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x337b6331; S=0x337b6341; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x337b6235; 
@property(copy, nonatomic) id completionHandler;	// G=0x337b6321; S=0x337b68b9; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x337b62b1; S=0x337b62c1; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x337b6291; S=0x337b62a1; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x337b623d; S=0x337b624d; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x337b6311; S=0x337b68e5; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x337b62e1; S=0x337b62f9; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x337b62d1; S=0x337b690d; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x337b6239; 
@property(assign, nonatomic) long long tag;	// G=0x337b626d; S=0x337b627d; @synthesize=_tag
@property(retain, nonatomic) NSString *uniqueKey;	// G=0x337b625d; S=0x337b6935; @synthesize=_uniqueKey
- (id)init;	// 0x337b66b5
- (void)_mainThreadSendErrorToDelegate:(id)delegate;	// 0x337b6421
- (void)_mainThreadSendImageToDelegate:(id)delegate;	// 0x337b6351
- (id)_newBitmapImageFrom:(id)from finalSize:(CGSize)size;	// 0x337b6e09
// declared property getter: - (id)cache;	// 0x337b6331
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x337b6235
- (void)cancel;	// 0x337b64f9
// declared property getter: - (id)completionHandler;	// 0x337b6321
// declared property getter: - (int)contentMode;	// 0x337b62b1
- (id)copyImageFromImage:(id)image;	// 0x337b6c55
- (id)copyRawImageReturningError:(id *)error;	// 0x337b6229
- (void)dealloc;	// 0x337b65c1
// declared property getter: - (BOOL)decodeOnFetch;	// 0x337b6291
// declared property getter: - (id)delegate;	// 0x337b623d
- (id)description;	// 0x337b6641
// declared property getter: - (id)fillColor;	// 0x337b6311
// declared property getter: - (CGSize)finalSize;	// 0x337b62e1
- (void)getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x337b695d
- (unsigned)hash;	// 0x337b65a1
- (BOOL)isEqual:(id)equal;	// 0x337b6535
- (void)main;	// 0x337b6709
// declared property getter: - (id)modifier;	// 0x337b62d1
// declared property getter: - (id)placeholderImage;	// 0x337b6239
- (void)sendErrorToDelegate:(id)delegate;	// 0x337b64c9
- (void)sendImageToDelegate:(id)delegate;	// 0x337b6499
// declared property setter: - (void)setCache:(id)cache;	// 0x337b6341
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x337b68b9
// declared property setter: - (void)setContentMode:(int)mode;	// 0x337b62c1
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x337b62a1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x337b624d
// declared property setter: - (void)setFillColor:(id)color;	// 0x337b68e5
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x337b62f9
// declared property setter: - (void)setModifier:(id)modifier;	// 0x337b690d
// declared property setter: - (void)setTag:(long long)tag;	// 0x337b627d
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x337b6935
// declared property getter: - (long long)tag;	// 0x337b626d
// declared property getter: - (id)uniqueKey;	// 0x337b625d
@end
