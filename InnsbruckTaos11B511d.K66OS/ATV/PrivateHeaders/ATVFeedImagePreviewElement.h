/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedImagePreviewElement : ATVFeedElement {
	ATVFeedImageElement *_image;	// 4 = 0x4
	NSString *_label;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x137a65; S=0x137a75; @synthesize=_image
@property(retain, nonatomic) NSString *label;	// G=0x137a9d; S=0x137aad; @synthesize=_label
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13791d
- (void).cxx_destruct;	// 0x137ad5
// declared property getter: - (id)image;	// 0x137a65
// declared property getter: - (id)label;	// 0x137a9d
// declared property setter: - (void)setImage:(id)image;	// 0x137a75
// declared property setter: - (void)setLabel:(id)label;	// 0x137aad
@end
