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
@interface BRStrokeAndFillTextControl : BRControl {
	NSAttributedString *_attributedString;	// 84 = 0x54
	float _strokeWidth;	// 88 = 0x58
	CGColorRef _strokeColor;	// 92 = 0x5c
}
@property(copy) NSAttributedString *attributedString;	// G=0x310201; S=0x310211; @synthesize=_attributedString
@property(retain) CGColorRef strokeColor;	// G=0x3105d1; S=0x3105e5; @synthesize=_strokeColor
@property(assign) float strokeWidth;	// G=0x3105a5; S=0x3105b9; @synthesize=_strokeWidth
// declared property getter: - (id)attributedString;	// 0x310201
- (void)dealloc;	// 0x3101a1
- (void)drawRect:(CGRect)rect;	// 0x310269
// declared property setter: - (void)setAttributedString:(id)string;	// 0x310211
// declared property setter: - (void)setStrokeColor:(CGColorRef)color;	// 0x3105e5
// declared property setter: - (void)setStrokeWidth:(float)width;	// 0x3105b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x310079
// declared property getter: - (CGColorRef)strokeColor;	// 0x3105d1
// declared property getter: - (float)strokeWidth;	// 0x3105a5
@end
