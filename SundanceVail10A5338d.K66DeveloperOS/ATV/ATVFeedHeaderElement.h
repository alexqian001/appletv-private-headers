/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedHeaderElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13f7fd; S=0x13f80d; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x13f7d9; S=0x13f7ed; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x13f7b5; S=0x13f7c9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13f625
- (void)dealloc;	// 0x13f73d
// declared property getter: - (id)image;	// 0x13f7fd
// declared property setter: - (void)setImage:(id)image;	// 0x13f80d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x13f7ed
// declared property setter: - (void)setTitle:(id)title;	// 0x13f7c9
// declared property getter: - (id)subtitle;	// 0x13f7d9
// declared property getter: - (id)title;	// 0x13f7b5
@end

