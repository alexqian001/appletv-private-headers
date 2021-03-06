/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class BRXMLElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement {
@private
	NSArray *_interstitials;	// 44 = 0x2c
	BRXMLElement *_xml;	// 48 = 0x30
}
@property(retain, nonatomic) NSArray *interstitials;	// G=0x3319bc31; S=0x3319bc41; @synthesize=_interstitials
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3319bc65; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3319ba61
- (void)dealloc;	// 0x3319bbd1
// declared property getter: - (id)interstitials;	// 0x3319bc31
// declared property setter: - (void)setInterstitials:(id)interstitials;	// 0x3319bc41
// declared property getter: - (id)xml;	// 0x3319bc65
@end

