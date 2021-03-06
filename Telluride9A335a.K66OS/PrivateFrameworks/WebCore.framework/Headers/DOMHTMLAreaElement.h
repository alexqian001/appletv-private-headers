/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMHTMLElement.h"

@class NSURL, NSString;

@interface DOMHTMLAreaElement : DOMHTMLElement {
}
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x35bc0ea1; 
@property(copy) NSString *accessKey;	// G=0x35bbf479; S=0x35bbf9b9; 
@property(copy) NSString *alt;	// G=0x35bbf559; S=0x35bbfafd; 
@property(copy) NSString *coords;	// G=0x35bbf639; S=0x35bbfc41; 
@property(readonly, copy) NSString *hashName;	// G=0x35bc058d; 
@property(readonly, copy) NSString *host;	// G=0x35bc06d9; 
@property(readonly, copy) NSString *hostname;	// G=0x35bc0825; 
@property(copy) NSString *href;	// G=0x35bc0295; S=0x35bbfd85; 
@property(assign) BOOL noHref;	// G=0x35bc03ed; S=0x35bc04b5; 
@property(readonly, copy) NSString *pathname;	// G=0x35bc0971; 
@property(retain) id ping;	// G=0x35bbf719; S=0x35bbfec9; converted property
@property(readonly, copy) NSString *port;	// G=0x35bc0abd; 
@property(readonly, copy) NSString *protocol;	// G=0x35bc0c09; 
@property(readonly, copy) NSString *search;	// G=0x35bc0d55; 
@property(copy) NSString *shape;	// G=0x35bbf7f9; S=0x35bc000d; 
@property(copy) NSString *target;	// G=0x35bbf8d9; S=0x35bc0151; 
// declared property getter: - (id)absoluteLinkURL;	// 0x35bc0ea1
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x35c03ea1
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x35c032d9
// declared property getter: - (id)accessKey;	// 0x35bbf479
// declared property getter: - (id)alt;	// 0x35bbf559
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x35c03f49
- (id)boundingBoxesWithOwner:(id)owner;	// 0x35c03251
// declared property getter: - (id)coords;	// 0x35bbf639
// declared property getter: - (id)hashName;	// 0x35bc058d
// declared property getter: - (id)host;	// 0x35bc06d9
// declared property getter: - (id)hostname;	// 0x35bc0825
// declared property getter: - (id)href;	// 0x35bc0295
// declared property getter: - (BOOL)noHref;	// 0x35bc03ed
// declared property getter: - (id)pathname;	// 0x35bc0971
// converted property getter: - (id)ping;	// 0x35bbf719
// declared property getter: - (id)port;	// 0x35bc0abd
// declared property getter: - (id)protocol;	// 0x35bc0c09
// declared property getter: - (id)search;	// 0x35bc0d55
// declared property setter: - (void)setAccessKey:(id)key;	// 0x35bbf9b9
// declared property setter: - (void)setAlt:(id)alt;	// 0x35bbfafd
// declared property setter: - (void)setCoords:(id)coords;	// 0x35bbfc41
// declared property setter: - (void)setHref:(id)href;	// 0x35bbfd85
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x35bc04b5
// converted property setter: - (void)setPing:(id)ping;	// 0x35bbfec9
// declared property setter: - (void)setShape:(id)shape;	// 0x35bc000d
// declared property setter: - (void)setTarget:(id)target;	// 0x35bc0151
// declared property getter: - (id)shape;	// 0x35bbf7f9
// declared property getter: - (id)target;	// 0x35bbf8d9
@end

