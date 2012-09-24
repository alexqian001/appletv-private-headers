/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDTTable, GQDTOverlapCell, GQDTCell;

@interface GQSTable : NSObject {
	GQDTTable *mTable;	// 4 = 0x4
	GQDTOverlapCell *mCurrentOverlapCell;	// 8 = 0x8
	GQDTCell *mLastCellRead;	// 12 = 0xc
	BOOL mIsStreaming;	// 16 = 0x10
	BOOL mAlwaysPutReadCellsInArray;	// 17 = 0x11
	long mCellCount;	// 20 = 0x14
	BOOL mIsCounting;	// 24 = 0x18
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// G=0x3248c051; S=0x3248c061; converted property
@property(retain) id currentOverlapCell;	// G=0x3248bfa5; S=0x3248bfb5; converted property
@property(retain) id lastCellRead;	// G=0x3248bff1; S=0x3248c001; converted property
- (id)initWithStreaming:(BOOL)streaming table:(id)table;	// 0x3248bebd
// converted property getter: - (BOOL)alwaysPutReadCellsInArray;	// 0x3248c051
- (long)column;	// 0x3248c089
// converted property getter: - (id)currentOverlapCell;	// 0x3248bfa5
- (void)dealloc;	// 0x3248bf41
- (void)incrementCellPosition;	// 0x3248c0cd
- (BOOL)isCounting;	// 0x3248c0f1
- (BOOL)isStreaming;	// 0x3248c031
// converted property getter: - (id)lastCellRead;	// 0x3248bff1
- (long)row;	// 0x3248c071
// converted property setter: - (void)setAlwaysPutReadCellsInArray:(BOOL)array;	// 0x3248c061
// converted property setter: - (void)setCurrentOverlapCell:(id)cell;	// 0x3248bfb5
- (void)setIsCountingCount:(BOOL)count;	// 0x3248c0e1
// converted property setter: - (void)setLastCellRead:(id)read;	// 0x3248c001
- (void)skipCells:(long)cells;	// 0x3248c0a5
- (id)table;	// 0x3248c041
@end
