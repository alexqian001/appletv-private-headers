/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface ECColumnWidthConvertor : NSObject {
	int mMultiplier;	// 4 = 0x4
}
- (double)lassoColumnWidthFromXl:(double)xl;	// 0x34f12889
- (void)setupWithEDFont:(id)edfont state:(id)state;	// 0x34f12721
- (CGSize)stringSizeWithFont:(id)font edFont:(id)font2 drawingState:(id)state;	// 0x34f127c5
- (double)xlBaseColumnWidthFromXlColumnWidth:(double)xlColumnWidth;	// 0x3507b5a9
- (double)xlColumnWidthFromLasso:(double)lasso;	// 0x3507b581
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)xlBaseColumnWidth;	// 0x34f1d25d
@end
