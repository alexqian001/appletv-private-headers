/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

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
@property(assign) BOOL drawsLine;	// G=0x2cd14d; S=0x2cd13d; converted property
@property(assign) int heightStyle;	// G=0x2cd1c9; S=0x2cd1a9; converted property
@property(retain) NSAttributedString *label;	// G=0x2ccbd5; S=0x2ccb05; converted property
- (id)init;	// 0x2cca25
- (id)accessibilityLabel;	// 0x2cd1d9
- (void)dealloc;	// 0x2ccab9
- (void)drawRect:(CGRect)rect;	// 0x2ccd95
// converted property getter: - (BOOL)drawsLine;	// 0x2cd14d
// converted property getter: - (int)heightStyle;	// 0x2cd1c9
- (BOOL)isAccessibilityElement;	// 0x2cd229
// converted property getter: - (id)label;	// 0x2ccbd5
- (float)recommendedHeight;	// 0x2cccfd
- (void)setAlignmentFactor:(float)factor;	// 0x2ccbf5
// converted property setter: - (void)setDrawsLine:(BOOL)line;	// 0x2cd13d
- (void)setEndOffset:(float)offset;	// 0x2ccc8d
// converted property setter: - (void)setHeightStyle:(int)style;	// 0x2cd1a9
// converted property setter: - (void)setLabel:(id)label;	// 0x2ccb05
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x2ccb55
- (void)setStartOffset:(float)offset;	// 0x2ccc41
- (void)setStartOffsetText:(float)text;	// 0x2cd15d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2cccd9
@end
