/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock {
@private
	WDTableProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x34cbcd11
- (id)addRow;	// 0x34cbd8b5
- (int)blockType;	// 0x34cc3425
- (id)cellIterator;	// 0x34e13ba9
- (void)clearProperties;	// 0x34e13ccd
- (void)clearRows;	// 0x34e13ca1
- (void)dealloc;	// 0x34c20e71
- (int)nestingLevel;	// 0x34cbf1fd
- (id)newCellIterator;	// 0x34e13b4d
- (id)newRowIterator;	// 0x34e13c09
- (id)newRunIterator;	// 0x34e13a91
- (id)properties;	// 0x34cbd1a9
- (id)rowAt:(int)at;	// 0x34cc3f11
- (int)rowCount;	// 0x34cbdb3d
- (id)rowIterator;	// 0x34e13c4d
- (id)runIterator;	// 0x34e13aed
@end
