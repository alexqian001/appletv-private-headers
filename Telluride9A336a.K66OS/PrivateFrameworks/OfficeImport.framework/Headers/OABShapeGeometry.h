/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x34c49885
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x34c498b5
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x34e79b3d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x34e79889
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x34bf9215
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x34c499d5
+ (void)readFromLimo:(CsPoint<long int>)limo toGeometry:(id)geometry;	// 0x34c49d71
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x34c48a4d
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x34bf8b65
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x34c49b51
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x34cc7bb1
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x34cc7d09
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x34cc7e11
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x34e7989d
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x34e798fd
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34e7a0ad
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x34e7a525
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34e79a15
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34e79b95
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34e7a2e9
@end

