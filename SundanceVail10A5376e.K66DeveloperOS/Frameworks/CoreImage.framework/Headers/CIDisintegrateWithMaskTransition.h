/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

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
@property(retain) CIImage *inputImage;	// G=0x3735a0f9; S=0x3735a10d; @synthesize
@property(retain) CIImage *inputMaskImage;	// G=0x3735a141; S=0x3735a155; @synthesize
@property(retain) NSNumber *inputShadowDensity;	// G=0x3735a1ad; S=0x3735a1c1; @synthesize
@property(retain) CIVector *inputShadowOffset;	// G=0x3735a1d1; S=0x3735a1e5; @synthesize
@property(retain) NSNumber *inputShadowRadius;	// G=0x3735a189; S=0x3735a19d; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x3735a11d; S=0x3735a131; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x3735a165; S=0x3735a179; @synthesize
+ (id)customAttributes;	// 0x37359689
- (id)_kernel;	// 0x37359bc1
// declared property getter: - (id)inputImage;	// 0x3735a0f9
// declared property getter: - (id)inputMaskImage;	// 0x3735a141
// declared property getter: - (id)inputShadowDensity;	// 0x3735a1ad
// declared property getter: - (id)inputShadowOffset;	// 0x3735a1d1
// declared property getter: - (id)inputShadowRadius;	// 0x3735a189
// declared property getter: - (id)inputTargetImage;	// 0x3735a11d
// declared property getter: - (id)inputTime;	// 0x3735a165
- (id)outputImage;	// 0x37359e25
- (void)setDefaults;	// 0x37359af1
// declared property setter: - (void)setInputImage:(id)image;	// 0x3735a10d
// declared property setter: - (void)setInputMaskImage:(id)image;	// 0x3735a155
// declared property setter: - (void)setInputShadowDensity:(id)density;	// 0x3735a1c1
// declared property setter: - (void)setInputShadowOffset:(id)offset;	// 0x3735a1e5
// declared property setter: - (void)setInputShadowRadius:(id)radius;	// 0x3735a19d
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x3735a131
// declared property setter: - (void)setInputTime:(id)time;	// 0x3735a179
@end
