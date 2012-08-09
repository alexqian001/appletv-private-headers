/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSDate, NSString, NSNumber, NSURL;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x34225155; S=0x34225171; 
@property(copy, nonatomic) NSString *incomingPhoneNumber;	// G=0x342251c1; S=0x342251dd; 
@property(copy, nonatomic) NSNumber *limit;	// G=0x3422522d; S=0x34225249; 
@property(assign, nonatomic) BOOL missed;	// G=0x34225299; S=0x34225311; 
@property(copy, nonatomic) NSString *outgoingPhoneNumber;	// G=0x34225355; S=0x34225371; 
@property(copy, nonatomic) NSDate *start;	// G=0x342253c1; S=0x342253dd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x34225079; S=0x342250f5; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3422542d; S=0x34225449; 
+ (id)search;	// 0x34224fe9
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3422502d
- (id)encodedClassName;	// 0x34224fdd
// declared property getter: - (id)end;	// 0x34225155
- (id)groupIdentifier;	// 0x34224fcd
// declared property getter: - (id)incomingPhoneNumber;	// 0x342251c1
// declared property getter: - (id)limit;	// 0x3422522d
// declared property getter: - (BOOL)missed;	// 0x34225299
// declared property getter: - (id)outgoingPhoneNumber;	// 0x34225355
- (BOOL)requiresResponse;	// 0x34225499
// declared property setter: - (void)setEnd:(id)end;	// 0x34225171
// declared property setter: - (void)setIncomingPhoneNumber:(id)number;	// 0x342251dd
// declared property setter: - (void)setLimit:(id)limit;	// 0x34225249
// declared property setter: - (void)setMissed:(BOOL)missed;	// 0x34225311
// declared property setter: - (void)setOutgoingPhoneNumber:(id)number;	// 0x34225371
// declared property setter: - (void)setStart:(id)start;	// 0x342253dd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x342250f5
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x34225449
// declared property getter: - (id)start;	// 0x342253c1
// declared property getter: - (id)targetAppId;	// 0x34225079
// declared property getter: - (id)timeZoneId;	// 0x3422542d
@end
