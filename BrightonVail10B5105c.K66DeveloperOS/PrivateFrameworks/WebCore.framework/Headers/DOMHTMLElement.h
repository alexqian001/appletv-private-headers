/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement {
}
@property(copy) NSString *accessKey;	// G=0x36a9d591; S=0x36a9d6b5; 
@property(readonly, assign) DOMHTMLCollection *children;	// G=0x36a9e109; 
@property(copy) NSString *className;	// G=0x36a9c8a5; S=0x36a9c9c9; 
@property(copy) NSString *contentEditable;	// G=0x36a9e215; S=0x36985489; 
@property(copy) NSString *dir;	// G=0x36a9c5cd; S=0x36a9c6f1; 
@property(assign) BOOL draggable;	// G=0x36a9ce8d; S=0x36a9cf91; converted property
@property(assign) BOOL hidden;	// G=0x36a9d371; S=0x36a9d47d; converted property
@property(copy) NSString *idName;	// G=0x36a9bc61; S=0x36a9bd85; 
@property(copy) NSString *innerHTML;	// G=0x3698cacd; S=0x3699b8e5; 
@property(copy) NSString *innerText;	// G=0x36976e89; S=0x36a9d869; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x369ae1bd; 
@property(copy) NSString *lang;	// G=0x36a9c0ed; S=0x36a9c211; 
@property(copy) NSString *outerHTML;	// G=0x36a9da21; S=0x36a9dbdd; 
@property(copy) NSString *outerText;	// G=0x36a9dd95; S=0x36a9df51; 
@property(assign) BOOL spellcheck;	// G=0x36a9e3d1; S=0x36a9e4d1; converted property
@property(assign) int tabIndex;	// G=0x36a9cc89; S=0x36a9cd8d; 
@property(copy) NSString *title;	// G=0x369b3769; S=0x36a9bf39; 
@property(readonly, assign) NSString *titleDisplayString;	// G=0x36a9e5d9; 
@property(assign) BOOL translate;	// G=0x36a9c3c5; S=0x36a9c4c5; converted property
@property(retain) id webkitdropzone;	// G=0x36a9d099; S=0x36a9d1bd; converted property
- (void)absolutePosition:(int *)position :(int *)arg2 :(int *)arg3 :(int *)arg4;	// 0x36a8b785
// declared property getter: - (id)accessKey;	// 0x36a9d591
// declared property getter: - (id)children;	// 0x36a9e109
- (id)classList;	// 0x36a9cb7d
// declared property getter: - (id)className;	// 0x36a9c8a5
- (void)click;	// 0x36a9eead
// declared property getter: - (id)contentEditable;	// 0x36a9e215
// declared property getter: - (id)dir;	// 0x36a9c5cd
// converted property getter: - (BOOL)draggable;	// 0x36a9ce8d
// converted property getter: - (BOOL)hidden;	// 0x36a9d371
// declared property getter: - (id)idName;	// 0x36a9bc61
// declared property getter: - (id)innerHTML;	// 0x3698cacd
// declared property getter: - (id)innerText;	// 0x36976e89
- (id)insertAdjacentElement:(id)element element:(id)element2;	// 0x36a9e839
- (void)insertAdjacentHTML:(id)html html:(id)html2;	// 0x36a9ea0d
- (void)insertAdjacentText:(id)text text:(id)text2;	// 0x36a9ec5d
// declared property getter: - (BOOL)isContentEditable;	// 0x369ae1bd
// declared property getter: - (id)lang;	// 0x36a9c0ed
// declared property getter: - (id)outerHTML;	// 0x36a9da21
// declared property getter: - (id)outerText;	// 0x36a9dd95
- (int)scrollXOffset;	// 0x3697a341
- (int)scrollYOffset;	// 0x3697a37d
// declared property setter: - (void)setAccessKey:(id)key;	// 0x36a9d6b5
// declared property setter: - (void)setClassName:(id)name;	// 0x36a9c9c9
// declared property setter: - (void)setContentEditable:(id)editable;	// 0x36985489
// declared property setter: - (void)setDir:(id)dir;	// 0x36a9c6f1
// converted property setter: - (void)setDraggable:(BOOL)draggable;	// 0x36a9cf91
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x36a9d47d
// declared property setter: - (void)setIdName:(id)name;	// 0x36a9bd85
// declared property setter: - (void)setInnerHTML:(id)html;	// 0x3699b8e5
// declared property setter: - (void)setInnerText:(id)text;	// 0x36a9d869
// declared property setter: - (void)setLang:(id)lang;	// 0x36a9c211
// declared property setter: - (void)setOuterHTML:(id)html;	// 0x36a9dbdd
// declared property setter: - (void)setOuterText:(id)text;	// 0x36a9df51
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x36a8b761
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x3694f921
// converted property setter: - (void)setSpellcheck:(BOOL)spellcheck;	// 0x36a9e4d1
// declared property setter: - (void)setTabIndex:(int)index;	// 0x36a9cd8d
// declared property setter: - (void)setTitle:(id)title;	// 0x36a9bf39
// converted property setter: - (void)setTranslate:(BOOL)translate;	// 0x36a9c4c5
// converted property setter: - (void)setWebkitdropzone:(id)webkitdropzone;	// 0x36a9d1bd
// converted property getter: - (BOOL)spellcheck;	// 0x36a9e3d1
- (int)structuralComplexityContribution;	// 0x36aee639
// declared property getter: - (int)tabIndex;	// 0x36a9cc89
// declared property getter: - (id)title;	// 0x369b3769
// declared property getter: - (id)titleDisplayString;	// 0x36a9e5d9
// converted property getter: - (BOOL)translate;	// 0x36a9c3c5
// converted property getter: - (id)webkitdropzone;	// 0x36a9d099
@end
