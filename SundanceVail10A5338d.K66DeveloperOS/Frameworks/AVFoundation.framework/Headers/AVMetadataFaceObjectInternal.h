/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVMetadataFaceObject;

@interface AVMetadataFaceObjectInternal : NSObject {
	int faceID;	// 4 = 0x4
	BOOL hasRollAngle;	// 8 = 0x8
	float rollAngle;	// 12 = 0xc
	BOOL hasYawAngle;	// 16 = 0x10
	float yawAngle;	// 20 = 0x14
	AVMetadataFaceObject *originalFaceObject;	// 24 = 0x18
}
@property(assign) int faceID;	// G=0x317eac61; S=0x317eac75; @synthesize
@property(assign) BOOL hasRollAngle;	// G=0x317eac8d; S=0x317eaca5; @synthesize
@property(assign) BOOL hasYawAngle;	// G=0x317eace9; S=0x317ead01; @synthesize
@property(retain) AVMetadataFaceObject *originalFaceObject;	// G=0x317ead45; S=0x317ead59; @synthesize
@property(assign) float rollAngle;	// G=0x317eacbd; S=0x317eacd1; @synthesize
@property(assign) float yawAngle;	// G=0x317ead19; S=0x317ead2d; @synthesize
- (void)dealloc;	// 0x317eac15
// declared property getter: - (int)faceID;	// 0x317eac61
// declared property getter: - (BOOL)hasRollAngle;	// 0x317eac8d
// declared property getter: - (BOOL)hasYawAngle;	// 0x317eace9
// declared property getter: - (id)originalFaceObject;	// 0x317ead45
// declared property getter: - (float)rollAngle;	// 0x317eacbd
// declared property setter: - (void)setFaceID:(int)anId;	// 0x317eac75
// declared property setter: - (void)setHasRollAngle:(BOOL)angle;	// 0x317eaca5
// declared property setter: - (void)setHasYawAngle:(BOOL)angle;	// 0x317ead01
// declared property setter: - (void)setOriginalFaceObject:(id)object;	// 0x317ead59
// declared property setter: - (void)setRollAngle:(float)angle;	// 0x317eacd1
// declared property setter: - (void)setYawAngle:(float)angle;	// 0x317ead2d
// declared property getter: - (float)yawAngle;	// 0x317ead19
@end
