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
+ (id)readAbsoluteSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x349f98ad
+ (id)readDrawable:(xmlNode *)drawable anchor:(id)anchor drawingState:(id)state;	// 0x349bac09
+ (void)readFromCharSpaceNode:(xmlNode *)charSpaceNode state:(id)state;	// 0x349a3bc5
+ (float)readRealCoordinate:(xmlNode *)coordinate;	// 0x349bab7d
+ (CGPoint)readRealPoint:(xmlNode *)point;	// 0x349bab21
+ (id)readRelativeSizeAnchor:(xmlNode *)anchor drawingState:(id)state;	// 0x349ba9e5
@end
