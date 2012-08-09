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
@interface CIStraightenFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputAngle;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x352e7625; S=0x352e7639; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x352e75f1; S=0x352e7601; @synthesize
+ (id)customAttributes;	// 0x352e7009
// declared property getter: - (id)inputAngle;	// 0x352e7625
// declared property getter: - (id)inputImage;	// 0x352e75f1
- (id)outputImage;	// 0x352e71e9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x352e7639
// declared property setter: - (void)setInputImage:(id)image;	// 0x352e7601
@end
