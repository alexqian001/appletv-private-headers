/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceBalance : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputOrigI;	// 40 = 0x28
	NSNumber *inputOrigQ;	// 44 = 0x2c
	NSNumber *inputStrength;	// 48 = 0x30
	NSNumber *inputWarmth;	// 52 = 0x34
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36b594c9; S=0x36b594d9; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigI;	// G=0x36b594e9; S=0x36b594fd; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigQ;	// G=0x36b5950d; S=0x36b59521; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x36b59531; S=0x36b59545; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x36b59555; S=0x36b59569; @synthesize
+ (id)customAttributes;	// 0x36b589c1
- (id)_initFromProperties:(id)properties;	// 0x36b59889
- (BOOL)_isIdentity;	// 0x36b59129
- (id)_kernel;	// 0x36b58f91
- (id)_outputProperties;	// 0x36b59579
// declared property getter: - (id)inputImage;	// 0x36b594c9
// declared property getter: - (id)inputOrigI;	// 0x36b594e9
// declared property getter: - (id)inputOrigQ;	// 0x36b5950d
// declared property getter: - (id)inputStrength;	// 0x36b59531
// declared property getter: - (id)inputWarmth;	// 0x36b59555
- (id)outputImage;	// 0x36b59269
- (void)setDefaults;	// 0x36b58ec1
// declared property setter: - (void)setInputImage:(id)image;	// 0x36b594d9
// declared property setter: - (void)setInputOrigI:(id)i;	// 0x36b594fd
// declared property setter: - (void)setInputOrigQ:(id)q;	// 0x36b59521
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x36b59545
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x36b59569
@end

