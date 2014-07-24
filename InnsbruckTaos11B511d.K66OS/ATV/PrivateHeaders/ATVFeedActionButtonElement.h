/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedActionButtonElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	ATVFeedImageElement *_focusedImage;	// 16 = 0x10
	NSString *_badge;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *badge;	// G=0x134759; S=0x134769; @synthesize=_badge
@property(retain, nonatomic) ATVFeedImageElement *focusedImage;	// G=0x134721; S=0x134731; @synthesize=_focusedImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1346e9; S=0x1346f9; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x1346c5; S=0x1346d9; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x1346a1; S=0x1346b5; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x134455
- (void).cxx_destruct;	// 0x134791
// declared property getter: - (id)badge;	// 0x134759
// declared property getter: - (id)focusedImage;	// 0x134721
// declared property getter: - (id)image;	// 0x1346e9
// declared property setter: - (void)setBadge:(id)badge;	// 0x134769
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x134731
// declared property setter: - (void)setImage:(id)image;	// 0x1346f9
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x1346d9
// declared property setter: - (void)setTitle:(id)title;	// 0x1346b5
// declared property getter: - (id)subtitle;	// 0x1346c5
// declared property getter: - (id)title;	// 0x1346a1
@end
