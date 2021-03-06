/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRWaitSpinnerControl : BRControl {
	BOOL _spins;	// 77 = 0x4d
	CGImageRef _spinnerImage;	// 80 = 0x50
}
@property(assign) BOOL spins;	// G=0x2f8181; S=0x2f7e21; converted property
- (id)init;	// 0x2f7bc9
- (void)_setAnimation;	// 0x2f7eb9
- (id)accessibilityLabel;	// 0x2f8255
- (void)controlWasActivated;	// 0x2f8191
- (void)controlWasDeactivated;	// 0x2f81e1
- (void)dealloc;	// 0x2f7de1
- (BOOL)isAccessibilityElement;	// 0x2f8251
// converted property setter: - (void)setSpins:(BOOL)spins;	// 0x2f7e21
// converted property getter: - (BOOL)spins;	// 0x2f8181
@end

