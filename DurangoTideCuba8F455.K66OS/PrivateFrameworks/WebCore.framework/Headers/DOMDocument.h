/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class DOMHTMLCollection, DOMAbstractView, DOMDocumentType, DOMImplementation, DOMStyleSheetList, DOMHTMLElement, DOMElement, NSString;

@interface DOMDocument : DOMNode {
}
@property(readonly, copy) NSString *URL;	// G=0x31822871; 
@property(readonly, retain) DOMHTMLCollection *anchors;	// G=0x31824255; 
@property(readonly, retain) DOMHTMLCollection *applets;	// G=0x3182412d; 
@property(retain) DOMHTMLElement *body;	// G=0x31619931; S=0x31823ea5; 
@property(readonly, copy) NSString *characterSet;	// G=0x31823031; 
@property(copy) NSString *charset;	// G=0x31822efd; S=0x318244b1; 
@property(copy) NSString *cookie;	// G=0x31823c25; S=0x31823d71; 
@property(readonly, copy) NSString *defaultCharset;	// G=0x318245c9; 
@property(readonly, retain) DOMAbstractView *defaultView;	// G=0x31823869; 
@property(readonly, retain) DOMDocumentType *doctype;	// G=0x31646da9; 
@property(readonly, retain) DOMElement *documentElement;	// G=0x31619c89; 
@property(copy) NSString *documentURI;	// G=0x31822c65; S=0x31823751; 
@property(readonly, copy) NSString *domain;	// G=0x31823af1; 
@property(readonly, retain) DOMHTMLCollection *forms;	// G=0x31651c95; 
@property(readonly, retain) DOMHTMLCollection *images;	// G=0x31824005; 
@property(readonly, retain) DOMImplementation *implementation;	// G=0x31822855; 
@property(readonly, copy) NSString *inputEncoding;	// G=0x31822899; 
@property(readonly, copy) NSString *lastModified;	// G=0x3182437d; 
@property(readonly, retain) DOMHTMLCollection *links;	// G=0x316516b5; 
@property(readonly, copy) NSString *preferredStylesheetSet;	// G=0x31824831; 
@property(readonly, copy) NSString *readyState;	// G=0x318246fd; 
@property(readonly, copy) NSString *referrer;	// G=0x318239bd; 
@property(copy) NSString *selectedStylesheetSet;	// G=0x31824965; S=0x31824a99; 
@property(readonly, retain) DOMStyleSheetList *styleSheets;	// G=0x31823885; 
@property(copy) NSString *title;	// G=0x31822db1; S=0x318238a1; 
@property(readonly, copy) NSString *xmlEncoding;	// G=0x318229cd; 
@property(assign) BOOL xmlStandalone;	// G=0x31822841; S=0x31823719; 
@property(copy) NSString *xmlVersion;	// G=0x31822b19; S=0x31823165; 
// declared property getter: - (id)URL;	// 0x31822871
- (id)adoptNode:(id)node;	// 0x318264c1
// declared property getter: - (id)anchors;	// 0x31824255
// declared property getter: - (id)applets;	// 0x3182412d
// declared property getter: - (id)body;	// 0x31619931
- (id)caretRangeFromPoint:(int)point y:(int)y;	// 0x31828f0d
// declared property getter: - (id)characterSet;	// 0x31823031
// declared property getter: - (id)charset;	// 0x31822efd
// declared property getter: - (id)cookie;	// 0x31823c25
- (id)createAttribute:(id)attribute;	// 0x31825609
- (id)createAttributeNS:(id)ns :(id)arg2;	// 0x31825e39
- (id)createAttributeNS:(id)ns qualifiedName:(id)name;	// 0x31825c01
- (id)createCDATASection:(id)section;	// 0x31824ff1
- (id)createCSSStyleDeclaration;	// 0x317800fd
- (id)createComment:(id)comment;	// 0x31824e5d
- (id)createDocumentFragment;	// 0x31824bb1
- (id)createElement:(id)element;	// 0x31647db5
- (id)createElementNS:(id)ns :(id)arg2;	// 0x318234d9
- (id)createElementNS:(id)ns qualifiedName:(id)name;	// 0x31823299
- (id)createEntityReference:(id)reference;	// 0x318257b9
- (id)createEvent:(id)event;	// 0x31826681
- (id)createExpression:(id)expression :(id)arg2;	// 0x318276ed
- (id)createExpression:(id)expression resolver:(id)resolver;	// 0x318273bd
- (id)createNSResolver:(id)resolver;	// 0x31827a1d
- (id)createNodeIterator:(id)iterator :(unsigned)arg2 :(id)arg3 :(BOOL)arg4;	// 0x31826841
- (id)createNodeIterator:(id)iterator whatToShow:(unsigned)show filter:(id)filter expandEntityReferences:(BOOL)references;	// 0x317a9645
- (id)createProcessingInstruction:(id)instruction :(id)arg2;	// 0x318253d5
- (id)createProcessingInstruction:(id)instruction data:(id)data;	// 0x318251a1
- (id)createRange;	// 0x317a4cbd
- (id)createTextNode:(id)node;	// 0x31824cc9
- (id)createTouch:(id)touch target:(id)target identifier:(int)identifier pageX:(int)x pageY:(int)y screenX:(int)x6 screenY:(int)y7;	// 0x31829b09
- (id)createTouchList;	// 0x31829c8d
- (id)createTreeWalker:(id)walker :(unsigned)arg2 :(id)arg3 :(BOOL)arg4;	// 0x31826e49
- (id)createTreeWalker:(id)walker whatToShow:(unsigned)show filter:(id)filter expandEntityReferences:(BOOL)references;	// 0x31826b45
// declared property getter: - (id)defaultCharset;	// 0x318245c9
// declared property getter: - (id)defaultView;	// 0x31823869
// declared property getter: - (id)doctype;	// 0x31646da9
// declared property getter: - (id)documentElement;	// 0x31619c89
// declared property getter: - (id)documentURI;	// 0x31822c65
// declared property getter: - (id)domain;	// 0x31823af1
- (id)elementFromPoint:(int)point y:(int)y;	// 0x31828eed
- (id)evaluate:(id)evaluate :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;	// 0x31827eb1
- (id)evaluate:(id)evaluate contextNode:(id)node resolver:(id)resolver type:(unsigned short)type inResult:(id)result;	// 0x31827b4d
- (BOOL)execCommand:(id)command;	// 0x31828581
- (BOOL)execCommand:(id)command userInterface:(BOOL)interface;	// 0x318283c9
- (BOOL)execCommand:(id)command userInterface:(BOOL)interface value:(id)value;	// 0x31828215
// declared property getter: - (id)forms;	// 0x31651c95
- (id)getComputedStyle:(id)style :(id)arg2;	// 0x31829039
- (id)getComputedStyle:(id)style pseudoElement:(id)element;	// 0x31774b61
- (id)getElementById:(id)anId;	// 0x3163dac1
- (id)getElementsByClassName:(id)name;	// 0x318295f5
- (id)getElementsByName:(id)name;	// 0x31828d49
- (id)getElementsByTagName:(id)name;	// 0x317a52ed
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x31826299
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x31826071
- (id)getMatchedCSSRules:(id)rules pseudoElement:(id)element;	// 0x31829219
- (id)getMatchedCSSRules:(id)rules pseudoElement:(id)element authorOnly:(BOOL)only;	// 0x31829401
- (id)getOverrideStyle:(id)style :(id)arg2;	// 0x31827285
- (id)getOverrideStyle:(id)style pseudoElement:(id)element;	// 0x3182714d
- (id)head;	// 0x31823fe9
// declared property getter: - (id)images;	// 0x31824005
// declared property getter: - (id)implementation;	// 0x31822855
- (id)importNode:(id)node :(BOOL)arg2;	// 0x31825ab5
- (id)importNode:(id)node deep:(BOOL)deep;	// 0x31825969
// declared property getter: - (id)inputEncoding;	// 0x31822899
// declared property getter: - (id)lastModified;	// 0x3182437d
// declared property getter: - (id)links;	// 0x316516b5
// declared property getter: - (id)preferredStylesheetSet;	// 0x31824831
- (BOOL)queryCommandEnabled:(id)enabled;	// 0x31828725
- (BOOL)queryCommandIndeterm:(id)indeterm;	// 0x31828841
- (BOOL)queryCommandState:(id)state;	// 0x3182895d
- (BOOL)queryCommandSupported:(id)supported;	// 0x31828a79
- (id)queryCommandValue:(id)value;	// 0x31828b95
- (id)querySelector:(id)selector;	// 0x31829799
- (id)querySelectorAll:(id)all;	// 0x31829949
// declared property getter: - (id)readyState;	// 0x318246fd
// declared property getter: - (id)referrer;	// 0x318239bd
// declared property getter: - (id)selectedStylesheetSet;	// 0x31824965
// declared property setter: - (void)setBody:(id)body;	// 0x31823ea5
// declared property setter: - (void)setCharset:(id)charset;	// 0x318244b1
// declared property setter: - (void)setCookie:(id)cookie;	// 0x31823d71
// declared property setter: - (void)setDocumentURI:(id)uri;	// 0x31823751
// declared property setter: - (void)setSelectedStylesheetSet:(id)set;	// 0x31824a99
// declared property setter: - (void)setTitle:(id)title;	// 0x318238a1
// declared property setter: - (void)setXmlStandalone:(BOOL)standalone;	// 0x31823719
// declared property setter: - (void)setXmlVersion:(id)version;	// 0x31823165
// declared property getter: - (id)styleSheets;	// 0x31823885
// declared property getter: - (id)title;	// 0x31822db1
// declared property getter: - (id)xmlEncoding;	// 0x318229cd
// declared property getter: - (BOOL)xmlStandalone;	// 0x31822841
// declared property getter: - (id)xmlVersion;	// 0x31822b19
@end

