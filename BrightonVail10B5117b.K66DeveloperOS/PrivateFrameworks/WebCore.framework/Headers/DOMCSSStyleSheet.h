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
@property(readonly, assign) DOMCSSRuleList *cssRules;	// G=0x3618aca9; 
@property(readonly, assign) DOMCSSRule *ownerRule;	// G=0x3618ab9d; 
@property(readonly, assign) DOMCSSRuleList *rules;	// G=0x3618aded; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x3618b3c5
// declared property getter: - (id)cssRules;	// 0x3618aca9
- (void)deleteRule:(unsigned)rule;	// 0x3618b2b1
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x3618b0f1
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x3618af31
// declared property getter: - (id)ownerRule;	// 0x3618ab9d
- (void)removeRule:(unsigned)rule;	// 0x3618b61d
// declared property getter: - (id)rules;	// 0x3618aded
@end

