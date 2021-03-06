/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSAttributedString.h> // Unknown library


@interface NSAttributedString (NSAttributedStringKitAdditions)
+ (id)_documentTypeForFileType:(id)fileType;	// 0x32510189
+ (id)textFileTypes;	// 0x32515dd5
+ (id)textPasteboardTypes;	// 0x32515dd9
+ (id)textTypes;	// 0x32515dd1
+ (id)textUnfilteredFileTypes;	// 0x32515b89
+ (id)textUnfilteredPasteboardTypes;	// 0x32515dcd
+ (id)textUnfilteredTypes;	// 0x32515b85
+ (id)writableTextFileTypesForDocumentTypes;	// 0x32515ddd
- (id)initWithData:(id)data options:(id)options documentAttributes:(id *)attributes error:(id *)error;	// 0x32511359
- (id)initWithDocFormat:(id)docFormat documentAttributes:(id *)attributes;	// 0x32513ddd
- (id)initWithHTML:(id)html baseURL:(id)url documentAttributes:(id *)attributes;	// 0x325140d5
- (id)initWithHTML:(id)html documentAttributes:(id *)attributes;	// 0x325140b5
- (id)initWithHTML:(id)html options:(id)options documentAttributes:(id *)attributes;	// 0x3251403d
- (id)initWithPath:(id)path documentAttributes:(id *)attributes;	// 0x32513fed
- (id)initWithRTF:(id)rtf documentAttributes:(id *)attributes;	// 0x32513cd9
- (id)initWithRTFD:(id)rtfd documentAttributes:(id *)attributes;	// 0x32513d45
- (id)initWithRTFDFileWrapper:(id)rtfdfileWrapper documentAttributes:(id *)attributes;	// 0x32513db1
- (id)initWithURL:(id)url documentAttributes:(id *)attributes;	// 0x32513fc9
- (id)initWithURL:(id)url options:(id)options documentAttributes:(id *)attributes error:(id *)error;	// 0x32513e49
- (id)RTFDFileWrapperFromRange:(NSRange)range documentAttributes:(id)attributes;	// 0x3251108d
- (id)RTFDFromRange:(NSRange)range documentAttributes:(id)attributes;	// 0x32511009
- (id)RTFFromRange:(NSRange)range documentAttributes:(id)attributes;	// 0x32510f85
- (id)_RTFWithSelector:(SEL)selector range:(NSRange)range documentAttributes:(id)attributes;	// 0x32510f81
- (BOOL)_atEndOfTextTable:(id)textTable atIndex:(unsigned)index;	// 0x32514c39
- (BOOL)_atEndOfTextTableRow:(id)textTableRow atIndex:(unsigned)index;	// 0x32515505
- (BOOL)_atStartOfTextTable:(id)textTable atIndex:(unsigned)index;	// 0x32514a4d
- (BOOL)_atStartOfTextTableRow:(id)textTableRow atIndex:(unsigned)index;	// 0x325152f1
- (id)_documentFromRange:(NSRange)range document:(id)document documentAttributes:(id)attributes subresources:(id *)subresources;	// 0x32511279
- (id)_initWithDOMRange:(id)domrange;	// 0x3251412d
- (id)_initWithRTFSelector:(SEL)rtfselector argument:(id)argument documentAttributes:(id *)attributes;	// 0x32513b4d
- (id)_initWithURLFunnel:(id)urlfunnel options:(id)options documentAttributes:(id *)attributes;	// 0x32513fa5
- (BOOL)_isStringDrawingTextStorage;	// 0x3250ea49
- (unsigned)_lineBreakBeforeIndex:(unsigned)index withinRange:(NSRange)range usesAlternativeBreaker:(BOOL)breaker;	// 0x3250f289
- (NSRange)_rangeOfTextTableRow:(id)textTableRow atIndex:(unsigned)index;	// 0x325152c5
- (NSRange)_rangeOfTextTableRow:(id)textTableRow atIndex:(unsigned)index completeRow:(BOOL *)row;	// 0x32514e55
- (void)_readDocumentFragment:(id)fragment fromRange:(NSRange)range documentAttributes:(id)attributes subresources:(id *)subresources;	// 0x32511195
- (BOOL)containsAttachments;	// 0x32510115
- (id)dataFromRange:(NSRange)range documentAttributes:(id)attributes error:(id *)error;	// 0x32510735
- (id)defaultLanguage;	// 0x3250ea4d
- (id)docFormatFromRange:(NSRange)range documentAttributes:(id)attributes;	// 0x32511111
- (NSRange)doubleClickAtIndex:(unsigned)index;	// 0x3250ea51
- (NSRange)doubleClickAtIndex:(unsigned)index inRange:(NSRange)range;	// 0x3250ea9d
- (id)fileWrapperFromRange:(NSRange)range documentAttributes:(id)attributes error:(id *)error;	// 0x32510b25
- (id)fontAttributesInRange:(NSRange)range;	// 0x325143e5
- (int)itemNumberInTextList:(id)textList atIndex:(unsigned)index;	// 0x32515975
- (unsigned)lineBreakBeforeIndex:(unsigned)index withinRange:(NSRange)range;	// 0x3250f72d
- (unsigned)lineBreakByHyphenatingBeforeIndex:(unsigned)index withinRange:(NSRange)range;	// 0x3250f751
- (unsigned)nextWordFromIndex:(unsigned)index forward:(BOOL)forward;	// 0x3250f8b1
- (NSRange)rangeOfTextBlock:(id)textBlock atIndex:(unsigned)index;	// 0x325144f5
- (NSRange)rangeOfTextList:(id)textList atIndex:(unsigned)index;	// 0x32515735
- (NSRange)rangeOfTextTable:(id)textTable atIndex:(unsigned)index;	// 0x32514735
- (id)rulerAttributesInRange:(NSRange)range;	// 0x32514475
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(NSRange)range;	// 0x325101cd
@end

@interface NSAttributedString (NSStringDrawing)
- (void)drawAtPoint:(CGPoint)point;	// 0x32548ef9
- (void)drawInRect:(CGRect)rect;	// 0x32548f51
- (CGSize)size;	// 0x32548fe1
@end

@interface NSAttributedString (NSExtendedStringDrawing)
- (CGRect)_doBoundingRectWithSize:(CGSize)size options:(int)options context:(id)context baselineOffset:(float *)offset;	// 0x3254b0f9
- (id)_ui_attributedSubstringFromRange:(NSRange)range scaledByScaleFactor:(float)factor;	// 0x3254a7dd
- (CGRect)boundingRectWithSize:(CGSize)size options:(int)options context:(id)context;	// 0x3254a91d
- (void)drawWithRect:(CGRect)rect options:(int)options context:(id)context;	// 0x3254a77d
@end

@interface NSAttributedString (NSAttributedStringAttachmentConveniences)
+ (id)attributedStringWithAttachment:(id)attachment;	// 0x32562e31
@end

