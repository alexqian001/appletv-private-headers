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
@property(assign) float spinFrequency;	// G=0x40c589; S=0x40c579; converted property
- (id)init;	// 0x40be29
- (void).cxx_destruct;	// 0x40c679
- (void)_addProviderToPlane:(id)plane withMaxImageSize:(CGSize)maxImageSize;	// 0x40c971
- (BOOL)_allQueuesReady;	// 0x40c6d5
- (void)_cupidDataClientUpdated:(id)updated;	// 0x40d1b5
- (void)_fireSpinAnimation:(id)animation;	// 0x40ca81
- (void)_queueReady:(id)ready;	// 0x40c94d
- (void)_requestScreenSaverData;	// 0x40d089
- (float)_rotationForFrame:(int)frame totalFrameCount:(int)count directionFactor:(float)factor;	// 0x40cfc9
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x40d1a5
- (void)_screenSaverDataReady:(id)ready;	// 0x40d26d
- (void)_startWhenReady;	// 0x40c799
- (void)_stopUpdates;	// 0x40c8c9
- (float)_zTranslationForFrame:(int)frame totalFrameCount:(int)count;	// 0x40ceb1
- (void)controlWasActivated;	// 0x40c599
- (void)controlWasDeactivated;	// 0x40c639
- (void)dealloc;	// 0x40c361
- (void)setProvider:(id)provider;	// 0x40c41d
// converted property setter: - (void)setSpinFrequency:(float)frequency;	// 0x40c579
// converted property getter: - (float)spinFrequency;	// 0x40c589
@end
