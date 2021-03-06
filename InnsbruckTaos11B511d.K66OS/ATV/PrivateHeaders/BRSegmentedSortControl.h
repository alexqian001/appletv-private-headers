/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, NSMutableDictionary, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRSegmentedSortControl : BRControl {
	BRImageControl *_leftEndCapLayer;	// 84 = 0x54
	NSMutableArray *_dividerLayers;	// 88 = 0x58
	NSMutableArray *_contentLayers;	// 92 = 0x5c
	NSMutableArray *_textLayers;	// 96 = 0x60
	BRImageControl *_rightEndCapLayer;	// 100 = 0x64
	NSArray *_segmentNames;	// 104 = 0x68
	NSMutableDictionary *_images;	// 108 = 0x6c
	int _selectedSegment;	// 112 = 0x70
	float _widthRatio;	// 116 = 0x74
}
@property(assign) int selectedSegment;	// G=0x3b9a41; S=0x3b9961; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x3b94d9
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x3b94fd
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x3ba20d
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x3ba1dd
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x3ba1c1
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x3ba161
- (id)_loadImageFromFile:(id)file;	// 0x3ba2d9
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x3ba191
- (void)_updateSegmentState;	// 0x3ba3e1
- (id)accessibilityLabel;	// 0x3ba0fd
- (BOOL)brEventAction:(id)action;	// 0x3b9b19
- (void)dealloc;	// 0x3b9879
- (void)layoutSubcontrols;	// 0x3b9be9
- (int)segmentCount;	// 0x3b9941
// converted property getter: - (int)selectedSegment;	// 0x3b9a41
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x3b9961
- (float)visualHorizontalCenter;	// 0x3b9a51
@end

