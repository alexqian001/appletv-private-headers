/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, RUIPhloatoPlane;

__attribute__((visibility("hidden")))
@interface RUIPhloatoControl : BRControl {
	RUIPhloatoPlane *_frontPlane;	// 84 = 0x54
	RUIPhloatoPlane *_middlePlane;	// 88 = 0x58
	RUIPhloatoPlane *_backPlane;	// 92 = 0x5c
	NSTimer *_spinTimer;	// 96 = 0x60
	float _spinFrequency;	// 100 = 0x64
	BOOL _waitingForQueue;	// 104 = 0x68
}
@property(assign) float spinFrequency;	// G=0x3f2f69; S=0x3f2f59; converted property
- (id)init;	// 0x3f2809
- (void).cxx_destruct;	// 0x3f3059
- (void)_addProviderToPlane:(id)plane withMaxImageSize:(CGSize)maxImageSize;	// 0x3f3351
- (BOOL)_allQueuesReady;	// 0x3f30b5
- (void)_cupidDataClientUpdated:(id)updated;	// 0x3f3b95
- (void)_fireSpinAnimation:(id)animation;	// 0x3f3461
- (void)_queueReady:(id)ready;	// 0x3f332d
- (void)_requestScreenSaverData;	// 0x3f3a69
- (float)_rotationForFrame:(int)frame totalFrameCount:(int)count directionFactor:(float)factor;	// 0x3f39a9
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x3f3b85
- (void)_screenSaverDataReady:(id)ready;	// 0x3f3c4d
- (void)_startWhenReady;	// 0x3f3179
- (void)_stopUpdates;	// 0x3f32a9
- (float)_zTranslationForFrame:(int)frame totalFrameCount:(int)count;	// 0x3f3891
- (void)controlWasActivated;	// 0x3f2f79
- (void)controlWasDeactivated;	// 0x3f3019
- (void)dealloc;	// 0x3f2d41
- (void)setProvider:(id)provider;	// 0x3f2dfd
// converted property setter: - (void)setSpinFrequency:(float)frequency;	// 0x3f2f59
// converted property getter: - (float)spinFrequency;	// 0x3f2f69
@end

