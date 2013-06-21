/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRReflectionControl, ATVFlagstaffPreviewImageOverLay, BRImage, NSString, BRAsyncImageControl;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImage : BRControl <BRReady> {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRAsyncImageControl *_logoImageControl;	// 88 = 0x58
	BRReflectionControl *_reflectionControl;	// 92 = 0x5c
	ATVFlagstaffPreviewImageOverLay *_overLayControl;	// 96 = 0x60
	BOOL _isReady;	// 100 = 0x64
}
@property(retain, nonatomic) BRImage *image;	// G=0x19c449; S=0x19c339; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x19c5cd; S=0x19c469; 
@property(readonly, assign) BOOL isReady;	// G=0x19c329; converted property
@property(retain, nonatomic) BRImage *logoImage;	// G=0x19c679; S=0x19c5ed; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x19c725; S=0x19c699; 
@property(copy, nonatomic) NSString *text1;	// G=0x19c765; S=0x19c745; 
@property(copy, nonatomic) NSString *text2;	// G=0x19c7a5; S=0x19c785; 
@property(copy, nonatomic) NSString *text3;	// G=0x19c7e5; S=0x19c7c5; 
- (id)init;	// 0x19c141
- (void)_imageReady:(id)ready;	// 0x19c949
- (void)dealloc;	// 0x19c221
- (void)getReady;	// 0x19c2d9
// declared property getter: - (id)image;	// 0x19c449
// declared property getter: - (id)imageProxy;	// 0x19c5cd
// converted property getter: - (BOOL)isReady;	// 0x19c329
- (void)layoutSubcontrols;	// 0x19c805
// declared property getter: - (id)logoImage;	// 0x19c679
// declared property getter: - (id)logoImageProxy;	// 0x19c725
// declared property setter: - (void)setImage:(id)image;	// 0x19c339
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x19c469
// declared property setter: - (void)setLogoImage:(id)image;	// 0x19c5ed
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x19c699
// declared property setter: - (void)setText1:(id)a1;	// 0x19c745
// declared property setter: - (void)setText2:(id)a2;	// 0x19c785
// declared property setter: - (void)setText3:(id)a3;	// 0x19c7c5
// declared property getter: - (id)text1;	// 0x19c765
// declared property getter: - (id)text2;	// 0x19c7a5
// declared property getter: - (id)text3;	// 0x19c7e5
@end
