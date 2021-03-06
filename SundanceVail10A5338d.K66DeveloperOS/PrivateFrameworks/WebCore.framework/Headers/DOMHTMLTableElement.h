/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLTableCaptionElement, DOMHTMLCollection, DOMHTMLTableSectionElement;

@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x3583e025; S=0x3583e149; 
@property(copy) NSString *bgColor;	// G=0x3583e2fd; S=0x3583e421; 
@property(copy) NSString *border;	// G=0x3583e5d5; S=0x3583e6f9; 
@property(retain) DOMHTMLTableCaptionElement *caption;	// G=0x3583d669; S=0x3583d775; 
@property(copy) NSString *cellPadding;	// G=0x3583e8ad; S=0x3583e9d1; 
@property(copy) NSString *cellSpacing;	// G=0x3583eb85; S=0x3583eca9; 
@property(copy) NSString *frameBorders;	// G=0x3583ee5d; S=0x3583ef81; 
@property(readonly, assign) DOMHTMLCollection *rows;	// G=0x3583de0d; 
@property(copy) NSString *rules;	// G=0x3583f135; S=0x3583f259; 
@property(copy) NSString *summary;	// G=0x3583f40d; S=0x3583f531; 
@property(readonly, assign) DOMHTMLCollection *tBodies;	// G=0x3583df19; 
@property(retain) DOMHTMLTableSectionElement *tFoot;	// G=0x3583db81; S=0x3583dc8d; 
@property(retain) DOMHTMLTableSectionElement *tHead;	// G=0x3583d8f5; S=0x3583da01; 
@property(copy) NSString *width;	// G=0x3583f6e5; S=0x3583f809; 
// declared property getter: - (id)align;	// 0x3583e025
// declared property getter: - (id)bgColor;	// 0x3583e2fd
// declared property getter: - (id)border;	// 0x3583e5d5
// declared property getter: - (id)caption;	// 0x3583d669
// declared property getter: - (id)cellPadding;	// 0x3583e8ad
// declared property getter: - (id)cellSpacing;	// 0x3583eb85
- (id)createCaption;	// 0x3583ffe1
- (id)createTBody;	// 0x3583fe7d
- (id)createTFoot;	// 0x3583fc1d
- (id)createTHead;	// 0x3583f9bd
- (void)deleteCaption;	// 0x35840145
- (void)deleteRow:(int)row;	// 0x358403b9
- (void)deleteTFoot;	// 0x3583fd81
- (void)deleteTHead;	// 0x3583fb21
// declared property getter: - (id)frameBorders;	// 0x3583ee5d
- (id)insertRow:(int)row;	// 0x35840241
// declared property getter: - (id)rows;	// 0x3583de0d
// declared property getter: - (id)rules;	// 0x3583f135
// declared property setter: - (void)setAlign:(id)align;	// 0x3583e149
// declared property setter: - (void)setBgColor:(id)color;	// 0x3583e421
// declared property setter: - (void)setBorder:(id)border;	// 0x3583e6f9
// declared property setter: - (void)setCaption:(id)caption;	// 0x3583d775
// declared property setter: - (void)setCellPadding:(id)padding;	// 0x3583e9d1
// declared property setter: - (void)setCellSpacing:(id)spacing;	// 0x3583eca9
// declared property setter: - (void)setFrameBorders:(id)borders;	// 0x3583ef81
// declared property setter: - (void)setRules:(id)rules;	// 0x3583f259
// declared property setter: - (void)setSummary:(id)summary;	// 0x3583f531
// declared property setter: - (void)setTFoot:(id)foot;	// 0x3583dc8d
// declared property setter: - (void)setTHead:(id)head;	// 0x3583da01
// declared property setter: - (void)setWidth:(id)width;	// 0x3583f809
- (int)structuralComplexityContribution;	// 0x35862619
// declared property getter: - (id)summary;	// 0x3583f40d
// declared property getter: - (id)tBodies;	// 0x3583df19
// declared property getter: - (id)tFoot;	// 0x3583db81
// declared property getter: - (id)tHead;	// 0x3583d8f5
// declared property getter: - (id)width;	// 0x3583f6e5
@end

