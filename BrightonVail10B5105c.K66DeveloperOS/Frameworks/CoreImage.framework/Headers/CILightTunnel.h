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
@interface CILightTunnel : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRotation;	// 44 = 0x2c
	NSNumber *inputRadius;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x33ccf641; S=0x33ccf655; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33ccf621; S=0x33ccf631; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x33ccf689; S=0x33ccf69d; @synthesize
@property(copy, nonatomic) NSNumber *inputRotation;	// G=0x33ccf665; S=0x33ccf679; @synthesize
+ (id)customAttributes;	// 0x33cce9f9
- (id)_kernel;	// 0x33cced09
// declared property getter: - (id)inputCenter;	// 0x33ccf641
// declared property getter: - (id)inputImage;	// 0x33ccf621
// declared property getter: - (id)inputRadius;	// 0x33ccf689
// declared property getter: - (id)inputRotation;	// 0x33ccf665
- (id)outputImage;	// 0x33ccef51
- (void)setDefaults;	// 0x33cceea1
// declared property setter: - (void)setInputCenter:(id)center;	// 0x33ccf655
// declared property setter: - (void)setInputImage:(id)image;	// 0x33ccf631
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x33ccf69d
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x33ccf679
@end
