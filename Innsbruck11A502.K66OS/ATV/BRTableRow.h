/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRTableRow : BRControl {
	NSArray *_items;	// 84 = 0x54
	NSArray *_widthValues;	// 88 = 0x58
}
+ (id)tableRowWithItems:(id)items widthValues:(id)values;	// 0x33a2fd
- (id)initWithItems:(id)items widthValues:(id)values;	// 0x33a33d
- (void)dealloc;	// 0x33a3b5
- (void)layoutSubcontrols;	// 0x33a505
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33a419
@end
