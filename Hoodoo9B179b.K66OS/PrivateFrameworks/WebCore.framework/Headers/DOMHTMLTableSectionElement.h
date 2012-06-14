/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLCollection, NSString;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableSectionElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x3376b45d; S=0x3376b7dd; 
@property(copy) NSString *ch;	// G=0x3376b53d; S=0x3376b921; 
@property(copy) NSString *chOff;	// G=0x3376b61d; S=0x3376ba65; 
@property(readonly, retain) DOMHTMLCollection *rows;	// G=0x3376bced; 
@property(copy) NSString *vAlign;	// G=0x3376b6fd; S=0x3376bba9; 
// declared property getter: - (id)align;	// 0x3376b45d
// declared property getter: - (id)ch;	// 0x3376b53d
// declared property getter: - (id)chOff;	// 0x3376b61d
- (void)deleteRow:(int)row;	// 0x3376bf89
- (id)insertRow:(int)row;	// 0x3376be35
// declared property getter: - (id)rows;	// 0x3376bced
// declared property setter: - (void)setAlign:(id)align;	// 0x3376b7dd
// declared property setter: - (void)setCh:(id)ch;	// 0x3376b921
// declared property setter: - (void)setChOff:(id)off;	// 0x3376ba65
// declared property setter: - (void)setVAlign:(id)align;	// 0x3376bba9
// declared property getter: - (id)vAlign;	// 0x3376b6fd
@end
