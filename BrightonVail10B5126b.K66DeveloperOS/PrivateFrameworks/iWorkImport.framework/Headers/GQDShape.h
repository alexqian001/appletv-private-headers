/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDGraphic.h"
#import "GQDNameMappable.h"

@class GQDWPLayoutFrame, GQDPath;

@interface GQDShape : GQDGraphic <GQDNameMappable> {
	GQDPath *mPath;	// 40 = 0x28
	GQDWPLayoutFrame *mLayoutFrame;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x368b8629
- (id)initWithGraphic:(id)graphic path:(id)path geometry:(id)geometry;	// 0x368d5261
- (CGPathRef)createBezierPath;	// 0x368b8829
- (void)dealloc;	// 0x368b8635
- (BOOL)isBlank;	// 0x368b86a9
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)angle;	// 0x368b86e1
- (id)layoutFrame;	// 0x368b8699
- (id)path;	// 0x368b8819
@end
