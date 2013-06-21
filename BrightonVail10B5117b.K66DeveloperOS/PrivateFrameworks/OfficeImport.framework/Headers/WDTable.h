/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
	WDTableProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x34acb081
- (id)addRow;	// 0x34acb659
- (int)blockType;	// 0x34adcce9
- (id)cellIterator;	// 0x34c93879
- (void)clearProperties;	// 0x34c93789
- (void)clearRows;	// 0x34c937b5
- (void)dealloc;	// 0x34ae2d5d
- (int)nestingLevel;	// 0x34b2aea1
- (id)newCellIterator;	// 0x34c938d9
- (id)newRowIterator;	// 0x34c93835
- (id)newRunIterator;	// 0x34c93995
- (id)properties;	// 0x34acb4d1
- (id)rowAt:(int)at;	// 0x34addac1
- (int)rowCount;	// 0x34accf61
- (id)rowIterator;	// 0x34c937e1
- (id)runIterator;	// 0x34c93935
@end
