/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDAnchor.h"
#import "OfficeImport-Structs.h"


@interface EDTwoCellAnchor : EDAnchor {
	EDCellAnchorMarker mFrom;	// 4 = 0x4
	EDCellAnchorMarker mTo;	// 20 = 0x14
	BOOL mIsRelative;	// 36 = 0x24
	int mEditAs;	// 40 = 0x28
}
@property(assign) int editAs;	// G=0x34c06d3d; S=0x34a8e04d; converted property
@property(assign) EDCellAnchorMarker from;	// G=0x34a96111; S=0x34a8e05d; converted property
@property(assign, getter=isRelative) BOOL relative;	// G=0x34a96135; S=0x34a8e03d; converted property
@property(assign) EDCellAnchorMarker to;	// G=0x34a963e9; S=0x34a8e079; converted property
- (id)init;	// 0x34a8dfb1
- (id).cxx_construct;	// 0x34a8df81
// converted property getter: - (int)editAs;	// 0x34c06d3d
// converted property getter: - (EDCellAnchorMarker)from;	// 0x34a96111
// converted property getter: - (BOOL)isRelative;	// 0x34a96135
// converted property setter: - (void)setEditAs:(int)as;	// 0x34a8e04d
// converted property setter: - (void)setFrom:(EDCellAnchorMarker)from;	// 0x34a8e05d
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x34a8e03d
// converted property setter: - (void)setTo:(EDCellAnchorMarker)to;	// 0x34a8e079
// converted property getter: - (EDCellAnchorMarker)to;	// 0x34a963e9
@end
