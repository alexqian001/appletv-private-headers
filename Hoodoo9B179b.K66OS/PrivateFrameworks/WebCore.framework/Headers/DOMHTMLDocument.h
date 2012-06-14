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
@property(readonly, retain) DOMElement *activeElement;	// G=0x33744ad5; 
@property(copy) NSString *alinkColor;	// G=0x337450a1; S=0x337451ed; 
@property(copy) NSString *bgColor;	// G=0x33744b99; S=0x33744ce5; 
@property(readonly, copy) NSString *compatMode;	// G=0x33744989; 
@property(copy) NSString *designMode;	// G=0x33744705; S=0x33744851; 
@property(copy) NSString *dir;	// G=0x33744481; S=0x337445cd; 
@property(readonly, retain) DOMHTMLCollection *embeds;	// G=0x33743f31; 
@property(copy) NSString *fgColor;	// G=0x33744e1d; S=0x33744f69; 
@property(readonly, assign) int height;	// G=0x337443c5; 
@property(copy) NSString *linkColor;	// G=0x33745325; S=0x33745471; 
@property(readonly, retain) DOMHTMLCollection *plugins;	// G=0x33744079; 
@property(readonly, retain) DOMHTMLCollection *scripts;	// G=0x337441c1; 
@property(copy) NSString *vlinkColor;	// G=0x337455a9; S=0x337456f5; 
@property(readonly, assign) int width;	// G=0x33744309; 
- (id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;	// 0x337398dd
- (id)_createDocumentFragmentWithText:(id)text;	// 0x33739669
// declared property getter: - (id)activeElement;	// 0x33744ad5
// declared property getter: - (id)alinkColor;	// 0x337450a1
// declared property getter: - (id)bgColor;	// 0x33744b99
- (void)captureEvents;	// 0x33745cc9
- (void)clear;	// 0x33745c11
- (void)close;	// 0x337458e9
// declared property getter: - (id)compatMode;	// 0x33744989
- (id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;	// 0x3369129d
- (id)createDocumentFragmentWithText:(id)text;	// 0x337396e9
// declared property getter: - (id)designMode;	// 0x33744705
// declared property getter: - (id)dir;	// 0x33744481
// declared property getter: - (id)embeds;	// 0x33743f31
// declared property getter: - (id)fgColor;	// 0x33744e1d
- (BOOL)hasFocus;	// 0x33745e39
// declared property getter: - (int)height;	// 0x337443c5
// declared property getter: - (id)linkColor;	// 0x33745325
- (void)open;	// 0x3374582d
// declared property getter: - (id)plugins;	// 0x33744079
- (void)releaseEvents;	// 0x33745d81
// declared property getter: - (id)scripts;	// 0x337441c1
// declared property setter: - (void)setAlinkColor:(id)color;	// 0x337451ed
// declared property setter: - (void)setBgColor:(id)color;	// 0x33744ce5
// declared property setter: - (void)setDesignMode:(id)mode;	// 0x33744851
// declared property setter: - (void)setDir:(id)dir;	// 0x337445cd
// declared property setter: - (void)setFgColor:(id)color;	// 0x33744f69
// declared property setter: - (void)setLinkColor:(id)color;	// 0x33745471
// declared property setter: - (void)setVlinkColor:(id)color;	// 0x337456f5
// declared property getter: - (id)vlinkColor;	// 0x337455a9
// declared property getter: - (int)width;	// 0x33744309
- (void)write:(id)write;	// 0x337459a1
- (void)writeln:(id)writeln;	// 0x33745ad9
@end
