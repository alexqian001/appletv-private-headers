/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class CHDChart;

@protocol CHAutoStyling <NSObject>
- (id)autoAxisStroke;
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;
- (void)resolveAxisGraphicProperties:(id)properties;
- (void)resolveChartAreaGraphicProperties:(id)properties;
- (void)resolveFloorGraphicProperties:(id)properties;
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;
- (void)resolveLegendGraphicProperties:(id)properties;
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;
- (void)resolvePlotAreaGraphicProperties:(id)properties;
- (void)resolveWallGraphicProperties:(id)properties;
@end

@interface CHAutoStyling : NSObject {
	CHDChart *mChart;	// 4 = 0x4
}
+ (id)autoStylingWithChart:(id)chart;	// 0x34fc2e0d
- (id)initWithChart:(id)chart;	// 0x34fc2ea5
- (void)dealloc;	// 0x34fd1ab5
- (int)defaultMarkerStyleForSeriesIndex:(int)seriesIndex;	// 0x35006a11
- (void)replaceStrokeAndFillInEmptyMarker:(id)emptyMarker withSeriesGraphicProperties:(id)seriesGraphicProperties;	// 0x350018a1
@end
