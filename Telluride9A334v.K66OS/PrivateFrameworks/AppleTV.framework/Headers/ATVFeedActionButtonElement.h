/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedActionButtonElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	ATVFeedImageElement *_image;	// 32 = 0x20
	ATVFeedImageElement *_focusedImage;	// 36 = 0x24
	NSString *_badge;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *badge;	// G=0x333263fd; S=0x3332640d; @synthesize=_badge
@property(retain, nonatomic) ATVFeedImageElement *focusedImage;	// G=0x333263c9; S=0x333263d9; @synthesize=_focusedImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x33326395; S=0x333263a5; @synthesize=_image
@property(copy, nonatomic) NSString *title;	// G=0x33326361; S=0x33326371; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33326171
// declared property getter: - (id)badge;	// 0x333263fd
- (void)dealloc;	// 0x333262d9
// declared property getter: - (id)focusedImage;	// 0x333263c9
// declared property getter: - (id)image;	// 0x33326395
// declared property setter: - (void)setBadge:(id)badge;	// 0x3332640d
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x333263d9
// declared property setter: - (void)setImage:(id)image;	// 0x333263a5
// declared property setter: - (void)setTitle:(id)title;	// 0x33326371
// declared property getter: - (id)title;	// 0x33326361
@end
