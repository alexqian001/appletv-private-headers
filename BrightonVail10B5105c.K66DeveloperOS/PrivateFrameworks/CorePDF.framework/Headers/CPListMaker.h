/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class CPLayoutArea, CPList, NSArray;

@interface CPListMaker : NSObject <CPDisposable> {
	CPLayoutArea *area;	// 4 = 0x4
	NSArray *spacers;	// 8 = 0x8
	unsigned textLineCount;	// 12 = 0xc
	id *textLines;	// 16 = 0x10
	CPList *list;	// 20 = 0x14
}
+ (void)makeListsInChunk:(id)chunk;	// 0x30251515
+ (void)makeListsInLayoutArea:(id)layoutArea;	// 0x302514b5
+ (void)makeListsInPage:(id)page;	// 0x302515ad
- (id)initWithLayoutArea:(id)layoutArea;	// 0x30250721
- (void)dealloc;	// 0x30250831
- (void)dispose;	// 0x302507cd
- (void)fetchTextLine:(id)line;	// 0x302508b9
- (void)fetchTextLinesInColumn:(id)column;	// 0x30250941
- (void)finalize;	// 0x302507f1
- (BOOL)makeListFrom:(CPListInfo *)from;	// 0x30250e35
- (void)makeListItemFrom:(CPListInfo *)from stopAt:(unsigned)at;	// 0x30250bb1
- (void)makeLists;	// 0x30251431
- (void)makeListsInColumn:(id)column;	// 0x302513bd
@end

