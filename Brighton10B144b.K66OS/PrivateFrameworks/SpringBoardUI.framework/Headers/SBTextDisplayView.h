/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class NSString, UIFont, UIColor;

@interface SBTextDisplayView : UIView {
	NSString *_text;	// 84 = 0x54
	UIFont *_font;	// 88 = 0x58
	UIColor *_fontColor;	// 92 = 0x5c
}
- (id)initWithWidth:(float)width font:(id)font fontColor:(id)color;	// 0x35475521
- (id)_scriptingInfo;	// 0x354758b9
- (void)_updateText;	// 0x35475631
- (void)dealloc;	// 0x354755b9
- (void)drawRect:(CGRect)rect;	// 0x35475809
- (void)setFont:(id)font;	// 0x35475759
- (void)setFontColor:(id)color;	// 0x354757b1
- (void)setText:(id)text;	// 0x35475701
@end
