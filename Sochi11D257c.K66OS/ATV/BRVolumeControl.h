/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRPercentageIndicatorLayer;

__attribute__((visibility("hidden")))
@interface BRVolumeControl : BRControl {
	BRImageControl *_speakerOnLayer;	// 84 = 0x54
	BRImageControl *_speakerOffLayer;	// 88 = 0x58
	BRPercentageIndicatorLayer *_percentageIndicatorLayer;	// 92 = 0x5c
}
@property(assign) float volume;	// G=0x3e86e5; S=0x3e85e1; converted property
- (id)init;	// 0x3e8129
- (void)dealloc;	// 0x3e8441
- (void)layoutSubcontrols;	// 0x3e84b9
// converted property setter: - (void)setVolume:(float)volume;	// 0x3e85e1
// converted property getter: - (float)volume;	// 0x3e86e5
@end
