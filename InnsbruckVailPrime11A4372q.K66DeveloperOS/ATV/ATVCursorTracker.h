/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRKeyValueObservingRegistry, BRControl, BRCursorLayer;

__attribute__((visibility("hidden")))
@interface ATVCursorTracker : XXUnknownSuperclass {
	BRCursorLayer *_cursorLayer;	// 4 = 0x4
	BRKeyValueObservingRegistry *_kvoRegistry;	// 8 = 0x8
	BRControl *_trackedControl;	// 12 = 0xc
}
@property(retain, nonatomic) BRCursorLayer *cursorLayer;	// G=0xfbf11; S=0xfbf21; @synthesize=_cursorLayer
@property(retain, nonatomic) BRKeyValueObservingRegistry *kvoRegistry;	// G=0xfbf49; S=0xfbf59; @synthesize=_kvoRegistry
@property(retain, nonatomic) BRControl *trackedControl;	// G=0xfbf81; S=0xfbf91; @synthesize=_trackedControl
+ (id)trackerWithCursorLayer:(id)cursorLayer;	// 0xfb231
- (id)init;	// 0xfb289
- (id)initWithCursorLayer:(id)cursorLayer;	// 0xfb295
- (void).cxx_destruct;	// 0xfbfb9
- (void)_focusChanged:(id)changed;	// 0xfb651
- (CGRect)_trackedFocusCursorFrame;	// 0xfbd11
// declared property getter: - (id)cursorLayer;	// 0xfbf11
- (void)dealloc;	// 0xfb3cd
// declared property getter: - (id)kvoRegistry;	// 0xfbf49
- (void)layoutCursorLayer;	// 0xfb439
// declared property setter: - (void)setCursorLayer:(id)layer;	// 0xfbf21
// declared property setter: - (void)setKvoRegistry:(id)registry;	// 0xfbf59
// declared property setter: - (void)setTrackedControl:(id)control;	// 0xfbf91
// declared property getter: - (id)trackedControl;	// 0xfbf81
@end

