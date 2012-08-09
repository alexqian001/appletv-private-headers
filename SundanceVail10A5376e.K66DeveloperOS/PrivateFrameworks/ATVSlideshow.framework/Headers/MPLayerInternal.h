/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSLock;

@interface MPLayerInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	float opacity;	// 12 = 0xc
	CGPoint position;	// 16 = 0x10
	float zPosition;	// 24 = 0x18
	CGSize size;	// 28 = 0x1c
	float rotationAngle;	// 36 = 0x24
	float xRotationAngle;	// 40 = 0x28
	float yRotationAngle;	// 44 = 0x2c
	float scale;	// 48 = 0x30
	double timeIn;	// 52 = 0x34
	double duration;	// 60 = 0x3c
	double phaseInDuration;	// 68 = 0x44
	double phaseOutDuration;	// 76 = 0x4c
	NSString *title;	// 84 = 0x54
	BOOL isTriggered;	// 88 = 0x58
	BOOL startsPaused;	// 89 = 0x59
	BOOL isAudioLayer;	// 90 = 0x5a
	int audioPriority;	// 92 = 0x5c
	double durationPadding;	// 96 = 0x60
	NSString *layerID;	// 104 = 0x68
	int zIndex;	// 108 = 0x6c
	NSString *uuid;	// 112 = 0x70
	NSLock *containerLock;	// 116 = 0x74
	BOOL cleaningUp;	// 120 = 0x78
}
@property(assign, nonatomic) int audioPriority;	// G=0x36211e05; S=0x36211e15; @synthesize
@property(assign, nonatomic) BOOL cleaningUp;	// G=0x36211eb1; S=0x36211ec1; @synthesize
@property(retain, nonatomic) NSLock *containerLock;	// G=0x36211e91; S=0x36211ea1; @synthesize
@property(assign, nonatomic) double duration;	// G=0x36211d21; S=0x36211d39; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x36211e25; S=0x36211e3d; @synthesize
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x36211de5; S=0x36211df5; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x36211ce1; S=0x36211cf1; @synthesize
@property(retain, nonatomic) NSString *layerID;	// G=0x36211e51; S=0x36211e61; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x36211b71; S=0x36211b89; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x36211b9d; S=0x36211bad; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x36211d4d; S=0x36211d65; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x36211d79; S=0x36211d91; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x36211bbd; S=0x36211bd5; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x36211c35; S=0x36211c45; @synthesize
@property(assign, nonatomic) float scale;	// G=0x36211c95; S=0x36211ca5; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x36211c09; S=0x36211c21; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x36211d01; S=0x36211d11; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x36211cb5; S=0x36211ccd; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x36211dc5; S=0x36211dd5; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x36211e71; S=0x36211e81; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x36211c55; S=0x36211c65; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x36211c75; S=0x36211c85; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x36211da5; S=0x36211db5; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x36211be9; S=0x36211bf9; @synthesize
// declared property getter: - (int)audioPriority;	// 0x36211e05
// declared property getter: - (BOOL)cleaningUp;	// 0x36211eb1
// declared property getter: - (id)containerLock;	// 0x36211e91
- (void)dealloc;	// 0x36211ac9
// declared property getter: - (double)duration;	// 0x36211d21
// declared property getter: - (double)durationPadding;	// 0x36211e25
// declared property getter: - (BOOL)isAudioLayer;	// 0x36211de5
// declared property getter: - (BOOL)isTriggered;	// 0x36211ce1
// declared property getter: - (id)layerID;	// 0x36211e51
// declared property getter: - (double)numberOfLoops;	// 0x36211b71
// declared property getter: - (float)opacity;	// 0x36211b9d
// declared property getter: - (double)phaseInDuration;	// 0x36211d4d
// declared property getter: - (double)phaseOutDuration;	// 0x36211d79
// declared property getter: - (CGPoint)position;	// 0x36211bbd
// declared property getter: - (float)rotationAngle;	// 0x36211c35
// declared property getter: - (float)scale;	// 0x36211c95
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x36211e15
// declared property setter: - (void)setCleaningUp:(BOOL)up;	// 0x36211ec1
// declared property setter: - (void)setContainerLock:(id)lock;	// 0x36211ea1
// declared property setter: - (void)setDuration:(double)duration;	// 0x36211d39
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x36211e3d
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x36211df5
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36211cf1
// declared property setter: - (void)setLayerID:(id)anId;	// 0x36211e61
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36211b89
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x36211bad
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36211d65
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36211d91
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x36211bd5
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x36211c45
// declared property setter: - (void)setScale:(float)scale;	// 0x36211ca5
// declared property setter: - (void)setSize:(CGSize)size;	// 0x36211c21
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36211d11
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x36211ccd
// declared property setter: - (void)setTitle:(id)title;	// 0x36211dd5
// declared property setter: - (void)setUuid:(id)uuid;	// 0x36211e81
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x36211c65
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x36211c85
// declared property setter: - (void)setZIndex:(int)index;	// 0x36211db5
// declared property setter: - (void)setZPosition:(float)position;	// 0x36211bf9
// declared property getter: - (CGSize)size;	// 0x36211c09
// declared property getter: - (BOOL)startsPaused;	// 0x36211d01
// declared property getter: - (double)timeIn;	// 0x36211cb5
// declared property getter: - (id)title;	// 0x36211dc5
// declared property getter: - (id)uuid;	// 0x36211e71
// declared property getter: - (float)xRotationAngle;	// 0x36211c55
// declared property getter: - (float)yRotationAngle;	// 0x36211c75
// declared property getter: - (int)zIndex;	// 0x36211da5
// declared property getter: - (float)zPosition;	// 0x36211be9
@end
