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
@property(assign) BOOL useTrackedProperties;	// G=0x34e13d51; S=0x34e13d61; converted property
- (id)initWithRow:(id)row at:(int)at;	// 0x34cbe45d
- (double)cellWidth;	// 0x34cc3f59
- (void)clearProperties;	// 0x34e13da5
- (int)compareIndex:(id)index;	// 0x34e13d81
- (void)dealloc;	// 0x34c210cd
- (int)index;	// 0x34e13d71
- (id)properties;	// 0x34cbe921
- (id)row;	// 0x34cbf1ed
// converted property setter: - (void)setUseTrackedProperties:(BOOL)properties;	// 0x34e13d61
- (id)text;	// 0x34cbf1dd
// converted property getter: - (BOOL)useTrackedProperties;	// 0x34e13d51
@end

