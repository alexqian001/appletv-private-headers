/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDrawableMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper {
@private
	double *mRowGrid;	// 80 = 0x50
	double *mColumnGrid;	// 84 = 0x54
}
+ (BOOL)isAnchorRelative:(id)relative;	// 0x32b13cd5
- (id)initWithChartDrawable:(id)chartDrawable box:(CGRect)box parent:(id)parent;	// 0x329ef849
- (id)initWithOADDrawable:(id)oaddrawable parent:(id)parent;	// 0x32922f99
- (id)initWithOADDrawable:(id)oaddrawable rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x32b13c35
- (CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)position rowGrid:(double *)grid columnGrid:(double *)grid3 start:(BOOL)start relative:(BOOL)relative;	// 0x32923815
- (CGRect)getImageRect;	// 0x329234a1
- (CGRect)mapAnchorToRect:(id)rect rowGrid:(double *)grid columnGrid:(double *)grid3;	// 0x32923595
- (void)mapAt:(id)at withState:(id)state;	// 0x329230ad
- (void)mapBounds;	// 0x32923409
- (void)mapChartAt:(id)at withState:(id)state;	// 0x32993ba1
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x32b13d69
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x3299bd95
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x32924861
- (void)mapTextBoxAt:(id)at withState:(id)state;	// 0x3297be3d
- (void)setBoundingBox;	// 0x32b13c89
- (id)workbookMapper;	// 0x32b13cc5
- (id)worksheetMapper;	// 0x32923021
@end

