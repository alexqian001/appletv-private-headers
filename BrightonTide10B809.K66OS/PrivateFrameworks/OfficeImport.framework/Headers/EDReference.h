/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface EDReference : NSObject <NSCopying> {
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x348ab421; S=0x34a2c9f5; converted property
@property(assign) int firstRow;	// G=0x348ba149; S=0x34a2c9e1; converted property
@property(assign) int lastColumn;	// G=0x348ba16d; S=0x34a2ca1d; converted property
@property(assign) int lastRow;	// G=0x348ba159; S=0x34a2ca09; converted property
+ (id)reference;	// 0x34a2e675
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x34910841
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348ab1bd
- (id)init;	// 0x348b9a3d
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x3491088d
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348ab21d
- (id).cxx_construct;	// 0x348ab219
- (EDAreaReference)areaReference;	// 0x34a2e6bd
- (bool)containsRow:(int)row column:(int)column;	// 0x348bb2dd
- (id)copyWithZone:(NSZone *)zone;	// 0x349bf4f9
- (unsigned)countOfCellsBeingReferenced;	// 0x3498446d
// converted property getter: - (int)firstColumn;	// 0x348ab421
// converted property getter: - (int)firstRow;	// 0x348ba149
- (bool)fullyAdjacentToReference:(id)reference;	// 0x349d72a1
- (unsigned)hash;	// 0x349bf4d5
- (bool)isCellReference;	// 0x34a2e6e1
- (bool)isColumnReference;	// 0x34a2e735
- (BOOL)isEqual:(id)equal;	// 0x349c0555
- (BOOL)isEqualToReference:(id)reference;	// 0x349c05b1
- (bool)isRowReference;	// 0x34a2e709
- (bool)isValidAreaReference;	// 0x348b62dd
- (bool)isValidCellReference;	// 0x349844c9
// converted property getter: - (int)lastColumn;	// 0x348ba16d
// converted property getter: - (int)lastRow;	// 0x348ba159
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x34a2c9f5
// converted property setter: - (void)setFirstRow:(int)row;	// 0x34a2c9e1
// converted property setter: - (void)setLastColumn:(int)column;	// 0x34a2ca1d
// converted property setter: - (void)setLastRow:(int)row;	// 0x34a2ca09
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x348b9aa9
- (void)unionWithReference:(id)reference;	// 0x349d73b9
- (void)unionWithRow:(int)row column:(int)column;	// 0x348b9a85
@end
