/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSDateFormatter;

@interface PDCAPropertyList : NSObject {
	NSMutableDictionary *plist;	// 4 = 0x4
	NSString *currentSequence;	// 8 = 0x8
	NSDateFormatter *dateFormatter;	// 12 = 0xc
}
@property(readonly, retain) NSMutableDictionary *plist;	// G=0x30d42089; converted property
- (id)init;	// 0x30d42029
- (id)initWithDictionary:(id)dictionary;	// 0x30d41e99
- (id)initWithPath:(id)path;	// 0x30d41fed
- (bool)addDeviceAttributes:(id)attributes;	// 0x30d42761
- (bool)addParametricTest:(id)test result:(bool)result value:(id)value failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest upperLimit:(id)limit lowerLimit:(id)limit8 priority:(int)priority units:(id)units;	// 0x30d42b75
- (bool)addPassFailTest:(id)test result:(bool)result failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest;	// 0x30d42a71
- (bool)addTestSequenceRun:(id)run softwareName:(id)name softwareVersion:(id)version startTime:(id)time stopTime:(id)time5 limitsVersion:(id)version6 deviceAttributes:(id)attributes;	// 0x30d421cd
- (bool)createTest:(id)test name:(id)name result:(bool)result failureMessage:(id)message subtest:(id)subtest subsubtest:(id)subsubtest;	// 0x30d42811
- (void)dealloc;	// 0x30d4203d
- (id)makeAlphanumericString:(id)string;	// 0x30d41e35
// converted property getter: - (id)plist;	// 0x30d42089
- (bool)setStartTime:(id)time;	// 0x30d420b5
- (bool)setStopTime:(id)time;	// 0x30d42141
- (bool)stringIsAlphanumeric:(id)alphanumeric;	// 0x30d41da1
- (bool)stringIsAlphanumericPeriod:(id)period;	// 0x30d41d11
- (bool)stringIsNumeric:(id)numeric;	// 0x30d41df9
@end

