/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKRecurrenceHelper : NSObject {
@private
	NSString *_specifier;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	BOOL _parsed;	// 9 = 0x9
	NSArray *_daysOfTheWeek;	// 12 = 0xc
	NSArray *_daysOfTheMonth;	// 16 = 0x10
	NSArray *_daysOfTheYear;	// 20 = 0x14
	NSArray *_weeksOfTheYear;	// 24 = 0x18
	NSArray *_monthsOfTheYear;	// 28 = 0x1c
	NSArray *_setPositions;	// 32 = 0x20
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x31efba09; S=0x31efb9a1; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x31efb2c9; S=0x31efb261; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x31efbae9; S=0x31efba81; 
@property(readonly, assign, nonatomic) BOOL isDirty;	// G=0x31efd201; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x31efb849; S=0x31efb7e1; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x31efb74d; S=0x31efb6e5; 
@property(copy, nonatomic) NSString *specifier;	// G=0x31f50051; S=0x31f500ad; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x31efb929; S=0x31efb8c1; 
- (id)initWithSpecifier:(id)specifier;	// 0x31efb20d
- (void)_appendDaysOfTheWeek:(id)theWeek toSpecifier:(id)specifier;	// 0x31f50309
- (void)_appendIndexList:(id)list toSpecifier:(id)specifier propertyKey:(unsigned short)key;	// 0x31f50465
- (void)_clearArrays;	// 0x31efb601
- (id)_parseDaysOfWeek:(XXStruct_1STaIB *)week range:(XXStruct_K5nmsA)range;	// 0x31f50571
- (id)_parseIndexList:(XXStruct_1STaIB *)list range:(XXStruct_K5nmsA)range;	// 0x31f50879
- (void)_parseSpecifierIfNeeded;	// 0x31efb315
- (void)_updateSpecifier;	// 0x31f50141
// declared property getter: - (id)daysOfTheMonth;	// 0x31efba09
// declared property getter: - (id)daysOfTheWeek;	// 0x31efb2c9
// declared property getter: - (id)daysOfTheYear;	// 0x31efbae9
- (void)dealloc;	// 0x31f4fdf1
// declared property getter: - (BOOL)isDirty;	// 0x31efd201
- (BOOL)isEqual:(id)equal;	// 0x31f4ffa5
// declared property getter: - (id)monthsOfTheYear;	// 0x31efb849
- (void)revert;	// 0x31f4feb5
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x31efb9a1
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x31efb261
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x31efba81
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x31efb7e1
// declared property getter: - (id)setPositions;	// 0x31efb74d
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x31efb6e5
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x31f500ad
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x31efb8c1
// declared property getter: - (id)specifier;	// 0x31f50051
// declared property getter: - (id)weeksOfTheYear;	// 0x31efb929
@end
