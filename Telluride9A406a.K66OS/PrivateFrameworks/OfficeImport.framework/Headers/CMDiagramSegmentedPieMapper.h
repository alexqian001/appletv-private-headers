/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper {
@private
	BOOL mDrawArrows;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x32b0fe3d
- (void)mapAt:(id)at withState:(id)state;	// 0x32b0fef5
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x32b0fc1d
- (int)pointCount;	// 0x32b0fbf5
- (void)setDrawArrows:(BOOL)arrows;	// 0x32b0fc0d
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x32b0fea1
@end
