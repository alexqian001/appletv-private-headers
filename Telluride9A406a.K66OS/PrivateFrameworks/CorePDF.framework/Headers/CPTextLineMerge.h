/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMerge : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
}
- (void)addInterval:(id)interval to:(id)to;	// 0x304f3ac5
- (float)averageHeight:(id)height;	// 0x304f4999
- (unsigned)countOverlapsOfLineAtIndex:(unsigned)index in:(id)anIn;	// 0x304f454d
- (void)detachDropCaps:(id)caps to:(id)to;	// 0x304f3e6d
- (void)dropCaps:(id)caps to:(id)to;	// 0x304f4a51
- (void)eliminate:(id)eliminate;	// 0x304f3d4d
- (id)findLineFor:(id)aFor in:(id)anIn;	// 0x304f4889
- (BOOL)fits:(id)fits into:(id)into;	// 0x304f391d
- (BOOL)hasOverlappingLines;	// 0x304f4315
- (void)makeOverlappingLinesTo:(id)to;	// 0x304f4411
- (void)mergeByColumn:(id)column;	// 0x304f4651
- (void)mergeColumn:(id)column;	// 0x304f41ed
- (void)mergeLinesIn:(id)anIn;	// 0x304f3ffd
- (void)mergeLinesInInterval:(id)interval from:(id)from;	// 0x304f3c61
- (void)removeOverlapping:(id)overlapping;	// 0x304f3df9
@end

