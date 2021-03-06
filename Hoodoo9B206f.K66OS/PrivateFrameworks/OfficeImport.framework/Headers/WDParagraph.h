/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class WDParagraphProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock {
@private
	WDParagraphProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRuns;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x344a6335
- (id)initWithText:(id)text string:(id)string;	// 0x34601f81
- (id)addAnnotation:(int)annotation;	// 0x34601e69
- (id)addBookmark;	// 0x34506bed
- (id)addBookmark:(id)bookmark type:(int)type;	// 0x344c5021
- (id)addCharacterRun;	// 0x344a7ad5
- (id)addDateTime:(id)time;	// 0x34601df9
- (id)addEndnote;	// 0x345497d9
- (id)addFieldMarker;	// 0x344af4d5
- (id)addFieldMarker:(int)marker;	// 0x3450c1f1
- (id)addFootnote;	// 0x344c5789
- (void)addRun:(id)run;	// 0x344b0bc5
- (id)addSpecialCharacter;	// 0x344b6181
- (id)addSymbol;	// 0x3452c5f5
- (int)blockType;	// 0x34406581
- (int)characterCount;	// 0x34601c4d
- (void)clearProperties;	// 0x34601f55
- (void)clearRuns;	// 0x34601ed9
- (void)dealloc;	// 0x34416c01
- (void)insertRun:(id)run atIndex:(unsigned)index;	// 0x34601f29
- (BOOL)isContinuationOf:(id)of;	// 0x344b76bd
- (BOOL)isEmpty;	// 0x34601cf1
- (BOOL)isTextFrame;	// 0x34406585
- (id)newRunIterator;	// 0x34601d61
- (id)properties;	// 0x34406661
- (void)removeLastCharacter:(unsigned short)character;	// 0x344a8491
- (void)removeRun:(id)run;	// 0x34601f05
- (id)runAt:(int)at;	// 0x34405811
- (int)runCount;	// 0x34405b3d
- (id)runIterator;	// 0x34601da5
- (id)runs;	// 0x34601c3d
@end

