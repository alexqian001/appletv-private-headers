/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTNumberCell : GQDTCell {
@private
	double mValue;	// 16 = 0x10
	GQDTComputedFormatSpec *mComputedFormat;	// 24 = 0x18
}
- (CFStringRef)createStringValue;	// 0x36c53f71
- (void)dealloc;	// 0x36c53f0d
- (int)readAttributesForNCell:(xmlTextReader *)ncell;	// 0x36c54099
- (int)readAttributesForNumberCell:(xmlTextReader *)numberCell;	// 0x36c54041
- (double)value;	// 0x36c53f59
@end

