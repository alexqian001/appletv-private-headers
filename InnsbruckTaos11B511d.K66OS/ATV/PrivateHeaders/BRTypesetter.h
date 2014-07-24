/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRTypesetter : XXUnknownSuperclass {
	NSAttributedString *_resolvedString;	// 4 = 0x4
	CTTypesetterRef _setter;	// 8 = 0x8
	NSMutableArray *_lines;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
	CGSize _shadowOffset;	// 24 = 0x18
	CGColorRef _shadowColor;	// 32 = 0x20
	float _shadowBlurAmount;	// 36 = 0x24
	float _flushFactor;	// 40 = 0x28
	BOOL _renderingAttributesFetched;	// 44 = 0x2c
}
+ (id)parseTypographicMarkup:(id)markup;	// 0x45fd49
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x45fff5
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x45f571
- (id)_boxLines:(BOOL *)lines;	// 0x460239
- (void)_justifyLines:(id)lines;	// 0x46041d
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x460619
- (CTLineRef)_truncationToken;	// 0x4606b1
- (void)_updateRenderingAttributes;	// 0x460049
- (void)dealloc;	// 0x45f845
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x45fa09
- (id)lineAtIndex:(long)index;	// 0x45fc51
- (long)numLines;	// 0x45fc31
- (CGSize)typographicBounds;	// 0x45f8d5
@end
