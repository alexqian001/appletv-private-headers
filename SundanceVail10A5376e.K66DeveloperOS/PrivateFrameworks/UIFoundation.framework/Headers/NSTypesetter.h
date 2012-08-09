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
@property(retain) id attributedString;	// G=0x36c4041d; S=0x36c403ed; converted property
@property(assign) BOOL bidiProcessingEnabled;	// G=0x36c40311; S=0x36c40341; converted property
@property(assign) float hyphenationFactor;	// G=0x36c4006d; S=0x36c40099; converted property
@property(assign) float lineFragmentPadding;	// G=0x36c400d9; S=0x36c40109; converted property
@property(assign) float tightenThresholdForTruncation;	// G=0x36c40381; S=0x36c403ad; converted property
@property(assign) int typesetterBehavior;	// G=0x36c40005; S=0x36c40035; converted property
@property(assign) BOOL usesFontLeading;	// G=0x36c3ff95; S=0x36c3ffc5; converted property
+ (BOOL)_usesATSTypesetter;	// 0x36c3f6b5
+ (int)defaultStringDrawingTypesetterBehavior;	// 0x36c3f6dd
+ (int)defaultTypesetterBehavior;	// 0x36c3f6cd
+ (void)initialize;	// 0x36c3f4b9
+ (id)sharedSystemTypesetter;	// 0x36c3f709
+ (id)sharedSystemTypesetterForBehavior:(int)behavior;	// 0x36c3f6ed
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x36c3f725
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x36c3ff15
- (id)_ellipsisFontForFont:(id)font;	// 0x36c3ff31
- (BOOL)_forceOriginalFontBaseline;	// 0x36c3f871
- (XXStruct__MnFEB *)_getAuxData;	// 0x36c3f745
- (unsigned)_getRemainingNominalParagraphRange:(NSRange *)range andParagraphSeparatorRange:(NSRange *)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;	// 0x36c3f8e1
- (void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned *)index5 nextCharacterIndex:(unsigned *)index6;	// 0x36c4141d
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x36c3ff0d
- (void)_setForceOriginalFontBaseline:(BOOL)baseline;	// 0x36c3f8a1
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x36c3ff11
- (void)_updateParagraphStyleCache:(id)cache;	// 0x36c3fd15
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x36c4135d
// converted property getter: - (id)attributedString;	// 0x36c4041d
- (id)attributesForExtraLineFragment;	// 0x36c41311
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x36c43679
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x36c40789
- (void)beginParagraph;	// 0x36c40675
// converted property getter: - (BOOL)bidiProcessingEnabled;	// 0x36c40311
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x36c43961
- (id)currentParagraphStyle;	// 0x36c40a09
- (id)currentTextContainer;	// 0x36c409d9
- (void)dealloc;	// 0x36c3f7b5
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x36c44a45
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x36c40819
- (void)endParagraph;	// 0x36c40751
- (void)finalize;	// 0x36c3f829
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x36c43ac1
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;	// 0x36c40a71
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x36c43b11
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x36c43a11
// converted property getter: - (float)hyphenationFactor;	// 0x36c4006d
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x36c449c9
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x36c4359d
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x36c43541
- (id)layoutManager;	// 0x36c40979
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x36c40625
// converted property getter: - (float)lineFragmentPadding;	// 0x36c400d9
- (float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x36c40889
- (NSRange)paragraphCharacterRange;	// 0x36c405b5
- (NSRange)paragraphGlyphRange;	// 0x36c40545
- (NSRange)paragraphSeparatorCharacterRange;	// 0x36c405ed
- (NSRange)paragraphSeparatorGlyphRange;	// 0x36c4057d
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x36c40949
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x36c40909
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x36c44c79
// converted property setter: - (void)setAttributedString:(id)string;	// 0x36c403ed
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x36c44cd9
// converted property setter: - (void)setBidiProcessingEnabled:(BOOL)enabled;	// 0x36c40341
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x36c44b51
- (void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;	// 0x36c40a39
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x36c40099
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x36c40109
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x36c44889
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x36c44bed
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x36c44ab5
- (void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;	// 0x36c4044d
// converted property setter: - (void)setTightenThresholdForTruncation:(float)truncation;	// 0x36c403ad
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x36c40035
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x36c3ffc5
- (id)substituteFontForFont:(id)font;	// 0x36c40149
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x36c44961
- (id)textContainers;	// 0x36c409a9
- (id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;	// 0x36c4017d
// converted property getter: - (float)tightenThresholdForTruncation;	// 0x36c40381
// converted property getter: - (int)typesetterBehavior;	// 0x36c40005
// converted property getter: - (BOOL)usesFontLeading;	// 0x36c3ff95
@end
