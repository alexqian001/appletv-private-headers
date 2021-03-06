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
@property(copy, nonatomic) NSArray *results;	// G=0x353bd55d; S=0x353bd5d9; 
+ (id)eventSearchCompleted;	// 0x353bd451
+ (id)eventSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353bd495
+ (id)eventSearchCompletedWithResults:(id)results;	// 0x353bd4e1
- (id)initWithResults:(id)results;	// 0x353bd529
- (id)encodedClassName;	// 0x353bd445
- (id)groupIdentifier;	// 0x353bd435
// declared property getter: - (id)results;	// 0x353bd55d
// declared property setter: - (void)setResults:(id)results;	// 0x353bd5d9
@end

