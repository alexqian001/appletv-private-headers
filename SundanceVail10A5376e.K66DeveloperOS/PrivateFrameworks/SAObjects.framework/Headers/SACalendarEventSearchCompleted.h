/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x34224681; S=0x342246fd; 
+ (id)eventSearchCompleted;	// 0x34224575
+ (id)eventSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x342245b9
+ (id)eventSearchCompletedWithResults:(id)results;	// 0x34224605
- (id)initWithResults:(id)results;	// 0x3422464d
- (id)encodedClassName;	// 0x34224569
- (id)groupIdentifier;	// 0x34224559
// declared property getter: - (id)results;	// 0x34224681
// declared property setter: - (void)setResults:(id)results;	// 0x342246fd
@end

