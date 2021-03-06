/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAClockSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x3251b71d; S=0x3251b799; 
+ (id)searchCompleted;	// 0x3251b611
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3251b655
+ (id)searchCompletedWithResults:(id)results;	// 0x3251b6a1
- (id)initWithResults:(id)results;	// 0x3251b6e9
- (id)encodedClassName;	// 0x3251b605
- (id)groupIdentifier;	// 0x3251b5f5
// declared property getter: - (id)results;	// 0x3251b71d
// declared property setter: - (void)setResults:(id)results;	// 0x3251b799
@end

