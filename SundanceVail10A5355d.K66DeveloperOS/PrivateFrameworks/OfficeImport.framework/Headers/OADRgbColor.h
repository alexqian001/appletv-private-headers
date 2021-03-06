/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


@interface OADRgbColor : OADColor {
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)black;	// 0x31b87225
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x31dcc289
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x31dcc2e5
+ (id)rgbColorWithTSUColor:(id)tsucolor;	// 0x31dcc5e5
+ (id)rgbColorWithWhite:(float)white;	// 0x31dcc3b1
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x31dcc471
+ (id)white;	// 0x31c061b5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x31b87279
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x31ba12e5
- (id)initWithWhite:(float)white;	// 0x31dcc341
- (id)initWithWhiteByte:(float)whiteByte;	// 0x31dcc3f9
- (float)blue;	// 0x31bfaf71
- (unsigned char)blueByte;	// 0x31bf2889
- (id)copyWithZone:(NSZone *)zone;	// 0x31cdd795
- (float)green;	// 0x31bfaf61
- (unsigned char)greenByte;	// 0x31bf282d
- (unsigned)hash;	// 0x31bf275d
- (BOOL)isEqual:(id)equal;	// 0x31bef441
- (float)red;	// 0x31bfaf51
- (unsigned char)redByte;	// 0x31bf27d1
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x31dcc4b9
@end

