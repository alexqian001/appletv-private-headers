/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSString.h> // Unknown library
#import "UIFoundation-Structs.h"


@interface NSString (NSStringDrawing)
+ (float)defaultBaselineOffsetForFont:(id)font;	// 0x35aba4f5
+ (float)defaultLineHeightForFont:(id)font;	// 0x35aba481
+ (float)hyphenationFactor;	// 0x35aba355
+ (void)setHyphenationFactor:(float)factor;	// 0x35aba2e9
+ (void)setShowsControlCharacters:(BOOL)characters;	// 0x35aba239
+ (void)setShowsInvisibleCharacters:(BOOL)characters;	// 0x35aba189
+ (void)setTypesetterBehavior:(int)behavior;	// 0x35aba3fd
+ (void)setUsesFontLeading:(BOOL)leading;	// 0x35aba039
+ (void)setUsesScreenFonts:(BOOL)fonts;	// 0x35aba101
+ (BOOL)showsControlCharacters;	// 0x35aba2a5
+ (BOOL)showsInvisibleCharacters;	// 0x35aba1f5
+ (int)typesetterBehavior;	// 0x35aba39d
+ (BOOL)usesFontLeading;	// 0x35ab9ff5
+ (BOOL)usesScreenFonts;	// 0x35aba0a5
- (void)cts_drawAtPoint:(CGPoint)point withAttributes:(id)attributes;	// 0x35ab8621
- (void)cts_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x35ab9ec5
- (CGSize)cts_sizeWithAttributes:(id)attributes;	// 0x35ab9f3d
@end

@interface NSString (NSStringDrawingExtension)
- (CGSize)_sizeWithSize:(CGSize)size attributes:(id)attributes;	// 0x35aba569
@end

@interface NSString (NSExtendedStringDrawing)
- (CGRect)cts_boundingRectWithSize:(CGSize)size options:(int)options attributes:(id)attributes;	// 0x35abb58d
- (CGRect)cts_doBoundingRectWithSize:(CGSize)size options:(int)options attributes:(id)attributes;	// 0x35abb631
- (void)cts_drawWithRect:(CGRect)rect options:(int)options attributes:(id)attributes;	// 0x35abb4ed
@end

@interface NSString (NSStringKitExtensions)
- (id)stringWithoutAmpersand;	// 0x35ac13d9
@end

@interface NSString (NSStringTextExtras)
- (unsigned)_endOfParagraphAtIndex:(unsigned)index;	// 0x35ac1b51
- (NSRange)rangeOfGraphicalSegmentAtIndex:(unsigned)index;	// 0x35ac1b81
@end
