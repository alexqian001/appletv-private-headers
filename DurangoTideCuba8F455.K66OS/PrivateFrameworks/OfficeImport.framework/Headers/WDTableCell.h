/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableRow, WDTableCellProperties, WDText;

__attribute__((visibility("hidden")))
@interface WDTableCell : NSObject {
@private
	int mIndex;	// 4 = 0x4
	WDTableRow *mRow;	// 8 = 0x8
	WDTableCellProperties *mProperties;	// 12 = 0xc
	WDText *mText;	// 16 = 0x10
	BOOL mUseTrackedProperties;	// 20 = 0x14
}
@property(assign) BOOL useTrackedProperties;	// G=0x32d29759; S=0x32d29769; converted property
- (id)initWithRow:(id)row at:(int)at;	// 0x32be26ad
- (double)cellWidth;	// 0x32bb3071
- (void)clearProperties;	// 0x32d297a9
- (int)compareIndex:(id)index;	// 0x32d29789
- (void)dealloc;	// 0x32bb7a0d
- (int)index;	// 0x32d29779
- (id)properties;	// 0x32bb30d5
- (id)row;	// 0x32be3715
// converted property setter: - (void)setUseTrackedProperties:(BOOL)properties;	// 0x32d29769
- (id)text;	// 0x32bb4f25
// converted property getter: - (BOOL)useTrackedProperties;	// 0x32d29759
@end
