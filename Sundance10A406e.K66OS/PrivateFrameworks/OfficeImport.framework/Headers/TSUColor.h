/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface TSUColor : NSObject <NSCopying> {
	CGColorRef mCGColor;	// 4 = 0x4
}
@property(readonly, assign) CGColorRef CGColor;	// G=0x34ed15c5; @synthesize=mCGColor
+ (id)blackColor;	// 0x34ed77e9
+ (id)blueColor;	// 0x3512abe5
+ (id)brownColor;	// 0x3512adb5
+ (id)clearColor;	// 0x34f2fad5
+ (id)colorWithBGR:(unsigned long)bgr;	// 0x350515a1
+ (id)colorWithBGRValue:(long)bgrvalue;	// 0x34eeba91
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue;	// 0x350514ad
+ (id)colorWithBinaryRed:(int)binaryRed green:(int)green blue:(int)blue alpha:(int)alpha;	// 0x350514d1
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x34edf709
+ (id)colorWithCalibratedHue:(float)calibratedHue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x35055b55
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34ed1009
+ (id)colorWithCsColour:(const CsColour *)csColour;	// 0x34f7dfe9
+ (id)colorWithDeviceRed:(float)deviceRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34fa9aa9
+ (id)colorWithEshColor:(const EshColor *)eshColor;	// 0x350ae145
+ (id)colorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x3512a9fd
+ (id)colorWithPatternImage:(id)patternImage;	// 0x34ffef91
+ (id)colorWithRGBBytes:(unsigned char)rgbbytes :(unsigned char)arg2 :(unsigned char)arg3;	// 0x34f235b1
+ (id)colorWithRGBValue:(long)rgbvalue;	// 0x34ffd7d1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34ed1025
+ (id)colorWithSystemColorID:(int)systemColorID;	// 0x34ef40d1
+ (id)colorWithUIColor:(id)uicolor;	// 0x3512aa55
+ (id)colorWithWhite:(float)white alpha:(float)alpha;	// 0x3512a9bd
+ (id)cyanColor;	// 0x3512ac2d
+ (id)grayColor;	// 0x3512aac9
+ (id)greenColor;	// 0x3512ab99
+ (id)lightGrayColor;	// 0x3512ab09
+ (id)magentaColor;	// 0x3512acc9
+ (id)orangeColor;	// 0x3512ad15
+ (id)purpleColor;	// 0x3512ad65
+ (id)randomColor;	// 0x3512aa91
+ (id)redColor;	// 0x3512ab4d
+ (id)stringForColor:(id)color;	// 0x35051849
+ (id)stringForSystemColorID:(int)systemColorID;	// 0x35051621
+ (id)whiteColor;	// 0x34f1feb9
+ (id)yellowColor;	// 0x3512ac79
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x34ed1109
- (id)initWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness alpha:(float)alpha;	// 0x3512ae15
- (id)initWithPatternImage:(id)patternImage;	// 0x34ffefd9
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x34ed1081
- (id)initWithUIColor:(id)uicolor;	// 0x3512ae4d
- (id)initWithWhite:(float)white alpha:(float)alpha;	// 0x34ed782d
// declared property getter: - (CGColorRef)CGColor;	// 0x34ed15c5
- (id)UIColor;	// 0x3512aead
- (float)alphaComponent;	// 0x34ed1601
- (id)blendedColorWithFraction:(float)fraction ofColor:(id)color;	// 0x34f9b7d1
- (float)blueComponent;	// 0x34ed15ed
- (CGColorRef)cgColorRef;	// 0x34fd66dd
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x34edf6c1
- (id)colorWithShadeValue:(double)shadeValue;	// 0x34f9b749
- (id)colorWithTintValue:(double)tintValue;	// 0x34feca2d
- (id)copy;	// 0x34f233e1
- (id)copyWithZone:(NSZone *)zone;	// 0x3512ae7d
- (CsColour)csColour;	// 0x350ae0fd
- (void)dealloc;	// 0x34ed604d
- (EshColor)eshColor;	// 0x350ae1d9
- (void)getRGBBytes:(char *)bytes :(char *)arg2 :(char *)arg3;	// 0x34fad2f9
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3514b6a1
- (id)grayscaleColor;	// 0x3512aee9
- (float)greenComponent;	// 0x34ed15d9
- (unsigned)hash;	// 0x35017ffd
- (id)invertedColor;	// 0x3512afa1
- (BOOL)isBlack;	// 0x34ed8079
- (BOOL)isEqual:(id)equal;	// 0x34f1f041
- (BOOL)isEqualToColor:(id)color;	// 0x34f1f025
- (BOOL)isOpaque;	// 0x3512b0a1
- (float)luminance;	// 0x3512b015
- (id)newSolidColoredBitmap:(CGSize)bitmap;	// 0x350514a5
- (float)p_rgbComponentWithIndex:(unsigned char)index;	// 0x34ed1521
- (void)paintPath:(CGPathRef)path inContext:(CGContextRef)context;	// 0x3512b121
- (void)paintRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x3512b0d5
- (float)redComponent;	// 0x34ed150d
- (void)set;	// 0x34fab3b5
- (id)solidColoredPngImage;	// 0x350514a9
- (unsigned long)toBGR;	// 0x35051559
- (tagRgbQuad)ttColor;	// 0x34ede4d9
@end
