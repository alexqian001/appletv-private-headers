/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRHeaderControl, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x2a9069; S=0x2a9089; converted property
- (id)init;	// 0x2a8e5d
- (void).cxx_destruct;	// 0x2a9689
// converted property getter: - (id)backgroundImage;	// 0x2a9069
- (void)layoutSubcontrols;	// 0x2a934d
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x2a9089
- (void)setListHeader:(id)header;	// 0x2a8eed
- (void)setMenuDescription:(id)description;	// 0x2a8f65
@end

