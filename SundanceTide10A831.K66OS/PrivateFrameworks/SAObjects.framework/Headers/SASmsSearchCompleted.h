/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASmsSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x304d400d; S=0x304d40ad; 
+ (id)searchCompleted;	// 0x304d3f01
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304d3f45
+ (id)searchCompletedWithResults:(id)results;	// 0x304d3f91
- (id)initWithResults:(id)results;	// 0x304d3fd9
- (id)encodedClassName;	// 0x304d3ef5
- (id)groupIdentifier;	// 0x304d3ee5
// declared property getter: - (id)results;	// 0x304d400d
// declared property setter: - (void)setResults:(id)results;	// 0x304d40ad
@end
