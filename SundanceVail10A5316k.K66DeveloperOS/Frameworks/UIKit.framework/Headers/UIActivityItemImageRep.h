/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIActivityItemImageRep : NSObject {
@private
	id _thumbnailProvider;	// 4 = 0x4
	id _dataProvider;	// 8 = 0x8
	id _asset;	// 12 = 0xc
}
@property(retain, nonatomic) id asset;	// G=0x304b1a41; S=0x304b1a51; @synthesize=_asset
@property(copy, nonatomic) id dataProvider;	// G=0x304b1a1d; S=0x304b1a31; @synthesize=_dataProvider
@property(copy, nonatomic) id thumbnailProvider;	// G=0x304b19f9; S=0x304b1a0d; @synthesize=_thumbnailProvider
+ (id)activityItemImageRepWithAsset:(id)asset thumbnailProvider:(id)provider dataProvider:(id)provider3;	// 0x304b18dd
// declared property getter: - (id)asset;	// 0x304b1a41
- (id)data;	// 0x304b19e5
// declared property getter: - (id)dataProvider;	// 0x304b1a1d
- (void)dealloc;	// 0x304b1965
// declared property setter: - (void)setAsset:(id)asset;	// 0x304b1a51
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x304b1a31
// declared property setter: - (void)setThumbnailProvider:(id)provider;	// 0x304b1a0d
- (id)thumbnail;	// 0x304b19d1
// declared property getter: - (id)thumbnailProvider;	// 0x304b19f9
@end
