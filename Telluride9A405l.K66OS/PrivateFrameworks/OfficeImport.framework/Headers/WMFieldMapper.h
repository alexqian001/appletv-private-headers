/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMParagraphMapper.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WMFieldMapper : WMParagraphMapper {
@private
	int mMode;	// 24 = 0x18
	unsigned mType;	// 28 = 0x1c
	NSMutableString *mLinkRef;	// 32 = 0x20
}
- (id)initWithWDFieldMarker:(id)wdfieldMarker parent:(id)parent;	// 0x30c76991
- (void)mapFieldMarkerAt:(id)at marker:(id)marker withState:(id)state;	// 0x30c73855
- (void)mapRunAt:(id)at run:(id)run withState:(id)state;	// 0x30c76ad1
@end

