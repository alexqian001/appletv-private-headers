/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class DOMHTMLCollection, DOMElement, NSString;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, assign) DOMElement *activeElement;	// G=0x353c371d; 
@property(copy) NSString *alinkColor;	// G=0x353c3ef1; S=0x353c40ad; 
@property(copy) NSString *bgColor;	// G=0x353c3829; S=0x353c39e5; 
@property(readonly, assign) NSString *compatMode;	// G=0x353c3561; 
@property(copy) NSString *designMode;	// G=0x353c31fd; S=0x353c33b9; 
@property(copy) NSString *dir;	// G=0x353c2e99; S=0x353c3055; 
@property(readonly, assign) DOMHTMLCollection *embeds;	// G=0x353c2975; 
@property(copy) NSString *fgColor;	// G=0x353c3b8d; S=0x353c3d49; 
@property(readonly, assign) int height;	// G=0x353c2d99; 
@property(copy) NSString *linkColor;	// G=0x353c4255; S=0x353c4411; 
@property(readonly, assign) DOMHTMLCollection *plugins;	// G=0x353c2a81; 
@property(readonly, assign) DOMHTMLCollection *scripts;	// G=0x353c2b8d; 
@property(copy) NSString *vlinkColor;	// G=0x353c45b9; S=0x353c4775; 
@property(readonly, assign) int width;	// G=0x353c2c99; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x353b4cd1
- (id)_createDocumentFragmentWithText:(id)text;	// 0x353b4f61
// declared property getter: - (id)activeElement;	// 0x353c371d
// declared property getter: - (id)alinkColor;	// 0x353c3ef1
// declared property getter: - (id)bgColor;	// 0x353c3829
- (void)captureEvents;	// 0x353c4f65
- (void)clear;	// 0x353c4e69
- (void)close;	// 0x353c4a1d
// declared property getter: - (id)compatMode;	// 0x353c3561
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x352b03b1
- (id)createDocumentFragmentWithText:(id)text;	// 0x353b4a91
// declared property getter: - (id)designMode;	// 0x353c31fd
// declared property getter: - (id)dir;	// 0x353c2e99
// declared property getter: - (id)embeds;	// 0x353c2975
// declared property getter: - (id)fgColor;	// 0x353c3b8d
- (BOOL)hasFocus;	// 0x353c515d
// declared property getter: - (int)height;	// 0x353c2d99
// declared property getter: - (id)linkColor;	// 0x353c4255
- (void)open;	// 0x353c491d
// declared property getter: - (id)plugins;	// 0x353c2a81
- (void)releaseEvents;	// 0x353c5061
// declared property getter: - (id)scripts;	// 0x353c2b8d
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x353c40ad
// declared property setter: - (void)setBgColor:(id)color;	// 0x353c39e5
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x353c33b9
// declared property setter: - (void)setDir:(id)dir;	// 0x353c3055
// declared property setter: - (void)setFgColor:(id)color;	// 0x353c3d49
// declared property setter: - (void)setLinkColor:(id)color;	// 0x353c4411
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x353c4775
// declared property getter: - (id)vlinkColor;	// 0x353c45b9
// declared property getter: - (int)width;	// 0x353c2c99
- (void)write:(id)write;	// 0x353c4b19
- (void)writeln:(id)writeln;	// 0x353c4cc1
@end
