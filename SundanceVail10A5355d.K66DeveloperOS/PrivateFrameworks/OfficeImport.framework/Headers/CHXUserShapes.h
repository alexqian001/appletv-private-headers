/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHXUserShapes : NSObject {
}
+ (id)readAbsoluteSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x31d7a7fd
+ (id)readDrawable:(xmlNode *)drawable anchor:(id)anchor drawingState:(id)state;	// 0x31d3bbe9
+ (void)readFromCharSpaceNode:(xmlNode *)charSpaceNode state:(id)state;	// 0x31d24ba5
+ (float)readRealCoordinate:(xmlNode *)coordinate;	// 0x31d3bb5d
+ (CGPoint)readRealPoint:(xmlNode *)point;	// 0x31d3bb01
+ (id)readRelativeSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x31d3b9c5
@end
