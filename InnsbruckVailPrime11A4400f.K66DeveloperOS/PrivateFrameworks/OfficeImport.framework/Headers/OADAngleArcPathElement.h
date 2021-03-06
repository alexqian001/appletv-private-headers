/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADPathElement.h"


@interface OADAngleArcPathElement : OADPathElement {
	OADAdjustPoint mCenter;	// 4 = 0x4
	OADAdjustPoint mSemiaxes;	// 20 = 0x14
	OADAdjustCoord mStartAngle;	// 36 = 0x24
	OADAdjustCoord mAngleLength;	// 44 = 0x2c
	BOOL mConnectedToPrevious;	// 52 = 0x34
}
- (id)initWithCenter:(OADAdjustPoint)center semiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length connectedToPrevious:(BOOL)previous;	// 0x3189b035
- (id).cxx_construct;	// 0x3189b031
- (OADAdjustCoord)angleLength;	// 0x318f1475
- (OADAdjustPoint)center;	// 0x318f142d
- (BOOL)connectedToPrevious;	// 0x318f148d
- (OADAdjustPoint)semiaxes;	// 0x318f1445
- (OADAdjustCoord)startAngle;	// 0x318f145d
@end

