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
@property(retain, nonatomic) BRImage *image;	// G=0x196d91; S=0x196c81; 
@property(retain, nonatomic) id<BRImageProxy> imageProxy;	// G=0x196f15; S=0x196db1; 
@property(readonly, assign) BOOL isReady;	// G=0x196c71; converted property
@property(retain, nonatomic) BRImage *logoImage;	// G=0x196fc1; S=0x196f35; 
@property(retain, nonatomic) id<BRImageProxy> logoImageProxy;	// G=0x19706d; S=0x196fe1; 
@property(copy, nonatomic) NSString *text1;	// G=0x1970ad; S=0x19708d; 
@property(copy, nonatomic) NSString *text2;	// G=0x1970ed; S=0x1970cd; 
@property(copy, nonatomic) NSString *text3;	// G=0x19712d; S=0x19710d; 
- (id)init;	// 0x196a89
- (void)_imageReady:(id)ready;	// 0x197291
- (void)dealloc;	// 0x196b69
- (void)getReady;	// 0x196c21
// declared property getter: - (id)image;	// 0x196d91
// declared property getter: - (id)imageProxy;	// 0x196f15
// converted property getter: - (BOOL)isReady;	// 0x196c71
- (void)layoutSubcontrols;	// 0x19714d
// declared property getter: - (id)logoImage;	// 0x196fc1
// declared property getter: - (id)logoImageProxy;	// 0x19706d
// declared property setter: - (void)setImage:(id)image;	// 0x196c81
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x196db1
// declared property setter: - (void)setLogoImage:(id)image;	// 0x196f35
// declared property setter: - (void)setLogoImageProxy:(id)proxy;	// 0x196fe1
// declared property setter: - (void)setText1:(id)a1;	// 0x19708d
// declared property setter: - (void)setText2:(id)a2;	// 0x1970cd
// declared property setter: - (void)setText3:(id)a3;	// 0x19710d
// declared property getter: - (id)text1;	// 0x1970ad
// declared property getter: - (id)text2;	// 0x1970ed
// declared property getter: - (id)text3;	// 0x19712d
@end

