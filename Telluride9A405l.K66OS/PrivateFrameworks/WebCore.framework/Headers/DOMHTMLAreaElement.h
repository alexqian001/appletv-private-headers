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
@property(readonly, copy) NSURL *absoluteLinkURL;	// G=0x306f8ea1; 
@property(copy) NSString *accessKey;	// G=0x306f7479; S=0x306f79b9; 
@property(copy) NSString *alt;	// G=0x306f7559; S=0x306f7afd; 
@property(copy) NSString *coords;	// G=0x306f7639; S=0x306f7c41; 
@property(readonly, copy) NSString *hashName;	// G=0x306f858d; 
@property(readonly, copy) NSString *host;	// G=0x306f86d9; 
@property(readonly, copy) NSString *hostname;	// G=0x306f8825; 
@property(copy) NSString *href;	// G=0x306f8295; S=0x306f7d85; 
@property(assign) BOOL noHref;	// G=0x306f83ed; S=0x306f84b5; 
@property(readonly, copy) NSString *pathname;	// G=0x306f8971; 
@property(retain) id ping;	// G=0x306f7719; S=0x306f7ec9; converted property
@property(readonly, copy) NSString *port;	// G=0x306f8abd; 
@property(readonly, copy) NSString *protocol;	// G=0x306f8c09; 
@property(readonly, copy) NSString *search;	// G=0x306f8d55; 
@property(copy) NSString *shape;	// G=0x306f77f9; S=0x306f800d; 
@property(copy) NSString *target;	// G=0x306f78d9; S=0x306f8151; 
// declared property getter: - (id)absoluteLinkURL;	// 0x306f8ea1
- (WKQuad)absoluteQuadWithOwner:(id)owner;	// 0x3073bea1
- (id)absoluteQuadsWithOwner:(id)owner;	// 0x3073b2d9
// declared property getter: - (id)accessKey;	// 0x306f7479
// declared property getter: - (id)alt;	// 0x306f7559
- (CGRect)boundingBoxWithOwner:(id)owner;	// 0x3073bf49
- (id)boundingBoxesWithOwner:(id)owner;	// 0x3073b251
// declared property getter: - (id)coords;	// 0x306f7639
// declared property getter: - (id)hashName;	// 0x306f858d
// declared property getter: - (id)host;	// 0x306f86d9
// declared property getter: - (id)hostname;	// 0x306f8825
// declared property getter: - (id)href;	// 0x306f8295
// declared property getter: - (BOOL)noHref;	// 0x306f83ed
// declared property getter: - (id)pathname;	// 0x306f8971
// converted property getter: - (id)ping;	// 0x306f7719
// declared property getter: - (id)port;	// 0x306f8abd
// declared property getter: - (id)protocol;	// 0x306f8c09
// declared property getter: - (id)search;	// 0x306f8d55
// declared property setter: - (void)setAccessKey:(id)key;	// 0x306f79b9
// declared property setter: - (void)setAlt:(id)alt;	// 0x306f7afd
// declared property setter: - (void)setCoords:(id)coords;	// 0x306f7c41
// declared property setter: - (void)setHref:(id)href;	// 0x306f7d85
// declared property setter: - (void)setNoHref:(BOOL)href;	// 0x306f84b5
// converted property setter: - (void)setPing:(id)ping;	// 0x306f7ec9
// declared property setter: - (void)setShape:(id)shape;	// 0x306f800d
// declared property setter: - (void)setTarget:(id)target;	// 0x306f8151
// declared property getter: - (id)shape;	// 0x306f77f9
// declared property getter: - (id)target;	// 0x306f78d9
@end
