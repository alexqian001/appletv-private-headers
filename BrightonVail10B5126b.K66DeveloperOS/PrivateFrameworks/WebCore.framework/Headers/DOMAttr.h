/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration, DOMElement;

@interface DOMAttr : DOMNode {
}
@property(readonly, assign) NSString *name;	// G=0x35fa6a65; 
@property(readonly, assign) DOMElement *ownerElement;	// G=0x35fa6f25; 
@property(readonly, assign) BOOL specified;	// G=0x35fa6c25; 
@property(readonly, assign) DOMCSSStyleDeclaration *style;	// G=0x35fa7129; 
@property(copy) NSString *value;	// G=0x35fa6c55; S=0x35fa6d6d; 
- (BOOL)isId;	// 0x35fa7029
// declared property getter: - (id)name;	// 0x35fa6a65
// declared property getter: - (id)ownerElement;	// 0x35fa6f25
// declared property setter: - (void)setValue:(id)value;	// 0x35fa6d6d
// declared property getter: - (BOOL)specified;	// 0x35fa6c25
// declared property getter: - (id)style;	// 0x35fa7129
// declared property getter: - (id)value;	// 0x35fa6c55
@end

