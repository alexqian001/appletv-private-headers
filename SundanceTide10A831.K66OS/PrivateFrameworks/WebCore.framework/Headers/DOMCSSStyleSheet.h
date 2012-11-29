/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, assign) DOMCSSRuleList *cssRules;	// G=0x3546a9c1; 
@property(readonly, assign) DOMCSSRule *ownerRule;	// G=0x3546a8b5; 
@property(readonly, assign) DOMCSSRuleList *rules;	// G=0x3546ab05; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x3546b0dd
// declared property getter: - (id)cssRules;	// 0x3546a9c1
- (void)deleteRule:(unsigned)rule;	// 0x3546afc9
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x3546ae09
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x3546ac49
// declared property getter: - (id)ownerRule;	// 0x3546a8b5
- (void)removeRule:(unsigned)rule;	// 0x3546b335
// declared property getter: - (id)rules;	// 0x3546ab05
@end
