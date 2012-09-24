/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBHeadersFooters : NSObject {
}
+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)type toDrawables:(id)drawables slideBase:(id)base headersFootersContainer:(id)container state:(id)state;	// 0x34ecb8a9
+ (PptHeadersFootersAtom *)headersFootersAtomWithHeadersFootersContainer:(id)headersFootersContainer;	// 0x34ecf271
+ (id)headersFootersContainerWithSlideContainer:(id)slideContainer state:(id)state;	// 0x34ec447d
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)headersFootersContainer toPlaceholderShape:(id)placeholderShape;	// 0x34faf821
+ (void)readHeadersFootersFromSlideContainer:(id)slideContainer toSlide:(id)slide drawables:(id)drawables state:(id)state;	// 0x34ecf1a9
+ (void)readHeadersFootersTextToSlideMasterDrawables:(id)slideMasterDrawables state:(id)state;	// 0x34ec4371
+ (void)readHeadersFootersToSlideLayout:(id)slideLayout drawables:(id)drawables state:(id)state;	// 0x34ecb83d
+ (id)readStringWithInstance:(int)instance fromContainer:(id)container;	// 0x34fafae1
@end
