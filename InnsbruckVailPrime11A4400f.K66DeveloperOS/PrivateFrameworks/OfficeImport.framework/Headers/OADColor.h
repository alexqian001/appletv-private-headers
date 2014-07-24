/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x316dac09; S=0x316d0415; converted property
+ (float)alphaWithColor:(id)color;	// 0x317166e9
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x31715f31
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x317809d5
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x31716129
+ (id)rgbColorWithColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x31715ed1
+ (id)tsuColorWithColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x31715e15
+ (id)tsuColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x318ed1dd
+ (id)tsuColorWithRgbColor:(id)rgbColor;	// 0x318ed219
- (void)addTransform:(id)transform;	// 0x317815fd
- (void)addTransformOfType:(int)type;	// 0x318ed179
- (void)addTransformOfType:(int)type value:(float)value;	// 0x3186cf09
- (id)colorForStyleColor:(id)styleColor;	// 0x3180eb1d
- (id)copyWithZone:(NSZone *)zone;	// 0x318ed175
- (void)dealloc;	// 0x316b12cd
- (unsigned)hash;	// 0x316dab0d
- (BOOL)isEqual:(id)equal;	// 0x316dab2d
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x316d0415
// converted property getter: - (id)transforms;	// 0x316dac09
@end
