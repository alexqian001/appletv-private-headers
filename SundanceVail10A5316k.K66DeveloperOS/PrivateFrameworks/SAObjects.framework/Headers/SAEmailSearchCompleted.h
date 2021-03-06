/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *emailResults;	// G=0x32f4bbc5; S=0x32f4bc41; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f4bca9; S=0x32f4bd49; 
+ (id)searchCompleted;	// 0x32f4ba3d
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f4ba81
+ (id)searchCompletedWithEmailResults:(id)emailResults;	// 0x32f4bacd
+ (id)searchCompletedWithResults:(id)results;	// 0x32f4bb15
- (id)initWithEmailResults:(id)emailResults;	// 0x32f4bb5d
- (id)initWithResults:(id)results;	// 0x32f4bb91
// declared property getter: - (id)emailResults;	// 0x32f4bbc5
- (id)encodedClassName;	// 0x32f4ba31
- (id)groupIdentifier;	// 0x32f4ba21
// declared property getter: - (id)results;	// 0x32f4bca9
// declared property setter: - (void)setEmailResults:(id)results;	// 0x32f4bc41
// declared property setter: - (void)setResults:(id)results;	// 0x32f4bd49
@end

