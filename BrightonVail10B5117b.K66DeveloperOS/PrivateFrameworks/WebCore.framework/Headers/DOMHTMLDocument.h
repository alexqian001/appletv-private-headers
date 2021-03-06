/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class NSString, DOMElement, DOMHTMLCollection;

@interface DOMHTMLDocument : DOMDocument {
}
@property(readonly, assign) DOMElement *activeElement;	// G=0x361aeedd; 
@property(copy) NSString *alinkColor;	// G=0x361af6b1; S=0x361af86d; 
@property(copy) NSString *bgColor;	// G=0x361aefe9; S=0x361af1a5; 
@property(readonly, assign) NSString *compatMode;	// G=0x361aed21; 
@property(copy) NSString *designMode;	// G=0x361ae9bd; S=0x361aeb79; 
@property(copy) NSString *dir;	// G=0x361ae659; S=0x361ae815; 
@property(readonly, assign) DOMHTMLCollection *embeds;	// G=0x361ae135; 
@property(copy) NSString *fgColor;	// G=0x361af34d; S=0x361af509; 
@property(readonly, assign) int height;	// G=0x361ae559; 
@property(copy) NSString *linkColor;	// G=0x361afa15; S=0x361afbd1; 
@property(readonly, assign) DOMHTMLCollection *plugins;	// G=0x361ae241; 
@property(readonly, assign) DOMHTMLCollection *scripts;	// G=0x361ae34d; 
@property(copy) NSString *vlinkColor;	// G=0x361afd79; S=0x361aff35; 
@property(readonly, assign) int width;	// G=0x361ae459; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x361a0815
- (id)_createDocumentFragmentWithText:(id)text;	// 0x361a0aa5
// declared property getter: - (id)activeElement;	// 0x361aeedd
// declared property getter: - (id)alinkColor;	// 0x361af6b1
// declared property getter: - (id)bgColor;	// 0x361aefe9
- (void)captureEvents;	// 0x361b0725
- (void)clear;	// 0x361b0629
- (void)close;	// 0x361b01dd
// declared property getter: - (id)compatMode;	// 0x361aed21
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x360ae51d
- (id)createDocumentFragmentWithText:(id)text;	// 0x361a05d5
// declared property getter: - (id)designMode;	// 0x361ae9bd
// declared property getter: - (id)dir;	// 0x361ae659
// declared property getter: - (id)embeds;	// 0x361ae135
// declared property getter: - (id)fgColor;	// 0x361af34d
- (BOOL)hasFocus;	// 0x361b091d
// declared property getter: - (int)height;	// 0x361ae559
// declared property getter: - (id)linkColor;	// 0x361afa15
- (void)open;	// 0x361b00dd
// declared property getter: - (id)plugins;	// 0x361ae241
- (void)releaseEvents;	// 0x361b0821
// declared property getter: - (id)scripts;	// 0x361ae34d
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x361af86d
// declared property setter: - (void)setBgColor:(id)color;	// 0x361af1a5
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x361aeb79
// declared property setter: - (void)setDir:(id)dir;	// 0x361ae815
// declared property setter: - (void)setFgColor:(id)color;	// 0x361af509
// declared property setter: - (void)setLinkColor:(id)color;	// 0x361afbd1
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x361aff35
// declared property getter: - (id)vlinkColor;	// 0x361afd79
// declared property getter: - (int)width;	// 0x361ae459
- (void)write:(id)write;	// 0x361b02d9
- (void)writeln:(id)writeln;	// 0x361b0481
@end

