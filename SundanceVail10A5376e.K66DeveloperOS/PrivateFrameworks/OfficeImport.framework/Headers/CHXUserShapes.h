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
+ (id)readAbsoluteSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x370f38ad
+ (id)readDrawable:(xmlNode *)drawable anchor:(id)anchor drawingState:(id)state;	// 0x370b4c09
+ (void)readFromCharSpaceNode:(xmlNode *)charSpaceNode state:(id)state;	// 0x3709dbc5
+ (float)readRealCoordinate:(xmlNode *)coordinate;	// 0x370b4b7d
+ (CGPoint)readRealPoint:(xmlNode *)point;	// 0x370b4b21
+ (id)readRelativeSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x370b49e5
@end
