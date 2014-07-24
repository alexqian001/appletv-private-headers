/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRWaitSpinnerControl : BRControl {
	BOOL _spins;	// 84 = 0x54
	CGImageRef _spinnerImage;	// 88 = 0x58
}
@property(assign) BOOL spins;	// G=0x3b93d9; S=0x3b9079; converted property
- (id)init;	// 0x3b8e29
- (void)_setAnimation;	// 0x3b9111
- (id)accessibilityLabel;	// 0x3b94ad
- (void)controlWasActivated;	// 0x3b93e9
- (void)controlWasDeactivated;	// 0x3b9439
- (void)dealloc;	// 0x3b9039
- (BOOL)isAccessibilityElement;	// 0x3b94a9
// converted property setter: - (void)setSpins:(BOOL)spins;	// 0x3b9079
// converted property getter: - (BOOL)spins;	// 0x3b93d9
@end
