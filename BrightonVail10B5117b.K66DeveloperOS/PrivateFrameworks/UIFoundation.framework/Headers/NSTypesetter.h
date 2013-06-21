/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"


@interface NSTypesetter : NSObject {
	void *_reserved;	// 4 = 0x4
}
@property(retain) id attributedString;	// G=0x35caa45d; S=0x35caa42d; converted property
@property(assign) BOOL bidiProcessingEnabled;	// G=0x35caa351; S=0x35caa381; converted property
@property(assign) float hyphenationFactor;	// G=0x35caa0ad; S=0x35caa0d9; converted property
@property(assign) float lineFragmentPadding;	// G=0x35caa119; S=0x35caa149; converted property
@property(assign) float tightenThresholdForTruncation;	// G=0x35caa3c1; S=0x35caa3ed; converted property
@property(assign) int typesetterBehavior;	// G=0x35caa045; S=0x35caa075; converted property
@property(assign) BOOL usesFontLeading;	// G=0x35ca9fd5; S=0x35caa005; converted property
+ (BOOL)_usesATSTypesetter;	// 0x35ca96f5
+ (int)defaultStringDrawingTypesetterBehavior;	// 0x35ca971d
+ (int)defaultTypesetterBehavior;	// 0x35ca970d
+ (void)initialize;	// 0x35ca94f9
+ (id)sharedSystemTypesetter;	// 0x35ca9749
+ (id)sharedSystemTypesetterForBehavior:(int)behavior;	// 0x35ca972d
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x35ca9765
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x35ca9f55
- (id)_ellipsisFontForFont:(id)font;	// 0x35ca9f71
- (BOOL)_forceOriginalFontBaseline;	// 0x35ca98b1
- (XXStruct__MnFEB *)_getAuxData;	// 0x35ca9785
- (unsigned)_getRemainingNominalParagraphRange:(NSRange *)range andParagraphSeparatorRange:(NSRange *)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;	// 0x35ca9921
- (void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned *)index5 nextCharacterIndex:(unsigned *)index6;	// 0x35cab45d
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x35ca9f4d
- (void)_setForceOriginalFontBaseline:(BOOL)baseline;	// 0x35ca98e1
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x35ca9f51
- (void)_updateParagraphStyleCache:(id)cache;	// 0x35ca9d55
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x35cab39d
// converted property getter: - (id)attributedString;	// 0x35caa45d
- (id)attributesForExtraLineFragment;	// 0x35cab351
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x35cad6b9
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x35caa7c9
- (void)beginParagraph;	// 0x35caa6b5
// converted property getter: - (BOOL)bidiProcessingEnabled;	// 0x35caa351
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x35cad9a1
- (id)currentParagraphStyle;	// 0x35caaa49
- (id)currentTextContainer;	// 0x35caaa19
- (void)dealloc;	// 0x35ca97f5
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x35caea85
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x35caa859
- (void)endParagraph;	// 0x35caa791
- (void)finalize;	// 0x35ca9869
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x35cadb01
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;	// 0x35caaab1
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x35cadb51
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x35cada51
// converted property getter: - (float)hyphenationFactor;	// 0x35caa0ad
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x35caea09
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x35cad5dd
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x35cad581
- (id)layoutManager;	// 0x35caa9b9
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x35caa665
// converted property getter: - (float)lineFragmentPadding;	// 0x35caa119
- (float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x35caa8c9
- (NSRange)paragraphCharacterRange;	// 0x35caa5f5
- (NSRange)paragraphGlyphRange;	// 0x35caa585
- (NSRange)paragraphSeparatorCharacterRange;	// 0x35caa62d
- (NSRange)paragraphSeparatorGlyphRange;	// 0x35caa5bd
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x35caa989
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x35caa949
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x35caecb9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x35caa42d
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x35caed19
// converted property setter: - (void)setBidiProcessingEnabled:(BOOL)enabled;	// 0x35caa381
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x35caeb91
- (void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;	// 0x35caaa79
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x35caa0d9
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x35caa149
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x35cae8c9
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x35caec2d
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x35caeaf5
- (void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;	// 0x35caa48d
// converted property setter: - (void)setTightenThresholdForTruncation:(float)truncation;	// 0x35caa3ed
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x35caa075
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x35caa005
- (id)substituteFontForFont:(id)font;	// 0x35caa189
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x35cae9a1
- (id)textContainers;	// 0x35caa9e9
- (id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;	// 0x35caa1bd
// converted property getter: - (float)tightenThresholdForTruncation;	// 0x35caa3c1
// converted property getter: - (int)typesetterBehavior;	// 0x35caa045
// converted property getter: - (BOOL)usesFontLeading;	// 0x35ca9fd5
@end
