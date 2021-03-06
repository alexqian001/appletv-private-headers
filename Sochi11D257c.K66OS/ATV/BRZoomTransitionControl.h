/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
	BRControl *_prerender;	// 92 = 0x5c
	BOOL _prerenderAnimation;	// 96 = 0x60
}
@property(assign) BOOL prerenderAnimation;	// G=0x3c4089; S=0x3c4079; converted property
- (void)_addPrerender;	// 0x3c41d1
- (void)_removePrerender;	// 0x3c425d
- (void)_takePrerenderSnapshot;	// 0x3c42c9
- (void)_updateContentForTransitionState;	// 0x3c44f9
- (void)_zoomInCompleted:(id)completed;	// 0x3c4bb1
- (void)_zoomOutCompleted:(id)completed;	// 0x3c4c21
- (void)dealloc;	// 0x3c3fb1
- (void)layoutSubcontrols;	// 0x3c40f9
// converted property getter: - (BOOL)prerenderAnimation;	// 0x3c4089
- (void)setContent:(id)content;	// 0x3c3ffd
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x3c4079
- (void)setTransitionedIn:(BOOL)anIn;	// 0x3c4099
@end

