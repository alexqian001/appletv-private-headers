/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIDatePickerMode.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
	NSString *_originalFormat;	// 116 = 0x74
	NSArray *_components;	// 120 = 0x78
	NSArray *_sortedComponents;	// 124 = 0x7c
	int _displayedUnits;	// 128 = 0x80
	int _desiredUnits;	// 132 = 0x84
}
@property(readonly, retain) NSArray *components;	// G=0x3063ef35; converted property
- (id)initWithFormatString:(id)formatString datePickerView:(id)view;	// 0x3063ed51
- (id)_componentForCalendarUnit:(unsigned)calendarUnit;	// 0x3063f345
- (unsigned)calendarUnitForComponent:(int)component;	// 0x3063f295
- (int)componentForCalendarUnit:(unsigned)calendarUnit;	// 0x3063f2d1
// converted property getter: - (id)components;	// 0x3063ef35
- (id)dateForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x3063f96d
- (id)dateFormatForCalendarUnit:(unsigned)calendarUnit;	// 0x3063f639
- (void)dealloc;	// 0x3063eda5
- (int)displayedCalendarUnits;	// 0x3063f4f9
- (unsigned)extractableCalendarUnits;	// 0x3063f41d
- (unsigned)nextUnitLargerThanUnit:(unsigned)unit;	// 0x3063fa45
- (unsigned)nextUnitSmallerThanUnit:(unsigned)unit;	// 0x3063fa85
- (void)noteCalendarChanged;	// 0x3063ee1d
- (unsigned)numberOfComponents;	// 0x3063f5c5
- (int)numberOfRowsInComponent:(int)component;	// 0x3063f5ed
- (void)resetComponentWidths;	// 0x3063ee6d
- (int)titleAlignmentForCalendarUnit:(unsigned)calendarUnit;	// 0x3063f661
- (int)valueForRow:(int)row inCalendarUnit:(unsigned)calendarUnit;	// 0x3063f9d1
- (float)widthForCalendarUnit:(unsigned)calendarUnit font:(id)font maxWidth:(float)width;	// 0x3063f665
@end

