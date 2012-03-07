/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode, DOMMediaList, NSString;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(assign) BOOL disabled;	// G=0x316a2745; S=0x316a2759; 
@property(readonly, copy) NSString *href;	// G=0x316a2841; 
@property(readonly, retain) DOMMediaList *media;	// G=0x316a27fd; 
@property(readonly, retain) DOMNode *ownerNode;	// G=0x316a2885; 
@property(readonly, retain) DOMStyleSheet *parentStyleSheet;	// G=0x316a2869; 
@property(readonly, copy) NSString *title;	// G=0x316a2819; 
@property(readonly, copy) NSString *type;	// G=0x316a28a1; 
- (void)dealloc;	// 0x316a2781
// declared property getter: - (BOOL)disabled;	// 0x316a2745
- (void)finalize;	// 0x316a29d5
// declared property getter: - (id)href;	// 0x316a2841
// declared property getter: - (id)media;	// 0x316a27fd
// declared property getter: - (id)ownerNode;	// 0x316a2885
// declared property getter: - (id)parentStyleSheet;	// 0x316a2869
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x316a2759
// declared property getter: - (id)title;	// 0x316a2819
// declared property getter: - (id)type;	// 0x316a28a1
@end
