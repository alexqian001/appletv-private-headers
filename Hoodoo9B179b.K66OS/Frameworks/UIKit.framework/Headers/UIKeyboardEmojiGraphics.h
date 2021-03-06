/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphics : NSObject {
@private
	CGRect _imageRect;	// 4 = 0x4
	UIKBThemeRef _categoryTheme;	// 20 = 0x14
	UIKBThemeRef _categorySelectedTheme;	// 24 = 0x18
	UIKBThemeRef _controlTheme;	// 28 = 0x1c
	UIKBThemeRef _controlPressedTheme;	// 32 = 0x20
	UIKBThemeRef _dividerTheme;	// 36 = 0x24
	UIKBThemeRef _darkDividerTheme;	// 40 = 0x28
	UIKBThemeRef _selectedDividerTheme;	// 44 = 0x2c
	UIKBThemeRef _backgroundTheme;	// 48 = 0x30
	CGColorRef _selectedDividerStart;	// 52 = 0x34
	CGColorRef _symbolColor;	// 56 = 0x38
	CGGradientRef _darkDividerGradient;	// 60 = 0x3c
	CGGradientRef _selectedGradient;	// 64 = 0x40
	CGGradientRef _selectedDividerGradient;	// 68 = 0x44
	CGGradientRef _backgroundGradient;	// 72 = 0x48
}
+ (unsigned char)colCount:(BOOL)count;	// 0x33212821
+ (CFDictionaryRef)createEmojiFontAttributes:(BOOL)attributes;	// 0x332125f9
+ (CFDictionaryRef)emojiFontAttributes;	// 0x3321270d
+ (CGSize)emojiSize:(BOOL)size;	// 0x33212791
+ (id)imageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x332105f5
+ (CGPoint)margin:(BOOL)margin;	// 0x33212869
+ (CGPoint)padding:(BOOL)padding;	// 0x332128cd
+ (unsigned char)rowCount:(BOOL)count;	// 0x332127d9
+ (id)sharedInstance;	// 0x3320fcc1
- (id)init;	// 0x3320fbdd
- (id)backgroundGradientGenerator:(id)generator;	// 0x332111e1
- (id)categoryKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x33211f95
- (id)categoryNatureGenerator:(id)generator;	// 0x33210ad9
- (id)categoryObjectsGenerator:(id)generator;	// 0x33210b31
- (id)categoryPeopleGenerator:(id)generator;	// 0x33210a5d
- (id)categoryPlacesGenerator:(id)generator;	// 0x33210b89
- (id)categoryRecentsGenerator:(id)generator;	// 0x33210a05
- (id)categorySymbolsGenerator:(id)generator;	// 0x33210be1
- (id)categoryWithSymbol:(id)symbol pressed:(id)pressed;	// 0x33210879
- (id)controlDeleteGenerator:(id)generator;	// 0x33210f29
- (id)controlDeleteKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x33211e49
- (id)controlDismissKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x33211bd1
- (id)controlInternationalGenerator:(id)generator;	// 0x33210ebd
- (id)controlInternationalKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x33211af9
- (id)controlSpaceKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x33211f21
- (id)controlWithSymbol:(id)symbol corners:(int)corners padding:(CGSize)padding generator:(id)generator;	// 0x33210c39
- (UIKBThemeRef)createProtoThemeForKey:(id)key keyboard:(id)keyboard state:(int)state;	// 0x33211785
- (id)darkDividerGenerator:(id)generator;	// 0x33210839
- (void)dealloc;	// 0x3320fc25
- (id)dividerGenerator:(id)generator;	// 0x33210819
- (id)dividerWithTheme:(UIKBThemeRef)theme;	// 0x332106fd
- (void)drawTopEdgeInContext:(CGContextRef)context withTheme:(UIKBThemeRef)theme;	// 0x33210649
- (id)emojiPressedGenerator:(id)generator rect:(CGRect)rect;	// 0x332113e1
- (id)generateImageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x33210451
- (void)initializeThemes;	// 0x3320fdb5
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size;	// 0x33211aad
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size offset:(CGPoint)offset;	// 0x332119a1
- (id)pageIndicatorCurrentGenerator:(id)generator;	// 0x332111a5
- (id)pageIndicatorGenerator:(id)generator;	// 0x33210f8d
- (id)protoKeyWithDisplayString:(id)displayString;	// 0x3321184d
- (id)protoKeyboard;	// 0x3321191d
- (void)releaseThemes;	// 0x3320fd09
- (id)selectedDividerGenerator:(id)generator;	// 0x33210859
@end

