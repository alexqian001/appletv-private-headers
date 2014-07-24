/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRHorizontalDividerControl : BRControl {
	NSAttributedString *_label;	// 84 = 0x54
	float _alignmentFactor;	// 88 = 0x58
	float _startOffset;	// 92 = 0x5c
	float _endOffset;	// 96 = 0x60
	BOOL _drawsLine;	// 100 = 0x64
	float _startOffsetText;	// 104 = 0x68
	int _heightStyle;	// 108 = 0x6c
}
@property(assign) BOOL drawsLine;	// G=0x328161; S=0x328151; converted property
@property(assign) int heightStyle;	// G=0x3281dd; S=0x3281bd; converted property
@property(retain) NSAttributedString *label;	// G=0x327bc9; S=0x327af9; converted property
- (id)init;	// 0x327a19
- (id)accessibilityLabel;	// 0x3281ed
- (void)dealloc;	// 0x327aad
- (void)drawRect:(CGRect)rect;	// 0x327d89
// converted property getter: - (BOOL)drawsLine;	// 0x328161
// converted property getter: - (int)heightStyle;	// 0x3281dd
- (BOOL)isAccessibilityElement;	// 0x32823d
// converted property getter: - (id)label;	// 0x327bc9
- (float)recommendedHeight;	// 0x327cf1
- (void)setAlignmentFactor:(float)factor;	// 0x327be9
// converted property setter: - (void)setDrawsLine:(BOOL)line;	// 0x328151
- (void)setEndOffset:(float)offset;	// 0x327c81
// converted property setter: - (void)setHeightStyle:(int)style;	// 0x3281bd
// converted property setter: - (void)setLabel:(id)label;	// 0x327af9
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x327b49
- (void)setStartOffset:(float)offset;	// 0x327c35
- (void)setStartOffsetText:(float)text;	// 0x328171
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x327ccd
@end
