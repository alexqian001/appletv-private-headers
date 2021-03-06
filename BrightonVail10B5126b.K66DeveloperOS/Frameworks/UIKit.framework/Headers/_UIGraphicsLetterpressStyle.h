/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
	UIColor *embossHighlightColor;	// 4 = 0x4
	UIColor *embossShadowColor;	// 8 = 0x8
	float embossSize;	// 12 = 0xc
	UIColor *innerShadowColor;	// 16 = 0x10
	CGPoint innerShadowOffset;	// 20 = 0x14
	float innerShadowBlur;	// 28 = 0x1c
	int innerShadowBlendMode;	// 32 = 0x20
	UIColor *outerShadowColor;	// 36 = 0x24
	CGPoint outerShadowOffset;	// 40 = 0x28
	float outerShadowBlur;	// 48 = 0x30
	int outerShadowBlendMode;	// 52 = 0x34
	UIColor *topGradientColor;	// 56 = 0x38
	UIColor *bottomGradientColor;	// 60 = 0x3c
	float innerOpacity;	// 64 = 0x40
}
@property(retain, nonatomic) UIColor *bottomGradientColor;	// G=0x32c7af31; S=0x32c79cf1; @synthesize
@property(readonly, assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x32cbb939; 
@property(retain, nonatomic) UIColor *embossHighlightColor;	// G=0x32c7ad01; S=0x32c885c1; @synthesize
@property(retain, nonatomic) UIColor *embossShadowColor;	// G=0x32c7ae79; S=0x32c885d1; @synthesize
@property(assign, nonatomic) float embossSize;	// G=0x32c7ae89; S=0x32c885e1; @synthesize
@property(assign, nonatomic) float innerOpacity;	// G=0x32c7af41; S=0x32c79d01; @synthesize
@property(assign, nonatomic) int innerShadowBlendMode;	// G=0x32cbbbd5; S=0x32c885f5; @synthesize
@property(assign, nonatomic) float innerShadowBlur;	// G=0x32c7aef5; S=0x32c79c7d; @synthesize
@property(retain, nonatomic) UIColor *innerShadowColor;	// G=0x32c7ad11; S=0x32c79c69; @synthesize
@property(assign, nonatomic) CGPoint innerShadowOffset;	// G=0x32c7aed9; S=0x32c79c91; @synthesize
@property(assign, nonatomic) int outerShadowBlendMode;	// G=0x32cbbbe9; S=0x32c88609; @synthesize
@property(assign, nonatomic) float outerShadowBlur;	// G=0x32c7af21; S=0x32c79cb9; @synthesize
@property(retain, nonatomic) UIColor *outerShadowColor;	// G=0x32c7ad25; S=0x32c79ca5; @synthesize
@property(assign, nonatomic) CGPoint outerShadowOffset;	// G=0x32c7af05; S=0x32c79ccd; @synthesize
@property(retain, nonatomic) UIColor *topGradientColor;	// G=0x32c7acf1; S=0x32c79ce1; @synthesize
+ (id)defaultLetterpressStyle;	// 0x32c88591
+ (id)old2xLetterpressStyle;	// 0x32cbb241
// declared property getter: - (id)bottomGradientColor;	// 0x32c7af31
- (id)copyWithZone:(NSZone *)zone;	// 0x32cbb455
- (void)dealloc;	// 0x32c7af51
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x32cbb939
// declared property getter: - (id)embossHighlightColor;	// 0x32c7ad01
// declared property getter: - (id)embossShadowColor;	// 0x32c7ae79
// declared property getter: - (float)embossSize;	// 0x32c7ae89
// declared property getter: - (float)innerOpacity;	// 0x32c7af41
// declared property getter: - (int)innerShadowBlendMode;	// 0x32cbbbd5
// declared property getter: - (float)innerShadowBlur;	// 0x32c7aef5
// declared property getter: - (id)innerShadowColor;	// 0x32c7ad11
// declared property getter: - (CGPoint)innerShadowOffset;	// 0x32c7aed9
- (BOOL)isEqual:(id)equal;	// 0x32cbb5ed
// declared property getter: - (int)outerShadowBlendMode;	// 0x32cbbbe9
// declared property getter: - (float)outerShadowBlur;	// 0x32c7af21
// declared property getter: - (id)outerShadowColor;	// 0x32c7ad25
// declared property getter: - (CGPoint)outerShadowOffset;	// 0x32c7af05
// declared property setter: - (void)setBottomGradientColor:(id)color;	// 0x32c79cf1
// declared property setter: - (void)setEmbossHighlightColor:(id)color;	// 0x32c885c1
// declared property setter: - (void)setEmbossShadowColor:(id)color;	// 0x32c885d1
// declared property setter: - (void)setEmbossSize:(float)size;	// 0x32c885e1
// declared property setter: - (void)setInnerOpacity:(float)opacity;	// 0x32c79d01
// declared property setter: - (void)setInnerShadowBlendMode:(int)mode;	// 0x32c885f5
// declared property setter: - (void)setInnerShadowBlur:(float)blur;	// 0x32c79c7d
// declared property setter: - (void)setInnerShadowColor:(id)color;	// 0x32c79c69
// declared property setter: - (void)setInnerShadowOffset:(CGPoint)offset;	// 0x32c79c91
// declared property setter: - (void)setOuterShadowBlendMode:(int)mode;	// 0x32c88609
// declared property setter: - (void)setOuterShadowBlur:(float)blur;	// 0x32c79cb9
// declared property setter: - (void)setOuterShadowColor:(id)color;	// 0x32c79ca5
// declared property setter: - (void)setOuterShadowOffset:(CGPoint)offset;	// 0x32c79ccd
// declared property setter: - (void)setTopGradientColor:(id)color;	// 0x32c79ce1
// declared property getter: - (id)topGradientColor;	// 0x32c7acf1
@end

