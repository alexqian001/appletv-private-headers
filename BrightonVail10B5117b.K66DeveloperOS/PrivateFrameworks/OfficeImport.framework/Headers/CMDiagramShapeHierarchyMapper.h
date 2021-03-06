/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"

@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
	NSMutableDictionary *mNodeInfoMap;	// 112 = 0x70
	BOOL mIsLayered;	// 116 = 0x74
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x34ba4531
- (CGRect)boundsForNode:(id)node;	// 0x34ba5765
- (void)copyInfoForNode:(id)node depth:(int)depth;	// 0x34bb5655
- (void)dealloc;	// 0x34ba6455
- (id)infoForNode:(id)node;	// 0x34ba50e5
- (void)mapAt:(id)at withState:(id)state;	// 0x34ba465d
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x34ba6451
- (void)mapLayerNodes:(id)nodes at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x34ba8a15
- (CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector *)xranges;	// 0x34ba53e5
- (void)mapNode:(id)node at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;	// 0x34ba57fd
- (ODIHRangeVector *)mapRangesForNode:(id)node;	// 0x34ba4b2d
- (void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset index:(int)index;	// 0x34ba5545
- (void)setUpLayers;	// 0x34ba45f9
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x34ba56c5
@end

