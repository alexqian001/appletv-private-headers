/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRAsyncImageControl, BRImage, BRReflectionControl, ATVFlagstaffPreviewImageOverLay, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImage : BRControl <BRReady> {
@private
	BRAsyncImageControl *_imageControl;	// 48 = 0x30
	BRAsyncImageControl *_logoImageControl;	// 52 = 0x34
	BRReflectionControl *_reflectionControl;	// 56 = 0x38
	ATVFlagstaffPreviewImageOverLay *_overLayControl;	// 60 = 0x3c
	BOOL _isReady;	// 64 = 0x40
}
@property(retain, nonatomic) BRImage *image;	// G=0x341605f5; S=0x341604d9; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x34160785; S=0x34160615; 
@property(readonly, assign) BOOL isReady;	// G=0x341604c9; converted property
@property(retain, nonatomic) BRImage *logoImage;	// G=0x34160835; S=0x341607a5; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x341608e5; S=0x34160855; 
@property(copy, nonatomic) NSString *text1;	// G=0x34160925; S=0x34160905; 
@property(copy, nonatomic) NSString *text2;	// G=0x34160965; S=0x34160945; 
@property(copy, nonatomic) NSString *text3;	// G=0x341609a5; S=0x34160985; 
- (id)init;	// 0x341602e5
- (void)_imageReady:(id)ready;	// 0x34160aed
- (void)dealloc;	// 0x341603c5
- (void)getReady;	// 0x3416047d
// declared property getter: - (id)image;	// 0x341605f5
// declared property getter: - (id)imageProxy;	// 0x34160785
// converted property getter: - (BOOL)isReady;	// 0x341604c9
- (void)layoutSubcontrols;	// 0x341609c5
// declared property getter: - (id)logoImage;	// 0x34160835
// declared property getter: - (id)logoImageProxy;	// 0x341608e5
// declared property setter: - (void)setImage:(id)image;	// 0x341604d9
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x34160615
// declared property setter: - (void)setLogoImage:(id)image;	// 0x341607a5
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x34160855
// declared property setter: - (void)setText1:(id)a1;	// 0x34160905
// declared property setter: - (void)setText2:(id)a2;	// 0x34160945
// declared property setter: - (void)setText3:(id)a3;	// 0x34160985
// declared property getter: - (id)text1;	// 0x34160925
// declared property getter: - (id)text2;	// 0x34160965
// declared property getter: - (id)text3;	// 0x341609a5
@end

