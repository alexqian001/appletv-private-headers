/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKControl.h"

@class CAFilter, DPTextLayer, SKImageLayer;

@interface SKButton : SKControl {
	CAFilter *_buttonDownFilter;	// 68 = 0x44
	int _type;	// 72 = 0x48
	BOOL _value;	// 76 = 0x4c
	CGColorRef _bgColor;	// 80 = 0x50
	DPTextLayer *_textLayer;	// 84 = 0x54
	SKImageLayer *_imageLayer;	// 88 = 0x58
	bool isClick;	// 92 = 0x5c
}
@property(retain) id text;	// G=0x34eff235; S=0x34eff255; converted property
@property(assign) BOOL value;	// G=0x34eff301; S=0x34eff311; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x34eff049
- (void)dealloc;	// 0x34eff151
- (void)drawInContext:(CGContextRef)context;	// 0x34eff6b1
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x34eff759
- (BOOL)push;	// 0x34eff2b5
- (void)setBackgroundColor:(CGColorRef)color;	// 0x34eff3b9
- (void)setBounds:(CGRect)bounds;	// 0x34eff1c9
- (void)setButtonType:(int)type;	// 0x34eff369
- (void)setFontColor:(CGColorRef)color;	// 0x34eff295
- (void)setFontSize:(int)size;	// 0x34eff275
- (void)setImage:(id)image;	// 0x34eff3ed
- (void)setImageFrame:(CGRect)frame;	// 0x34eff4e1
// converted property setter: - (void)setText:(id)text;	// 0x34eff255
- (void)setTextBottomJustified:(BOOL)justified;	// 0x34eff4c1
// converted property setter: - (void)setValue:(BOOL)value;	// 0x34eff311
// converted property getter: - (id)text;	// 0x34eff235
// converted property getter: - (BOOL)value;	// 0x34eff301
@end
