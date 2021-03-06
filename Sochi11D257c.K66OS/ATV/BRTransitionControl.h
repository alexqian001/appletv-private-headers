/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRTransitionControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	BOOL _transitionedIn;	// 88 = 0x58
}
@property(retain) BRControl *content;	// G=0x3c3f1d; S=0x3c3ecd; converted property
@property(assign) BOOL transitionedIn;	// G=0x3c3f3d; S=0x3c3f2d; converted property
- (id)init;	// 0x3c3e39
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x3c3f4d
// converted property getter: - (id)content;	// 0x3c3f1d
- (void)controlDidDisplayAsModalDialog;	// 0x4330a5
- (void)dealloc;	// 0x3c3e81
- (void)layoutSubcontrols;	// 0x3c3f51
// converted property setter: - (void)setContent:(id)content;	// 0x3c3ecd
// converted property setter: - (void)setTransitionedIn:(BOOL)anIn;	// 0x3c3f2d
// converted property getter: - (BOOL)transitionedIn;	// 0x3c3f3d
@end

