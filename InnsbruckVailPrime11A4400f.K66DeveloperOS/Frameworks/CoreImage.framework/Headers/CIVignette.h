/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIVignette : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputIntensity;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d73bbf9; S=0x2d73bc09; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x2d73bc19; S=0x2d73bc29; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x2d73bc39; S=0x2d73bc49; @synthesize
+ (id)customAttributes;	// 0x2d73b459
- (BOOL)_isIdentity;	// 0x2d73b7b1
- (id)_kernel;	// 0x2d73b7f9
// declared property getter: - (id)inputImage;	// 0x2d73bbf9
// declared property getter: - (id)inputIntensity;	// 0x2d73bc19
// declared property getter: - (id)inputRadius;	// 0x2d73bc39
- (id)outputImage;	// 0x2d73b9b9
- (void)setDefaults;	// 0x2d73b741
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d73bc09
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x2d73bc29
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x2d73bc49
@end

