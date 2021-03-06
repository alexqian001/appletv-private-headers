/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputBackgroundImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputBackgroundImage;	// G=0x31568525; S=0x31568535; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31568505; S=0x31568515; @synthesize
@property(retain, nonatomic) CIImage *inputMaskImage;	// G=0x31568545; S=0x31568555; @synthesize
+ (id)customAttributes;	// 0x31567c71
- (id)_kernel;	// 0x31567d31
- (id)_kernelNoB;	// 0x31567ee1
- (id)_kernelNoF;	// 0x31568085
// declared property getter: - (id)inputBackgroundImage;	// 0x31568525
// declared property getter: - (id)inputImage;	// 0x31568505
// declared property getter: - (id)inputMaskImage;	// 0x31568545
- (id)outputImage;	// 0x31568229
// declared property setter: - (void)setInputBackgroundImage:(id)image;	// 0x31568535
// declared property setter: - (void)setInputImage:(id)image;	// 0x31568515
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x31568555
@end

