/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSValue, CIImage;

__attribute__((visibility("hidden")))
@interface CIAffineTile : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSValue *inputTransform;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31568fc9; S=0x31568fd9; @synthesize
@property(copy, nonatomic) NSValue *inputTransform;	// G=0x31568fe9; S=0x31568ffd; @synthesize
+ (id)customAttributes;	// 0x31568dd5
// declared property getter: - (id)inputImage;	// 0x31568fc9
// declared property getter: - (id)inputTransform;	// 0x31568fe9
- (id)outputImage;	// 0x31568f35
// declared property setter: - (void)setInputImage:(id)image;	// 0x31568fd9
// declared property setter: - (void)setInputTransform:(id)transform;	// 0x31568ffd
@end
