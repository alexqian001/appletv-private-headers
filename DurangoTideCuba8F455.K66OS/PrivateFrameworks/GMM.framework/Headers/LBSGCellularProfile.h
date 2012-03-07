/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, LBSGCell;

@interface LBSGCellularProfile : PBCodable {
@private
	LBSGCell *_primaryCell;	// 4 = 0x4
	long long _timestamp;	// 8 = 0x8
	NSMutableArray *_neighborss;	// 16 = 0x10
	NSMutableArray *_historicalCellss;	// 20 = 0x14
	int _prefetchMode;	// 24 = 0x18
	BOOL _hasPrefetchMode;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL hasPrefetchMode;	// G=0x3445ef45; @synthesize=_hasPrefetchMode
@property(retain, nonatomic) NSMutableArray *historicalCellss;	// G=0x3445ef65; S=0x3445fa15; @synthesize=_historicalCellss
@property(readonly, assign, nonatomic) int historicalCellssCount;	// G=0x3445f7d5; 
@property(retain, nonatomic) NSMutableArray *neighborss;	// G=0x3445ef75; S=0x3445f9ed; @synthesize=_neighborss
@property(readonly, assign, nonatomic) int neighborssCount;	// G=0x3445f8f5; 
@property(assign, nonatomic) int prefetchMode;	// G=0x3445ef55; S=0x3445ef29; @synthesize=_prefetchMode
@property(retain, nonatomic) LBSGCell *primaryCell;	// G=0x3445efa9; S=0x3445f9c5; @synthesize=_primaryCell
@property(assign, nonatomic) long long timestamp;	// G=0x3445ef85; S=0x3445ef95; @synthesize=_timestamp
- (id)init;	// 0x3445f985
- (void)addHistoricalCells:(id)cells;	// 0x3445f6d9
- (void)addNeighbors:(id)neighbors;	// 0x3445f7f9
- (void)dealloc;	// 0x3445f919
- (id)description;	// 0x3445f0d1
- (id)dictionaryRepresentation;	// 0x3445efb9
// declared property getter: - (BOOL)hasPrefetchMode;	// 0x3445ef45
- (id)historicalCellsAtIndex:(unsigned)index;	// 0x3445f709
// declared property getter: - (id)historicalCellss;	// 0x3445ef65
// declared property getter: - (int)historicalCellssCount;	// 0x3445f7d5
- (id)neighborsAtIndex:(unsigned)index;	// 0x3445f829
// declared property getter: - (id)neighborss;	// 0x3445ef75
// declared property getter: - (int)neighborssCount;	// 0x3445f8f5
// declared property getter: - (int)prefetchMode;	// 0x3445ef55
// declared property getter: - (id)primaryCell;	// 0x3445efa9
- (BOOL)readFrom:(id)from;	// 0x3445f4b5
- (void)setHistoricalCells:(id)cells atIndex:(unsigned)index;	// 0x3445f76d
// declared property setter: - (void)setHistoricalCellss:(id)cellss;	// 0x3445fa15
- (void)setNeighbors:(id)neighbors atIndex:(unsigned)index;	// 0x3445f88d
// declared property setter: - (void)setNeighborss:(id)neighborss;	// 0x3445f9ed
// declared property setter: - (void)setPrefetchMode:(int)mode;	// 0x3445ef29
// declared property setter: - (void)setPrimaryCell:(id)cell;	// 0x3445f9c5
// declared property setter: - (void)setTimestamp:(long long)timestamp;	// 0x3445ef95
// declared property getter: - (long long)timestamp;	// 0x3445ef85
- (void)writeTo:(id)to;	// 0x3445f251
@end
