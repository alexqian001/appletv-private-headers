/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPLayerInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	float opacity;	// 12 = 0xc
	CGPoint position;	// 16 = 0x10
	float zPosition;	// 24 = 0x18
	CGSize size;	// 28 = 0x1c
	float rotationAngle;	// 36 = 0x24
	float xRotationAngle;	// 40 = 0x28
	float yRotationAngle;	// 44 = 0x2c
	double timeIn;	// 48 = 0x30
	double duration;	// 56 = 0x38
	double phaseInDuration;	// 64 = 0x40
	double phaseOutDuration;	// 72 = 0x48
	NSString *title;	// 80 = 0x50
	BOOL isAudioLayer;	// 84 = 0x54
	int audioPriority;	// 88 = 0x58
	double durationPadding;	// 92 = 0x5c
	NSString *layerID;	// 100 = 0x64
	int zIndex;	// 104 = 0x68
	NSString *uuid;	// 108 = 0x6c
}
@property(assign, nonatomic) int audioPriority;	// G=0x33ce91f1; S=0x33ce9201; @synthesize
@property(assign, nonatomic) double duration;	// G=0x33ce90e5; S=0x33ce90fd; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x33ce9211; S=0x33ce9229; @synthesize
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x33ce91d1; S=0x33ce91e1; @synthesize
@property(retain, nonatomic) NSString *layerID;	// G=0x33ce9241; S=0x33ce9251; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x33ce8f85; S=0x33ce8f9d; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x33ce8fb5; S=0x33ce8fc5; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x33ce9115; S=0x33ce912d; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x33ce9145; S=0x33ce915d; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x33ce8fd5; S=0x33ce8fed; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x33ce9055; S=0x33ce9065; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x33ce9025; S=0x33ce903d; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x33ce90b5; S=0x33ce90cd; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x33ce9195; S=0x33ce91a5; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x33ce927d; S=0x33ce928d; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x33ce9075; S=0x33ce9085; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x33ce9095; S=0x33ce90a5; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x33ce9175; S=0x33ce9185; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x33ce9005; S=0x33ce9015; @synthesize
// declared property getter: - (int)audioPriority;	// 0x33ce91f1
- (void)dealloc;	// 0x33ce8ef1
// declared property getter: - (double)duration;	// 0x33ce90e5
// declared property getter: - (double)durationPadding;	// 0x33ce9211
// declared property getter: - (BOOL)isAudioLayer;	// 0x33ce91d1
// declared property getter: - (id)layerID;	// 0x33ce9241
// declared property getter: - (double)numberOfLoops;	// 0x33ce8f85
// declared property getter: - (float)opacity;	// 0x33ce8fb5
// declared property getter: - (double)phaseInDuration;	// 0x33ce9115
// declared property getter: - (double)phaseOutDuration;	// 0x33ce9145
// declared property getter: - (CGPoint)position;	// 0x33ce8fd5
// declared property getter: - (float)rotationAngle;	// 0x33ce9055
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x33ce9201
// declared property setter: - (void)setDuration:(double)duration;	// 0x33ce90fd
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x33ce9229
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x33ce91e1
// declared property setter: - (void)setLayerID:(id)anId;	// 0x33ce9251
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x33ce8f9d
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x33ce8fc5
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x33ce912d
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x33ce915d
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x33ce8fed
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x33ce9065
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33ce903d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33ce90cd
// declared property setter: - (void)setTitle:(id)title;	// 0x33ce91a5
// declared property setter: - (void)setUuid:(id)uuid;	// 0x33ce928d
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x33ce9085
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x33ce90a5
// declared property setter: - (void)setZIndex:(int)index;	// 0x33ce9185
// declared property setter: - (void)setZPosition:(float)position;	// 0x33ce9015
// declared property getter: - (CGSize)size;	// 0x33ce9025
// declared property getter: - (double)timeIn;	// 0x33ce90b5
// declared property getter: - (id)title;	// 0x33ce9195
// declared property getter: - (id)uuid;	// 0x33ce927d
// declared property getter: - (float)xRotationAngle;	// 0x33ce9075
// declared property getter: - (float)yRotationAngle;	// 0x33ce9095
// declared property getter: - (int)zIndex;	// 0x33ce9175
// declared property getter: - (float)zPosition;	// 0x33ce9005
@end
