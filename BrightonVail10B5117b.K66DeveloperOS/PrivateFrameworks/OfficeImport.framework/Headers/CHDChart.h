/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class CHDPlotArea, CHDLegend, EDWorkbook, EDSheet, OADGraphicProperties, CHDTitle, NSMutableArray, CHDDefaultTextProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x34bcec75; S=0x34b54131; converted property
@property(retain) id backWallGraphicProperties;	// G=0x34bcecd5; S=0x34b4e5f5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x34b59b19; S=0x34b47a99; converted property
@property(retain) id defaultTextProperties;	// G=0x34b4ade1; S=0x34bced11; converted property
@property(assign) int direction;	// G=0x34b53bad; S=0x34b556bd; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x34bcf2bd; S=0x34b5fdc9; converted property
@property(assign) int displayBlankAs;	// G=0x34bcec9d; S=0x34b47b15; converted property
@property(retain) id externalData;	// G=0x34bcecc5; S=0x34b7de05; converted property
@property(retain) id floorGraphicProperties;	// G=0x34bcecfd; S=0x34b4f365; converted property
@property(retain) id legend;	// G=0x34b53001; S=0x34b50099; converted property
@property(assign) CGRect logicalBounds;	// G=0x34bced55; S=0x34b46401; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x34b5e011; S=0x34bcf2ad; converted property
@property(retain) id plotArea;	// G=0x34b4ba15; S=0x34b53f35; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x34bcec89; S=0x34b47aed; converted property
@property(retain) id sheet;	// G=0x34bcec65; S=0x34b45c45; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x34bcece9; S=0x34b4e5b1; converted property
@property(assign) int styleId;	// G=0x34b77eed; S=0x34b45c55; converted property
@property(retain) id title;	// G=0x34b596bd; S=0x34b540ed; converted property
@property(retain) id view3D;	// G=0x34bcecb1; S=0x34b50209; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x34b47379
- (id)init;	// 0x34b43501
- (id).cxx_construct;	// 0x34b434fd
- (void)addChild:(id)child;	// 0x34b5c69d
- (void)addChildren:(id)children;	// 0x34bced9d
// converted property getter: - (id)backWallGraphicProperties;	// 0x34bcecd5
- (unsigned)categoryCount;	// 0x34bcf221
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x34b59b19
- (id)childAtIndex:(unsigned)index;	// 0x34bcee21
- (unsigned)childCount;	// 0x34bced7d
- (id)children;	// 0x34bcee41
- (void)dealloc;	// 0x34b602dd
- (id)defaultContentFormat;	// 0x34bcf151
- (id)defaultDataLabelFont;	// 0x34bcf015
- (unsigned)defaultFontIndex;	// 0x34b8a305
- (id)defaultFontWithResources:(id)resources;	// 0x34bcf191
- (int)defaultLabelPosition;	// 0x34bcf1e1
- (id)defaultSeriesTitleFont;	// 0x34bcf0b1
- (id)defaultTextFont;	// 0x34bcef91
// converted property getter: - (id)defaultTextProperties;	// 0x34b4ade1
- (id)defaultThemeFont;	// 0x34bceea1
// converted property getter: - (int)direction;	// 0x34b53bad
// converted property getter: - (int)displayBlankAs;	// 0x34bcec9d
// converted property getter: - (id)externalData;	// 0x34bcecc5
// converted property getter: - (id)floorGraphicProperties;	// 0x34bcecfd
- (bool)is3D;	// 0x34b78b25
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x34bcec75
- (bool)isBinary;	// 0x34b45e8d
// converted property getter: - (bool)isDirectionChanged;	// 0x34bcf2bd
// converted property getter: - (bool)isMSGraph;	// 0x34b5e011
- (bool)isPie;	// 0x34b7d515
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x34bcec89
// converted property getter: - (id)legend;	// 0x34b53001
// converted property getter: - (CGRect)logicalBounds;	// 0x34bced55
- (id)mainType;	// 0x34b59429
// converted property getter: - (id)plotArea;	// 0x34b4ba15
- (id)processors;	// 0x34b518c5
- (void)replaceChild:(id)child with:(id)with;	// 0x34bcee51
- (unsigned)seriesCount;	// 0x34b7d565
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x34b54131
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x34b4e5f5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x34b47a99
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x34bced11
// converted property setter: - (void)setDirection:(int)direction;	// 0x34b556bd
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x34b5fdc9
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x34b47b15
// converted property setter: - (void)setExternalData:(id)data;	// 0x34b7de05
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x34b4f365
// converted property setter: - (void)setLegend:(id)legend;	// 0x34b50099
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x34b46401
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x34bcf2ad
- (void)setParentTextListStyle:(id)style;	// 0x34b7df2d
// converted property setter: - (void)setPlotArea:(id)area;	// 0x34b53f35
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x34b47aed
// converted property setter: - (void)setSheet:(id)sheet;	// 0x34b45c45
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x34b4e5b1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x34b45c55
// converted property setter: - (void)setTitle:(id)title;	// 0x34b540ed
// converted property setter: - (void)setView3D:(id)d;	// 0x34b50209
// converted property getter: - (id)sheet;	// 0x34bcec65
// converted property getter: - (id)sideWallGraphicProperties;	// 0x34bcece9
// converted property getter: - (int)styleId;	// 0x34b77eed
- (id)styleMatrix;	// 0x34b78139
// converted property getter: - (id)title;	// 0x34b596bd
// converted property getter: - (id)view3D;	// 0x34bcecb1
- (id)workbook;	// 0x34b78185
@end
