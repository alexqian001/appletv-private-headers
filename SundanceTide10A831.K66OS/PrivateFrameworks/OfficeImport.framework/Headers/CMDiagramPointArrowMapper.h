/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"


@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
	int mArrowType;	// 24 = 0x18
}
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;	// 0x36ba46d5
- (id)getTextBoundsForBounds:(id)bounds;	// 0x36ba4aad
- (void)mapAt:(id)at withState:(id)state;	// 0x36ba4779
- (id)transformPresentationName;	// 0x36ba4d95
@end

