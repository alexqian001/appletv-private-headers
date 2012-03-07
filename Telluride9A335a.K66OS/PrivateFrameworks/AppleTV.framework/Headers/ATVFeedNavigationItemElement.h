/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationItemElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_url;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *title;	// G=0x3430d071; S=0x3430d081; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3430d0a5; S=0x3430d0b5; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3430cf55
- (void)dealloc;	// 0x3430d011
// declared property setter: - (void)setTitle:(id)title;	// 0x3430d081
// declared property setter: - (void)setUrl:(id)url;	// 0x3430d0b5
// declared property getter: - (id)title;	// 0x3430d071
// declared property getter: - (id)url;	// 0x3430d0a5
@end
