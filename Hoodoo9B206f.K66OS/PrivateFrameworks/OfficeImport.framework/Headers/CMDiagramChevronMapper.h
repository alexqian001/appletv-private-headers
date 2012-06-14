/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramShapeMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramChevronMapper : CMDiagramShapeMapper {
@private
	BOOL mHChevron;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x34565261
- (void)mapAt:(id)at withState:(id)state;	// 0x34565115
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x345653e1
- (void)setIsHChevron:(BOOL)chevron;	// 0x34576c85
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x34565205
@end
