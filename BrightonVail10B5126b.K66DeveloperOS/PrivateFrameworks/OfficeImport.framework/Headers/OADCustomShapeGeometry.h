/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShapeGeometry.h"

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
	CsRect<long> *mGeometryCoordSpace;	// 12 = 0xc
	CsPoint<long> *mLimo;	// 16 = 0x10
	NSMutableArray *mFormulas;	// 20 = 0x14
	NSMutableArray *mTextBodyRects;	// 24 = 0x18
	NSMutableArray *mPaths;	// 28 = 0x1c
}
@property(assign) CsRect<long> geometryCoordSpace;	// G=0x348c6865; S=0x348814a5; converted property
@property(assign) CsPoint<long> limo;	// G=0x34a49135; S=0x3488150d; converted property
- (id)init;	// 0x3487fee9
- (void)addFormula:(id)formula;	// 0x348c66dd
- (void)addPath:(id)path;	// 0x348810bd
- (void)addTextBodyRect:(id)rect;	// 0x348c679d
- (void)dealloc;	// 0x34888459
- (id)formulaAtIndex:(unsigned)index;	// 0x34989419
- (unsigned)formulaCount;	// 0x349893f9
// converted property getter: - (CsRect<long>)geometryCoordSpace;	// 0x348c6865
// converted property getter: - (CsPoint<long>)limo;	// 0x34a49135
- (id)pathAtIndex:(unsigned)index;	// 0x3493f655
- (unsigned)pathCount;	// 0x3493f635
// converted property setter: - (void)setGeometryCoordSpace:(CsRect<long>)space;	// 0x348814a5
// converted property setter: - (void)setLimo:(CsPoint<long>)limo;	// 0x3488150d
- (id)textBodyRectAtIndex:(unsigned)index;	// 0x348c6845
- (unsigned)textBodyRectCount;	// 0x348819e5
@end

