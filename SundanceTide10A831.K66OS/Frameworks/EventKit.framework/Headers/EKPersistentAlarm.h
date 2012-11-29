/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSDate, NSTimeZone, NSData, EKPersistentLocation;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x34f56b21; 
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x34f56bbd; S=0x34f56bd9; 
@property(copy, nonatomic) NSDate *acknowledgedDate;	// G=0x34f56ec1; S=0x34f56ea5; 
@property(assign, nonatomic) int alarmType;	// G=0x34f56d2d; S=0x34f56d49; 
@property(assign, nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;	// G=0x34f56edd; S=0x34f56efd; 
@property(copy, nonatomic) NSData *externalData;	// G=0x34f56d8d; S=0x34f56da9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x34f56dc5; S=0x34f56de1; 
@property(readonly, assign, nonatomic) BOOL isAbsolute;	// G=0x34f56c51; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x34f56e89; S=0x34f56e6d; 
@property(retain) id owner;	// G=0x34f56dfd; S=0x34f56e19; converted property
@property(assign, nonatomic) int proximity;	// G=0x34f56e51; S=0x34f56e35; 
@property(assign, nonatomic) double relativeOffset;	// G=0x34f56b3d; S=0x34f56b69; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x34f56c6d; S=0x34f56cd9; 
+ (id)defaultPropertiesToLoad;	// 0x34f56a15
+ (id)relations;	// 0x34f56941
- (id)init;	// 0x34f56aa9
// declared property getter: - (id)UUID;	// 0x34f56b21
// declared property getter: - (id)absoluteDate;	// 0x34f56bbd
// declared property getter: - (id)acknowledgedDate;	// 0x34f56ec1
// declared property getter: - (int)alarmType;	// 0x34f56d2d
- (id)copyWithZone:(NSZone *)zone;	// 0x34f56f19
- (id)description;	// 0x34f57059
- (int)entityType;	// 0x34f56b1d
// declared property getter: - (id)externalData;	// 0x34f56d8d
// declared property getter: - (id)externalID;	// 0x34f56dc5
// declared property getter: - (BOOL)isAbsolute;	// 0x34f56c51
// declared property getter: - (BOOL)isDefaultAlarm;	// 0x34f56edd
// declared property getter: - (id)location;	// 0x34f56e89
// converted property getter: - (id)owner;	// 0x34f56dfd
// declared property getter: - (int)proximity;	// 0x34f56e51
// declared property getter: - (double)relativeOffset;	// 0x34f56b3d
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x34f56bd9
// declared property setter: - (void)setAcknowledgedDate:(id)date;	// 0x34f56ea5
// declared property setter: - (void)setAlarmType:(int)type;	// 0x34f56d49
// declared property setter: - (void)setDefaultAlarm:(BOOL)alarm;	// 0x34f56efd
// declared property setter: - (void)setExternalData:(id)data;	// 0x34f56da9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x34f56de1
// declared property setter: - (void)setLocation:(id)location;	// 0x34f56e6d
// converted property setter: - (void)setOwner:(id)owner;	// 0x34f56e19
// declared property setter: - (void)setProximity:(int)proximity;	// 0x34f56e35
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x34f56b69
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x34f56cd9
// declared property getter: - (id)timeZone;	// 0x34f56c6d
- (BOOL)validate:(id *)validate;	// 0x34f57169
@end
