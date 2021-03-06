/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : NSObject {
@private
	UIImage *backgroundImage;	// 4 = 0x4
	UIImage *miniBackgroundImage;	// 8 = 0x8
	UIImage *topBackgroundImage;	// 12 = 0xc
	UIImage *miniTopBackgroundImage;	// 16 = 0x10
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x302214e9; S=0x302214f9; @synthesize
@property(retain, nonatomic) UIImage *miniBackgroundImage;	// G=0x3022151d; S=0x3022152d; @synthesize
@property(retain, nonatomic) UIImage *miniTopBackgroundImage;	// G=0x30221585; S=0x30221595; @synthesize
@property(retain, nonatomic) UIImage *topBackgroundImage;	// G=0x30221551; S=0x30221561; @synthesize
// declared property getter: - (id)backgroundImage;	// 0x302214e9
- (void)dealloc;	// 0x30221461
// declared property getter: - (id)miniBackgroundImage;	// 0x3022151d
// declared property getter: - (id)miniTopBackgroundImage;	// 0x30221585
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x302214f9
// declared property setter: - (void)setMiniBackgroundImage:(id)image;	// 0x3022152d
// declared property setter: - (void)setMiniTopBackgroundImage:(id)image;	// 0x30221595
// declared property setter: - (void)setTopBackgroundImage:(id)image;	// 0x30221561
// declared property getter: - (id)topBackgroundImage;	// 0x30221551
@end

