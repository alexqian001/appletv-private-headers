/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CISmoothLinearGradient : CIFilter {
	CIVector *inputPoint0;	// 36 = 0x24
	CIVector *inputPoint1;	// 40 = 0x28
	CIColor *inputColor0;	// 44 = 0x2c
	CIColor *inputColor1;	// 48 = 0x30
}
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x31548c51; S=0x31548c61; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x31548c71; S=0x31548c81; @synthesize
@property(retain, nonatomic) CIVector *inputPoint0;	// G=0x31548c11; S=0x31548c21; @synthesize
@property(retain, nonatomic) CIVector *inputPoint1;	// G=0x31548c31; S=0x31548c41; @synthesize
+ (id)customAttributes;	// 0x31548745
- (id)_kernel;	// 0x31548515
// declared property getter: - (id)inputColor0;	// 0x31548c51
// declared property getter: - (id)inputColor1;	// 0x31548c71
// declared property getter: - (id)inputPoint0;	// 0x31548c11
// declared property getter: - (id)inputPoint1;	// 0x31548c31
- (id)outputImage;	// 0x31548a8d
- (void)setDefaults;	// 0x315489b5
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x31548c61
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x31548c81
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x31548c21
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x31548c41
@end
