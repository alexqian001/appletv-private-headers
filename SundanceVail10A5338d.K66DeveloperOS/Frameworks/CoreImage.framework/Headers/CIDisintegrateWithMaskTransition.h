/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIDisintegrateWithMaskTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIImage *inputMaskImage;	// 44 = 0x2c
	NSNumber *inputTime;	// 48 = 0x30
	NSNumber *inputShadowRadius;	// 52 = 0x34
	NSNumber *inputShadowDensity;	// 56 = 0x38
	CIVector *inputShadowOffset;	// 60 = 0x3c
}
@property(retain) CIImage *inputImage;	// G=0x35354301; S=0x35354315; @synthesize
@property(retain) CIImage *inputMaskImage;	// G=0x35354371; S=0x35354385; @synthesize
@property(retain) NSNumber *inputShadowDensity;	// G=0x35354419; S=0x3535442d; @synthesize
@property(retain) CIVector *inputShadowOffset;	// G=0x35354451; S=0x35354465; @synthesize
@property(retain) NSNumber *inputShadowRadius;	// G=0x353543e1; S=0x353543f5; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x35354339; S=0x3535434d; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x353543a9; S=0x353543bd; @synthesize
+ (id)customAttributes;	// 0x35353891
- (id)_kernel;	// 0x35353dc9
// declared property getter: - (id)inputImage;	// 0x35354301
// declared property getter: - (id)inputMaskImage;	// 0x35354371
// declared property getter: - (id)inputShadowDensity;	// 0x35354419
// declared property getter: - (id)inputShadowOffset;	// 0x35354451
// declared property getter: - (id)inputShadowRadius;	// 0x353543e1
// declared property getter: - (id)inputTargetImage;	// 0x35354339
// declared property getter: - (id)inputTime;	// 0x353543a9
- (id)outputImage;	// 0x3535402d
- (void)setDefaults;	// 0x35353cf9
// declared property setter: - (void)setInputImage:(id)image;	// 0x35354315
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x35354385
// declared property setter: - (void)setInputShadowDensity:(id)density;	// 0x3535442d
// declared property setter: - (void)setInputShadowOffset:(id)offset;	// 0x35354465
// declared property setter: - (void)setInputShadowRadius:(id)radius;	// 0x353543f5
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x3535434d
// declared property setter: - (void)setInputTime:(id)time;	// 0x353543bd
@end
