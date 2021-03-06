/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject {
	CGPDFPageRef _cgPage;	// 4 = 0x4
	unsigned _pageNumber;	// 8 = 0x8
	NSString *_stringInReadingOrder;	// 12 = 0xc
	UIPDFSelection *_selection;	// 16 = 0x10
@private
	UIPDFDocument *_document;	// 20 = 0x14
	unsigned _pageIndex;	// 24 = 0x18
}
@property(readonly, assign) CGPDFPageRef CGPage;	// G=0x307e1261; @synthesize=_cgPage
@property(readonly, assign) CGRect cropBox;	// G=0x307e1501; 
@property(readonly, assign) UIPDFDocument *document;	// G=0x307e1231; @synthesize=_document
@property(readonly, assign) unsigned pageIndex;	// G=0x307e1241; @synthesize=_pageIndex
@property(readonly, assign) unsigned pageNumber;	// G=0x307e1251; @synthesize=_pageNumber
@property(retain) UIPDFSelection *selection;	// G=0x307e12f5; S=0x307e12d1; @synthesize=_selection
- (id)initWithCGPDFPage:(CGPDFPageRef)cgpdfpage;	// 0x307e1271
// declared property getter: - (CGPDFPageRef)CGPage;	// 0x307e1261
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned)nsoptions;	// 0x307e120d
// declared property getter: - (CGRect)cropBox;	// 0x307e1501
- (CGRect)cropBoxAccountForRotation;	// 0x307e14e5
- (void)dealloc;	// 0x307e1629
// declared property getter: - (id)document;	// 0x307e1231
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x307e154d
- (id)findString:(id)string fromSelection:(id)selection options:(unsigned)options;	// 0x307e130d
- (CGRect)mediaBox;	// 0x307e14c9
- (CGRect)mediaBoxAccountForRotation;	// 0x307e14ad
// declared property getter: - (unsigned)pageIndex;	// 0x307e1241
// declared property getter: - (unsigned)pageNumber;	// 0x307e1251
- (unsigned)rotation;	// 0x307e1471
// declared property getter: - (id)selection;	// 0x307e12f5
// declared property setter: - (void)setSelection:(id)selection;	// 0x307e12d1
- (CGSize)size;	// 0x307e151d
- (id)string;	// 0x307e1439
@end

