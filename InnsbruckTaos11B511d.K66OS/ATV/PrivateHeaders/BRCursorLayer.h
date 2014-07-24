/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMultiPartWidgetLayer.h"


__attribute__((visibility("hidden")))
@interface BRCursorLayer : BRMultiPartWidgetLayer {
	float _radius;	// 88 = 0x58
	float _haloPercentage;	// 92 = 0x5c
}
@property(assign) float cornerRadius;	// G=0x35af95; S=0x35afa5; converted property
@property(assign) float haloPercentage;	// G=0x35af75; S=0x35af85; converted property
- (id)init;	// 0x35af19
- (void)applyMapForCornerRadius:(float)cornerRadius;	// 0x35afe1
// converted property getter: - (float)cornerRadius;	// 0x35af95
// converted property getter: - (float)haloPercentage;	// 0x35af75
// converted property setter: - (void)setCornerRadius:(float)radius;	// 0x35afa5
// converted property setter: - (void)setHaloPercentage:(float)percentage;	// 0x35af85
@end
