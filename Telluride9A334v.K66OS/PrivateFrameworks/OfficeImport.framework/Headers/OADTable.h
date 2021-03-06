/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class OADTableProperties, OADTableGrid, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTable : OADDrawable {
@private
	OADTableProperties *mProperties;	// 24 = 0x18
	OADTableGrid *mGrid;	// 28 = 0x1c
	NSMutableArray *mRows;	// 32 = 0x20
}
- (id)init;	// 0x356a4355
- (id)addRow;	// 0x356bac7d
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x357893f9
- (void)dealloc;	// 0x356a5531
- (id)grid;	// 0x356baacd
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x357894f5
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x35789425
- (id)rowAtIndex:(unsigned)index;	// 0x356bb7ad
- (unsigned)rowCount;	// 0x356bb78d
- (void)setParentTextListStyle:(id)style;	// 0x356bb6e9
- (id)tableProperties;	// 0x356a4631
@end

