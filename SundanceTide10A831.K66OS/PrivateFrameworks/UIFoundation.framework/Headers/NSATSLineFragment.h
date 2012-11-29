/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSATSTypesetter;

__attribute__((visibility("hidden")))
@interface NSATSLineFragment : NSObject {
	void *_line;	// 4 = 0x4
	NSATSTypesetter *_typesetter;	// 8 = 0x8
	NSRange _glyphRange;	// 12 = 0xc
	NSRange _characterRange;	// 20 = 0x14
	float _minPosition;	// 28 = 0x1c
	float _maxPosition;	// 32 = 0x20
	long _elasticCharIndex;	// 36 = 0x24
	float _elasticRangeWidth;	// 40 = 0x28
	unsigned _hyphenGlyph;	// 44 = 0x2c
	float _hyphenGlyphWidth;	// 48 = 0x30
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _isLineArray : 1;
		unsigned _reserved : 28;
	} _flags;	// 52 = 0x34
}
@property(readonly, assign) NSRange characterRange;	// G=0x32c69191; converted property
@property(readonly, assign) NSRange glyphRange;	// G=0x32c69179; converted property
- (id)initWithTypesetter:(id)typesetter;	// 0x32c68591
- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)index lineFragmentWidth:(float)width hyphenate:(BOOL *)hyphenate;	// 0x32c68285
- (id)_copyRenderingContextWithGlyphOrigin:(float)glyphOrigin;	// 0x32c6818d
- (void)_flushCachedObjects;	// 0x32c68151
- (void)_invalidate;	// 0x32c68155
// converted property getter: - (NSRange)characterRange;	// 0x32c69191
- (void)dealloc;	// 0x32c68511
- (void)finalize;	// 0x32c68551
- (void)getTypographicLineHeight:(float *)height baselineOffset:(float *)offset leading:(float *)leading;	// 0x32c692a1
// converted property getter: - (NSRange)glyphRange;	// 0x32c69179
- (BOOL)hasElasticRange;	// 0x32c6afcd
- (void)justifyWithFactor:(float)factor;	// 0x32c6aec5
- (void)layoutForStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index2 minPosition:(float)position maxPosition:(float)position4 lineFragmentRect:(CGRect)rect;	// 0x32c685a1
- (float)lineWidthForType:(int)type;	// 0x32c691a9
- (void)saveMorphedGlyphs:(NSRange *)glyphs;	// 0x32c696e1
- (void)saveWithGlyphOrigin:(float)glyphOrigin;	// 0x32c6a221
@end
